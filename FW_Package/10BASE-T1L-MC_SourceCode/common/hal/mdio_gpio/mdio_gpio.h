/*
 *---------------------------------------------------------------------------
 *
 * Copyright (c) 2020 Analog Devices, Inc. All Rights Reserved.
 * This software is proprietary <and confidential> to Analog Devices, Inc.
 * and its licensors.By using this software you agree to the terms of the
 * associated Analog Devices Software License Agreement.
 *
 *---------------------------------------------------------------------------
 */

#ifndef _MDIO_H
#define _MDIO_H

#include <stdint.h>
#include "boardsupport.h"
#include "ADIN1100_addr_rdef_22.h"

uint32_t mdioGPIORead(uint8_t phyAddr, uint8_t phyReg, uint16_t *phyData );
uint32_t mdioGPIOWrite(uint8_t phyAddr, uint8_t phyReg, uint16_t phyData );
uint32_t mdioGPIORead_cl22(uint8_t phyAddr, uint32_t phyReg, uint16_t *phyData );
uint32_t mdioGPIOWrite_cl22(uint8_t phyAddr, uint32_t phyReg, uint16_t phyData );
uint32_t mdioGPIORead_cl45(uint8_t phyAddr, uint32_t phyReg, uint16_t *phyData );
uint32_t mdioGPIOWrite_cl45(uint8_t phyAddr, uint32_t phyReg, uint16_t phyData );

#endif /*MDIO_H*/