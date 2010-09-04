// Released into the public domain, 4 September 2010

#include "sl4a-rpc.h"

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <stdarg.h>
#include <stdlib.h>

// This mimics SL4A's android.py, constructing a JSON RPC object and 
// sending it to the SL4A server.
json_t* sl4a_rpc(int socket_fd, char *method, json_t *params) {
  static int request_id = 0; // monotonically increasing counter

  json_t *root = json_object();

  json_object_set(root, "id", json_integer(request_id));
  request_id++;

  json_object_set(root, "method", json_string(method));

  if (params == NULL) {
    params = json_array();
    json_array_append(params, json_null());
  }

  json_object_set(root, "params", params);

  char *command = json_dumps(root, JSON_PRESERVE_ORDER | JSON_ENSURE_ASCII);

  json_object_clear(root);

  printf("command string:'%s'\n", command);

  write(socket_fd, command, strlen(command));
  write(socket_fd, "\n", strlen("\n"));
  free(command);
  
  char *response = NULL;
  int response_len = 0;
  int response_alloc = 0;
  while(1) {
    response_alloc += 100;
    response = realloc(response, response_alloc);
    
    int result = read(socket_fd, response + response_len, 100);

    if (result == -1) {
      perror("reading response from SL4A server");
    } else {
      response_len += result;
    }

    if (response_len < 100) break;
  }

  printf("Parsing response: '%s'\n", response);
  json_error_t response_error;
  json_t* response_object = json_loads(response, &response_error);
  free(response);

  if (response_object == NULL) {
    printf("json decode error on line %d: '%s'\n",
           response_error.line,
           response_error.text);
  } else {
    json_t* error = json_object_get(response_object, "error");
    if (error != json_null()) {
      // SL4A didn't like our call
      // TODO: better error handling
    }

    json_t* response_id = json_object_get(response_object, "id");
    if (json_integer_value(response_id) != request_id) {
      // weird, got back a mismatched response
      // TODO: better error handling
    }
  }

  return response_object;
}

// A slightly higher-level call that works like printf in having format
// strings that indicate type and number of arguments.
//
// This:
//  int is_connected = 0;
//  char* a = "something";
//  char* b = "something else";
//  sl4a_rpc_method(fd, "bluetoothConnect", 'b', (void*) &is_connected,
//                  "ss", a, b);
// Means:
//  call the "bluetoothConnect" method, which returns a bool,
//  storing the return value in is_connected.
//
//  the "ss" string indicates that "bluetoothConnect" takes two string
//  arguments, which then follow (a and b)
void sl4a_rpc_method(int socket_fd, 
                     char* method, 
                     char return_type, 
                     void *return_value,
                     char* arg_types,
                     ...) {
  va_list args;
  va_start(args, arg_types);

  json_t *params = json_array();

  while (*arg_types) {
    if (*arg_types == 's') {
      // string (null-terminated char*)
      char* arg = va_arg(args, char*);
      json_array_append(params, json_string(arg));

    } else if (*arg_types == 'i') {
      // integer
      int arg = va_arg(args, int);
      json_array_append(params, json_integer(arg));

    } else if (*arg_types == 'b') {
      // bool (int, nonzero=true)
      int arg = va_arg(args, int);
      if (arg) {
        json_array_append(params, json_true());
      } else {
        json_array_append(params, json_false());
      }

    } else if (*arg_types == 'r') {
      // real (double)
      double arg = va_arg(args, double);
      json_array_append(params, json_real(arg));

    } else if (*arg_types == 'o' || *arg_types == 'a') {
      // object or array
      // actually, at the moment, you could append any type of json_t object
      // TODO: type checking to make sure they gave us what they said they
      // would, and error handling to report it
      json_t* arg = va_arg(args, double);
      json_array_append(params, arg);

    } else {
      // error
      printf("Unknown type '%c' in arg_types parameter to sl4a_rpc_method\n",
             *arg_types);
      return;
    }
    
    arg_types++;
  }
  va_end(args);
  
  json_t* response_object = sl4a_rpc(socket_fd, method, params);
  json_t* result = json_object_get(response_object, "result");

  json_array_clear(params);
  json_decref(params);

  if (return_type == 's') {
    *((const char**) return_value) = json_string_value(result);

  } else if (return_type == 'i') {
    *((int*) return_value) = json_integer_value(result);

  } else if (return_type == 'b') {
    if (result == json_true()) {
      *((int*) return_value) = 1;
    } else {
      *((int*) return_value) = 0;
    }

  } else if (return_type == 'r') {
    *((double*) return_value) = json_real_value(result);

  } else if (return_type == 'v') {
    // void

  } else if (return_type == 'o' || return_type == 'a') {
    // json array or object
    // just return the json_t object

    *((json_t**) return_value) = result;

    // TODO: I think this is necessary to prevent a memory leak
    json_object_clear(response_object);

    return;

  } else {
    // error
    printf("Unknown return type '%c' in call to sl4a_rpc_method\n",
           return_type);
  }

  json_object_clear(response_object);
  // if return_type was o or a, we already returned, and thus didn't deallocate
  // result
  json_decref(result);
}


// This function is just boilerplate TCP socket setup code.  It returns an fd
// for a socket connected to the requested host and port.
int sl4a_init_socket(char *hostname, int port) {
  int socket_fd = socket(AF_INET, SOCK_STREAM, 0);
  if (socket_fd == -1) {
    perror("Error creating socket");
    return 0;
  }

  struct hostent *host = gethostbyname(hostname);
  if (host == NULL) {
    perror("No such host");
    return -1;
  }

  struct sockaddr_in socket_address;

  int i;
  for (i=0; i < sizeof(socket_address); i++) {
    ((char *) &socket_address)[i] = 0;
  }

  socket_address.sin_family = AF_INET;

  for (i=0; i < host->h_length; i++) {
    ((char *) &socket_address.sin_addr.s_addr)[i] = ((char *) host->h_addr)[i];
  }

  socket_address.sin_port = htons(port);

  if (connect(socket_fd, (struct sockaddr *) &socket_address, sizeof(socket_address)) < 0) {
    perror("connect() failed");
    return -1;
  }

  return socket_fd; 
}


