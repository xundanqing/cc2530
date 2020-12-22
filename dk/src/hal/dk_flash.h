#ifndef DK_FLASH_H
#define DK_FLASH_H

#include "dk_system.h"

typedef struct {
  uint8_t SRCADDRH;   
  uint8_t SRCADDRL;  
  uint8_t DESTADDRH;  
  uint8_t DESTADDRL;         
  uint8_t LENH:5;     
  uint8_t VLEN:3;    
  uint8_t LENL;      
  uint8_t TRIG:5;     
  uint8_t TMODE:2;    
  uint8_t WORDSIZE:1; 
  uint8_t PRIORITY:2;
  uint8_t M8:1;       
  uint8_t IRQMASK:1; 
  uint8_t DESTINC:2; 
  uint8_t SRCINC:2; 
} DMADesc_t;

#define FLASH_BANK_SHIFT           15
#define FLASH_BANK_MAP_MASK        0X07
#define FLASH_BANK_SIZE            0X8000
#define FLASH_BASE_ADDR            0X8000
#define FLASH_BYTE_NUM_PAGE        2048 

#define  HAL_INFOP_IEEE_OSET        0x0c
#define  ADDR                      (0x18000) //(96k)

void HalFlashErase(uint8_t pageNum);
void HalFlashRead(uint16_t addr,uint8_t* data,uint8_t num_bytes);
void HalFlashWrite(uint16_t addr,uint8_t *data, uint16_t num_bytes);
void HalFlashTest();

extern  uint8_t   _DevMac[8];

#endif

