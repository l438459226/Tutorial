鼅~|鼃痧鼃x痧x饇痧帏疣瘌帏8囵鄕r鄕痧疣€疣噜瘌瘌DR Version 1.08 20170320
In
Channel 0: DDR3, 800MHz
Bus Width=32 Col=10 Bank=8 Row=15 CS=1 Die Bus-Width=16 Size=1024MB
Channel 1: DDR3, 800MHz
Bus Width=32 Col=10 Bank=8 Row=15 CS=1 Die Bus-Width=16 Size=1024MB
256B stride
ch 0 ddrconfig = 0x101, ddrsize = 0x20
ch 1 ddrconfig = 0x101, ddrsize = 0x20
pmugrf_os_reg[2] = 0x32817281, stride = 0x9
OUT
Boot1: 2017-03-07, version: 1.06
CPUId = 0x0
ChipType = 0x10, 1832
SdmmcInit=2 0
BootCapSize=100000
UserCapSize=14910MB
FwPartOffset=2000 , 100000
SdmmcInit=0 20
StorageInit ok = 65901
LoadTrustBL
No find bl30.bin
No find bl32.bin
RunBL31 0x10000
NOTICE:  BL31: v1.3(debug):55aa0b4
NOTICE:  BL31: Built : 16:55:03, Mar 31 2017
INFO:    GICv3 with legacy support detected. ARM GICV3 driver initialized in EL3
INFO:    boot cpu mask: 0
INFO:    plat_rockchip_pmu_init(1089): pd status 3e
INFO:    BL31: Initializing runtime services
INFO:    BL31: Preparing for EL3 exit to normal world
INFO:    Entry point address = 0x200000
INFO:    SPSR = 0x3c9

rk serial
initcall: 000000000024d350


U-Boot 2017.02-RK3399-06 (Dec 10 2018 - 10:43:00)

initcall: 00000000002168a4
U-Boot code: 00200000 -> 00280760  BSS: -> 002FF5C8
initcall: 0000000000201f1c
CPU: rk3399
cpu version = 0
CPU's clock information:
    aplll = 816000000HZ
    apllb = 24000000HZ
    gpll = 800000000HZ
               aclk_periph_h = 133333333HZ, hclk_periph_h = 66666666HZ, pclk_periph_h = 33333333HZ
               aclk_periph_l0 = 100000000HZ, hclk_periph_l0 = 100000000HZ, pclk_periph_l0 = 50000000HZ
               hclk_periph_l1 = 100000000HZ, pclk_periph_l1 = 50000000HZ
    cpll = 800000000HZ
    dpll = 792000000HZ
    vpll = 24000000HZ
    npll = 24000000HZ
    ppll = 676000000HZ
initcall: 0000000000216d84
Board:  Rockchip platform Board
Uboot as second level loader
initcall: 0000000000216964
DRAM:  initcall: 0000000000203b70

DDR End Address: 0x80000000
initcall: 0000000000216ad8
Monitor len: 000FF5C8
Ram size: 08000000
Ram top: 08000000
initcall: 00000000002165e4
initcall: 0000000000216848
TLB table from 07ff0000 to 08000000
initcall: 000000000021680c
LCD base at ddr end, fb base = 7dc00000, size = 01000000
initcall: 0000000000216768
Reserving 4096k for rk global buffer at 07bf0000
Reserving 32768k for rk boot buffer at 05bf0000
Using rk boot buffer as Fastboot transfer buffer.
Reserving 2048k for fastboot log buffer at 059f0000
initcall: 00000000002165f8
initcall: 0000000000216718
Reserving 1021k for U-Boot at: 058f0000
initcall: 00000000002166e0
Reserving 2049k for malloc() at: 056efc00
initcall: 00000000002169dc
Reserving 296 Bytes for Board Info at: 056efad8
initcall: 0000000000216600
initcall: 00000000002166a4
Reserving 432 Bytes for Global Data at: 056ef928
initcall: 000000000021663c
initcall: 0000000000216b50
initcall: 0000000000216ab8
Found dram banks: 1
Adding bank:0000000000200000(000000007fe00000)
initcall: 0000000000216a30

