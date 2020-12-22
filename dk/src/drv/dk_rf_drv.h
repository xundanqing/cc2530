#ifndef  DK_RF_DRV_H
#define  DK_RF_DRV_H
#include "dk_system.h"
#include "dkTypes.h"
#define PAN_ID   0x0101
#define MAC_CTRL 0xCC01
#define MAC_CTRL_BOARDCAST 0xC801

typedef uint8_t MacAddr[8];

typedef struct {
  uint8_t dLen;
  uint16_t macCtrl;
  uint8_t frameSn;
  uint16_t dstPanId;
  MacAddr dstMac;
  uint16_t srcPanId;
  MacAddr srcMac;
} ZigbeeHeader;

void   SendPacket(MacAddr Dst,MacAddr Src,uint8_t *buf,uint8_t  dataLen) ; 


#endif
