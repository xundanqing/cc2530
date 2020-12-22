#include "dk_uart.h"
#include "dk_config.h"

Uart_Fun Uart0_CallBack;
Uart_Fun Uart1_CallBack;
/*****************************************************************************
 Prototype    : HalUart0Init
 Description  : 串口0 初始化
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
void HalUart0Init(void)
{
 #if (UART_CONFIG == 0)
  PERCFG&=  ~0x01;       
  P0SEL |=   0x0c;       
  P2DIR &=  ~0XC0;  
 #endif

 #if(UART_CONFIG == 1)
  PERCFG |= 0x01;	
  P1SEL  |= 0X30;
  P2DIR  &=~0XC0 ;
 #endif
 
  U0CSR |=   0x80;     
  U0GCR |=   11;          
  U0BAUD|=   216;       
  UTX0IF =   0;          
  U0CSR |=   0X40;       
  IEN0  |=   0x84;          
}
/*****************************************************************************
 Prototype    : HalUart0SendByte
 Description  : 串口 0 发送 字节
 Input        : char ch  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalUart0SendByte(char ch)
{
  U0DBUF = ch;
  while(UTX0IF == 0);
  UTX0IF = 0;
}
/*****************************************************************************
 Prototype    : HalUart0SendString
 Description  : 发送字符串
 Input        : unsigned char *str  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/23
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalUart0SendString(unsigned char *str)
{
  while(*str !='\0')
  {
    HalUart0SendByte(*str++);
  }
}
/*****************************************************************************
 Prototype    : 串口0接收中断
 Description  : 
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
#pragma vector = URX0_VECTOR 
  __interrupt void UART0_ISR(void) 
{ 
  char c = 0;
  URX0IF = 0;    
  c = U0DBUF;  
  if(Uart0_CallBack){
     Uart0_CallBack(c);
  }
}
/*****************************************************************************
 Prototype    : HalUart1Init
 Description  : 串口1 初始化
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

void HalUart1Init(void)
{
#if (UART_CONFIG == 0)
  PERCFG&=  ~0x02;       
  P0SEL |=   0x30;       
  P2DIR &=  ~0XC0; 
#endif
#if(UART_CONFIG == 1)
  PERCFG|=   0x02;       
  P1SEL |=   0xC0;       
  P2DIR &=  ~0XC0; 
#endif
  U1CSR |=   0x80;     
  U1GCR |=   11;          
  U1BAUD|=   216;       
  UTX1IF =   0;          
  U1CSR |=   0X40;       
  IEN0  |=   0x88;          
}

/*****************************************************************************
 Prototype    : HalUart0SendByte
 Description  : 串口 0 发送 字节
 Input        : char ch  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalUart1SendByte(char ch)
{
  U1DBUF = ch;
  while(UTX1IF == 0);
  UTX1IF = 0;
}
/*****************************************************************************
 Prototype    : HalUart0SendString
 Description  : 发送字符串
 Input        : unsigned char *str  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/23
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalUart1SendString(unsigned char *str)
{
  while(*str !='\0')
  {
    HalUart1SendByte(*str++);
  }
}
/*****************************************************************************
 Prototype    : HalUart1RegRx
 Description  : 串口处理函数
 Input        : Uart_Fun  CallBack  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalUart1RegRx(Uart_Fun  CallBack)
{
 Uart1_CallBack = CallBack;
}
/*****************************************************************************
 Prototype    : 串口0接收中断
 Description  : 
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
#pragma vector = URX1_VECTOR 
  __interrupt void UART1_ISR(void) 
 { 
 
  char c = 0;
  URX1IF = 0;    
  c = U1DBUF;  
  if(Uart1_CallBack){
     Uart1_CallBack(c);
  }
 }

