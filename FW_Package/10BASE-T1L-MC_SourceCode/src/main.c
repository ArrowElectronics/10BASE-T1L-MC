/**
 * @file        main.c
 * @brief       GPIO Example
 * @details     
 */

/*******************************************************************************
* Copyright (C) Maxim Integrated Products, Inc., All Rights Reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
* OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*
* Except as contained in this notice, the name of Maxim Integrated 
* Products, Inc. shall not be used except as stated in the Maxim Integrated 
* Products, Inc. Branding Policy.
*
* The mere transfer of this software does not imply any licenses
* of trade secrets, proprietary technology, copyrights, patents,
* trademarks, maskwork rights, or any other form of intellectual
* property whatsoever. Maxim Integrated Products, Inc. retains all 
* ownership rights.
*
******************************************************************************/

/***** Includes *****/
#include <stdio.h>
#include <string.h>
#include "mxc_device.h"
#include "mxc_delay.h"
#include "nvic_table.h"
#include "pb.h"
#include "board.h"
#include "gpio.h"
#include"mdio_gpio.h"
#include"boardsupport.h"
#include"adi_eth_common.h"
#include"adi_phy.h"
#include"adin1100.h"
#include"adin1200.h"
#include "nvic_table.h"
#include "uart.h"
#include "dma.h"


/***** Definitions *****/

#define true				1
#define false				0


/***** Globals *****/

uint8_t phyDevMem[ADI_PHY_DEVICE_SIZE];

adi_phy_DriverConfig_t phyDrvConfig = {
    .addr       = 0,
    .pDevMem    = (void *)phyDevMem,
    .devMemSize = sizeof(phyDevMem),
    .enableIrq  = true,
};

volatile uint32_t lastLinkCheckTime = 0;
volatile bool     irqFired = false;

/* Configuration function for the ADIN1100, it is executed after */
/* reset and initialization, with the ADIN1100 in software powerdown. */

adi_eth_Result_e appPhyConfig(adin1100_DeviceHandle_t hDevice)
{
    adi_eth_Result_e        result = ADI_ETH_SUCCESS;

    /* Any static configuration that needs to be done before the link */
    /* is brought up can be included here.                            */

    /* Advertisement of Tx Mode at 2.4 V pk-pk for ADIN1100 */
    result = adin1100_AnAdvTxMode(hDevice, ADI_PHY_AN_ADV_TX_REQ_2P4V);

    return result;
}

/* Call back function used in Register Call back as per Event*/
void phyCallback(void *pCBParam, uint32_t Event, void *pArg)
{
    irqFired = true;
}

