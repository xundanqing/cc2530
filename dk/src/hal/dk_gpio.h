#ifndef  _GPIO_H
#define  _GPIO_H

typedef int  (*Pin_IntFun)(int num);
typedef enum  {GPIO_L,GPIO_H}GPIO_Val;
typedef enum  {GPIO_0,GPIO_1}GPIO_Port;
typedef enum  {GPIO_IN,GPIO_OUT}GPIO_DIR;
typedef enum  {GPIO_RASING_EGEGE,GPIO_FALING_EGEGE}GPIO_Edge; 
typedef enum  {Pin_0,Pin_1,Pin_2,Pin_3,Pin_4,Pin_5,Pin_6,Pin_7,Pin_8}GPIO_Port_Pin;

void   HalGPioInit(GPIO_Port  Port,GPIO_DIR  Dir,GPIO_Port_Pin Pin);
void   HalGPioExitInt(GPIO_Port  Port,GPIO_Port_Pin Pin,GPIO_Edge Edge);
int    HalGPioSetVal(GPIO_Port Port,GPIO_Port_Pin Pin,GPIO_Val  val);
int    HalGPioExitIntFunReg(GPIO_Port  Port,GPIO_Port_Pin Pin,Pin_IntFun fun);
void   HalGPioTest();
#endif
