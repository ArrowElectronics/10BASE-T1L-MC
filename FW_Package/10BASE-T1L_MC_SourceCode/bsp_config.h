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

#ifndef _BSP_CFG_H
#define _BSP_CFG_H


/* GPIO MDIO, pins 2,3 as per pin configuration of MAX32660 MCU*/
#define MDIO_PORT_0             MXC_GPIO0
#define MDIO_PIN_3              MXC_GPIO_PIN_3 //Maxim pin 3

#define MDC_PORT_0              MXC_GPIO0
#define MDC_PIN_2              	MXC_GPIO_PIN_2 //Maxim pin 2

#define MXC_HEARTBEAT_PORT		MXC_GPIO0
#define MXC_HEARTBEAT_PIN_5		MXC_GPIO_PIN_5 //Maxim pin 5

#define MXC_RESET_GPIO			MXC_GPIO0
#define MXC_RESET_PIN_8			MXC_GPIO_PIN_8 //Maxim Pin 8

#define SUCCESS 0u
#define FAILURE 1u

#define ON 1u
#define OFF 0u

#define DMA_ON true
#define DMA_OFF false

#endif /* BSP_CFG_H */
