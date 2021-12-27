/*
 *---------------------------------------------------------------------------
 *
 * Copyright (c) 2020 Analog Devices, Inc. All Rights Reserved.
 * This software is proprietary to Analog Devices, Inc.
 * and its licensors.By using this software you agree to the terms of the
 * associated Analog Devices Software License Agreement.
 *
 *---------------------------------------------------------------------------
 */

/** @addtogroup phy PHY Definitions
 *  @{
 */

#ifndef ADI_PHY_H
#define ADI_PHY_H

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "ADIN1100_addr_rdef.h"

#include "adi_eth_common.h"
#include "hal.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*! Size of the PHY device structure, in bytes. Needs to be a multiple of 4. */
#define ADI_PHY_DEVICE_SIZE             (44)

/*! Hardware reset value of MMD1_DEV_ID1 register, used for device identification. */
#define ADI_PHY_DEVID1                  (0x0283)
/*! Hardware reset value of MMD1_DEV_ID2 register (OUI field), used for device identification. */
#define ADI_PHY_DEVID2_OUI              (0x2F)

/*!
 * @brief PHY driver states
 */
typedef enum
{
    ADI_PHY_STATE_UNINITIALIZED = 0,        /*!< Software driver has not been initialized.                        */
    ADI_PHY_STATE_HW_RESET,                 /*!< PHY has been through hardware reset and needs to be initialized. */
    ADI_PHY_STATE_SOFTWARE_POWERDOWN,       /*!< PHY is in software powerdown.                                    */
    ADI_PHY_STATE_OPERATION,                /*!< PHY is in operation mode.                                        */
    ADI_PHY_STATE_DIAGNOSTIC,               /*!< PHY is in diagnostic mode.                                       */
    ADI_PHY_STATE_ERROR,                    /*!< Error state.                                                     */
} adi_phy_State_e;

/*!
 * @brief Advertised transmit operating mode.
 */
typedef enum
{
    ADI_PHY_AN_ADV_TX_REQ_1P0V = 0,         /*!< Request 1.0V transmit signal amplitude.                        */
    ADI_PHY_AN_ADV_TX_REQ_2P4V,             /*!< Request 2.4V transmit signal amplitude.                        */
    ADI_PHY_AN_ADV_TX_REQ_1P0V_ABLE_2P4V,   /*!< Request 1.0V transmit signal amplitude but able to do 2.4V.    */
} adi_phy_AnAdvTxMode_e;

/*!
 * @brief Resolved transmit operating mode.
 */
typedef enum
{
    ADI_PHY_AN_TX_LEVEL_1P0V = 0,         /*!< Resolved 1.0V transmit signal amplitude.                        */
    ADI_PHY_AN_TX_LEVEL_2P4V,             /*!< Resolved 2.4V transmit signal amplitude.                        */
} adi_phy_AnTxMode_e;

/*!
 * @brief Auto-negotiation master-slave advertisment
 */
typedef enum
{
    ADI_PHY_AN_ADV_FORCED_MASTER = 0,       /*!< Force master.          */
    ADI_PHY_AN_ADV_FORCED_SLAVE,            /*!< Force slave.           */
    ADI_PHY_AN_ADV_PREFFERED_MASTER,        /*!< Preferred master.      */
    ADI_PHY_AN_ADV_PREFFERED_SLAVE,         /*!< Preferred slave.       */
} adi_phy_AnAdvMasterSlaveCfg_e;

/*!
 * @brief Auto-negotiation master-slave advertisment
 */
typedef enum
{
    ADI_PHY_AN_MS_RESOLUTION_NOT_RUN   = ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_NOT_RUN,    /*!< Auto-negotiation not run.              */
    ADI_PHY_AN_MS_RESOLUTION_FAULT     = ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_FAULT,      /*!< Auto-negotiation configuration fault.  */
    ADI_PHY_AN_MS_RESOLUTION_SLAVE     = ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_SLAVE,      /*!< Success, PHY configured as slave.      */
    ADI_PHY_AN_MS_RESOLUTION_MASTER    = ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_MASTER,     /*!< Success, PHY configured as master.     */
} adi_phy_AnMsResolution_e;

/*!
 * @brief PHY reset types.
 */
