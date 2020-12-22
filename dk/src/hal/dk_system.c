#include"dk_system.h"

uint8_t  SystemMode;
/*****************************************************************************
 Prototype    : Hal32Mosc
 Description  : 开启32M 外部晶振
 Input        : void  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void Hal32Mosc(void)
{
  CLKCONCMD &= ~0x40;           
  while(CLKCONSTA & 0x40);      
  CLKCONCMD &= ~0x47;           
}

/*****************************************************************************
 Prototype    : Hal16Mosc
 Description  : 开启 16　晶振
 Input        : void  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void Hal16Mosc(void)
{
  CLKCONCMD |=0x40;             
  while(1==(CLKCONSTA & 0x40)); 
  CLKCONCMD |=0x41;             
}
/*****************************************************************************
 Prototype    : delay_ms
 Description  : 延时ms
 Input        : int ms  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void delay_ms(int ms)
{
  int i,j;
  
  for (i=0; i<ms; i++)
    for (j=0; j<535*2; j++);
}

/*****************************************************************************
 Prototype    : SysPowerMode
 Description  : 进入睡模式唤醒
 Input        : char mode  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/24
    Author       : x
    Modification : Created function

*****************************************************************************/
void SysPowerMode(char mode)
{
  if(mode<4)
  {
    SLEEPCMD |= mode;
    delay_ms(5);
    PCON = 0X01;
  }
  else
  {
    PCON = 0;
  }
}