/*****************************************************************************
 * 	  $Author: mquaizar $
 *****************************************************************************/

/**
 * @file csp_gpio.h                
 * @brief Client Support Pacakge API access to the GPIO HAL Library   	
 *
 */

#ifndef __CSP_GPIO_H
#define __CSP_GPIO_H

/*****************************************************************************
 *	Public Includes
 *****************************************************************************/
#include <stdint.h>
#include "gpio.h"
/*****************************************************************************
 *	Public External References
 *****************************************************************************/

/*****************************************************************************
 *	Public Defines & Macros
 *****************************************************************************/

/*****************************************************************************
 *	Public Typedefs & Enumerations
 *****************************************************************************/
typedef enum
{
   CSP_GPIO_UNKNOWN   = 0,
   CSP_GPIO_LOW       = 1,
   CSP_GPIO_HIGH      = 2,
}csp_gpio_pin_state_t;

typedef struct{
	uint8_t*                name;
	GPIO_TypeDef*           port;
        uint16_t                pin;
        csp_gpio_pin_state_t    state;
}csp_gpio_instance_t;
/*****************************************************************************
 *	Public Function Prototypes 
 *****************************************************************************/
void GPIO_Init(csp_gpio_instance_t* gpio_inst, 
               uint8_t* name, 
               GPIO_TypeDef* port, 
               uint16_t pin );
uint8_t GPIO_Read(csp_gpio_instance_t* gpio_inst);
void GPIO_Write(csp_gpio_instance_t* gpio_inst, uint8_t data);
void GPIO_Toggle(csp_gpio_instance_t* gpio_inst);

#endif /* __CSP_GPIO_H */
 