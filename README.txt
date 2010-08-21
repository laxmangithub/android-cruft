This project contains files corresponding to a bunch of random hacks for
android, mostly dealing with porting C programs to run natively.

I sincerely hope that it'll inspire people to do this stuff properly, because
these are very raw hacks.  I sincerely hope this doesn't end up the canonical
place to go for these kinds of tasks, or at least not for long.

ncurses: A tarred-up copy of my build directory after getting ncurses-5.7 to
  compile for android.  See:
http://credentiality2.blogspot.com/2010/08/compile-ncurses-for-android.html

ndk: The agcc.pl script that constructs command lines for using the Android
  NDK arm-eabi-gcc compiler to build ordinary C programs.  See:
http://credentiality2.blogspot.com/2010/08/native-android-c-program-using-ndk.html

ndk-to-sl4a: How to get a C program (native binary or running on a host machine)
  to talk to the SL4A API on android (which lets you do things like talk 
  to the hardware and create simple GUI items).
http://credentiality2.blogspot.com/2010/08/giving-native-android-c-apps-access-to.html

nexus-one-serial-kernel: A 2.6.32 android kernel and boot.img with the
  /dev/ttyMSM0 serial port enabled.  See:
http://credentiality2.blogspot.com/2010/08/nexus-one-htc-passion-compile-and-flash.html

vim: The famous editor compiled to run natively on a rooted android.  Has
  a binary package, and also a tarred up copy of my build directory after
  I got it to compile.  See:
http://credentiality2.blogspot.com/2010/08/native-vim-for-android.html