typedef enum
{
    ADI_PHY_RESET_TYPE_SW = 0,      /*!< Software reset.                                        */
    ADI_PHY_RESET_TYPE_HW,          /*!< Hardware reset. Note this is currently not supported.  */
} adi_phy_ResetType_e;

/*!
 * @brief PHY interrupt events.
 */
typedef enum
{
    ADI_PHY_EVT_HW_RESET            = (1 << BITP_CRSM_IRQ_STATUS_CRSM_HRD_RST_IRQ_LH),
    ADI_PHY_EVT_SW_RESET            = (1 << BITP_CRSM_IRQ_STATUS_CRSM_SW_IRQ_LH),
    ADI_PHY_EVT_LINK_STAT_CHANGE    = (1 << (BITP_PHY_SUBSYS_IRQ_STATUS_LINK_STAT_CHNG_LH + 16)),
    ADI_PHY_EVT_MAC_IF_BUF          = (1 << (BITP_PHY_SUBSYS_IRQ_STATUS_MAC_IF_EBUF_ERR_IRQ_LH + 16)),
} adi_phy_InterruptEvt_e;

/*!
* @brief PHY capabilities
*/
typedef enum
{
    ADI_PHY_CAP_NONE                = (0 << 0),         /*!< No PHY support (base value).                  */
    ADI_PHY_CAP_TX_HIGH_LEVEL       = (1 << 1),         /*!< PHY supports 10BASE-T1L 2.4V transmit level.  */
    ADI_PHY_CAP_PMA_LOCAL_LOOPBACK  = (1 << 2),         /*!< PHY supports 10BASE-T1L PMA local loopback.   */
} adi_phy_Capabilities_e;

/*!
* @brief Link status
*/
typedef enum
{
    ADI_PHY_LINK_STATUS_DOWN        = (0),         /*!< Link down.  */
    ADI_PHY_LINK_STATUS_UP          = (1),         /*!< Link up.    */
} adi_phy_LinkStatus_e;

/*!
* @brief PHY loopback modes.
*/
typedef enum
{
    ADI_PHY_LOOPBACK_NONE = 0,                  /*!< No loopback (normal operation).                        */
    ADI_PHY_LOOPBACK_PCS,                       /*!< 10BASE-T1L PCS loopback.                               */
    ADI_PHY_LOOPBACK_PMA,                       /*!< 10BASE-T1L PMA loopback.                               */
    ADI_PHY_LOOPBACK_MACIF,                     /*!< MAC interface loopback, Tx data is looped back to Rx.  */
    ADI_PHY_LOOPBACK_MACIF_SUPPRESS_TX,         /*!< MAC interface loopback, Tx data is looped back to Rx.
                                                     Suppress Tx to the PHY.                                */
    ADI_PHY_LOOPBACK_MACIF_REMOTE,              /*!< MAC interface remote loopback. Rx data is looped back to Tx. */
    ADI_PHY_LOOPBACK_MACIF_REMOTE_SUPPRESS_RX,  /*!< MAC interface remote loopback. Rx data is looped back to Tx.
                                                     Suppress Rx to the MAC.                                      */
} adi_phy_LoopbackMode_e;


/*!
* @brief PHY driver configuration
*/
typedef struct
{
    uint32_t        addr;               /*!< Device address on the MDIO bus.                                                                    */
    void            *pDevMem;           /*!< Pointer to memory area used by the driver.                                                         */
    uint32_t        devMemSize;         /*!< Size of the memory used by the driver. Needs to be greater than or equal to #ADI_PHY_DEVICE_SIZE.  */
    bool            enableIrq;          /*!< Controls if the driver should   */
} adi_phy_DriverConfig_t;


/*!
 * @brief Auto-negotiation status.
 */
typedef struct {
    bool                            anComplete;         /*!< Auto-negotiation complete.                 */
    adi_phy_LinkStatus_e            anLinkStatus;       /*!< Link status.                               */
    adi_phy_AnMsResolution_e        anMsResolution;     /*!< Auto-negotiation master-slave resolution.  */
    adi_phy_AnTxMode_e              anTxMode;           /*!< Transmite operating mode.                  */
} adi_phy_AnStatus_t;


