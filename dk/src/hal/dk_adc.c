#include<ioCC2530.h>
#include"dk_uart.h"

/*****************************************************************************
 Prototype    : HAL_ADC0_INIT
 Description  : HAL  ADC 初始化 P0.6
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/17
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalAdcInit()
{
  P0SEL|= (1<<6);  
  P0DIR&=~(1<<6); 
  APCFG |=(1<<6);   
  ADCCON3=0xB6;       
}
/*****************************************************************************
 Prototype    : HAL_ADC0_VAL
 Description  : ADC 获得参数电压 P0.6
 Input        : None
 Output       : None
 Return Value : unsigned
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/17
    Author       : x
    Modification : Created function

*****************************************************************************/
unsigned  int    HalAdcVal()
{
  unsigned int adcvalue=0; 
  while(!(ADCCON1&0x80));
  adcvalue = ADCL>>3; 
  adcvalue|=(unsigned int)(ADCH<<1>>1) <<5;
  ADCCON3=0xB6; 
  return   adcvalue;
}
/*****************************************************************************
 Prototype    : HalAdcTest
 Description  : ADC 测试P0.6
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/20
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalAdcTest()
{
  unsigned char AD_data[]="0000-->";
  unsigned char V_data[]="00000";
  unsigned int  adcvalue=0;  
  unsigned int  result=0;   
      
  adcvalue  = HalAdcVal();
      
  AD_data[0]=adcvalue/1000%10+0x30;
  AD_data[1]=adcvalue/100%10+0x30;
  AD_data[2]=adcvalue/10%10+0x30;
  AD_data[3]=adcvalue%10+0x30;
  
  result=33000*adcvalue/40950;   
  V_data[0]=(result/1000%10)+0x30;
  V_data[1]='.';
  V_data[2]=(result/100%10)+0x30;
  V_data[3]=(result/10%10)+0x30;
  V_data[4]=(result%10)+0x30;
  
  #if  1
  HalUart0SendString("ADC值：");
  HalUart0SendString(AD_data); 
  HalUart0SendString("电压值：");
  HalUart0SendString(V_data);  
  HalUart0SendString("\r\n");
  #endif
    
 
}