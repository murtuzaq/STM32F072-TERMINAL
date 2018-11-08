/*****************************************************************************
 * 	  $Author: mquaizar $
 *****************************************************************************/

/**
 * @file bsp.h              
 * @brief board support package  	
 *
 */

#ifndef __BSP_H
#define __BSP_H

/*****************************************************************************
 *	Public Includes
 *****************************************************************************/
#include "csp_gpio.h"


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
void BSP_Init(void);

//GPIO
csp_gpio_instance_t* BSP_Output_PA5(void);
csp_gpio_instance_t* BSP_Input_PC13(void);




#endif /* __BSP_H */
 