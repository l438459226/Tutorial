#!/bin/sh
echo    "******************************"
echo    "*     Make AArch64 Uboot     *"
echo    "******************************"

#make distclean
#make rk3399_box_defconfig

#make rk3399_defconfig
#make firefly-rk3399_defconfig



make ARCHV=aarch64 CROSS_COMPILE=/home/topeet/Desktop/prebuilts/gcc/linux-x86/aarch64/aarch64-linux-android-4.9/bin/aarch64-linux-android- --jobs=`sed -n "N;/processor/p" /proc/cpuinfo|wc -l`

