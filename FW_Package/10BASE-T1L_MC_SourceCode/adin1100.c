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

/** @addtogroup adin1100 ADIN1100 PHY Driver
 *  @{
 */

#include "adin1100.h"
#include "adi_phy.h"
#include "hal.h"


/*!
 * @brief           ADIN1100 driver initialization.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      cfg         Device driver configuration.
 *
 * @return          Status
 *                  - #ADI_ETH_SUCCESS              Call completed successfully.
 *                  - #ADI_ETH_INVALID_PARAM        Configured memory size too small.
 *                  - #ADI_ETH_COMM_ERROR           MDIO communication failure.
 *                  - #ADI_ETH_UNSUPPORTED_DEVICE   Device not supported.
 *
 * @details         Initializes the driver and the PHY hardware.
 *
 *                  The configuration parameter #cfg include the PHY device address
 *                  and a pointer to a memory chunk to be used for the driver structure.
 *
 *                  The following steps are executed:
 *                  - the driver structure is initialized and host interrupt disabled
 *                  - wait for MDIO interface availability by polling register over
 *                    the MDIO interface until 2nd TA bit in MDIO frame is read as 0
 *                  - check device identity by comparing MMD1_DEV_ID1 and MMD1_DEV_ID2
 *                    contents expected value
 *                  - initiate software powerdown and wait until the device is in software
 *                    software powerdown. This step includes the powerup sequencing of PHY
 *                    hardware
 *                  - if PHY interrupt is enabled, program IRQ mask registers such that
 *                    only hardware reset event is enabled
 *                  - static register configuration updates
 *
 *                  When the function finishes execution, the device is in software powerdown state.
 *
 * @sa              adin1100_UnInit(), adin1100_ReInitPhy()
 */
adi_eth_Result_e adin1100_Init(adin1100_DeviceHandle_t hDevice, adi_phy_DriverConfig_t *cfg)
{

    return phyDriverEntry.Init(&hDevice->pPhyDevice, cfg, HAL_1100PhyRead, HAL_1100PhyWrite);

}

/*!
 * @brief           ADIN1100 driver uninitialization.
 *
 * @param [in]      hDevice     Device driver handle.
 *
 * @return          Status
 *                  - #ADI_ETH_SUCCESS          Call completed successfully.
 *                  - #ADI_ETH_INVALID_HANDLE   Invalid device handle.
 *
 * @details         Uninitializes the ADIN1100 PHY device.
 *                  Disables the PHY host interrupt and initializes the driver structure.
 *
 * @sa              adin1100_Init()
 */
adi_eth_Result_e adin1100_UnInit(adin1100_DeviceHandle_t hDevice)
{

    return phyDriverEntry.UnInit(hDevice->pPhyDevice);
}

/*!
 * @brief           Re-initializes the PHY after a reset event.
 *
 * @param [in]      hDevice     Device driver handle.
 *
 * @details         This function initializes the PHY hardware by performing
 *                  the same steps as adin1100_Init(). It does not change the
 *                  current setup on the host side, such as driver software settings.
 *
 *                  When the function finishes execution, the device is in software powerdown state.
 *
 * @sa              adin1100_Init()
 */
adi_eth_Result_e adin1100_ReInitPhy(adin1100_DeviceHandle_t hDevice)
{

    return phyDriverEntry.ReInitPhy(hDevice->pPhyDevice);
}

/*!
 * @brief           Restart auto-negotiation.
 *
 * @param [in]      hDevice     Device driver handle.
 *
 * @details         Restart auto-negotiation.
 *
 */
adi_eth_Result_e adin1100_Renegotiate(adin1100_DeviceHandle_t hDevice)
{
    return phyDriverEntry.Renegotiate(hDevice->pPhyDevice);
}

/*!
 * @brief           Reset the PHY device.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      resetType   Reset type.
 *
 * @details         The only reset option currently supported is #ADI_PHY_RESET_TYPE_SW
 *                  (software reset). A full reset of the device, almost equivalent to a
 *                  hardware reset, will be performed.
 *
 */
adi_eth_Result_e adin1100_Reset(adin1100_DeviceHandle_t hDevice, adi_phy_ResetType_e resetType)
{
    return phyDriverEntry.Reset(hDevice->pPhyDevice, resetType);
}

/*!
 * @brief           Set loopback mode.
 *
 * @param [in]      hDevice         Device driver handle.
 * @param [in]      loopbackMode    Loopback mode.
 *
 * @details         The ADIN1100 features a number of loopback modes that can
 *                  be configured with this function:
 *
 *                  - #ADI_PHY_LOOPBACK_NONE
 *                  - #ADI_PHY_LOOPBACK_PCS
 *                  - #ADI_PHY_LOOPBACK_PMA
 *                  - #ADI_PHY_LOOPBACK_MACIF
 *                  - #ADI_PHY_LOOPBACK_MACIF_SUPPRESS_TX
 *                  - #ADI_PHY_LOOPBACK_MACIF_REMOTE
 *                  - #ADI_PHY_LOOPBACK_MACIF_REMOTE_SUPPRESS_RX
 *
 */
