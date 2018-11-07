 /*****************************************************************************
 * 	  $Author: mquaizar $
 *****************************************************************************/

/**
 * @file about.h              
 * @brief   STM32 TERMINAL PROGRAM											
 * @see www.murtuzaquaizar.com
 *
 *  The STM32 TERMINAL PROGRAM is a template firmware project that is able to .  
 *  send internal status information to a custom PC terminal program 
 *
 *  Reference:
 * @n  -> STM32F072RB NUCLEO BOARD
 * @n  -> stm32f072 DataSheet
 * @n  -> stm32f072 Reference Manual 
 *
 *  PLATFORM:
 * @n  MCU - ST STM32F072R8
 * @n IDE - IAR - Embedded Workbench 7.3
 * @n  COMPILER - EWARM-CD-7503-10751
 * 
 * PORTS DEFINITIONS
 * @n PA0  - NO_CONNECT
 * @n PA1  - NO_CONNECT
 * @n PA2  - USART2_TX
 * @n PA3  - USART2_RX
 * @n PA4  - NO_CONNECT
 * @n PA5  - NO_CONNECT 
 * @n PA6  - NO_CONNECT
 * @n PA7  - NO_CONNECT
 * @n PA8  - NO_CONNECT
 * @n PA9  - NO_CONNECT
 * @n PA10 - NO_CONNECT
 * @n PA11 - NO_CONNECT
 * @n PA12 - NO_CONNECT
 * @n PA13 - SWDIO
 * @n PA14 - SWCLK
 * @n PA15 - NO_CONNECT
 * @n PB0  - NO CONNECT
 * @n PB1  - NO_CONNECT
 * @n PB2  - NO_CONNECT
 * @n PB3  - NO_CONNECT
 * @n PB4  - NO_CONNECT
 * @n PB5  - NO_CONNECT
 * @n PB6  - NO_CONNECT
 * @n PB7  - NO_CONNECT
 * @n PB8  - NO_CONNECT
 * @n PB9  - NO_CONNECT
 * @n PB10 - NO_CONNECT
 * @n PB11 - NO_CONNECT
 * @n PB12 - NO_CONNECT
 * @n PB13 - NO_CONNECT
 * @n PB14 - NO_CONNECT
 * @n PB15 - NO_CONNECT
 * @n PC0  - NO_CONNECT
 * @n PC1  - NO_CONNECT
 * @n PC2  - NO_CONNECT
 * @n PC3  - NO_CONNECT
 * @n PC4  - NO_CONNECT
 * @n PC5  - NO_CONNECT
 * @n PC6  - NO_CONNECT
 * @n PC7  - NO_CONNECT
 * @n PC8  - NO_CONNECT
 * @n PC9  - NO_CONNECT
 * @n PC10 - NO_CONNECT
 * @n PC11 - NO_CONNECT
 * @n PC12 - NO_CONNECT
 * @n PC13 - GPIO_Output   - LD2 
 * @n PC14 - NO_CONNECT
 * @n PC15 - NO_CONNECT
 *                                             
 */

#ifndef __ABOUT_H
#define __ABOUT_H

/*****************************************************************************
 *	Public Includes
 *****************************************************************************/

/*****************************************************************************
 *	Public External References
 *****************************************************************************/

/*****************************************************************************
 *	Public Defines & Macros
 *****************************************************************************/

/*****************************************************************************
 *	Public Typedefs & Enumerations
 *****************************************************************************/

/*****************************************************************************
 *	Public Function Prototypes 
 *****************************************************************************/
char* ABOUT_Firmware_Version(void);
char* ABOUT_Copyright(void);

#endif /* __ABOUT_H */
 