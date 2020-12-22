#include "dk_rf.h"
#include "dkTypes.h"
#include <string.h>
#include "dk_rf_drv.h"

static uint8_t _zigbeeTxBuffer[128];

static  inline  void  ConstructHdr(ZigbeeHeader *header) {
  memset(header, 0, sizeof(ZigbeeHeader));
  header->macCtrl =  MAC_CTRL;
  header->dstPanId = PAN_ID;
  header->srcPanId = PAN_ID;
}

void   SendPacket(MacAddr Dst,MacAddr Src,uint8_t *buf,uint8_t  dataLen) {
  ZigbeeHeader header;
  ConstructHdr(&header);
  header.dLen = dataLen + 25;
  memcpy(header.dstMac,Dst,8);
  memcpy(header.srcMac,Src,8);
  memcpy(_zigbeeTxBuffer, (uint8_t*)&header, sizeof(ZigbeeHeader));
  memcpy(_zigbeeTxBuffer + sizeof(ZigbeeHeader), buf, dataLen);
  HalRfSend(_zigbeeTxBuffer, sizeof(ZigbeeHeader) + dataLen);
}
