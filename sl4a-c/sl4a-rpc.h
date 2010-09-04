#ifndef SL4A_RPC
#define SL4A_RPC

#include <jansson.h>

// sl4a_rpc provides a generic way of making RPC calls to the SL4A server.
//
// sl4a_wrapper provides a higher level abstraction, declaring 
// (automatically generated) functions for each and every 
// one of the known SL4A rpc methods.
//
// So sl4a_wrapper is probably where you want to start, but using
// sl4a_rpc directly isn't hard:
//
//main(int argc, char **argv) {
//  int port = 0;
//  if (argc != 2) {
//    printf("Usage: %s port\n", argv[0]);
//    return 1;
//  }
//  port = atoi(argv[1]);
//
//  int socket_fd = init_socket("localhost", port);
//  if (socket_fd < 0) return 2;
// 
//  // Odd, this only seems to need to be called once after the SL4A
//  // server starts:
//  sl4a_rpc_method(socket_fd, "_authenticate", 'v', "s", "");
//
//  sl4a_rpc_method(socket_fd, "makeToast", 'v', NULL, "s", "w00t!");
//
//  int number_of_contacts;
//  sl4a_rpc_method(socket_fd, "contactsGetCount", 'i', &number_of_contacts, "");
//  printf("You have %d contacts.\n", number_of_contacts);
//}

int sl4a_init_socket(char *hostname, int port);

void sl4a_rpc_method(int socket_fd, 
                     char* method, 
                     char return_type, 
                     void *return_value,
                     char* arg_types,
                     ...);


json_t* sl4a_rpc(int socket_fd, char *method, json_t *params);

#endif
