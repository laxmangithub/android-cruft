# =============================
# Compile a binary to run on the host computer and access the SL4A
# server over the network
#CC=gcc
#AR=ar
#LIBS=-ljansson
#SUFFIX=host

# =============================
# If you compile a native android binary instead, you can adb push
# it to a rooted phone and run it on the phone.  Comment out the
# CC and LIBS lines above, and uncomment out the lines below

# Set JANSSON to the directory with include/ and lib/ subdirectories
# containing header and library files for arm:
JANSSON=../../../dl/jansson-1.3/arm-eabi

# agcc.pl is a wrapper around the Android NDK toolchain that lets it
# behave like a normal GCC cross-compiler.  Make sure it's in your path,
# along with arm-eabi-gcc.
CC=agcc.pl
AR=arm-eabi-ar
CFLAGS=-I$(JANSSON)/include
LIBS=-ljansson -L$(JANSSON)/lib
SUFFIX=arm

all: sl4a-example libsl4a.a

libsl4a.a: sl4a-rpc.o sl4a-wrapper.o
	$(AR) rcs libsl4a.a sl4a-wrapper.o sl4a-rpc.o

sl4a-example: sl4a-example.c libsl4a.a
	$(CC) $(CFLAGS) -o sl4a-example-$(SUFFIX) sl4a-example.c -L. -lsl4a $(LIBS)

sl4a-rpc.o: sl4a-rpc.c sl4a-rpc.h
	$(CC) $(CFLAGS) -c sl4a-rpc.c

sl4a-wrapper.o: sl4a-wrapper.c sl4a-wrapper.h
	$(CC) $(CFLAGS) -c sl4a-wrapper.c

sl4a-rpc.c: api-calls.txt
	./generate-api.pl api-calls.txt
