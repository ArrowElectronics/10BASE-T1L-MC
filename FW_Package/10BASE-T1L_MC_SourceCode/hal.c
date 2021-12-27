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

/** @addtogroup hal HAL API
 *  @{
 */

#include <string.h>
#include "hal.h"
#include "mdio_gpio.h"

#ifdef MDIO_GPIO
#include "../../mdio_gpio/mdio_gpio.h"
#endif

/*
 * @brief MDIO Read Clause 45
 *
 * @param [in]  phyAddr - Hardware PHY address
 * @param [in]  phyReg - Register address in clause 45 combined devType and regAddr
 * @param [out] phyData - pointer to the data buffer
 *
 * @return error if TA bit is not pulled down by the slave
 *
 * @details
 *
 * @sa
 */
uint32_t HAL_1100PhyRead(uint8_t hwAddr, uint32_t RegAddr, uint16_t *data)
{
    return mdioGPIORead_cl45(hwAddr, RegAddr, data);
}

/*
 * @brief MDIO Write Clause 45
 *
 * @param [in] phyAddr - Hardware Phy address
 * @param [in] phyReg - Register address in clause 45 combined devAddr and regAddr
 * @param [out] phyData -  data
 * @return none
 *
 * @details
 *
 * @sa
 */
uint32_t HAL_1100PhyWrite(uint8_t hwAddr, uint32_t RegAddr, uint16_t data)
{
  return mdioGPIOWrite_cl45(hwAddr, RegAddr, data);
}

/*
 * @brief MDIO Read Clause 22
 *
 * @param [in]  phyAddr - Hardware PHY address
 * @param [in]  phyReg - Register address in clause 22 combined devType and regAddr
 * @param [out] phyData - pointer to the data buffer
 *
 * @return error if TA bit is not pulled down by the slave
 *
 * @details
 *
 * @sa
 */
uint32_t HAL_1200PhyRead(uint8_t hwAddr, uint32_t RegAddr, uint16_t *data)
{
    return (uint32_t)mdioGPIORead_cl22(hwAddr, RegAddr, data);
}

/*
 * @brief MDIO Write Clause 22
 *
 * @param [in] phyAddr - Hardware Phy address
 * @param [in] phyReg - Register address in clause 22 combined devAddr and regAddr
 * @param [out] phyData -  data
 * @return none
 *
 * @details
 *
 * @sa
 */
uint32_t HAL_1200PhyWrite(uint8_t hwAddr, uint32_t RegAddr, uint16_t data)
{
  return mdioGPIOWrite_cl22(hwAddr, RegAddr, data);
}


/*
 * @brief Disable Phy IRQ
 *
 * @param [in] none
 * @param [out] none
 * @return none
 *
 * @details
 *
 * @sa
 */
uint32_t HAL_DisableIrq(void)
{
    //BSP_DisableIRQ();

    return ADI_HAL_SUCCESS;
}

/*
 * @brief Enable Phy IRQ
 *
 * @param [in] none
 * @param [out] none
 * @return none
 *
 * @details
 *
 * @sa
 */
uint32_t HAL_EnableIrq(void)
{
    //BSP_EnableIRQ();

    return ADI_HAL_SUCCESS;
}

/*uint32_t HAL_SetPendingIrq(void)
{
    NVIC_SetPendingIRQ(SYS_GPIO_INTA_IRQn);
//    BSP_EnableIRQ();

    return ADI_HAL_SUCCESS;
}

uint32_t HAL_GetEnableIrq(void)
{
    return NVIC_GetEnableIRQ(SYS_GPIO_INTA_IRQn);

}*/

/*
 * @brief  Register Phy IRQ Callback function
 *
 * @param [in] intCallback
 * @param [in] hDevice - Pointer to Phy device handler
 * @param [out] none
 * @return none
 *
 * @details
 *
 * @sa
 */
uint32_t HAL_RegisterCallback(HAL_Callback_t const *intCallback, void * hDevice)
{
    //return BSP_RegisterIRQCallback (intCallback, hDevice);
	return 1;
}

