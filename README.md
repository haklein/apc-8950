# APC Uboot and Kernel


## u-boot (u-boot.bin)

     export PATH=$PATH:$arm-toolchain/bin:$uboot/tools
     cd $arm-toolchain/mybin
     . ./aliasmybingcc.sh
     cd $uboot
     make wmt_config
     make all

## compressed u-boot (zuboot.bin)

     export PATH=$PATH:$arm-toolchain/bin:$uboot/tools
     cd $arm-toolchain/mybin
     . ./aliasmybingcc.sh
     cd $uboot
     make wmt_config
     make zuboot
     
## Kernel

     export PATH=$PATH:$arm-toolchain/mybin
     cd $arm-toolchain/mybin
     . ./aliasmybingcc.sh
     cd $kernel
     make Android_defconfig
     make ubin CROSS_COMPILE=arm_1103_le-
