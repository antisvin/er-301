/**
 *
 * \file   include/am335x/chipdb_defs.h
 *
 * \brief  This file contains the defines corresponding to the ChipDB APIs.
 *
 *   WARNING: THIS IS AN AUTOGENERATED FILE. DO NOT MODIFY !!!
 *
 * \version 0.0 (Sep 2013) : [AE] First version
 *
 */

/*
 * Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
 */
/*
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#ifndef CHIPDB_INTDEFS_H_
#define CHIPDB_INTDEFS_H_

#ifdef __cplusplus
extern "C" {
#endif /* ifdef __cplusplus */


/* ========================================================================== */
/*                         Structures and Enums                               */
/* ========================================================================== */

/**
 *
 * \brief Module ID. These ID's uniquely identify a module.
 *
 */
typedef enum
{
    CHIPDB_MOD_ID_MPU_CORE = 0U,
    CHIPDB_MOD_ID_DSP = 1U,
    CHIPDB_MOD_ID_IVA = 2U,
    CHIPDB_MOD_ID_IPU_CORE = 3U,
    CHIPDB_MOD_ID_EVE = 4U,
    CHIPDB_MOD_ID_GPU = 5U,
    CHIPDB_MOD_ID_L3 = 6U,
    CHIPDB_MOD_ID_DDR = 7U,
    CHIPDB_MOD_ID_MPU = 8U,
    CHIPDB_MOD_ID_IPU = 9U,
    CHIPDB_MOD_ID_BB2D = 10U,
    CHIPDB_MOD_ID_ATL = 11U,
    CHIPDB_MOD_ID_VCP = 12U,
    CHIPDB_MOD_ID_PRUSS = 13U,
    CHIPDB_MOD_ID_VIP = 14U,
    CHIPDB_MOD_ID_VIP_VINA = 15U,
    CHIPDB_MOD_ID_VIP_VINB = 16U,
    CHIPDB_MOD_ID_VPE = 17U,
    CHIPDB_MOD_ID_DSS = 18U,
    CHIPDB_MOD_ID_DSS_VIDEO = 19U,
    CHIPDB_MOD_ID_DSS_HDMI = 20U,
    CHIPDB_MOD_ID_OCMC_RAM = 21U,
    CHIPDB_MOD_ID_EMIF = 22U,
    CHIPDB_MOD_ID_GPMC = 23U,
    CHIPDB_MOD_ID_DMM = 24U,
    CHIPDB_MOD_ID_SYSTEM_DMA = 25U,
    CHIPDB_MOD_ID_CRYPTO_DMA = 26U,
    CHIPDB_MOD_ID_EDMA = 27U,
    CHIPDB_MOD_ID_DCAN = 28U,
    CHIPDB_MOD_ID_GMAC_SW = 29U,
    CHIPDB_MOD_ID_GMAC_SW_PORT = 30U,
    CHIPDB_MOD_ID_GMAC_SW_SWITCH = 31U,
    CHIPDB_MOD_ID_GPIO = 32U,
    CHIPDB_MOD_ID_I2C = 33U,
    CHIPDB_MOD_ID_MCASP = 34U,
    CHIPDB_MOD_ID_PCIE = 35U,
    CHIPDB_MOD_ID_USB = 36U,
    CHIPDB_MOD_ID_SATA = 37U,
    CHIPDB_MOD_ID_MMC = 38U,
    CHIPDB_MOD_ID_MLB = 39U,
    CHIPDB_MOD_ID_MCSPI = 40U,
    CHIPDB_MOD_ID_QSPI = 41U,
    CHIPDB_MOD_ID_UART = 42U,
    CHIPDB_MOD_ID_PWMSS = 43U,
    CHIPDB_MOD_ID_RTC_SS = 44U,
    CHIPDB_MOD_ID_TIMER = 45U,
    CHIPDB_MOD_ID_COUNTER_32K = 46U,
    CHIPDB_MOD_ID_WD_TIMER = 47U,
    CHIPDB_MOD_ID_SPINLOCK = 48U,
    CHIPDB_MOD_ID_HDQ1W = 49U,
    CHIPDB_MOD_ID_KDB = 50U,
    CHIPDB_MOD_ID_DES3DES = 51U,
    CHIPDB_MOD_ID_SHAMD5 = 52U,
    CHIPDB_MOD_ID_AES = 53U,
    CHIPDB_MOD_ID_RNG = 54U,
    CHIPDB_MOD_ID_FPKA = 55U,
    CHIPDB_MOD_ID_PKA = 56U,
    CHIPDB_MOD_ID_MPU_SCU = 57U,
    CHIPDB_MOD_ID_CRYPTODMA = 58U,
    CHIPDB_MOD_ID_DES = 59U,
    CHIPDB_MOD_ID_SHA = 60U,
    CHIPDB_MOD_ID_ADC1 = 61U,
    CHIPDB_MOD_ID_GFX = 62U,
    CHIPDB_MOD_ID_EDMA3CC = 63U,
    CHIPDB_MOD_ID_EDMA3TC = 64U,
    CHIPDB_MOD_ID_OTFA = 65U,
    CHIPDB_MOD_ID_TPMSS = 66U,
    CHIPDB_MOD_ID_VPFE = 67U,
    CHIPDB_MOD_ID_CPSW = 68U,
    CHIPDB_MOD_ID_USIM = 69U,
    CHIPDB_MOD_ID_ADC0 = 70U,
    CHIPDB_MOD_ID_MMCSD = 71U,
    CHIPDB_MOD_ID_DMTIMER = 72U,
    CHIPDB_MOD_ID_DMTIMER1_1MS = 73U,
    CHIPDB_MOD_ID_WDT = 74U,
    CHIPDB_MOD_ID_L3F_CFG = 75U,
    CHIPDB_MOD_ID_L3S_CFG = 76U,
    CHIPDB_MOD_ID_MAILBOX = 77U,
    CHIPDB_MOD_ID_OCP_WP_NOC = 78U,
    CHIPDB_MOD_ID_PRCM = 79U,
    CHIPDB_MOD_ID_SMARTREFLEX = 80U,
    CHIPDB_MOD_ID_RTCSS = 81U,
    CHIPDB_MOD_ID_PRU_ICSS = 82U,
    CHIPDB_MOD_ID_CONTROL_MODULE = 83U,
    CHIPDB_MOD_ID_DEBUGSS = 84U,
    CHIPDB_MOD_ID_OCMCRAM = 85U,
    CHIPDB_MOD_ID_RTC = 86U,
    CHIPDB_MOD_ID_SYNCTIMER = 87U,
    CHIPDB_MOD_ID_ERMC = 88U,
    CHIPDB_MOD_ID_ELM = 89U,
    CHIPDB_MOD_ID_EMIF_FW = 90U,
    CHIPDB_MOD_ID_GPMC_FW = 91U,
    CHIPDB_MOD_ID_OCMCRAM_FW = 92U,
    CHIPDB_MOD_ID_GFX_FW = 93U,
    CHIPDB_MOD_ID_MMCSD2_FW = 94U,
    CHIPDB_MOD_ID_MCASP0_FW = 95U,
    CHIPDB_MOD_ID_MCASP1_FW = 96U,
    CHIPDB_MOD_ID_EDMA3TC_FW = 97U,
    CHIPDB_MOD_ID_QSPI_FW = 98U,
    CHIPDB_MOD_ID_PRU_ICSS_FW = 99U,
    CHIPDB_MOD_ID_EDMA3CC_FW = 100U,
    CHIPDB_MOD_ID_DEBUGSS_FW = 101U,
    CHIPDB_MOD_ID_AES_FW = 102U,
    CHIPDB_MOD_ID_DES_FW = 103U,
    CHIPDB_MOD_ID_SHA_FW = 104U,
    CHIPDB_MOD_ID_ADC0_FW = 105U,
    CHIPDB_MOD_ID_ADC1_FW = 106U,
    CHIPDB_MOD_ID_MPU_L2_CACHE_FW = 107U,
    CHIPDB_MOD_ID_MPU_CMU = 108U,
    CHIPDB_MOD_ID_MPU_AXI2OCP = 109U,
    CHIPDB_MOD_ID_P1500 = 110U,
    CHIPDB_MOD_ID_WKUP_PROC = 111U,
    CHIPDB_MOD_ID_WKUP_PROC_UMEM = 112U,
    CHIPDB_MOD_ID_WKUP_PROC_DMEM = 113U,
    CHIPDB_MOD_ID_WKUP_PROC_BIT_BAND_REG = 114U,
    CHIPDB_MOD_ID_WKUP_PROC_NVIC = 115U,
    CHIPDB_MOD_ID_WKUP_PROC_ROM_TAB = 116U,
    CHIPDB_MOD_ID_MPU_ROM_SECURE = 117U,
    CHIPDB_MOD_ID_MPU_ROM_PUBLIC = 118U,
    CHIPDB_MOD_ID_MPU_SRAM = 119U,
    CHIPDB_MOD_ID_MPU_L2_CACHE = 120U,
    CHIPDB_MOD_ID_MPU_INTC = 121U,
    CHIPDB_MOD_ID_MPU_SS_CFG = 122U,
    CHIPDB_MOD_ID_MPU_PL310 = 123U,
    CHIPDB_MOD_ID_MPU_SCM = 124U,
    CHIPDB_MOD_ID_MPU_WAKEUP_GEN = 125U,
    CHIPDB_MOD_ID_LCDC = 126U,
    CHIPDB_MOD_ID_ICSS_DATARAM0 = 127U,
    CHIPDB_MOD_ID_ICSS_DATARAM1 = 128U,
    CHIPDB_MOD_ID_ICSS_SHAREDRAM = 129U,
    CHIPDB_MOD_ID_ICSS_IEP_REG = 130U,
    CHIPDB_MOD_ID_ICSS_MDIO = 131U,
    CHIPDB_MOD_ID_ICSS_INTC_REG = 132U,
    CHIPDB_MOD_ID_ICSS_PRU0_CTL_REG = 133U,
    CHIPDB_MOD_ID_ICSS_PRU1_CTL_REG = 134U,
    CHIPDB_MOD_ID_ICSS_PRU0_DBG_REG = 135U,
    CHIPDB_MOD_ID_ICSS_PRU1_DBG_REG = 136U,
    CHIPDB_MOD_ID_ICSS_CFG_REG = 137U,
    CHIPDB_MOD_ID_ICSS_UART_REG = 138U,
    CHIPDB_MOD_ID_ICSS_ECAP_REG = 139U,
    CHIPDB_MOD_ID_ICSS_MIIRT_REG = 140U,
    CHIPDB_MOD_ID_GLUE = 141U,
    CHIPDB_MOD_ID_OSC = 142U,
    CHIPDB_MOD_ID_ADC = 143U,
    CHIPDB_MOD_ID_COUNT = 144U,
    CHIPDB_MOD_ID_INVALID = UINT32_MAX
} chipdbModuleID_t;

