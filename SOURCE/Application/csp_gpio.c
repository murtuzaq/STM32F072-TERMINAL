/*****************************************************************************
 * 	  $Author: mquaizar $
 *****************************************************************************/

 /**
 * @file csp_gpio.c                                     
 *                                             
 */

/*****************************************************************************
 *	Private Includes
 *****************************************************************************/
#include "csp_gpio.h"
#include "gpio.h"
/*****************************************************************************
 *	Private External References
 *****************************************************************************/

/*****************************************************************************
 *	Private Defines & Macros
 *****************************************************************************/

/*****************************************************************************
 *	Private Typedefs & Enumerations
 *****************************************************************************/

/*****************************************************************************
 *	Private Variables
 *****************************************************************************/

/*****************************************************************************
 *	Private Function Prototypes 
 *****************************************************************************/

/*****************************************************************************
 *	Public Functions
 *****************************************************************************/

/*****************************************************************************
 *	Private Functions
 *****************************************************************************/


/*****************************************************************************
 *  GPIO_Init
 *  Parameters:
 *    csp_gpio_instance_t* gpio_inst -> instance to csp gpio handle;
 *    uint8_t name -> instance string name;
 *    GPIO_TypeDef* port -> pointer to GPIO peripheral for the PORT
 *    uint16_t pin -> bit shifted pin location to address PORT IO. 
 *
 *  Returns:
 *     void
 * 
 *  Description:
 *    Initializes CSP GPIO handle for a single GPIO IO port pin.
 *    Intended for IO that is used as either output, or input.  
 *    Hardware initlization of PORT IO is done elsewhere (HAL).  
 *    
 *    
 *    
 *****************************************************************************/
void GPIO_Init(csp_gpio_instance_t* gpio_inst, 
               uint8_t* name, 
               GPIO_TypeDef* port, 
               uint16_t pin )
{
  gpio_inst->name = name;
  gpio_inst->port = port;
  gpio_inst->pin = pin;
  gpio_inst->state = CSP_GPIO_UNKNOWN;
}

/*****************************************************************************
 *  GPIO_Read
 *  Parameters:
 *    csp_gpio_instance_t* gpio_inst -> instance to csp gpio handle;
 *
 *  Returns:
 *    0 - Port IO pin state is Low
 *    1 - Port IO pin state is Hight
 *
 *  Description:
 *    Read 0 or 1 from gpio port pin. 
 *    
 *    
 *    
 *****************************************************************************/
uint8_t GPIO_Read(csp_gpio_instance_t* gpio_inst)
{
  GPIO_TypeDef* port;
  uint16_t pin;
  GPIO_PinState state;
  
  port = gpio_inst->port;
  pin = gpio_inst->pin;
  
  state = HAL_GPIO_ReadPin(port, pin);
  
  if(state == GPIO_PIN_SET)
  {
    gpio_inst->state = CSP_GPIO_HIGH;
    return(1);
  }
  else
  {
    gpio_inst->state = CSP_GPIO_LOW;
    return(0);
  }
}

/*****************************************************************************
 *  GPIO_Write
 *  Parameters:
 *    csp_gpio_instance_t* gpio_inst -> instance to csp gpio handle;
 *    uint8_t data  ->   0 or 1 for GPIO state 
 *
 *  Returns:
 *    void 
 *
 *  Description:
 *    Write to GPIO pin with either a 0 or 1
 *    
 *    
 *    
 *****************************************************************************/
void GPIO_Write(csp_gpio_instance_t* gpio_inst, uint8_t data)
{
  GPIO_TypeDef* port;
  uint16_t pin;
  
  port = gpio_inst->port;
  pin = gpio_inst->pin;

  if (data == 1)
  {
    gpio_inst->state = CSP_GPIO_HIGH;
    HAL_GPIO_WritePin(port,pin, GPIO_PIN_SET);
  }
  else
  {
    gpio_inst->state = CSP_GPIO_LOW;
    HAL_GPIO_WritePin(port,pin, GPIO_PIN_RESET);
  }
    
}

/*****************************************************************************
 *  GPIO_Toggle
 *  Parameters:
 *    csp_gpio_instance_t* gpio_inst -> instance to csp gpio handle;
 *
 *  Returns:
 *    void 
 *
 *  Description:
 *    Toggle gpio port pin
 *    
 *    
 *    
 *****************************************************************************/
void GPIO_Toggle(csp_gpio_instance_t* gpio_inst)
{
  GPIO_TypeDef* port;
  uint16_t pin;
  
  port = gpio_inst->port;
  pin = gpio_inst->pin;
  
  if (gpio_inst->state == CSP_GPIO_HIGH)
  {
    gpio_inst->state = CSP_GPIO_LOW;
  }
  else if (gpio_inst->state == CSP_GPIO_LOW)
  {
    gpio_inst->state = CSP_GPIO_HIGH;
  }

  HAL_GPIO_TogglePin(port,pin);
  
    
}