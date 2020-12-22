#ifndef __RF_H__
#define __RF_H__
#include<ioCC2530.h>

#include"dk_system.h"

typedef void (*RF_Fun)(uint8_t*  data,int  len);


    
typedef    struct
{
  uint8_t       PacketLen;
  uint8_t       ContrlCode[2];
  uint8_t       PacketSN;
  uint8_t       DstPanID[2];
  uint8_t       DstMACAddress[8];
  uint8_t       SrcPanID[2];
  uint8_t       SrcMACAddress[8];
}stMacHdr;


typedef     struct
{
  stMacHdr  Hdr;
  uint8_t   payload[127];
}stMacPacket;

void  HalRfInit();
void  HalRfSend(uint8_t *pstr,char len);
int   HalRfSetMac(uint8_t  *data,int len);
void  HalRfReciveCallBack(RF_Fun  Fun);




#endif
