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

#ifndef HAL_H
#define HAL_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include "adi_eth_common.h"
//#include "hal_port_specific.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*! HAL return code indicating successful execution. */
#define ADI_HAL_SUCCESS         (0)
/*! HAL return code indicating an error has been encountered. */
#define ADI_HAL_ERROR           (1)

typedef void (*HAL_Callback_t) (    /*!< Callback function pointer */
    void      *pCBParam,            /*!< Client supplied callback param */
    uint32_t   Event,               /*!< Event ID specific to the Driver/Service */
    void      *pArg);               /*!< Pointer to the event specific argument */
#define ADIN1100
#ifdef ADIN1100

/*!
 * @brief           HAL read from PHY register.
 *
 * @param [in]      phyAddr     PHY address.
 * @param [in]      regAddr     Register address as represented in the header file (DEVTYPE + ADDR).
 * @param [out]     data        16-bit data read from the register.
 *
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Reads from a PHY register using the MDIO interface.
 *
 *                  Implements a blocking call.
 *
 * @sa              HAL_1100PhyWrite()
 */
uint32_t        HAL_1100PhyRead             (uint8_t phyAddr, uint32_t regAddr, uint16_t *data);

/*!
 * @brief           HAL write to PHY register.
 *
 * @param [in]      phyAddr     PHY address.
 * @param [in]      regAddr     Register address as represented in the header file (DEVTYPE + ADDR).
 * @param [out]     data        16-bit data read from the register.
 *
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Write to a PHY register using the MDIO interface.
 *
 *                  Implements a blocking call.
 *
 * @sa              HAL_1100PhyRead()
 */
uint32_t        HAL_1100PhyWrite            (uint8_t phyAddr, uint32_t regAddr, uint16_t data);
#endif
/*!
 * @brief           HAL read from PHY register.
 *
 * @param [in]      phyAddr     PHY address.
 * @param [in]      regAddr     Register address as represented in the header file (DEVTYPE + ADDR).
 * @param [out]     data        16-bit data read from the register.
 *
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Reads from a PHY register using the MDIO interface.
 *
 *                  Implements a blocking call.
 *
 * @sa              HAL_1200PhyWrite()
 */
uint32_t        HAL_1200PhyRead             (uint8_t phyAddr, uint32_t regAddr, uint16_t *data);

/*!
 * @brief           HAL write to PHY register.
 *
 * @param [in]      phyAddr     PHY address.
 * @param [in]      regAddr     Register address as represented in the header file (DEVTYPE + ADDR).
 * @param [out]     data        16-bit data read from the register.
 *
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Write to a PHY register using the MDIO interface.
 *
 *                  Implements a blocking call.
 *
 * @sa              HAL_1200PhyRead()
 */
uint32_t        HAL_1200PhyWrite            (uint8_t phyAddr, uint32_t regAddr, uint16_t data);

/*!
 * @brief           Interrupt enable.
 *
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Enables the external interrupt (INT_N) in the host processor.
 *
 * @sa              HAL_DisableIrq()
 */
uint32_t        HAL_EnableIrq           (void);

/*!
 * @brief           Interrupt disable.
 *
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Disables the external interrupt (INT_N) in the host processor.
 *
 * @sa              HAL_EnableIrq()
 */
uint32_t        HAL_DisableIrq          (void);

/*!
 * @brief           Get interrupt enable status.
 *
 * @return          Enable status
 *                  - 1         Interrupt enabled.
 *                  - 0         Interrupt disabled.
 *
 * @details         Disables the external interrupt (INT_N) in the host processor.
 *
 * @sa
 */
uint32_t        HAL_GetEnableIrq        (void);

/*!
 * @brief           Set pending interrupt.
 *
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Sets the external interrupt (INT_N) as pending causing the IRQ handler
 *                  to be executed. This is used for deferred operations.
 *
 * @sa
 */
uint32_t        HAL_SetPendingIrq       (void);


/*!
 * @brief           Register device IRQ callback function.
 *
 * @param [in]      intCallback     Callback function.
 * @param [in]      hDevice         Pointer to device handler.
 * @return          Status
 *                  - #ADI_HAL_SUCCESS      Call completed successfully.
 *                  - #ADI_HAL_ERROR        Error encountered during function execution.
 *
 * @details         Registers a callback for the PHY interrupt.
 *
 * @sa
 */
uint32_t        HAL_RegisterCallback    (HAL_Callback_t const *intCallback, void *hDevice);

#ifdef __cplusplus
}
#endif

#endif /* HAL_H */

/** @}*/
