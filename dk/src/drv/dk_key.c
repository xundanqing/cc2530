#include "dk_gpio.h"
#include "dk_config.h"
#include "dk_uart.h"
#include "dk_system.h"

/*****************************************************************************
 Prototype    : HalKeyConfig
 Description  : ≈‰÷√∞¥º¸
 Input        : GPIO_Port  Port     
                GPIO_DIR  Dir       
                \GPIO_Port_Pin Pin  
                GPIO_Edge Edge      
                Pin_IntFun  Fun     
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/13
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalKeyConfig(GPIO_Port  Port,GPIO_DIR  Dir, 
                   GPIO_Port_Pin Pin , GPIO_Edge Edge,Pin_IntFun  Fun)
{
  HalGPioInit(Port,Dir,Pin);
  HalGPioExitInt(Port,Pin,Edge);
  HalGPioExitIntFunReg(Port,Pin,Fun);
}

 