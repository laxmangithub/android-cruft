Here are the files that go with this blog post:
http://credentiality2.blogspot.com/2010/08/nexus-one-htc-passion-compile-and-flash.html

Note that the camera on my nexus one didn't work while using this kernel.

zImage:
  A 2.6.32 kernel built for android with the /dev/ttyMSM0 serial port enabled.

bcm4329.ko:
  The corresponding wireless driver for the zImage, goes in /system/lib/modules.

boot.img:
  A boot.img made from the above kernel and stock cyanogen CM6-rc3 ramdisk,
  using this command line:
./mkbootimg --kernel zImage-serial-second-pass --ramdisk boot.img-ramdisk.gz -o my-boot.img  --cmdline 'no_console_suspend=1 msmsdcc_sdioirq=1 wire.search_count=5' --base 0x20000000 