adi_eth_Result_e adin1100_SetLoopbackMode(adin1100_DeviceHandle_t hDevice, adi_phy_LoopbackMode_e loopbackMode)
{
    return phyDriverEntry.SetLoopbackMode(hDevice->pPhyDevice, loopbackMode);
}

/*!
 * @brief           Configure the advertised transmit operating mode for auto-negotiation.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      txMode      Transmit operating mode.
 *
 * @details         This function configures the advertised transmit operating mode (signal amplitude).
 *                  The options are:
 *                  - #ADI_PHY_AN_ADV_TX_REQ_1P0V
 *                  - #ADI_PHY_AN_ADV_TX_REQ_2P4V
 *                  - #ADI_PHY_AN_ADV_TX_REQ_1P0V_ABLE_2P4V
 *
 *                  Note that the default transmit operating mode is set by the pin strap option TX2P4_ENB.
 *                  This API can be used to overwrite the value set by the pin strap.
 *
 */
adi_eth_Result_e adin1100_AnAdvTxMode(adin1100_DeviceHandle_t hDevice, adi_phy_AnAdvTxMode_e txMode)
{
    return phyDriverEntry.AnAdvTxMode(hDevice->pPhyDevice, txMode);
}

/*!
 * @brief           Configure the advertised master/slave configuration for auto-negotiation.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      msCfg       Master/slave configuration.
 *
 * @details         This function configures the advertised master/slave configuration.
 *                  The options are:
 *                  - #ADI_PHY_AN_ADV_FORCED_MASTER
 *                  - #ADI_PHY_AN_ADV_FORCED_SLAVE
 *                  - #ADI_PHY_AN_ADV_PREFFERED_MASTER
 *                  - #ADI_PHY_AN_ADV_PREFFERED_SLAVE
 *
 *                  Note that the default master/slave configuraton is set by the pin strap option MS_SEL.
 *                  This API can be used to overwrite the value set by the pin strap.
 *
 */
adi_eth_Result_e adin1100_AnAdvMstSlvCfg(adin1100_DeviceHandle_t hDevice, adi_phy_AnAdvMasterSlaveCfg_e msCfg)
{
    return phyDriverEntry.AnAdvMstSlvCfg(hDevice->pPhyDevice, msCfg);
}


/*!
 * @brief           Enable/disable auto-negotiation.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      enable      Enable/disable auto-negotiation.
 *
 * @details         It is STRONGLY recommended to never disable auto-negotation in the ADIN1100 device!
 *
 */
adi_eth_Result_e adin1100_AnEnable(adin1100_DeviceHandle_t hDevice, bool enable)
{
    return phyDriverEntry.AnEnable(hDevice->pPhyDevice, enable);
}

/*!
 * @brief           Get auto-negotiation status.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [out]     status      Auto-negotiation status.
 *
 * @details         This function return the following auto-negotation results:
 *                  - auto-negotiation complete
 *                  - link status
 *                  - master-slave resolution
 *                  - resolved transmit operation mode
 *
 */
adi_eth_Result_e adin1100_GetAnStatus(adin1100_DeviceHandle_t hDevice, adi_phy_AnStatus_t *status)
{
    return phyDriverEntry.GetAnStatus(hDevice->pPhyDevice, status);
}

/*!
 * @brief           Enter software powerdown.
 *
 * @param [in]      hDevice     Device driver handle.
 *
 * @details
 *
 * @sa              adin1100_ExitSoftwarePowerdown()
 */
adi_eth_Result_e adin1100_EnterSoftwarePowerdown(adin1100_DeviceHandle_t hDevice)
{
    return phyDriverEntry.EnterSoftwarePowerdown(hDevice->pPhyDevice);
}

/*!
 * @brief           Exit software powerdown.
 *
 * @param [in]      hDevice     Device driver handle.
 *
 * @details
 *
 * @sa              adin1100_EnterSoftwarePowerdown()
 */
adi_eth_Result_e adin1100_ExitSoftwarePowerdown(adin1100_DeviceHandle_t hDevice)
{
    return phyDriverEntry.ExitSoftwarePowerdown(hDevice->pPhyDevice);
}

/*!
 * @brief           Determine if the ADIN1100 is in software powerdown or not.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [out]     flag        Indicate if the ADIN1100 is in software powerdown or not.
 *
 * @details
 *
 * @sa              adin1100_EnterSoftwarePowerdown(), adin1100_EnterSoftwarePowerdown()
 */
