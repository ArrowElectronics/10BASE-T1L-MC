/* Board Support - Initialization of GPIO, MDIO_GPIO Bit Banging, UART and LED Initializations  */

#include <ctype.h>
#include "boardsupport.h"
#include "bsp_config.h"
#include "gpio.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "mxc_device.h"
#include "mxc_delay.h"
#include "nvic_table.h"
#include "pb.h"
#include "board.h"
#include"mdio_gpio.h"
#include "uart.h"
#include"boardsupport.h"





//Definitions
#define true				1
#define false				0


char aDebugString [150u];

//Globals

mxc_gpio_cfg_t gpio_MDIO;
mxc_gpio_cfg_t gpio_MDC;
mxc_gpio_cfg_t gpio_HEARTBEAT;
mxc_gpio_cfg_t gpio_RESET;


/*GPIO */
//uint8_t gpioMemory[ADI_GPIO_MEMORY_SIZE];



void BSP_GPIO_Init()
{

	//Setup MDIO pin to input.
	gpio_MDIO.port = MDIO_PORT_0;
	gpio_MDIO.mask = MDIO_PIN_3;
	gpio_MDIO.pad = MXC_GPIO_PAD_NONE;
	gpio_MDIO.func = MXC_GPIO_FUNC_OUT;
	MXC_GPIO_Config(&gpio_MDIO);

	/* Setup MDC pin- pin2 to output. */
	gpio_MDC.port = MDC_PORT_0;
	gpio_MDC.mask = MDC_PIN_2;
	gpio_MDC.pad = MXC_GPIO_PAD_NONE;
	gpio_MDC.func = MXC_GPIO_FUNC_OUT;
	MXC_GPIO_Config(&gpio_MDC);
	MXC_GPIO_OutClr(gpio_MDC.port, gpio_MDC.mask);

	/* Setup HeartBeat LED Pin to out */
	gpio_HEARTBEAT.port = MXC_HEARTBEAT_PORT;
	gpio_HEARTBEAT.mask = MXC_HEARTBEAT_PIN_5;
	gpio_HEARTBEAT.pad = MXC_GPIO_PAD_PULL_DOWN;
	gpio_HEARTBEAT.func = MXC_GPIO_FUNC_OUT;
	MXC_GPIO_Config(&gpio_HEARTBEAT);
	MXC_GPIO_OutSet(gpio_HEARTBEAT.port, gpio_HEARTBEAT.mask);

	/* Setup Reset pin to out */
	gpio_RESET.port = MXC_RESET_GPIO;
	gpio_RESET.mask = MXC_RESET_PIN_8;
	gpio_RESET.pad = MXC_GPIO_PAD_NONE;
	gpio_RESET.func = MXC_GPIO_FUNC_OUT;
	MXC_GPIO_Config(&gpio_RESET);

	MXC_GPIO_OutSet(gpio_RESET.port, gpio_RESET.mask);
	MXC_Delay(10000);
	MXC_GPIO_OutClr(gpio_RESET.port, gpio_RESET.mask);
	MXC_Delay(10000);
	MXC_GPIO_OutSet(gpio_RESET.port, gpio_RESET.mask);
	MXC_Delay(100000);
}


/*
* @brief GPIO manipulating
*
* @param [in]      set - true/false
* @param [in]      Port - which GPIO port
* @param [in]      Pins - which GPIO pin
* @param [out]     none
* @return none
*
* @details
*
* @sa
*/
void BSP_GpioSetPin(bool set, mxc_gpio_regs_t* port, uint32_t mask)
{
   if (set)
   {
	   MXC_GPIO_OutSet(port, mask); //
   }
   else
   {
	   MXC_GPIO_OutClr(port, mask);
   }

}

/*
* @brief Helper for MDIO GPIO Clock toggle
*
* @param [in]      set - true/false
* @param [out]     none
* @return 0
*
* @details
*
* @sa
*/
uint32_t BSP_SetPinMDC(bool set)
{
   if (set)
   {
	   MXC_GPIO_OutSet(gpio_MDC.port, gpio_MDC.mask);
   }
   else
   {
	   MXC_GPIO_OutClr(gpio_MDC.port, gpio_MDC.mask);
   }
   return 0;
}


