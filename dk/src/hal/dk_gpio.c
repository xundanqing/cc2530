#include "dk_gpio.h"
#include <ioCC2530.h>
#include "dk_system.h"
#include "dk_uart.h"

Pin_IntFun  IntFun1[8];
Pin_IntFun  IntFun2[8];
/*****************************************************************************
 Prototype    : HalGPioIntFunReg
 Description  : 注册中断函数
 Input        : GPIO_Port  Port    
                GPIO_Port_Pin Pin  
                Pin_IntFun fun     
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/23
    Author       : x
    Modification : Created function

*****************************************************************************/
int   HalGPioExitIntFunReg(GPIO_Port  Port,GPIO_Port_Pin Pin,Pin_IntFun fun)
{
  if(Port ==  GPIO_0)
    IntFun1[Pin] =  fun;

  if(Port == GPIO_1)
    IntFun2[Pin] =  fun;
  
  return  0;
}
/*****************************************************************************
 Prototype    : HalGPioInit
 Description  : GPIO 初始化
 Input        : GPIO_Port  Port    
                GPIO_DIR Dir       
                GPIO_Port_Pin Pin  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/20
    Author       : x
    Modification : Created function

*****************************************************************************/
void   HalGPioInit(GPIO_Port  Port,GPIO_DIR  Dir,GPIO_Port_Pin Pin)
{ 
  if(Port == GPIO_0)
  {
    P0SEL &=~(0X01 << Pin);
    Dir == GPIO_IN ? (P0DIR &=~(0X01 << Pin)) : (P0DIR |= (0X01 << Pin));
  }

  if(Port == GPIO_1)
  {
    P1SEL &=~(0X01 << Pin);
    Dir == GPIO_IN ? (P1DIR &=~(0X01 << Pin)) : (P1DIR |= (0X01 << Pin));  
  }
}
/*****************************************************************************
 Prototype    : HalGPioInt
 Description  : 设置中断
 Input        : GPIO_Port  Port    
                GPIO_Port_Pin Pin  
                GPIO_Edge Edge     
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/23
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalGPioExitInt(GPIO_Port  Port,GPIO_Port_Pin Pin,GPIO_Edge Edge)
{

  Port == GPIO_0 ? (P0IEN |= (0X01  << Pin)) : (P1IEN |= (0X01  << Pin));
  Port == GPIO_0 ? (PICTL |= (Edge  << 0) )  : (PICTL |= (Edge << 1));
  Port == GPIO_0 ? (IEN1  |= 0X20 ): (IEN2  |= 0x10);
  Port == GPIO_0 ? (P0IFG  = 0x00 ): (P1IFG = 0x00);
  EA = 1;
}
/*****************************************************************************
 Prototype    : HalGPioSetVal
 Description  : 设置PinVal
 Input        : GPIO_Port Port     
                GPIO_Port_Pin Pin  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/23
    Author       : x
    Modification : Created function

*****************************************************************************/
int   HalGPioSetVal(GPIO_Port Port,GPIO_Port_Pin Pin,GPIO_Val  val)
{
  if(val){
    Port == GPIO_0 ? (P0 |= (0X01 << Pin)) :(P1 |= (0X01 << Pin));
  }else{
    Port == GPIO_0 ? (P0 &= ~(0x01 <<Pin)) :(P1 &= ~(0x01 <<Pin));
  }
  return  0;
}
/*****************************************************************************
 Prototype    : pragma vector=P0INT_VECTOR
 Description  : 中断处理函数
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/23
    Author       : x
    Modification : Created function

*****************************************************************************/
#pragma vector=P0INT_VECTOR
  __interrupt void P0_ISR(void) 
 { 
  int  iseq;
  delay_ms(10); 
  for(iseq = 0;iseq <  7 ;iseq++)
  {
    if((P0IFG & (0x01 << iseq)) == (0x01 << iseq))
    {
      P0IFG &= ~(0x01 << iseq);
      if(IntFun1[iseq])
        IntFun1[iseq](iseq);
    }
  }
  P0IF  = 0;      
} 
/*****************************************************************************
 Prototype    : pragma vector=P1INT_VECTOR
 Description  : Port1 中断
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/23
    Author       : x
    Modification : Created function

*****************************************************************************/
#pragma vector=P1INT_VECTOR
  __interrupt void P1_ISR(void) 
 { 
  int  iseq;
  delay_ms(10); 
  for(iseq = 0;iseq <  7 ;iseq++)
  {
    if((P1IFG & (0x01 << iseq)) == (0x01 << iseq))
    {
      P1IFG &= ~(0x01 << iseq);
      if(IntFun2[iseq])
        IntFun2[iseq](iseq);
    }
  }
  P1IF  = 0;       
} 









