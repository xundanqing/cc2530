#include "dk_uart.h"
#include "dk_system.h"
#include "dk_timer.h"
HalTimer_Fun   HalTimer1Fun;
/*****************************************************************************
 Prototype    : HalTimer1Init
 Description  : 定时器 1 初始化
 Input        : None
 Output       : None    
 Return Value : 
 Calls        : 
 Called By    :  
                 32000000/2/128 =  125000 HZ
 T1CC0H/T1CC0L   100ms =  12500
                 10ms  =  1250
                 1ms   =  125
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalTimer1Init(int cnt)
{  
    EA = 0;
    cnt  =  cnt*125;
    T1CC0L   = cnt &0xff;   
    T1CC0H   = cnt >>  8;   
    T1CCTL0 |= 0x04;  
    T1IE     =    1;        
    T1OVFIM  =    1;        
    EA       =    1;          
    T1CTL    = 0x0c;     
 }
/*****************************************************************************
 Prototype    : HalTimer1Start
 Description  : 定时器1开始
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalTimer1Start()
{
  T1CTL |= 0x02;
}
/*****************************************************************************
 Prototype    : HalTimer1Reset
 Description  : 定时器1 清 0
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalTimer1Reset()
{
  T1CNTH = 0x00;
  T1CNTL = 0x00;
}
/*****************************************************************************
 Prototype    : HalTimer1Stop
 Description  : 定时器1结束
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalTimer1Stop()
{
  T1CTL &=~ 0x02;
}
/*****************************************************************************
 Prototype    : HalTimer1CallBack
 Description  : Timer1 回调函数
 Input        : HalTimer_Fun Fun  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalTimer1CallBack(HalTimer_Fun Fun)
{
    HalTimer1Fun =  Fun;
}
/*****************************************************************************
 Prototype    : pragma vector = T1_VECTOR
 Description  : 定时器 1 中断
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
#pragma vector = T1_VECTOR
  __interrupt void Timer1_Int()
  {
     T1STAT &= ~0x01;    
     if(HalTimer1Fun)
        HalTimer1Fun();
    
  }