/**
 *
 * \brief Device Packaging variations.
 * TBD: Update for AM43xx
 *
 */
typedef enum
{
    CHIPDB_PT_MIN     = 0x1,
    /**< Indicates the minimum supported value in this enum */
    CHIPDB_PT_23x23   = CHIPDB_PT_MIN,
    /**< Device packaging is 23x23 */
    CHIPDB_PT_17x17   = 0x2,
    /**< Device packaging is 17x17 */
    CHIPDB_PT_MAX     = CHIPDB_PT_17x17,
    /**< Indicates the maximum supported value in this enum */
    CHIPDB_PT_INVALID = UINT32_MAX
    /**< Invalid device packaging or packaging not known */
} chipdbPackageType_t;


/**
 *
 * \brief Device Revisions.
 * TBD: Update for AM43xx
 *
 */
typedef enum
{
    CHIPDB_DR_MIN     = 0x1,
    /**< Indicates the minimum supported value in this enum */
    CHIPDB_DR_ES1     = CHIPDB_DR_MIN,
    /**< Device revision ES1 */
    CHIPDB_DR_ES2     = 0x2,
    /**< Device revision ES2 */
    CHIPDB_DR_MAX     = CHIPDB_DR_ES2,
    /**< Indicates the maximum supported value in this enum */
    CHIPDB_DR_INVALID = UINT32_MAX
    /**< Invalid device revision or revision not known */
} chipdbDeviceRevision_t;