adi_eth_Result_e adin1100_GetSoftwarePowerdown(adin1100_DeviceHandle_t hDevice, bool *flag)
{
    return phyDriverEntry.GetSoftwarePowerdown(hDevice->pPhyDevice, flag);
}

/*!
 * @brief           Register callback for the PHY interrupt.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      cbFunc      Callback function.
 * @param [in]      cbEvents    Callback events.
 *
 * @details         Registers a callback forthe PHY interrupt. If any of the events
 *                  defined in cbEvents is detected, the application is notified by
 *                  calling the callback function cbFunc.
 *
 *                  The callback function can be cleared by register a
 *
 * @sa
 */
adi_eth_Result_e adin1100_RegisterCallback(adin1100_DeviceHandle_t hDevice, adi_eth_Callback_t cbFunc, uint32_t cbEvents)
{
    return phyDriverEntry.RegisterCallback(hDevice->pPhyDevice, cbFunc, cbEvents, (void *)hDevice);
}

/*!
 * @brief           Read interrupt status.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [out]     status      Interrupt status.
 *
 * @details         The interrupt status returned by the function is based on interrupt
 *                  sources from both registers CRSM_IRQ_STATUS and PHY_SUBSYS_IRQ_STATUS.
 *
 *                  The status is made of the event bits as defined in #adi_phy_InterruptEvt_e.
 *                  More than one event can be active simultaneously.
 *
 * @sa              adin1100_UnInit()
 */
adi_eth_Result_e adin1100_ReadIrqStatus(adin1100_DeviceHandle_t hDevice, uint32_t *status)
{
    return phyDriverEntry.ReadIrqStatus(hDevice->pPhyDevice, status);
}

/*!
 * @brief           Read link status.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [out]     status      Link status.
 *
 * @details
 *
 */
adi_eth_Result_e adin1100_GetLinkStatus(adin1100_DeviceHandle_t hDevice, adi_phy_LinkStatus_e *status)
{
    return phyDriverEntry.GetLinkStatus(hDevice->pPhyDevice, status);
}

/*!
 * @brief           Enable or disable the LED.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      enable      Enable/disable the LED.
 *
 * @details         The LED is enabled by default during driver initialization.
 *
 * @sa
 */
adi_eth_Result_e adin1100_LedEn(adin1100_DeviceHandle_t hDevice, bool enable)
{
    return phyDriverEntry.LedEn(hDevice->pPhyDevice, enable);
}

/*!
 * @brief           Configure LED blink time.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      blinkOn     LEN blink ON time.
 * @param [in]      blinkOff    LEN blink OFF time.
 *
 * @details
 *
 * @sa
 */
adi_eth_Result_e adin1100_LedBlinkTime(adin1100_DeviceHandle_t hDevice, uint32_t blinkOn, uint32_t blinkOff)
{
    return phyDriverEntry.LedBlinkTime(hDevice->pPhyDevice, blinkOn, blinkOff);
}

/*!
 * @brief           Get PHY device capabilities.
 *
 * @param [in]      hDevice         Device driver handle.
 * @param [out]     capabilities    Device capabilities.
 *
 * @details        Reports if the device support 10BASE-T1L 2.4V transmit level
 *                 and 10BASE-T1L PMA local loopback.
 *
 */
adi_eth_Result_e adin1100_GetCapabilities(adin1100_DeviceHandle_t hDevice, adi_phy_Capabilities_e *capabilities)
{
    return phyDriverEntry.GetCapabilities(hDevice->pPhyDevice, capabilities);
}

/*!
 * @brief           Write PHY register.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      regAddr     Register address in the header file format (DEVTYPE+ADDR).
 * @param [in]      regData     Value written to register.
 *
 * @details
 *
 * @sa              adin1100_PhyRead()
 */
adi_eth_Result_e adin1100_PhyWrite(adin1100_DeviceHandle_t hDevice, uint32_t regAddr, uint16_t regData)
{
    return phyDriverEntry.PHY_Write(hDevice->pPhyDevice, regAddr, regData);
}

/*!
 * @brief           Read PHY register.
 *
 * @param [in]      hDevice     Device driver handle.
 * @param [in]      regAddr     Register address in the header file format (DEVTYPE+ADDR).
 * @param [out]     regData     Value read from register.
 *
 * @details
 *
 * @sa              adin1100_PhyWrite()
 */
adi_eth_Result_e adin1100_PhyRead(adin1100_DeviceHandle_t hDevice, uint32_t regAddr, uint16_t *regData)
{
    return phyDriverEntry.PHY_Read(hDevice->pPhyDevice, regAddr, regData);
}


/** @}*/
