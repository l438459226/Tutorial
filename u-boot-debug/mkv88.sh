#!/bin/sh
echo    "******************************"
echo    "*     Make AArch64 Uboot     *"
echo    "*     Make RK3399 Uboot     *"
echo    "******************************"
make ARCHV=aarch64 --jobs=`sed -n "N;/processor/p" /proc/cpuinfo|wc -l`

