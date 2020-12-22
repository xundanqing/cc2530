
#include "dk_gpio.h"
#include "dk_config.h"

/*****************************************************************************
 Prototype    : LedSetVal
 Description  : Led…Ë÷√µ∆
 Input        : GPIO_Port Port     
                GPIO_Port_Pin Pin  
                GPIO_Val  val      
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/13
    Author       : x
    Modification : Created function

*****************************************************************************/
void  LedSetVal(GPIO_Port Port,GPIO_Port_Pin Pin,GPIO_Val  val)
{
  HalGPioSetVal(Port,Pin,val);
}
/*****************************************************************************
 Prototype    : HalLedInit
 Description  : led≥ı ºªØ
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/24
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalLedInit()
{
  HalGPioInit(LED_0_PORT,GPIO_OUT,LED_0_PIN);
  HalGPioInit(LED_1_PORT,GPIO_OUT,LED_1_PIN);
  HalGPioInit(LED_2_PORT,GPIO_OUT,LED_2_PIN);
  HalGPioInit(LED_3_PORT,GPIO_OUT,LED_3_PIN);
  HalGPioInit(LED_4_PORT,GPIO_OUT,LED_4_PIN);
  HalGPioInit(LED_5_PORT,GPIO_OUT,LED_5_PIN);
  HalGPioInit(LED_6_PORT,GPIO_OUT,LED_6_PIN);
  HalGPioInit(LED_7_PORT,GPIO_OUT,LED_7_PIN);
 
}


