#include "dk_flash.h"
#include "dk_uart.h"
#include <string.h>

/*****************************************************************************
 Prototype    : HalFlashWrite
 Description  : Flash Write
 Input        : uint16_t addr       
                uint8_t *data       
                uint16_t num_bytes  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/25
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalFlashWrite(uint16_t addr,uint8_t *data, uint16_t num_bytes)
{
  DMADesc_t dmaConfig0;
  dmaConfig0.SRCADDRH  = ((uint16_t)data >> 8) & 0x00FF; 
  dmaConfig0.SRCADDRL  = (uint16_t)data & 0x00FF;
  dmaConfig0.DESTADDRH = (((uint16_t)&FWDATA) >> 8) & 0x00FF;
  dmaConfig0.DESTADDRL = ((uint16_t) &FWDATA) & 0x00FF;
  dmaConfig0.VLEN      = 0; 
  dmaConfig0.LENH      = (num_bytes>>8) & 0x00FF; 
  dmaConfig0.LENL      =  num_bytes & 0x00FF;
  dmaConfig0.WORDSIZE  = 0; 
  dmaConfig0.TMODE     = 0; 
  dmaConfig0.TRIG      = 18; 
  dmaConfig0.SRCINC    = 1; 
  dmaConfig0.DESTINC   = 0;
  dmaConfig0.IRQMASK   = 0; 
  dmaConfig0.M8        = 0; 
  dmaConfig0.PRIORITY  = 2; 
  
  while (FCTL & 0x80); 
  FADDRH =(addr >> 10) & 0x00FF; 
  FADDRL =(addr >> 2)  & 0x00FF; 
  
  DMA0CFGH = (((uint16_t)&dmaConfig0) >> 8) & 0x00FF; //Pass DmaConfig0
  DMA0CFGL = ((uint16_t)&dmaConfig0) & 0x00FF;
   
  DMAARM |= 0x01;
  FCTL |= 0x02; 
  while (FCTL & (0x80)); 
  return;
}
/*****************************************************************************
 Prototype    : HalFlashErase
 Description  : Flash ²Á³ý
 Input        : uint8_t pageNum  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/25
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalFlashErase(uint8_t pageNum)
{
 
  EA=0;
  while(FCTL & 0x80);
  FADDRH = pageNum << 1;
  FCTL |= 0x01;
  while(FCTL & 0x80);
  EA=1;
}
/*****************************************************************************
 Prototype    : HalFlashRead
 Description  : Flash ¶ÁÈ¡º¯Êý
 Input        : uint16_t addr      
                uint8_t* data      
                uint8_t num_bytes  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/25
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalFlashRead(uint16_t addr,uint8_t* data,uint8_t num_bytes)
{
  uint8_t old_map;
  uint8_t bank_num;
  uint16_t offset;
  uint8_t old_ea;
  
  old_ea = EA;
  EA = 0;
  
  bank_num = (addr>>FLASH_BANK_SHIFT)&FLASH_BANK_MAP_MASK;
  offset =  (addr & (FLASH_BANK_SIZE-1))+FLASH_BASE_ADDR;
  
  old_map = MEMCTR;
  MEMCTR = (old_map&~0X7)|bank_num; 
  
  memcpy(data,(uint8_t*)offset,num_bytes);
  
  MEMCTR = old_map;
  EA = old_ea;
  
  return;
}
/*****************************************************************************
 Prototype    : HalFlashTest
 Description  : Flash Test
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/25
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalFlashTest()
{   
    int  i;
    uint8_t read[4];
    uint8_t data[4] = {0x11,0x22,0x33,0x44};
    HalFlashErase((uint16_t)ADDR/FLASH_BYTE_NUM_PAGE); 
    HalFlashWrite((uint16_t)ADDR,data,4); 
    delay_ms(1);
    HalFlashRead((uint16_t)ADDR,read,4);
    
    for(i = 0; i  <  4;i++)
    {
        HalUart0SendByte(read[i]);
    }
    
}



