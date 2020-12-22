#include"dk_uart.h"
#include"dk_timer_task.h"

static  SecondEvent  _SecondEvent[SECOND_TABLE_NUM];
/*****************************************************************************
 Prototype    : SecondEventInit
 Description  : M秒事件处理初始化
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/13
    Author       : x
    Modification : Created function

*****************************************************************************/
uint8_t   SecondEventInit()
{
  int  iSec;
  for(iSec = 0;iSec < SECOND_TABLE_NUM;iSec++)
  {
    _SecondEvent[iSec].SecCallFun = 0;
  }
  return 0;
}
/*****************************************************************************
 Prototype    : SecEventRegister
 Description  : M秒事件注册函数
 Input        : SecondEvent *pevent  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/3
    Author       : x
    Modification : Created function

*****************************************************************************/
uint8_t   SecEventRegister(SecondEvent *pevent)
{
  int iSec;
  for(iSec = 0;iSec < SECOND_TABLE_NUM;iSec++)
  {
    if(_SecondEvent[iSec].SecCallFun == 0)
    {
       _SecondEvent[iSec].id = iSec;
       _SecondEvent[iSec].SecDealCur = 0;
       _SecondEvent[iSec].SecSetCur  = 0; 
       _SecondEvent[iSec].SecDealSet = pevent->SecDealSet;
       _SecondEvent[iSec].SecSetting = pevent->SecSetting;
       _SecondEvent[iSec].SecCallFun = pevent->SecCallFun;
	   _SecondEvent[iSec].SecRelease = pevent->SecRelease;
       break;
    }
  }
  return  iSec  <  SECOND_TABLE_NUM ? 0 : iSec;
}
/*****************************************************************************
 Prototype    : _SecEventProcess
 Description  : M秒事件处理
 Input        : SecondEvent* pSecondEvent  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/3
    Author       : x
    Modification : Created function

*****************************************************************************/
uint8_t   _SecEventProcess(SecondEvent*  pSecondEvent)
{

  if(pSecondEvent->SecCallFun == 0)
    return  -1;
  
  pSecondEvent->SecSetCur++;
  if(pSecondEvent->SecSetCur == pSecondEvent->SecSetting)
  {
    pSecondEvent->SecCallFun();
    pSecondEvent->SecSetCur = 0;
    pSecondEvent->SecDealCur ++;
  }
  
  if(pSecondEvent->SecDealCur == pSecondEvent->SecDealSet)
  {
    if(pSecondEvent->SecDealCur!= SECOND_FOREVER)
    {
	   pSecondEvent->SecCallFun = 0;
	   if(pSecondEvent->SecRelease)
	   	 pSecondEvent->SecRelease(pSecondEvent->id);
	}
	pSecondEvent->SecDealCur = 0;
  }
  
  return   0;
}
/*****************************************************************************
 Prototype    : SecEventProcess
 Description  : 秒事件处理
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/3
    Author       : x
    Modification : Created function

*****************************************************************************/
uint8_t  SecEventProcess()
{
  for(int  i = 0;i < SECOND_TABLE_NUM;i++)
  {
     if(_SecondEvent[i].SecCallFun)
       _SecEventProcess(&_SecondEvent[i]);
  }
  return  0;
}



