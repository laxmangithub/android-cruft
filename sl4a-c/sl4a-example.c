// Released into the public domain, 4 September 2010

// This file shows how to use the SL4A (scripting languages for android)
// RPC server from a C program running on either a host PC or the phone
// itself.

#include "sl4a-rpc.h"
#include "sl4a-wrapper.h"

#include <stdio.h>
#include <stdlib.h>

main(int argc, char **argv) {
  int port = 0;
  if (argc != 2) {
    printf("Usage: %s port\n", argv[0]);
    return 1;
  }
  port = atoi(argv[1]);

  // Open up a connection to the sl4a server
  int socket_fd = sl4a_init_socket("localhost", port);
  if (socket_fd < 0) return 2;
 
  // Odd, this needs to be called only once, after the SL4A server starts:
  sl4a_rpc_method(socket_fd, "_authenticate", 'v', "s", "");

  // Here's the high level way to call SL4A rpc:
  //
  // Look up the function you want:
  //   http://code.google.com/p/android-scripting/wiki/ApiReference
  //
  // For example, "notify" displays a notification that will be
  // canceled when the user clicks on it.
  //
  // Find the corresponding call in sl4a-wrapper.h and call it!
  sl4a_notify(socket_fd, "window title", "notification text");

  // Here's the low-level way to call SL4A rpc.  If you don't get the
  // types right, the sl4a server will send back an error, and if you
  // don't pass as many arguments as you say you will in the format
  // string, your program will probably crash.
  // 
  // Look up the function you want to call:
  //   http://code.google.com/p/android-scripting/wiki/ApiReference
  //
  // Specify the method name, return type, return value pointer,
  // argument types, and arguments.  The possible types are:
  //   i: int
  //   b: boolean (just an int)
  //   r: real (double)
  //   s: string (char *)
  //   v: void
  //   o: json object (start with libjansson's json_obect())
  //   a: json array (start with libjansson's json_array())
  //
  // So in this case, we specify that notify returns nothing ('v'),
  // and takes two strings ("ss"):
  sl4a_rpc_method(socket_fd, "notify", 'v', NULL,
      "ss", "another title", "another notification");

  int number_of_contacts;

  // Another example of a low-level call:
  sl4a_rpc_method(socket_fd, "contactsGetCount", 'i', &number_of_contacts, "");

  // Corresponding high level call:
  number_of_contacts = sl4a_contactsGetCount(socket_fd);

  printf("You have %d contacts.\n", number_of_contacts);
}