RAM Configuration:
Bank #0: 00000000 128 MiB

DRAM:  128 MiB
initcall: 0000000000216618
New Stack Pointer is: 056ef910
initcall: 0000000000216930
initcall: 00000000002168d8
Relocation Offset is: 056f0000
Relocating to 058f0000, new gd at 056ef928, sp at 056ef910
initcall: 0000000005906bd8
initcall: 0000000005906d28
initcall: 0000000000216d10 (relocated to 0000000005906d10)
start = 0x00000000, end = 0x08000000
start = 0x00000000, end = 0x20000000
initcall: 0000000000216be0 (relocated to 0000000005906be0)
initcall: 0000000000216c04 (relocated to 0000000005906c04)
initcall: 0000000000216ce4 (relocated to 0000000005906ce4)
using memory 0x56efc00-0x58f0000 for malloc()
initcall: 0000000000216bd0 (relocated to 0000000005906bd0)
initcall: 00000000002125e8 (relocated to 00000000059025e8)
initcall: 0000000000224998 (relocated to 0000000005914998)
initcall: 0000000000216ccc (relocated to 0000000005906ccc)
initcall: 0000000000216ca8 (relocated to 0000000005906ca8)
Now running in RAM - U-Boot at: 058f0000
initcall: 0000000000212638 (relocated to 0000000005902638)
arch_early_init_r
rk irq version: 1.2, initialized.
gpio_irq_init, default enable gpio group interrupt.
initcall: 0000000000216c0c (relocated to 0000000005906c0c)
initcall: 0000000000240d2c (relocated to 0000000005930d2c)
i2c_reg_read: addr=0x36, reg=0x2f
i2c_reg_write: addr=0x36, reg=0x01, val=0x01
i2c_reg_write: addr=0x36, reg=0x10, val=0x01
i2c_reg_read: addr=0x36, reg=0x10
BL_REG_DEVEICE_ON = 0x1
i2c_reg_write: addr=0x36, reg=0x11, val=0x01
i2c_reg_read: addr=0x36, reg=0x11

BL:REG_MODE:0x1i2c_reg_read: addr=0x36, reg=0x13
i2c_reg_write: addr=0x36, reg=0x13, val=0x7f
i2c_reg_read: addr=0x36, reg=0x13
REG_13 = 0x7f
i2c_reg_write: addr=0x36, reg=0x10, val=0x03
i2c_reg_write: addr=0x36, reg=0x10, val=0x07
i2c_reg_write: addr=0x36, reg=0x10, val=0x0f
i2c_reg_read: addr=0x36, reg=0x11
 BL:REG_MODE:0x1
 bl ma = 20

 bl value = 665
i2c_reg_write: addr=0x36, reg=0x18, val=0x05
i2c_reg_write: addr=0x36, reg=0x19, val=0xcc
i2c_reg_read: addr=0x36, reg=0x11
 BL:REG_MODE:0x1
i2c_reg_read: addr=0x36, reg=0x11
 BL:REG_MODE:0x1
i2c_reg_read: addr=0x36, reg=0x11
BL_REG_MODE = 0x1
i2c_reg_read: addr=0x36, reg=0x10
BL_REG_DEVEICE_ON = 0xf
i2c_reg_read: addr=0x36, reg=0x19
REG_19 = 0xcc
i2c_reg_read: addr=0x36, reg=0x18
REG_18 = 0x5
i2c_reg_read: addr=0x36, reg=0x1f
REG_ERR = 0x11
i2c_reg_write: addr=0x36, reg=0x11, val=0x01
initcall: 0000000000216c90 (relocated to 0000000005906c90)
rk save sdcard iomux config.
grf gpio4b iomux = 0x0000055a
Force select jtag from sdcard io.
GetMmcCLK: sd 0, clk = 400000
SCUSelSDClk: sd id = 0, div = 8
GetMmcCLK: sd 0, clk = 400000
GetMmcCLK: sd 0, clk = 400000
SCUSelSDClk: sd id = 0, div = 62
GetMmcCLK: sd 0, clk = 400000
GetMmcCLK: sd 0, clk = 400000
SCUSelSDClk: sd id = 0, div = 62
GetMmcCLK: sd 0, clk = 400000
GetMmcCLK: sd 0, clk = 400000
SCUSelSDClk: sd id = 0, div = 62
GetMmcCLK: sd 0, clk = 400000
SdmmcInit = 0 20
rk restore sdcard iomux config.
grf gpio4b iomux = 0x0000055a
Total block = 0x01d1f000, FwPartOffset = 0x00000040
storage init OK!
initcall: 0000000000216c54 (relocated to 0000000005906c54)
Using default environment

