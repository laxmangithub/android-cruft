sl4a-c is a C-language interface to the SL4A (scripting languages for android)
android API.

At a low level, it connects to the SL4A server and sends it JSON objects 
representing API calls.  This is exactly how the other supported SL4A
languages interface with the android OS.  

As with the other languages, the low-level interface doesn't know what
methods are available or how to call them; you have to look it up on
the SL4A API page:
http://code.google.com/p/android-scripting/wiki/ApiReference

If you call a method incorrectly, you won't know it until you try to
make the call and the SL4A server sends back an error.

But sl4a-c also has a listing of all the available SL4A calls in
api-listing.txt, with a shorthand notation for return and argument types.
generate-api.pl reads that file and generates sl4a-wrapper.c and .h.

Using the high level sl4a-wrapper, you can see all the functions available
and get compile-time errors if you attempt to misuse them.
