/*****************************************************************************
 * 	  $Author: mquaizar $
 *****************************************************************************/

 /**
 * @file bsp.c              
 *                                             
 */

/*****************************************************************************
 *	Private Includes
 *****************************************************************************/
#include <stdint.h>
#include <string.h>
#include "bsp.h" 
#include "main.h"

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

csp_gpio_instance_t output_PA5;
csp_gpio_instance_t input_PC13;



/*****************************************************************************
 *	Private Function Prototypes 
 *****************************************************************************/
static void BSP_Gpio_Init(void);
/*****************************************************************************
 *	Public Functions
 *****************************************************************************/

/*****************************************************************************
 *  BSP_Init
 *    void
 *  Returns:
 *    void 
 *  Description:
 *    Initilize all hardware resource
 *    
 *    
 *    
 *****************************************************************************/
void BSP_Init(void)
{
  
  BSP_Gpio_Init();
 
}

/*****************************************************************************
 *  BSP_Gpio_Init
 *  Initilize gpio signals
 *    void
 *  Returns:
 *    void 
 *  Description:
 *    Describe here
 *    
 *    
 *    
 *****************************************************************************/
static void BSP_Gpio_Init(void)
{
  
  GPIO_Init(&output_PA5, 
            "output_PA5", 
            LD2_GPIO_Port, 
            LD2_Pin );
  
  GPIO_Init(&input_PC13, 
            "input_PC13", 
            B1_GPIO_Port, 
            B1_Pin );
 
}


/*****************************************************************************
 *  BSP Application Interface to Module Variables
 *    Param1
 *  Returns:
 *    resource signal handle.  
 *  Description:
 *    Describe here
 *    
 *    
 *    
 *****************************************************************************/  

//GPIO
csp_gpio_instance_t* BSP_Output_PA5(void)
{
  return(&output_PA5);
}

csp_gpio_instance_t* BSP_Input_PC13(void)
{
  return(&input_PC13);
}

