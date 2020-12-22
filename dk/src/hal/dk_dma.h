
#ifndef HAL_DMA_H
#define HAL_DMA_H

#include <iocc2530.h>

typedef unsigned  char  uint8;
typedef unsigned  short uint16;
#define HAL_DMA_VLEN_USE_LEN            0x00
#define HAL_DMA_VLEN_1_P_VALOFFIRST     0x01
#define HAL_DMA_VLEN_VALOFFIRST         0x02
#define HAL_DMA_VLEN_1_P_VALOFFIRST_P_1 0x03
#define HAL_DMA_VLEN_1_P_VALOFFIRST_P_2 0x04

#define HAL_DMA_WORDSIZE_BYTE           0x00 /* Transfer a byte at a time. */
#define HAL_DMA_WORDSIZE_WORD           0x01 /* Transfer a 16-bit word at a time. */

#define HAL_DMA_TMODE_SINGLE            0x00 /* Transfer a single byte/word after each DMA trigger. */
#define HAL_DMA_TMODE_BLOCK             0x01 /* Transfer block of data (length len) after each DMA trigger. */
#define HAL_DMA_TMODE_SINGLE_REPEATED   0x02 /* Transfer single byte/word (after len transfers, rearm DMA). */
#define HAL_DMA_TMODE_BLOCK_REPEATED    0x03 /* Transfer block of data (after len transfers, rearm DMA). */


#define HAL_DMA_SRCINC_0         0x00 /* Increment source pointer by 0 bytes/words after each transfer. */
#define HAL_DMA_SRCINC_1         0x01 /* Increment source pointer by 1 bytes/words after each transfer. */
#define HAL_DMA_SRCINC_2         0x02 /* Increment source pointer by 2 bytes/words after each transfer. */
#define HAL_DMA_SRCINC_M1        0x03 /* Decrement source pointer by 1 bytes/words after each transfer. */
#define HAL_DMA_DSTINC_0         0x00 /* Increment destination pointer by 0 bytes/words after each transfer. */
#define HAL_DMA_DSTINC_1         0x01 /* Increment destination pointer by 1 bytes/words after each transfer. */
#define HAL_DMA_DSTINC_2         0x02 /* Increment destination pointer by 2 bytes/words after each transfer. */
#define HAL_DMA_DSTINC_M1        0x03 /* Decrement destination pointer by 1 bytes/words after each transfer. */
#define HAL_DMA_IRQMASK_DISABLE  0x00 /* Disable interrupt generation. */
#define HAL_DMA_IRQMASK_ENABLE   0x01 /* Enable interrupt generation upon DMA channel done. */
#define HAL_DMA_M8_USE_8_BITS    0x00 /* Use all 8 bits for transfer count. */
#define HAL_DMA_M8_USE_7_BITS    0x01 /* Use 7 LSB for transfer count. */
#define HAL_DMA_PRI_LOW          0x00 /* Low, CPU has priority. */
#define HAL_DMA_PRI_GUARANTEED   0x01 /* Guaranteed, DMA at least every second try. */
#define HAL_DMA_PRI_HIGH         0x02 /* High, DMA has priority. */
#define HAL_DMA_PRI_ABSOLUTE     0x03 /* Highest, DMA has priority. Reserved for DMA port access.. */
#define HAL_DMA_MAX_ARM_CLOCKS   45   // Maximum number of clocks required if arming all 5 at once.
#define HAL_DMA_TRIG_FLASH       18   /* Flash data write complete. */
#define HAL_NV_DMA_CH            0
#define HAL_DMA_CH_RX            3
#define HAL_DMA_LEN_V            0xE0
#define HAL_DMA_LEN_H            0x1F
#define HAL_DMA_WORD_SIZE        0x80
#define HAL_DMA_TRIG_MODE        0x60
#define HAL_DMA_TRIG_SRC         0x1F
#define HAL_DMA_SRC_INC          0xC0
#define HAL_DMA_DST_INC          0x30
#define HAL_DMA_IRQ_MASK         0x08
#define HAL_DMA_M8               0x04
#define HAL_DMA_PRIORITY         0x03

#define HAL_DMA_GET_DESC0()           &dmaCh0
#define HAL_DMA_ARM_CH( ch )           DMAARM = (0x01 << (ch))
#define HAL_DMA_CH_ARMED( ch )        (DMAARM & (0x01 << (ch)))
#define HAL_DMA_ABORT_CH( ch )         DMAARM = (0x80 | (0x01 << (ch)))
#define HAL_DMA_MAN_TRIGGER( ch )      DMAREQ = (0x01 << (ch))
#define HAL_DMA_START_CH( ch )         HAL_DMA_MAN_TRIGGER( (ch) )
#define HAL_DMA_CLEAR_IRQ( ch )        DMAIRQ = ((0x01 << (ch)) ^ 0xFF)
#define HAL_DMA_CHECK_IRQ( ch )       (DMAIRQ & (0x01 << (ch)))

