#ifndef __UART_H__
#define __UART_H__

#include<ioCC2530.h>
#include"dk_system.h"

typedef void (*Uart_Fun)(unsigned  char  c);

void HalUart0Init(void);

void HalUart0SendByte(char ch);

void HalUart0SendString(unsigned char *str);

void HalUart1Init(void);


void HalUart1SendByte(char ch);

void HalUart1RegRx(Uart_Fun  CallBack);

void HalUart1SendString(unsigned char *str);

#endif
