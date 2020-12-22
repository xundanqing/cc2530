#include "dk_uart.h"
#include "dk_timer.h"
#include "dk_uart_drv.h"

#define  MAX_IR_DATA_LE   128

static   Uart_Drv_Fun     Ir_fun;
static   uint8_t          Rev_sta;
static   uint8_t          Rev_Buffer[MAX_IR_DATA_LE];

/*****************************************************************************
 Prototype    : Uart_Fun
 Description  : 红外解码函数
 Input        : unsigned  char  c  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/26
    Author       : x
    Modification : Created function

*****************************************************************************/
void   Uart1ReceiveByte(unsigned  char  c)
{
  if(Rev_sta == 0)
  {
    HalTimer1Start();
  }
  
  if(Rev_sta <  MAX_IR_DATA_LE)
  { 
    HalTimer1Reset();
    Rev_Buffer[Rev_sta++] = c;
  }
}
/*****************************************************************************
 Prototype    : HalIrTimeOutCallBack
 Description  : 接收超时处理
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
void  Uart1TimeOut()
{
  Rev_sta |= 0x80;
  HalTimer1Stop();
  if(Ir_fun){
    Ir_fun(Rev_Buffer,Rev_sta - 0x80);
  }
  Rev_sta = 0;
}
/*****************************************************************************
 Prototype    : HalIrReceiveCallBack
 Description  : 红外接收回调
 Input        : IR_Fun fun  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/1
    Author       : x
    Modification : Created function

*****************************************************************************/
void  Uart1ReceiveCallBack(Uart_Drv_Fun fun)
{
  Ir_fun = fun;
}
/*****************************************************************************
 Prototype    : HalIrInit
 Description  : 红外串口程序
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
void  Uart1DrvInit()
{   
    HalTimer1Init(5);
    HalTimer1CallBack(Uart1TimeOut);
    HalUart1RegRx(Uart1ReceiveByte);
}


