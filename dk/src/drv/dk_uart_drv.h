#ifndef  DK_UART_DRV_H
#define  DK_UART_DRV_H
#include "dk_system.h"

typedef  void (*Uart_Drv_Fun)(uint8_t*  data,int  len);

void     Uart1DrvInit();
void     Uart1ReceiveCallBack(Uart_Drv_Fun fun);

void     Uart0DrvInit();
void     Uart0ReceiveCallBack(Uart_Drv_Fun fun);
#endif
