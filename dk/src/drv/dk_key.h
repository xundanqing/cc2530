#ifndef  HAL_KEY_H
#define  HAL_KEY_H
#include "dk_config.h"
void  LedSetVal(GPIO_Port Port,GPIO_Port_Pin Pin,GPIO_Val  val);

void  HalKeyConfig(GPIO_Port  Port,GPIO_DIR  Dir, 
                   GPIO_Port_Pin Pin , GPIO_Edge Edge,Pin_IntFun  Fun);
#endif