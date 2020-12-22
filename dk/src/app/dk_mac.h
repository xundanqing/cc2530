#ifndef  DK_MAC_H
#define  DK_MAC_H

#include "dk_system.h"
#include "dk_flash.h"

typedef uint8_t MacAddr[8];
typedef struct  {
  uint8_t channel;
  uint16_t panId;
  uint8_t macAddr[8];
  uint8_t Txpower;
} ZigbeeConfig;

extern  uint8_t   _DevMac[8];
extern  uint8_t  _TankMac[8];

void     DKMacInit();

#endif