typedef uint32_t (*HAL_ReadFn_t)    (uint8_t hwAddr, uint32_t regAddr, uint16_t *data);
typedef uint32_t (*HAL_WriteFn_t)   (uint8_t hwAddr, uint32_t regAddr, uint16_t data);


/** @}*/

/*! @cond PRIVATE */

#define ADI_HAL_MDIO_READ_DURATION  (125) //Check again

/*! Timeout for MDIO interface bringup after a powerup event or equivalent, in miliseconds. */
#define ADI_PHY_MDIO_POWERUP_TIMEOUT        (100)
/*! Timeout for system ready after a powerup event or equivalent, in miliseconds. */
#define ADI_PHY_SYS_RDY_TIMEOUT             (700)

/*! Timeout for MDIO interface bringup, in number of iterations. */
#define ADI_PHY_MDIO_POWERUP_ITER           (uint32_t)(ADI_PHY_MDIO_POWERUP_TIMEOUT * 1000 / ADI_HAL_MDIO_READ_DURATION)
/*! Timeout for system ready, in number of iterations. */
#define ADI_PHY_SYS_RDY_ITER                (uint32_t)(ADI_PHY_SYS_RDY_TIMEOUT * 1000 / ADI_HAL_MDIO_READ_DURATION)

/*! Number of retries allowed for software powerdown entry, in MDIO read count. */
#define ADI_PHY_SOFT_PD_ITER                (10)

typedef struct
{
    uint32_t linkDropped;
} adi_phy_Stats_t;

typedef struct
{
    uint32_t                phyAddr;
    adi_phy_State_e         state;
    HAL_ReadFn_t            readFn;
    HAL_WriteFn_t           writeFn;
    adi_phy_LinkStatus_e    linkStatus;
    adi_eth_Callback_t      cbFunc;
    uint32_t                cbEvents;
    void                    *cbParam;
    uint32_t                irqMask;
    bool                    irqPending;
    adi_phy_Stats_t         stats;
} adi_phy_Device_t;

typedef struct
{
    adi_eth_Result_e (*Init)                    (adi_phy_Device_t **hPhyDevice, adi_phy_DriverConfig_t *cfg, HAL_ReadFn_t readFn, HAL_WriteFn_t writeFn);
    adi_eth_Result_e (*UnInit)                  (adi_phy_Device_t *hDevice);
    adi_eth_Result_e (*ReInitPhy)               (adi_phy_Device_t *hDevice);
    adi_eth_Result_e (*RegisterCallback)        (adi_phy_Device_t *hDevice, adi_eth_Callback_t cbFunc, uint32_t cbEvents, void *cbParam);
    adi_eth_Result_e (*ReadIrqStatus)           (adi_phy_Device_t *hDevice, uint32_t *status);
    adi_eth_Result_e (*EnterSoftwarePowerdown)  (adi_phy_Device_t *hDevice);
    adi_eth_Result_e (*ExitSoftwarePowerdown)   (adi_phy_Device_t *hDevice);
    adi_eth_Result_e (*GetSoftwarePowerdown)    (adi_phy_Device_t *hDevice, bool *enable);
    adi_eth_Result_e (*GetLinkStatus)           (adi_phy_Device_t *hDevice, adi_phy_LinkStatus_e *status);
    adi_eth_Result_e (*AnAdvTxMode)             (adi_phy_Device_t *hDevice, adi_phy_AnAdvTxMode_e txMode);
    adi_eth_Result_e (*AnAdvMstSlvCfg)          (adi_phy_Device_t *hDevice, adi_phy_AnAdvMasterSlaveCfg_e msCfg);
    adi_eth_Result_e (*AnEnable)                (adi_phy_Device_t *hDevice, bool enable);
    adi_eth_Result_e (*Renegotiate)             (adi_phy_Device_t *hDevice);
    adi_eth_Result_e (*GetAnStatus)             (adi_phy_Device_t *hDevice, adi_phy_AnStatus_t *status);
    adi_eth_Result_e (*Reset)                   (adi_phy_Device_t *hDevice, adi_phy_ResetType_e resetType);
    adi_eth_Result_e (*SetLoopbackMode)         (adi_phy_Device_t *hDevice, adi_phy_LoopbackMode_e loopbackMode);
    adi_eth_Result_e (*LedEn)                   (adi_phy_Device_t *hDevice, bool enable);
    adi_eth_Result_e (*LedBlinkTime)            (adi_phy_Device_t *hDevice, uint32_t blinkOn, uint32_t blinkOff);
    adi_eth_Result_e (*GetCapabilities)         (adi_phy_Device_t *hDevice, adi_phy_Capabilities_e *capabilities);
    adi_eth_Result_e (*PHY_Read)                (adi_phy_Device_t *hDevice, uint32_t regAddr, uint16_t *data);
    adi_eth_Result_e (*PHY_Write)               (adi_phy_Device_t *hDevice, uint32_t regAddr, uint16_t data);
} adi_phy_DriverEntry_t;