Destroy Hash Table: 0000000005968048 table = 0000000000000000
Create Hash Table: N=76
INSERT: table 0000000005968048, filled 1/79 rv 00000000056efd00 ==> name="bootcmd" value="bootrk"
INSERT: table 0000000005968048, filled 2/79 rv 00000000056f0020 ==> name="bootdelay" value="10"
INSERT: table 0000000005968048, filled 3/79 rv 00000000056efda0 ==> name="baudrate" value="1500000"
DELETE CANDIDATE: "preboot"
hdelete: DELETE key "preboot"
DELETE ERROR ##############################
INSERT: table 0000000005968048, filled 4/79 rv 00000000056eff80 ==> name="verify" value="n"
INSERT: table 0000000005968048, filled 5/79 rv 00000000056efd28 ==> name="initrd_high" value="0xffffffffffffffff=n"
INSERT: free(data = 00000000056efc10)
INSERT: done
INSERT: table 0000000005968048, filled 5/79 rv 00000000056efda0 ==> name="baudrate" value="1500000"
INSERT: table 0000000005968048, filled 5/79 rv 00000000056efd00 ==> name="bootcmd" value="bootrk"
INSERT: table 0000000005968048, filled 5/79 rv 00000000056f0020 ==> name="bootdelay" value="10"
INSERT: table 0000000005968048, filled 6/79 rv 00000000056f01d8 ==> name="fastboot_unlocked" value="0"
INSERT: table 0000000005968048, filled 6/79 rv 00000000056efd28 ==> name="initrd_high" value="0xffffffffffffffff=n"
INSERT: table 0000000005968048, filled 6/79 rv 00000000056eff80 ==> name="verify" value="n"
INSERT: free(data = 00000000056f0a50)
INSERT: done
initcall: 0000000000216d54 (relocated to 0000000005906d54)
initcall: 00000000002249b4 (relocated to 00000000059149b4)
initcall: 0000000000216c3c (relocated to 0000000005906c3c)
initcall: 0000000000221de8 (relocated to 0000000005911de8)
initcall: 000000000020398c (relocated to 00000000058f398c)
rk irq has been initialized.
initcall: 0000000000216c24 (relocated to 0000000005906c24)
initcall: 0000000000212660 (relocated to 0000000005902660)
board_late_init
getenv: bootdelay = 16
Initial value for argc=3
Final value for argc=3
setenv: bootdelay = 10
getenv: bootcmd = bootrk
getenv: initrd_high = 0xffffffffffffffff=n
board init saveenv.
EXPORT  table = 0000000005968048, htab.size = 79, htab.filled = 6, size = 508
Unsorted: n=6
          0: 00000000056efd00 ==> bootcmd    => bootrk
          1: 00000000056efd28 ==> initrd_high => 0xffffffffffffffff=n
          2: 00000000056efda0 ==> baudrate   => 1500000
          3: 00000000056eff80 ==> verify     => n
          4: 00000000056f0020 ==> bootdelay  => 10
          5: 00000000056f01d8 ==> fastboot_unlocked => 0
