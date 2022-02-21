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

/** @addtogroup adin1200 adin1200 PHY Driver
 *  @{
 */

#include "adin1200.h"
#include "adi_phy.h"


//Definitions
#define true				1
#define false				0


/*!
 * @brief           Read link status.
 *
 * @param [out]     status      Link status.
 *
 * @details
 *
 */
adi_eth_Result_e adin1200_GetLinkStatus(adi_phy_LinkStatus_e *status)
{
	uint16_t reg_val = 0x0000; /*Get the value of the regiester of ADIN1200 to get the link status */

	/* Register shows the PHY status if it is linked up or not */
	HAL_1200PhyRead(PHYADDR_1200, PHY_STATUS_1_1200 ,&reg_val);

	/* Check the value of status register for link Status of PHY */
	if( reg_val & 0x0040 )
	{
		*status = ADI_PHY_LINK_STATUS_UP;
	}
	else
	{
		*status = ADI_PHY_LINK_STATUS_DOWN;
	}
	return ADI_ETH_SUCCESS;
}


/*!
 * @brief           Configuration of ADIN1200.
 *
 * @param [in]      hDevice     Device driver handle.
 *
 * @details        In Configuration, Speed need to be set to the 10-BASE T, will config 1200 into full-duplex mode and enable the auto-negotiation
 *
 *
 *
 */
adi_eth_Result_e adin1200_config (void)
{
	uint32_t return_val = 0;	/* Return result from the write operation on ADIN1200 Register */
	uint16_t reg_val = 0x0000; /* Register value read to check the previously written value */
	//adi_eth_Result_e result = ADI_ETH_SUCCESS;


	/* Enabling the PHY at 10BASE-T Mode by setting bit 10 of PHY_CTRL register */
	return_val = HAL_1200PhyWrite(PHYADDR_1200, PHY_CTRL_2_1200, 0x0400);

	/* Reading the PHY_Control register */
	HAL_1200PhyRead(PHYADDR_1200, PHY_CTRL_2_1200 ,&reg_val);

	/*Checking the value of the register if it does not match to the previously written value,
	there may be a configuration fault in ADIN1200 */
	if(reg_val != 0x0400)
	{
		return ADI_ETH_HW_ERROR;
	}


	/* Setting bit 6 to Advertise 10BASE-T and Full Duplex Mode */
	return_val = HAL_1200PhyWrite(PHYADDR_1200, PHY_AUTONEG_ADV_1200, 0x0041);

	/* Setting following bit - bit 8: Full-Duplex mode, bit 9: Restart the Negotiation, bit 12: Autonegotiation Enable */
	return_val = HAL_1200PhyWrite(PHYADDR_1200, MII_CTRL_1200, 0x1300);

	/* Setting bit 10 for enabling configuration set for LED_0 Pin  */
	return_val = HAL_1200PhyWrite(PHYADDR_1200, LED_CTRL_1_1200, 0x0401);

	/* Setting 0:3 bits for LED_0 to blink if there is activity in PHY */
	return_val = HAL_1200PhyWrite(PHYADDR_1200, LED_CTRL_2_1200, 0x2109);

	return return_val;

}
