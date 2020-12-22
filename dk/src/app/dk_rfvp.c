#include <string.h>
#include "dk_rf.h"
#include "dk_uart.h"
#include "dk_uart_drv.h"
/*****************************************************************************
 Prototype    : RfSetMacInfo
 Description  : 
 Input        : char* data  
                int len     
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/27
    Author       : x
    Modification : Created function

*****************************************************************************/
void RfSetMacInfo(uint8_t* data,int len)
{
   int  ret;
   ret = HalRfSetMac(data,len);
   if(!ret){
      HalRfInit();
      HalUart1SendString("OK\r\n");
   }else{
      HalUart1SendString("ERROR\r\n");
   }
}
/*****************************************************************************
 Prototype    : RfDataforward
 Description  : 数据转发
 Input        : char *data  
                int  len    
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/27
    Author       : x
    Modification : Created function

*****************************************************************************/
void  RfDataforward(uint8_t *data,int  len)
{
    HalRfSend(data,len);
    HalUart1SendString("OK\r\n");
}
/*****************************************************************************
 Prototype    : RfVpProcess
 Description  : 虚拟转发串口处理
 Input        : char *data  
                int  len    
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/27
    Author       : x
    Modification : Created function

*****************************************************************************/
void   RfVpProcess(uint8_t *data,int  len)
{
  if(!memcmp(data,"####",4))
  {
     RfSetMacInfo(&data[4],len-4);
  }

  if(!memcmp(data,"AAAA",4))
  {
     RfDataforward(&data[4],len - 4);
  }
  
}
/*****************************************************************************
 Prototype    : RfReceive
 Description  : Rf 接收回调
 Input        : char*  data  
                int  len     
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/3
    Author       : x
    Modification : Created function

*****************************************************************************/
void RfReceive(uint8_t*  data,int  len)
{
  int  i = 0;
  for(i = 0;i < len;i++)
  {
     HalUart1SendByte(data[i]);
  }
}
/*****************************************************************************
 Prototype    : DkRfVpInit
 Description  : 透传串口初始化
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
void   DkRfVpInit()
{
  Uart1DrvInit();
  HalRfReciveCallBack(RfReceive);
  Uart1ReceiveCallBack(RfVpProcess);
}


