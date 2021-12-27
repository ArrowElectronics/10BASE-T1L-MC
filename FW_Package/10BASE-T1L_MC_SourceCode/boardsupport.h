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

#ifndef BOARDSUPPORT_H
#define BOARDSUPPORT_H

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "bsp_config.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern char aDebugString [150u];

#define HAL_ALIGNED_PRAGMA(n)       ADI_ALIGNED_PRAGMA(n)
#define HAL_ALIGNED_ATTRIBUTE(n)    ADI_ALIGNED_ATTRIBUTE(n)

#define UART1 						MXC_UART1
#define UART_BAUD					115200



#define ADUCM4050_SYSTEM_SPEED_HZ       (26000000u)
#define ADUCM4050_TIMER_SPEED_10HZ      (40625)

void common_Fail(char *FailureReason);
void common_Perf(char *InfoString);

#define DEBUG_MESSAGE(...) \
  do { \
    sprintf(aDebugString,__VA_ARGS__); \
    common_Perf(aDebugString); \
  } while(0)

#define DEBUG_RESULT(s,result,expected_value) \
  do { \
    if ((result) != (expected_value)) { \
      sprintf(aDebugString,"%s  %d", __FILE__,__LINE__); \
      common_Fail(aDebugString); \
      sprintf(aDebugString,"%s Error Code: 0x%08X\n\rFailed\n\r",(s),(result)); \
      common_Perf(aDebugString); \
      exit(0); \
    } \
  } while (0)

/*
* Driver Version
*/
typedef struct _ADUCM4050_LIB_VERSION
{
  uint16_t api;        /*!< API version */
  uint16_t sil;        /*!<  Silicon version*/
} ADUCM4050_LIB_VERSION;

typedef void (* ADI_CB) (  /*!< Callback function pointer */
    void      *pCBParam,         /*!< Client supplied callback param */
    uint32_t   Event,            /*!< Event ID specific to the Driver/Service */
    void      *pArg);            /*!< Pointer to the event specific argument */

/*Functions prototypes*/
uint32_t BSP_InitSystem(void);          /* Initialization of GPIO of MCU */
uint32_t BSP_SetPinMDC(bool set);       /* Configure GPIO Pins as Management Data Clock (MDIO_GPIO Bit Banging) */
uint32_t BSP_SetPinMDIO(bool set);      /* Configure GPIO as MDIO Out (MDIO_GPIO Bit Banging) */
uint16_t BSP_GetPinMDInput(void);       /* Get the MDIO Input at MCU GPIO */
void BSP_ChangeMDIPinDir(bool output);  /* Change the MDIO direction In <--> Out */
uint32_t sumbmitTxBuffer(uint8_t *pBuffer, int nbBytes);

void		BSP_HWReset			(bool set);     /* HW Reset Function */
void		BSP_HeartBeat_BLINK		(void);     /* Blink the MCU Power (Heat Beat) LED at 80% Duty Cycle */
void		BSP_HeartBeat			(void);     /* Continuously glow the MCU Power (Heart Beat) LED */


/* Functions used for Debug on UART (future Use)*/
extern void msgWrite(char * ptr);
uint32_t UartInit();
uint32_t sendTxUart(uint8_t* txdata, uint32_t nbytes);



#ifdef __cplusplus
}
#endif

#endif /* BOARDSUPPORT_H */
