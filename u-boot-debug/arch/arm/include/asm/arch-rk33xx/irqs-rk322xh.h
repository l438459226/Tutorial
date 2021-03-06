/*
 * (C) Copyright 2016 Fuzhou Rockchip Electronics Co., Ltd
 * William Zhang, SoftWare Engineering, <william.zhang@rock-chips.com>.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __RK322XH_IRQS_H
#define __RK322XH_IRQS_H


#define FIQ_START                       0

#define RKXX_IRQ(x)                     (x + 32)

#define IRQ_DMAC_BUS                    RKXX_IRQ(0)
#define IRQ_DMAC_ABORT                  RKXX_IRQ(1)
#define IRQ_DFI_ALERT_ERR               RKXX_IRQ(2)
#define IRQ_UPCTL_AWPOISON              RKXX_IRQ(3)
#define IRQ_SDMMC_EXT                   RKXX_IRQ(4)
#define IRQ_VOP_DDR                     RKXX_IRQ(5)
#define IRQ_SDMMC_EXT_DECTN_IN          RKXX_IRQ(6)
#define IRQ_RKVDEC_M_DEC                RKXX_IRQ(7)
#define IRQ_UPCTL_ARPOISON              RKXX_IRQ(8)
#define IRQ_VPU_XINTDEC                 RKXX_IRQ(9)
#define IRQ_SDMMC_EXT_DETECTN           RKXX_IRQ(10)
#define IRQ_VPU_MMU                     RKXX_IRQ(11)
#define IRQ_SDMMC                       RKXX_IRQ(12)
#define IRQ_SDIO                        RKXX_IRQ(13)
#define IRQ_EMMC                        RKXX_IRQ(14)
#define IRQ_OTP_NS                      RKXX_IRQ(15)
#define IRQ_USB_HOST0_EHCI              RKXX_IRQ(16)
#define IRQ_USB_HOST0_OHCI              RKXX_IRQ(17)
#define IRQ_USB_HOST0_ARB               RKXX_IRQ(18)
#define IRQ_OTP_S               	RKXX_IRQ(19)
#define IRQ_DDRMON                      RKXX_IRQ(20)
#define IRQ_GMAC2PHY                    RKXX_IRQ(21)
#define IRQ_GMAC2PHY_PMT                RKXX_IRQ(22)
#define IRQ_USB_OTG                     RKXX_IRQ(23)
#define IRQ_GMAC2IO                     RKXX_IRQ(24)
#define IRQ_GMAC2IO_PMT                 RKXX_IRQ(25)
#define IRQ_I2S0_8CH                    RKXX_IRQ(26)
#define IRQ_I2S1_8CH                    RKXX_IRQ(27)
#define IRQ_I2S2_2CH                    RKXX_IRQ(28)
#define IRQ_SPDIF_8CH                   RKXX_IRQ(29)
#define IRQ_CRYPTO                      RKXX_IRQ(30)
#define IRQ_IEP                         RKXX_IRQ(31)
#define IRQ_VOP                         RKXX_IRQ(32)
#define IRQ_RGA                         RKXX_IRQ(33)
#define IRQ_HDCP                        RKXX_IRQ(34)
#define IRQ_HDMI                        RKXX_IRQ(35)
#define IRQ_RKI2C0                      RKXX_IRQ(36)
#define IRQ_RKI2C1                      RKXX_IRQ(37)
#define IRQ_RKI2C2                      RKXX_IRQ(38)
#define IRQ_RKI2C3                      RKXX_IRQ(39)
#define IRQ_WDT                         RKXX_IRQ(40)
#define IRQ_SECURE_TIMER_2CH_0          RKXX_IRQ(41)
#define IRQ_SECURE_TIMER_2CH_1          RKXX_IRQ(42)
#define IRQ_TIMER0_6CH_0                RKXX_IRQ(43)
#define IRQ_TIMER0_6CH_1                RKXX_IRQ(44)
#define IRQ_TIMER0_6CH_2                RKXX_IRQ(45)
#define IRQ_TIMER0_6CH_3                RKXX_IRQ(46)
#define IRQ_TIMER0_6CH_4                RKXX_IRQ(47)
#define IRQ_TIMER0_6CH_5                RKXX_IRQ(48)
#define IRQ_SPI0                        RKXX_IRQ(49)
#define IRQ_RK_PWM                      RKXX_IRQ(50)
#define IRQ_GPIO0                       RKXX_IRQ(51)
#define IRQ_GPIO1                       RKXX_IRQ(52)
#define IRQ_GPIO2                       RKXX_IRQ(53)
#define IRQ_GPIO3                       RKXX_IRQ(54)
#define IRQ_UART0                       RKXX_IRQ(55)
#define IRQ_UART1                       RKXX_IRQ(56)
#define IRQ_UART2                       RKXX_IRQ(57)
#define IRQ_TSADC                       RKXX_IRQ(58)
#define IRQ_USBPHY_OTG_BVALID           RKXX_IRQ(59)
#define IRQ_USBPHY_OTG_ID               RKXX_IRQ(60)
#define IRQ_USBPHY_OTG_LINESTAT         RKXX_IRQ(61)
#define IRQ_USBPHY_HOST_LINESTAT        RKXX_IRQ(62)
#define IRQ_SDMMC_DETECTN               RKXX_IRQ(63)
#define IRQ_CIF                         RKXX_IRQ(64)
#define IRQ_SDMMC_DECTN_IN_FLT          RKXX_IRQ(65)
#define IRQ_USB3_OTG_HOST_LEGACY_SMI    RKXX_IRQ(66)
#define IRQ_USB3OTG                     RKXX_IRQ(67)
#define IRQ_USB3OTG_HOST_SYS_ERR        RKXX_IRQ(68)
#define IRQ_USB3OTG_PME_GENERATION      RKXX_IRQ(69)
#define IRQ_MACPHY                      RKXX_IRQ(70)
#define IRQ_HDMI_INTR_WAKEUP            RKXX_IRQ(71)
#define IRQ_TSP                         RKXX_IRQ(72)
#define IRQ_SIM                         RKXX_IRQ(73)
#define IRQ_RKVDEC_M_MMU                RKXX_IRQ(74)
#define IRQ_USB3_PHY_BVALID             RKXX_IRQ(75)
#define IRQ_USB3PHY_ID                  RKXX_IRQ(76)
#define IRQ_USB3PHY_LINESTATE           RKXX_IRQ(77)
#define IRQ_USB3PHY_RXDET               RKXX_IRQ(78)
#define IRQ_EFUSE                       RKXX_IRQ(79)
#define IRQ_SARADC                      RKXX_IRQ(80)
#define IRQ_TSP_MMU                     RKXX_IRQ(81)
#define IRQ_PDM                         RKXX_IRQ(82)
#define IRQ_HDMIPHY                     RKXX_IRQ(83)
#define IRQ_DCF_DONE                    RKXX_IRQ(84)
#define IRQ_DCF_ERROR                   RKXX_IRQ(85)
#define IRQ_PMU                         RKXX_IRQ(86)
#define IRQ_GPU_GPMMU                   RKXX_IRQ(87)
#define IRQ_GPU_PP0                     RKXX_IRQ(88)
#define IRQ_GPU_PPMMU0                  RKXX_IRQ(89)
#define IRQ_GPU_GP                      RKXX_IRQ(90)
#define IRQ_GPU_PP1                     RKXX_IRQ(91)
#define IRQ_GPU_PPMMU1                  RKXX_IRQ(92)
#define IRQ_GPU_PP                      RKXX_IRQ(93)
#define IRQ_GPU_PMU                     RKXX_IRQ(94)
#define IRQ_RKVENC_H265                 RKXX_IRQ(95)
#define IRQ_RKVENC_H265_MMU             RKXX_IRQ(96)
#define IRQ_RKVENC_H264_ENC             RKXX_IRQ(97)
#define IRQ_RKVENC_H264_MMU             RKXX_IRQ(98)


#define NR_GIC_IRQS                     (4 * 32)
#define NR_GPIO_IRQS                    (4 * 32)
#define NR_IRQS                         (NR_GIC_IRQS + NR_GPIO_IRQS)

#endif /* __RK322XH_IRQS_H */