extern adi_phy_DriverEntry_t phyDriverEntry;



adi_eth_Result_e    PHY_Init                    (adi_phy_Device_t **hPhyDevice, adi_phy_DriverConfig_t *cfg, HAL_ReadFn_t readFn, HAL_WriteFn_t writeFn);
adi_eth_Result_e    PHY_UnInit                  (adi_phy_Device_t *hDevice);
adi_eth_Result_e    PHY_ReInitPhy               (adi_phy_Device_t *hDevice);

adi_eth_Result_e    PHY_RegisterCallback        (adi_phy_Device_t *hDevice, adi_eth_Callback_t cbFunc, uint32_t cbEvents, void *cbParam);
adi_eth_Result_e    PHY_ReadIrqStatus           (adi_phy_Device_t *hDevice, uint32_t *status);

adi_eth_Result_e    PHY_GetCapabilities         (adi_phy_Device_t *hDevice, adi_phy_Capabilities_e *capabilities);

adi_eth_Result_e    PHY_Write                   (adi_phy_Device_t *hDevice, uint32_t regAddr, uint16_t data);
adi_eth_Result_e    PHY_Read                    (adi_phy_Device_t *hDevice, uint32_t regAddr, uint16_t *data);


adi_eth_Result_e    PHY_AnAdvTxMode             (adi_phy_Device_t *hDevice, adi_phy_AnAdvTxMode_e txMode);

adi_eth_Result_e    PHY_EnterSoftwarePowerdown  (adi_phy_Device_t *hDevice);
adi_eth_Result_e    PHY_ExitSoftwarePowerdown   (adi_phy_Device_t *hDevice);
adi_eth_Result_e    PHY_GetSoftwarePowerdown    (adi_phy_Device_t *hDevice, bool *enable);

adi_eth_Result_e    PHY_GetLinkStatus           (adi_phy_Device_t *hDevice, adi_phy_LinkStatus_e *status);

adi_eth_Result_e    PHY_Renegotiate             (adi_phy_Device_t *hDevice);
adi_eth_Result_e    PHY_GetAnStatus             (adi_phy_Device_t *hDevice, adi_phy_AnStatus_t *status);

adi_eth_Result_e    PHY_Reset                   (adi_phy_Device_t *hDevice, adi_phy_ResetType_e resetType);

adi_eth_Result_e    PHY_SetLoopbackMode         (adi_phy_Device_t *hDevice, adi_phy_LoopbackMode_e loopbackMode);

adi_eth_Result_e    PHY_LedEn                   (adi_phy_Device_t *hDevice, bool enable);
adi_eth_Result_e    PHY_LedBlinkTime            (adi_phy_Device_t *hDevice, uint32_t blinkOn, uint32_t blinkOff);

adi_eth_Result_e    PHY_AnAdvMstSlvCfg          (adi_phy_Device_t *hDevice, adi_phy_AnAdvMasterSlaveCfg_e msCfg);
adi_eth_Result_e    PHY_AnEnable                (adi_phy_Device_t *hDevice, bool enable);


adi_eth_Result_e    adi_phy_GetVersion          (adi_phy_Device_t *hDevice, uint32_t *version);
adi_eth_Result_e    adi_phy_GetCapabilities     (adi_phy_Device_t *hDevice, adi_phy_Capabilities_e *capabilities);
/*! @endcond */

#ifdef __cplusplus
}
#endif

#endif /* ADI_PHY_H */


