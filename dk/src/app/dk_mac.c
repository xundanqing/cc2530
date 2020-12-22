#include "dk_mac.h"
#include "dk_rf.h"
#include <string.h>

uint8_t   _DevMac[8];
uint8_t  _TankMac[8];

ZigbeeConfig  Conf = {
   .channel = 0X0B,
   .Txpower = 0x05, 
   .panId   = 0X0101,
};
/*****************************************************************************
 Prototype    : HalRdDevMac
 Description  : 读取Mac 地址
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/12
    Author       : x
    Modification : Created function

*****************************************************************************/
void    HalRdDevMac()
{  
    int i;
    memset(_DevMac, 0x00,8);
    memset(_TankMac,0X00,8);
    uint8_t *macaddrptr = (uint8_t *)(P_INFOPAGE+HAL_INFOP_IEEE_OSET);
    for(i=0;i<8;i++)
    {
        _DevMac[i] = macaddrptr[i];
    }
    memcpy(Conf.macAddr,_DevMac,8);
}

/*****************************************************************************
 Prototype    : HalMacInit
 Description  : 初始化Mac信息
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/15
    Author       : x
    Modification : Created function

*****************************************************************************/
void   DKMacInit()
{   
    HalRdDevMac();
    HalRfSetMac((uint8_t*)&Conf,sizeof(ZigbeeConfig));
    HalRfInit();
}
