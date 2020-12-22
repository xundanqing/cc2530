#ifndef  DK_CONFIG_H
#define  DK_CONFIG_H

#include "dk_gpio.h"
#define  UART_CONFIG  0

#define LED_0_PORT    GPIO_1
#define LED_0_PIN     Pin_0
#define LED_1_PORT    GPIO_1
#define LED_1_PIN     Pin_1
#define LED_2_PORT    GPIO_1
#define LED_2_PIN     Pin_2
#define LED_3_PORT    GPIO_1
#define LED_3_PIN     Pin_3

#define KEY_0_PORT    GPIO_0
#define KEY_0_PIN     Pin_0
#define KEY_1_PORT    GPIO_0 
#define KEY_1_PIN     Pin_1
#define KEY_2_PORT    GPIO_0
#define KEY_2_PIN     Pin_7

#if(UART_CONFIG == 1)
#define UART0_PORT     GPIO_1
#define UART0_RX_PIN   Pin_4
#define UART0_TX_PIN   Pin_5
#define UART1_PORT     GPIO_1
#define UART1_RX_PIN   Pin_7
#define UART1_TX_PIN   Pin_6
#define LED_4_PORT     GPIO_0
#define LED_4_PIN      Pin_2
#define LED_5_PORT     GPIO_0
#define LED_5_PIN      Pin_3
#define LED_6_PORT     GPIO_0
#define LED_6_PIN      Pin_4
#define LED_7_PORT     GPIO_0
#define LED_7_PIN      Pin_5
#endif

#if(UART_CONFIG == 0)
#define UART0_PORT     GPIO_0
#define UART0_RX_PIN   Pin_2
#define UART0_TX_PIN   Pin_3
#define UART1_PORT     GPIO_0
#define UART1_RX_PIN   Pin_5
#define UART1_TX_PIN   Pin_4
#define LED_4_PORT     GPIO_1
#define LED_4_PIN      Pin_4
#define LED_5_PORT     GPIO_1
#define LED_5_PIN      Pin_5
#define LED_6_PORT     GPIO_1
#define LED_6_PIN      Pin_6
#define LED_7_PORT     GPIO_1
#define LED_7_PIN      Pin_7
#endif


#endif








