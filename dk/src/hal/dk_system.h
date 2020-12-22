#ifndef __SYSTEM_H__
#define __SYSTEM_H__
#include<ioCC2530.h>

typedef void (*HalSystem)();

#define  LPM0    0
#define  LPM1    1
#define  LPM2    2
#define  LPM3    3
#define  LPMR    4

typedef  unsigned char  uint8_t;
typedef  unsigned short uint16_t;
typedef  unsigned int   uint32_t;
typedef  int            int32_t;
typedef  int            bool;
#define  TRUE           1
#define  FALSE          0


#ifdef __CC_ARM                         /* ARM Compiler */
    #define ALIGN(n)                    __attribute__((aligned(n)))
#elif defined (__IAR_SYSTEMS_ICC__)     /* for IAR Compiler */
    #define ALIGN(n)                    PRAGMA(data_alignment=n)
#elif defined (__GNUC__)                /* GNU GCC Compiler */
    #define ALIGN(n)                    __attribute__((aligned(n)))
#elif defined (__ADSPBLACKFIN__)        /* for VisualDSP++ Compiler */
    #define ALIGN(n)                    __attribute__((aligned(n)))
#elif defined (_MSC_VER)
    #define ALIGN(n)                    __declspec(align(n))
#endif 


void Hal32Mosc(void);

void Hal16Mosc(void);

void delay_ms(int ms);

void SysPowerMode(char mode);

extern uint8_t  SystemMode; 
#endif