#define st(x)      do { x } while (__LINE__ == -1)

#define HAL_DMA_SET_ADDR_DESC0( a ) \
  st( \
    DMA0CFGH = (uint8)( (uint16)(a) >> 8 );  \
    DMA0CFGL = (uint8)( (uint16)(a) & 0xFF );       \
  )

#define HAL_DMA_SET_ADDR_DESC1234( a ) \
  st( \
    DMA1CFGH = (uint8)( (uint16)(a) >> 8 );  \
    DMA1CFGL = (uint8)( (uint16)(a) & 0xFF );       \
  )
  
#define HAL_DMA_SET_SOURCE( pDesc, src ) \
  st( \
    pDesc->srcAddrH = (uint8)( (uint16)(src) >> 8 ); \
    pDesc->srcAddrL = (uint8)( (uint16)(src) & 0xFF ); \
  )

#define HAL_DMA_SET_DEST( pDesc, dst ) \
  st( \
    pDesc->dstAddrH = (uint8)( (uint16)(dst) >> 8 ); \
    pDesc->dstAddrL = (uint8)( (uint16)(dst) & 0xFF ); \
  )

#define HAL_DMA_SET_LEN( pDesc, len ) \
  st( \
    pDesc->xferLenL = (uint8)( (uint16)(len) & 0xFF); \
    pDesc->xferLenV &= ~HAL_DMA_LEN_H; \
    pDesc->xferLenV |= (uint8)((uint16)(len) >> 8); \
  )

#define HAL_DMA_GET_LEN( pDesc ) \
  (((uint16)(pDesc->xferLenV & HAL_DMA_LEN_H) << 8) | pDesc->xferLenL)

#define HAL_DMA_SET_VLEN( pDesc, vMode ) \
  st( \
    pDesc->xferLenV &= ~HAL_DMA_LEN_V; \
    pDesc->xferLenV |= (vMode << 5); \
  )

#define HAL_DMA_SET_WORD_SIZE( pDesc, xSz ) \
  st( \
    pDesc->ctrlA &= ~HAL_DMA_WORD_SIZE; \
    pDesc->ctrlA |= (xSz << 7); \
  )

#define HAL_DMA_SET_TRIG_MODE( pDesc, tMode ) \
  st( \
    pDesc->ctrlA &= ~HAL_DMA_TRIG_MODE; \
    pDesc->ctrlA |= (tMode << 5); \
  )

#define HAL_DMA_GET_TRIG_MODE( pDesc ) ((pDesc->ctrlA >> 5) & 0x3)

#define HAL_DMA_SET_TRIG_SRC( pDesc, tSrc ) \
  st( \
    pDesc->ctrlA &= ~HAL_DMA_TRIG_SRC; \
    pDesc->ctrlA |= tSrc; \
  )

#define HAL_DMA_SET_SRC_INC( pDesc, srcInc ) \
  st( \
    pDesc->ctrlB &= ~HAL_DMA_SRC_INC; \
    pDesc->ctrlB |= (srcInc << 6); \
  )

#define HAL_DMA_SET_DST_INC( pDesc, dstInc ) \
  st( \
    pDesc->ctrlB &= ~HAL_DMA_DST_INC; \
    pDesc->ctrlB |= (dstInc << 4); \
  )

#define HAL_DMA_SET_IRQ( pDesc, enable ) \
  st( \
    pDesc->ctrlB &= ~HAL_DMA_IRQ_MASK; \
    pDesc->ctrlB |= (enable << 3); \
  )

#define HAL_DMA_SET_M8( pDesc, m8 ) \
  st( \
    pDesc->ctrlB &= ~HAL_DMA_M8; \
    pDesc->ctrlB |= (m8 << 2); \
  )

#define HAL_DMA_SET_PRIORITY( pDesc, pri ) \
  st( \
    pDesc->ctrlB &= ~HAL_DMA_PRIORITY; \
    pDesc->ctrlB |= pri; \
  )

typedef struct {
  uint8 srcAddrH;
  uint8 srcAddrL;
  uint8 dstAddrH;
  uint8 dstAddrL;
  uint8 xferLenV;
  uint8 xferLenL;
  uint8 ctrlA;
  uint8 ctrlB;
} halDMADesc_t;


extern halDMADesc_t dmaCh0;

#endif  