/*
* @brief Helper for MDIO GPIO Read Pin value
*
* @param [in]      none
* @param [out]     none
* @return pin value
*
* @details
*
* @sa
*/
uint16_t BSP_GetPinMDInput(void)
{
   uint16_t data = 0;
   uint16_t val = 0;
   data = MXC_GPIO_InGet (gpio_MDIO.port, gpio_MDIO.mask);
   if((data & MDIO_PIN_3) == MDIO_PIN_3)
   {
	   val = 1;
   }
   else
   {
	   val = 0;
   }

   return val;
}

/*
* @brief Helper for MDIO GPIO Changes pin in/out
*
* @param [in]      output - true/false
* @param [out]     none
* @return none
*
* @details
*
* @sa
*/
void BSP_ChangeMDIPinDir(bool output)
{
 if (output == true)
 {

	 gpio_MDIO.func = MXC_GPIO_FUNC_OUT;
	 MXC_GPIO_Config(&gpio_MDIO);
 }
 else
 {

	 gpio_MDIO.func = MXC_GPIO_FUNC_IN;
	 MXC_GPIO_Config(&gpio_MDIO);
 }

}

/*
* @brief Helper for MDIO GPIO Changes ouptut pin value
*
* @param [in]      output - true/false
* @param [out]     none
* @return 0
*
* @details
*
* @sa
*/
uint32_t BSP_SetPinMDIO(bool set)
{
   if (set)
   {

	 MXC_GPIO_OutSet(gpio_MDIO.port, gpio_MDIO.mask);
   }
   else
   {
	   MXC_GPIO_OutClr(gpio_MDIO.port, gpio_MDIO.mask);
   }
   return 0;
}

#ifdef HW_RESET
// Hardware reset pin of Maxim MCU
void BSP_HWReset(bool set)
{
 if(set == true)
 {
   MXC_GPIO_OutSet(MXC_GPIO_PORT_0, MXC_GPIO_PIN_12);
 }
 else
 {
   MXC_GPIO_OutClr(MXC_GPIO_PORT_0, MXC_GPIO_PIN_12);
 }
}
#endif


/*
* Heartbeat LED, Green LED
*/
void BSP_HeartBeat(void)
{
	//MXC_Delay(500000);
	MXC_GPIO_OutClr(MXC_HEARTBEAT_PORT, MXC_HEARTBEAT_PIN_5);

}

//HeartBeat LED Blink at 80% Duty Cycle
void BSP_HeartBeat_BLINK(void)
{
	MXC_GPIO_OutClr(MXC_HEARTBEAT_PORT, MXC_HEARTBEAT_PIN_5);
	MXC_Delay(400000);
	MXC_GPIO_OutSet(MXC_HEARTBEAT_PORT, MXC_HEARTBEAT_PIN_5);
	MXC_Delay(100000);
}


/*
 Initialization of UART (UART 1) at baud rate of 115200
 */
uint32_t UartInit(void)
{
    uint32_t error = SUCCESS;
    error = MXC_UART_Init(UART1, UART_BAUD, MAP_A);
    return error;
}

uint32_t BSP_InitSystem(void)
{
    uint32_t error = SUCCESS;

    do
    {
    	if( SUCCESS != UartInit())
    	{
    		break;
    	}

        BSP_GPIO_Init();
    }while(0);

    return (error);
}

 /*
 * Debug output to UART @115200 kbps
 */
 void msgWrite(char * ptr)
 {
    int len = strlen(ptr);
     /*Actual message*/

     sumbmitTxBuffer((uint8_t*)ptr,len);
 }
 void common_Fail(char *FailureReason)
 {
     char fail[] = "Failed: ";
     char term[] = "\n\r";

     /* Ignore return codes since there's nothing we can do if it fails */
     msgWrite(fail);
     msgWrite(FailureReason);
     msgWrite(term);
  }

 void common_Perf(char *InfoString)
 {
     char term[] = "\n\r";

     /* Ignore return codes since there's nothing we can do if it fails */
     msgWrite(InfoString);
     msgWrite(term);
 }


/* Write function for UART transfer buffer  */
 uint32_t sumbmitTxBuffer(uint8_t *pBuffer, int nbBytes)
 {
     uint32_t error = 0;

     MXC_UART_Write(UART1, pBuffer, &nbBytes);
 return (error);
 }



