#ifndef   DK_TIMER_TASK_H
#define   DK_TIMER_TASK_H

#include "dk_timer.h"
#include "dk_system.h"

#define  SECOND_TABLE_NUM  (32)
#define  SECOND_FOREVER    (0XFFFFFFFF)


typedef void (*HalSecond)();
typedef void (*HalSecondRelease)(uint8_t id);
typedef  struct 
{
  uint8_t     id;
  int32_t     SecDealCur; 
  uint32_t    SecDealSet;
  uint32_t    SecSetCur;
  uint32_t    SecSetting;
  HalSecond   SecCallFun;
  HalSecondRelease  SecRelease;
  
}SecondEvent;

uint8_t  SecondEventInit();
uint8_t  SecEventProcess();
uint8_t  SecEventRegister(SecondEvent *pevent);


#endif
