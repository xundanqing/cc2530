#include "dk_rf.h"
#include "dk_uart.h"
#include "dk_system.h"
#include "dk_adc.h"
#include "dk_gpio.h"
#include "dk_led.h"
#include "dk_key.h"
#include "dk_flash.h"
#include "dk_rfvp.h"
#include "dk_timer.h"

/*****************************************************************************
 Prototype    : InitialTable
 Description  : 系统初始化
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
HalSystem  HalInitialTable[] = {
  Hal32Mosc,
  HalAdcInit,
  HalUart1Init,
  HalUart0Init,  
};
/*****************************************************************************
 Prototype    : HalSystemInit
 Description  : System 初始化
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
void  HalSystemInit()
{
  for(int i = 0; i <4;i++){
      HalInitialTable[i]();
  }
}


void main(void)
{
  HalSystemInit();
  DkRfVpInit();
  while(1)
  {
       HalUart0SendString("System run\r\n");
       delay_ms(2000);
  }
  
}