Writing env to storage... 
done
GetParam
rk crc32 check: crc_check = 0xabed30b1, crc_calc = 0xabed30b1
check parameter success
Unknow param: MACHINE_MODEL: rk3399-box!
Unknow param: MACHINE_ID: 007!
Unknow param: MANUFACTURER: RK3399!
Unknow param: PWR_HLD: 0,0,A,0,1!
partition(uboot): offset=0x00002000, size=0x00002000
partition(trust): offset=0x00004000, size=0x00002000
partition(misc): offset=0x00006000, size=0x00002000
partition(resource): offset=0x00008000, size=0x00008000
partition(kernel): offset=0x00010000, size=0x0000C000
partition(boot): offset=0x0001C000, size=0x00010000
partition(recovery): offset=0x0002C000, size=0x00010000
partition(backup): offset=0x0003C000, size=0x00038000
partition(cache): offset=0x00074000, size=0x00040000
partition(system): offset=0x000B4000, size=0x00300000
partition(metadata): offset=0x003B4000, size=0x00008000
partition(baseparamer): offset=0x003BC000, size=0x00002000
partition(userdata): offset=0x003BE000, size=0xFFFFFFFF
rkimage_prepare_fdt
Failed to prepare fdt from boot!
get_content: base_offset = 0x8000
get_entry: base_offset = 0x8000
load_content: load_addr = 0x00000000056f1440
Load FDT from resource image.
key_init
fdtdec_decode_gpio: gpios
fdtdec_decode_gpios: gpios
power key: bank-0 pin-5
pmic_init
can't find dts node for ricoh619
can't find dts node for act8846
i2c address = 0x1b
i2c iobase = 0xff3c0000
i2c bus = 0
i2c_reg_read: addr=0x1b, reg=0x2f
fdtdec_get_int: regulator-min-microvolt: 0xb71b0 (750000)
fdtdec_get_int: regulator-max-microvolt: 0x149970 (1350000)
fdtdec_get_int: regulator-init-microvolt: (not found)
DCDC_REG1--vdd_center
min_uV:750000
max_uV:1350000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0xb71b0 (750000)
fdtdec_get_int: regulator-max-microvolt: 0x149970 (1350000)
fdtdec_get_int: regulator-init-microvolt: (not found)
DCDC_REG2--vdd_cpu_l
min_uV:750000
max_uV:1350000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: (not found)
fdtdec_get_int: regulator-max-microvolt: (not found)
fdtdec_get_int: regulator-init-microvolt: (not found)
DCDC_REG3--vcc_ddr
min_uV:0
max_uV:0
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-max-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-init-microvolt: (not found)
DCDC_REG4--vcc_1v8
min_uV:1800000
max_uV:1800000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-max-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG1--vcc1v8_dvp
min_uV:1800000
max_uV:1800000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x2ab980 (2800000)
fdtdec_get_int: regulator-max-microvolt: 0x2ab980 (2800000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG2--vcc2v8_dvp
min_uV:2800000
max_uV:2800000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-max-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG3--vcc1v8_pmu
min_uV:1800000
max_uV:1800000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-max-microvolt: 0x325aa0 (3300000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG4--vcc_sd
min_uV:1800000
max_uV:3300000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x2dc6c0 (3000000)
fdtdec_get_int: regulator-max-microvolt: 0x2dc6c0 (3000000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG5--vcca3v0_codec
min_uV:3000000
max_uV:3000000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x16e360 (1500000)
fdtdec_get_int: regulator-max-microvolt: 0x16e360 (1500000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG6--vcc_1v5
min_uV:1500000
max_uV:1500000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-max-microvolt: 0x1b7740 (1800000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG7--vcca1v8_codec
min_uV:1800000
max_uV:1800000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: 0x2dc6c0 (3000000)
fdtdec_get_int: regulator-max-microvolt: 0x2dc6c0 (3000000)
fdtdec_get_int: regulator-init-microvolt: (not found)
LDO_REG8--vcc_3v0
min_uV:3000000
max_uV:3000000
boot_on:1

fdtdec_get_int: regulator-min-microvolt: (not found)
fdtdec_get_int: regulator-max-microvolt: (not found)
fdtdec_get_int: regulator-init-microvolt: (not found)
SWITCH_REG1--vcc3v3_s3
min_uV:0
max_uV:0
boot_on:1

fdtdec_get_int: regulator-min-microvolt: (not found)
fdtdec_get_int: regulator-max-microvolt: (not found)
fdtdec_get_int: regulator-init-microvolt: (not found)
SWITCH_REG2--vcc3v3_s0
min_uV:0
max_uV:0
boot_on:1

i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_write: addr=0x1b, reg=0x23, val=0x2f
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 0 dcdc_en = 0000002f ldo_en =000000ac
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_write: addr=0x1b, reg=0x23, val=0x2f
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 1 dcdc_en = 0000002f ldo_en =000000ac
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_write: addr=0x1b, reg=0x23, val=0x2f
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 2 dcdc_en = 0000002f ldo_en =000000ac
i2c_reg_read: addr=0x1b, reg=0x38
i2c_reg_write: addr=0x1b, reg=0x38, val=0x00
i2c_reg_read: addr=0x1b, reg=0x38
1 rk808_regulator_set_voltage 3 dcdc_vol = 00000000
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_write: addr=0x1b, reg=0x23, val=0x2f
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 3 dcdc_en = 0000002f ldo_en =000000ac
i2c_reg_read: addr=0x1b, reg=0x3b
i2c_reg_write: addr=0x1b, reg=0x3b, val=0x00
i2c_reg_read: addr=0x1b, reg=0x3b
1 rk808_regulator_set_voltage 4 0 ldo_vol =00000000
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xad
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 4 dcdc_en = 0000002f ldo_en =000000ad
i2c_reg_read: addr=0x1b, reg=0x3d
i2c_reg_write: addr=0x1b, reg=0x3d, val=0x0a
i2c_reg_read: addr=0x1b, reg=0x3d
1 rk808_regulator_set_voltage 5 10 ldo_vol =0000000a
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xaf
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 5 dcdc_en = 0000002f ldo_en =000000af
i2c_reg_read: addr=0x1b, reg=0x3f
i2c_reg_write: addr=0x1b, reg=0x3f, val=0x0a
i2c_reg_read: addr=0x1b, reg=0x3f
1 rk808_regulator_set_voltage 6 10 ldo_vol =0000000a
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xaf
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 6 dcdc_en = 0000002f ldo_en =000000af
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xaf
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 7 dcdc_en = 0000002f ldo_en =000000af
i2c_reg_read: addr=0x1b, reg=0x43
i2c_reg_write: addr=0x1b, reg=0x43, val=0x0c
i2c_reg_read: addr=0x1b, reg=0x43
1 rk808_regulator_set_voltage 8 12 ldo_vol =0000000c
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xbf
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 8 dcdc_en = 0000002f ldo_en =000000bf
i2c_reg_read: addr=0x1b, reg=0x45
i2c_reg_write: addr=0x1b, reg=0x45, val=0x07
i2c_reg_read: addr=0x1b, reg=0x45
1 rk808_regulator_set_voltage 9 7 ldo_vol =00000007
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xbf
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 9 dcdc_en = 0000002f ldo_en =000000bf
i2c_reg_read: addr=0x1b, reg=0x47
i2c_reg_write: addr=0x1b, reg=0x47, val=0x0a
i2c_reg_read: addr=0x1b, reg=0x47
1 rk808_regulator_set_voltage 10 10 ldo_vol =0000000a
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xff
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 10 dcdc_en = 0000002f ldo_en =000000ff
i2c_reg_read: addr=0x1b, reg=0x49
i2c_reg_write: addr=0x1b, reg=0x49, val=0x0c
i2c_reg_read: addr=0x1b, reg=0x49
1 rk808_regulator_set_voltage 11 12 ldo_vol =0000000c
i2c_reg_read: addr=0x1b, reg=0x24
i2c_reg_write: addr=0x1b, reg=0x24, val=0xff
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 11 dcdc_en = 0000002f ldo_en =000000ff
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_write: addr=0x1b, reg=0x23, val=0x2f
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 12 dcdc_en = 0000002f ldo_en =000000ff
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_write: addr=0x1b, reg=0x23, val=0x6f
i2c_reg_read: addr=0x1b, reg=0x23
i2c_reg_read: addr=0x1b, reg=0x24
1 rk808_regulator_enable 13 dcdc_en = 0000006f ldo_en =000000ff
fdtdec_decode_gpios: gpios
fdtdec_decode_gpios: property 'gpios' missing
pmic_alloc: new pmic struct: 0x0000000005703a50
rk808 i2c_bus:0 addr:0x1b
usb bc init: usb bc max = 11
usb bc: can find node by path: /dwc-control-usb/usb_bc
usb_battery_charger_detect_inno: Charger type Stander Downstream Port, wait DCD, dcd_state = 0
no fuel gauge found
charger_init, charger_type = 1, dc_is_charging= 0
pmic_rk808_charger_setting charger_type = 3
i2c_reg_read: addr=0x6b, reg=0x0a
pmic_rk808_charger_setting charge ic id = 0xff
i2c_reg_read: addr=0x6b, reg=0x00
i2c_reg_write: addr=0x6b, reg=0x00, val=0xff
pmic:rk808
pwm_regulator_init
can't find dts node for pwm1
fdtdec_get_int_array: pwms
get_prop_check_min_len: pwms
fdtdec_get_int_array: rockchip,pwm_voltage_map
get_prop_check_min_len: rockchip,pwm_voltage_map
Cannot decode PWM property pwms
fdtdec_get_int: rockchip,pwm_id: 0x2 (2)
pwm init id = 2
fdtdec_get_int: rockchip,pwm_voltage: 0xf4240 (1000000)
fdtdec_get_int: regulator-min-microvolt: 0xc3500 (800000)
fdtdec_get_int: regulator-max-microvolt: 0x10c8e0 (1100000)
fdtdec_get_int: regulator-init-microvolt: (not found)
pwm_dcdc1--vdd_log
min_uV:800000
max_uV:1100000
boot_on:1

pwm config id = 2, clock = 48285714, duty_ns = 16500, period_ns = 25000
set pwm voltage ok,pwm_id =2 vol=1000000,pwm_value=66
CPU's clock information:
    aplll = 816000000HZ
    apllb = 24000000HZ
    gpll = 800000000HZ
               aclk_periph_h = 133333333HZ, hclk_periph_h = 66666666HZ, pclk_periph_h = 33333333HZ
               aclk_periph_l0 = 100000000HZ, hclk_periph_l0 = 100000000HZ, pclk_periph_l0 = 50000000HZ
               hclk_periph_l1 = 100000000HZ, pclk_periph_l1 = 50000000HZ
    cpll = 800000000HZ
    dpll = 792000000HZ
    vpll = 24000000HZ
    npll = 24000000HZ
    ppll = 676000000HZ
fg_init
Can't find dts node for fuel guage cw201x
can't find dts node for ec-battery
charger init
Can't find dts node for charger bq25700
idb init
SecureBootEn = 0, SecureBootLock = 0

#Boot ver: 2017-08-29#1.06
empty serial no.
fbt preboot
normal boot.
checkKey
vbus = 1
no fuel gauge found
no fuel gauge found
$$$$$$$$$$$$$$$$$$$$$$1 gd->fdt_blob:91165760
$$$$$$$$$^^^^^^^^^1 gd->fdt_blob:91165760
$$$$$$$$$^^^^^^^^^2 gd->fdt_blob:91165760
***********rockchip_display_init
***********************rockchip_get_crtc:rockchip,rk3399-vop-bigfdtdec_get_int: reg: 0x0 (0)
failed to find phy node
**************connector_panel_init
connector_panel_init-219:enter
******************rockchip_get_panel:simple-panel-dsi
***********connector_pclist_parse_dt
connector_pclist_parse_dt-123:enter
fdtdec_get_int: rockchip,debug: 0x0 (0)
fdtdec_get_int: rockchip,power_type: (not found)
fdtdec_decode_gpio: gpios
fdtdec_decode_gpios: gpios
fdtdec_get_int: rockchip,delay: 0xa (10)
fdtdec_get_int: rockchip,power_type: (not found)
fdtdec_decode_gpio: gpios
fdtdec_decode_gpios: gpios
fdtdec_get_int: rockchip,delay: 0x6 (6)
**************rockchip_panel_init
*************rockchip_dsi_panel_init
fdtdec_decode_gpio: enable-gpios
fdtdec_decode_gpios: enable-gpios
fdtdec_decode_gpios: property 'enable-gpios' missing
fdtdec_decode_gpio: reset-gpios
fdtdec_decode_gpios: reset-gpios
fdtdec_decode_gpios: property 'reset-gpios' missing
fdtdec_get_int: reset-delay-ms: (not found)
fdtdec_get_int: delay,prepare: 0x6 (6)
fdtdec_get_int: delay,unprepare: 0x0 (0)
fdtdec_get_int: delay,enable: 0x23 (35)
fdtdec_get_int: delay,disable: 0x14 (20)
fdtdec_get_int: bus-format: 0x1009 (4105)
****rockchip_dsi_panel_parse_cmds::dcs_cmd=39 96 4 b9 len=22, cmd_cnt=4
****rockchip_dsi_panel_parse_cmds::dcs_cmd=5 5 1 28 len=8, cmd_cnt=2
gpio = 0xffffffff is not valid!
gpio = 0xffffffff is not valid!
rk pwm parse dt start.
fdtdec_decode_gpio: enable-gpios
fdtdec_decode_gpios: enable-gpios
fdtdec_decode_gpios: property 'enable-gpios' missing
fdtdec_get_int_array_count: pwms
fdtdec_get_int_array: pwms
get_prop_check_min_len: pwms
bl id = 1, base= 0xff420010
fdtdec_get_int_array: brightness-levels
get_prop_check_min_len: brightness-levels
fdtdec_get_int: default-brightness-level: 0xc8 (200)
rk pwm parse dt end.
gpio = 0xffffffff is not valid!
gpio = 0xffffffff is not valid!
rk_pwm_bl_config: brightness: 0
$$$$$$$$$$$$$$$$$$$$$$6 rockchip_display_init:5915af0:0
$$$$$$$$$$$$$$$$$$$$$$5 rockchip_display_init:5915af0:1
read logo on state from dts [1]
no fuel gauge found
Failed to find part: 'logo'
get_content: base_offset = 0x0
get_entry: base_offset = 0x8000
Failed to find part: 'logo'
get_content: base_offset = 0x0
get_entry: base_offset = 0x8000
fdtdec_get_addr_size: reg: ff960000
fdtdec_get_int: dsi,lanes: 0x4 (4)
fdtdec_get_int: dsi,format: 0x0 (0)
fdtdec_get_int: dsi,flags: 0x3 (3)
fdtdec_get_int: reg: 0x0 (0)
fdtdec_get_int: hactive: 0x438 (1080)
fdtdec_get_int: vactive: 0x924 (2340)
fdtdec_get_int: clock-frequency: 0x88601c0 (143000000)
fdtdec_get_int: hsync-len: 0x8 (8)
fdtdec_get_int: hfront-porch: 0x18 (24)
fdtdec_get_int: hback-porch: 0x36 (54)
fdtdec_get_int: vsync-len: 0x2e (46)
fdtdec_get_int: vfront-porch: 0x8 (8)
fdtdec_get_int: vback-porch: 0x7 (7)
fdtdec_get_int: hsync-active: 0x0 (0)
fdtdec_get_int: vsync-active: 0x0 (0)
Using display timing dts
Detailed mode clock 143000 kHz, flags[a]
    H: 1080 1104 1112 1166
    V: 2340 2348 2394 2401
bus_format: 1009
****************rockchip_vop_init
fdtdec_get_addr_size: reg: ff900000
vop reg :0xff900000,0x57047b0,0x5954dc0,0x0,0x5954bc8,0x305
rk lcdc aclk config: aclk = 400000000HZ, pll select = 2, div = 2
rk lcdc hclk config: hclk = 100000000HZ, div = 4
rkclk_pll_set_any_freq, pll_id[3], freq=143000000
fin=24, fout=143000000, gcd=6, refdiv=4, fbdiv=143, postdiv1=1, postdiv2=6, frac=0
****************rkclk_lcdc_dclk_set rk lcdc - 0 dclk set: dclk = 143000000HZ, pll select = 1, div = 1
***************rkclk_lcdc_clk_set
Vop Write : 0x20801800  , 0xff900000 , 0xff900008
Vop Write : 0x1  , 0xff900000 , 0xff9000b0
Vop Write : 0x1  , 0xff900000 , 0xff900100
Vop Write : 0x0  , 0xff900000 , 0xff900010
Warning: not support pin_pol
vop reg :0xff900000,0x57047b0,0x5954dc0,0x0,0x5954bc8,0x305
Vop Write : 0x20809800  , 0xff900000 , 0xff900008
Vop Write : 0x8000e400  , 0xff900000 , 0xff900014
Vop Write : 0x8000e40e  , 0xff900000 , 0xff900014
Vop Write : 0x0  , 0xff900000 , 0xff900010
Vop Write : 0x48e0008  , 0xff900000 , 0xff900188
Vop Write : 0x3e0476  , 0xff900000 , 0xff90018c
Vop Write : 0x3e0476  , 0xff900000 , 0xff900170
Vop Write : 0x961002e  , 0xff900000 , 0xff900190
Vop Write : 0x350959  , 0xff900000 , 0xff900194
Vop Write : 0x350959  , 0xff900000 , 0xff900174
Vop Write : 0x20c09800  , 0xff900000 , 0xff900008
Vop Write : 0x956  , 0xff900000 , 0xff9002a0
Vop Write : 0x1  , 0xff900000 , 0xff900000
Vop Write : 0x3a400040  , 0xff900000 , 0xff900030
Vop Write : 0x3a400042  , 0xff900000 , 0xff900030
Vop Write : 0x140032a  , 0xff900000 , 0xff90003c
Vop Write : 0x7e30abce  , 0xff900000 , 0xff900040
md.w 0xff900040 64
==========================================fb addr: 0x7e30abce  0x7dc00000
Vop Write : 0x3a400082  , 0xff900000 , 0xff900030
Vop Write : 0x10001000  , 0xff900000 , 0xff900054
Vop Write : 0x10001000  , 0xff900000 , 0xff900054
Vop Write : 0x0  , 0xff900000 , 0xff900034
Vop Write : 0x0  , 0xff900000 , 0xff900034
Vop Write : 0x0  , 0xff900000 , 0xff900034
Vop Write : 0x0  , 0xff900000 , 0xff900034
Vop Write : 0x0  , 0xff900000 , 0xff900034
Vop Write : 0x0  , 0xff900000 , 0xff900034
Vop Write : 0x400000  , 0xff900000 , 0xff900034
Vop Write : 0x8e70437  , 0xff900000 , 0xff900048
Vop Write : 0x8e70437  , 0xff900000 , 0xff90004c
Vop Write : 0x53003e  , 0xff900000 , 0xff900050
Vop Write : 0x3a401082  , 0xff900000 , 0xff900030
Vop Write : 0x0  , 0xff900000 , 0xff900060
Vop Write : 0x3a401083  , 0xff900000 , 0xff900030
Vop Write : 0x1  , 0xff900000 , 0xff900000
rockchip_phy_power_on: failed to find phy power on funcs
failed to wait for phy clk lane stop state
*************rockchip_dsi_panel_send_cmds
mipi_dsi:len:0x4 0x439
**mipi_dsi:tx_buf:0xbd029639 
mipi DSI Read DSI_GEN_HDR:0x1237
mipi DSI Read: 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1 0x1
mipi DSI Read DSI_GEN_HDR:0x1237
mipi DSI Read: 0xf0f5faff 0xd9e2e7eb 0xc5cacfd4 0xb2b7bcc1 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad
mipi DSI Read DSI_GEN_HDR:0x1237
mipi DSI Read: 0xf0f5faff 0xd9e2e7eb 0xc5cacfd4 0xb2b7bcc1 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad 0xa8ad
Vop Write : 0x20809800  , 0xff900000 , 0xff900008
Vop Write : 0x1  , 0xff900000 , 0xff900000
gpio = 0xffffffff is not valid!
rk_pwm_bl_config: brightness: 200
Failed to find part: 'logo'
get_content: base_offset = 0x0
get_entry: base_offset = 0x8000
ERROR: [get_entry_ram]: Cannot find logo_kernel.bmp!
failed to display kernel logo
initcall: 0000000000216c14 (relocated to 0000000005906c14)
hello world
### main_loop entered: bootdelay=10

### main_loop: bootcmd="bootrk"
Hit any key to stop autoboot:  0 
rkboot # 
rkboot # 