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

#ifndef adin1200_H
#define adin1200_H

#include "adi_phy.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define MII_CTRL_1200 			(0x0000U)			/* MII Control Register (MII_CONTROL) */
#define MII_STATUS_1200 		(0x0001U)			/* MII Status Register (MII_STATUS) */
#define PHY_ID_1_1200 			(0x0002U)			/* PHY Identifier 1 Register (PHY_ID_1) */
#define PHY_AUTONEG_ADV_1200 	(0x0004U)			/* AutoNegotiation Advertisement Register (AUTONEG_ADV) */
#define PHY_CTRL_2_1200			(0x0016U)			/* PHY Control 2 Register (PHY_CTRL_2) */
#define PHY_STATUS_1_1200		(0x001AU)			/* PHY Status 1 Register (PHY_STATUS_1) */
#define LED_CTRL_2_1200			(0x001CU)			/* LED Control 1 Register (LED_CTRL_1) */
#define LED_CTRL_1_1200			(0x001BU)			/* LED COntrol 2 Register (LED_CTRL_2) */


#define PHYADDR_1200 	(0x08U)// Address of ADIIN1200 PHY

/*!
* @brief adin1200 device structure.
*/
typedef struct
{
    adi_phy_Device_t    *pPhyDevice;    /*!< Pointer to the PHY device structure.   */
    //adi_phy_Device_t   	phyAddr;		// Adin1200 address
} adin1200_DeviceStruct_t;


/*!
 * @brief           Read link status.
 *
 * @param [out]     status      Link status.
 *
 * @details
 *
 */
adi_eth_Result_e adin1200_GetLinkStatus(adi_phy_LinkStatus_e *status);

/*!
* @brief adin1200 device structure handle.
*/
typedef adin1200_DeviceStruct_t*    adin1200_DeviceHandle_t;

adi_eth_Result_e	adin1200_config					(void);


/** @}*/

#ifdef __cplusplus
}
#endif

#endif /* adin1200_H */