int main(void)
{

	uint32_t                run = 1;
	uint8_t                error;
	char                    strBuffer[250];
 	adi_phy_LinkStatus_e    linkstatus = ADI_PHY_LINK_STATUS_DOWN;
	adi_phy_LinkStatus_e    old1100linkstatus = ADI_PHY_LINK_STATUS_DOWN;
	adi_phy_LinkStatus_e    old1200linkstatus = ADI_PHY_LINK_STATUS_DOWN;
	adi_eth_Result_e        result;
	adin1100_DeviceStruct_t dev;
	adin1100_DeviceHandle_t hDevice = &dev;
	uint16_t               capabilities;
	adi_eth_Result_e		result_1200;


	/****** System Initialization *****/
	error = BSP_InitSystem();
	MXC_Delay(1500000);
	DEBUG_RESULT("BSP_InitSystem", error, ADI_ETH_SUCCESS);


	/****** Driver Init *****/
	/* If both the MCU and the ADIN1100 are reset simultaneously */
	/* using the RESET button on the board, the MCU may start    */
	/* scanning for ADIN1100 devices before the ADIN1100 has     */
	/* powered up. This is worse if PHY address is configured as */
	/* 0 (default configuration of the board).                   */
	phyDrvConfig.addr = 0x02;
	result = adin1100_Init(hDevice, &phyDrvConfig);
	if (ADI_ETH_SUCCESS == result)
	{
		result = adin1100_GetCapabilities(hDevice, &capabilities);
		if (capabilities & (1 << ADI_PHY_CAP_TX_HIGH_LEVEL))
		{
			DEBUG_MESSAGE("10BASE-T1L Supports 2.4V Tx level");
		}
		else
		{
			DEBUG_MESSAGE("10BASE-T1L do not support 2.4V Tx level");
		}

	}
	else
    {
        /* If PHY Initialization fails, blink Heart beat LED for 80% duty cycle  */
        while(run)
        {
            BSP_HeartBeat_BLINK();
            result = adin1100_Init(hDevice, &phyDrvConfig);
            if (ADI_ETH_SUCCESS == result)
            {
                result = adin1100_GetCapabilities(hDevice, &capabilities);
                if (capabilities & (1 << ADI_PHY_CAP_TX_HIGH_LEVEL))
                {
                    DEBUG_MESSAGE("10BASE-T1L Supports 2.4V Tx level");
                }
                else
                {
                    DEBUG_MESSAGE("10BASE-T1L do not support 2.4V Tx level");
                }

                BSP_HeartBeat();
                break;
            }
        }
    }



	/* Device configuration, performed while the device is in software power down. */
	result = appPhyConfig(hDevice);
	DEBUG_RESULT("appPhyConfig", result, ADI_ETH_SUCCESS);

#ifndef MDIO_GPIO
	/* Register callback for selected events. */
	result = adin1100_RegisterCallback(hDevice, phyCallback, ADI_PHY_EVT_HW_RESET | ADI_PHY_EVT_LINK_STAT_CHANGE);
	DEBUG_RESULT("adin1100_RegisterCallback", result, ADI_ETH_SUCCESS);
#endif

	/* Exit software power down and attempt to bring up the link. */
	result = adin1100_ExitSoftwarePowerdown(hDevice);
	DEBUG_RESULT("adin1100_ExitSoftwarePowerdown", result, ADI_ETH_SUCCESS);

	/* Check the link Status, though the link may not be up at this point */
	result = adin1100_GetLinkStatus(hDevice, &linkstatus);
	DEBUG_RESULT("adin1100_GetLinkStatus", result, ADI_ETH_SUCCESS);

	/* ADIN1200 Configuration */
	result_1200 = adin1200_config();
	if (ADI_ETH_SUCCESS != result_1200)
	{
	/* If PHY Configuration fails, blink MCU Heart Beat LED for 80% duty cycle  */
		while(run)
		{
			BSP_HeartBeat_BLINK();
			result_1200 = adin1200_config();
			if(ADI_ETH_SUCCESS == result_1200)
			{
			    BSP_HeartBeat();
			    break;
			}
		}
	}


	/* Check the Link Status of ADIN1100 after the setup */
	while (run)
	{
		result = adin1100_GetLinkStatus(hDevice, &linkstatus);
		if (result == ADI_ETH_COMM_ERROR)
		{
			//DEBUG_MESSAGE("MDIO communication error");
			printf("MDIO communication error");
		}
		else
		{
			if (result == ADI_ETH_SUCCESS)
			{
				if (old1100linkstatus != linkstatus)
				{
					switch (linkstatus)
					{
						case ADI_PHY_LINK_STATUS_UP:
							strcpy(strBuffer,"10BASE-T1L Link Up");
							break;

						case ADI_PHY_LINK_STATUS_DOWN:
							strcpy(strBuffer, "10BASE-T1L Link Down");
							break;

						default:
							break;
							DEBUG_RESULT("Invalid link status", 0, 1);
					}
					DEBUG_MESSAGE(strBuffer);
				}

				/* Updates the old link status every time with new link */
				old1100linkstatus = linkstatus;
			}
		}

		/* Get the Link Status of adin1200 after the setup */
		result = adin1200_GetLinkStatus(&linkstatus);
		if (old1200linkstatus != linkstatus)
		{
			switch (linkstatus)
			{
				case ADI_PHY_LINK_STATUS_DOWN:
					strcpy(strBuffer, "Ethernet Link Down");
					break;
				case ADI_PHY_LINK_STATUS_UP:
					strcpy(strBuffer,"Ethernet Link Up");
					break;
				default:
					break;
					DEBUG_RESULT("Invalid link status", 0, 1);
			}
			DEBUG_MESSAGE(strBuffer);
		}

		/* Every time update the old link status of PHY */
		old1200linkstatus = linkstatus;

		/* HeartBeat LED to show MCU Health */
		BSP_HeartBeat();

	}

	/* Get the UnInit result, if it is success or error */
	result = adin1100_UnInit(hDevice);
    return 0;
}
