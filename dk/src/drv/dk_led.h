#ifndef  HAL_LED_H
#define  HAL_LED_H

#include "dk_gpio.h"
#include "dk_config.h"

#define RED_LED_PORT       LED_0_PORT
#define RED_LED_PIN        LED_0_PIN

#define GREEN_LED_PORT     LED_1_PORT
#define GREEN_LED_PIN      LED_1_PIN

#define LED_OPEN(Port,Pin) HalGPioSetVal(Port,Pin,GPIO_H)
#define LED_OFF(Port,Pin)  HalGPioSetVal(Port,Pin,GPIO_L)

#define RED_LED_OPEN()     LED_OPEN(RED_LED_PORT,RED_LED_PIN)
#define RED_LED_OFF()      LED_OFF (RED_LED_PORT,RED_LED_PIN)
#define GREEN_LED_OPEN()   LED_OPEN(GREEN_LED_PORT,GREEN_LED_PIN)
#define GREEN_LED_OFF()    LED_OFF(GREEN_LED_PORT,GREEN_LED_PIN)

void    HalLedInit();
#endif