/**
 *
 * \brief Device Security Levels
 *
 */
typedef enum
{
    CHIPDB_SL_MIN     = 0x0,
    /**< Indicates the minimum supported value in this enum */
    CHIPDB_SL_TEST    = CHIPDB_SL_MIN,
    /**< Test Device */
    CHIPDB_SL_EMU     = 0x1,
    /**< Emulation Device */
    CHIPDB_SL_HS      = 0x2,
    /**< High Security Device */
    CHIPDB_SL_GP      = 0x3,
    /**< General Purpose Device */
    CHIPDB_SL_MAX     = CHIPDB_SL_GP,
    /**< Indicates the maximum supported value in this enum */
    CHIPDB_SL_INVALID = UINT32_MAX
    /**< Invalid security level or security level not known */
} chipdbSecurityLevel_t;


/* --------------------------------------------------------------------------
 * Interrupt Signal listings for all the IPs. One of these would be passed as
 * an argument  to the ChipDBInterruptNum function.
 * --------------------------------------------------------------------------
 */

/**
 *
 * \brief List of all the USB interrupt signals
 *
 */
typedef enum
{
    CHIPDB_INTSIG_USB_MIN = 0x0,
    /**< Indicates the minimum supported value in this enum */
    CHIPDB_INTSIG_USB_MAIN0_INT = CHIPDB_INTSIG_USB_MIN,
     /**< USB instance 0 main interrupt*/
    CHIPDB_INTSIG_USB_MAIN1_INT,
     /**< USB instance 1 main interrupt*/
    CHIPDB_INTSIG_USB_MISC_INT,
     /**< USB sub system wrapper interrupt*/
    CHIPDB_INTSIG_USB_WAKEUP,
     /**< USB Wrapper A8 wakeup interrup line */
    CHIPDB_INTSIG_USB_COUNT,
     /**< total number of USB interrupts in SOC*/
    CHIPDB_INTSIG_USB_INVALID = UINT32_MAX
     /**< No Such interrupt exists in AM335x*/
} chipdbInterruptSignalUSB_t;


#ifdef  __cplusplus
}
#endif /* ifdef  __cplusplus */

#endif /* ifndef CHIPDB_DEFS_H_ */
