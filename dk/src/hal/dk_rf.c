#include "dk_rf.h"
#include "dk_uart.h"
#include "dk_system.h"
#include <string.h>

static  char  chanle; 
static  char  TxPower = 0xf5;
static  char  Pan[2]  = {0}  ;
static  char  Mac[8]  = {0}  ;

static  RF_Fun  RF_fun;

/*****************************************************************************
 Prototype    : HalRfInit
 Description  : ��ʼ��RF
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalRfInit()
{
  EA=0;
  FRMCTRL0 |= 0x40;  
  TXFILTCFG = 0x09;
  AGCCTRL1  = 0x15;  
  FSCAL1    = 0x00;
  RFIRQM0  |= 0x40;
  IEN2     |= 0x01;   
  /*SET CHANNEL*/
  FREQCTRL  = chanle;
  /*SET PANID  */
  PAN_ID1   = Pan[0];
  PAN_ID0   = Pan[1];
  /*SET IEE  ADDR*/
  EXT_ADDR0 = Mac[0];
  EXT_ADDR1 = Mac[1];
  EXT_ADDR2 = Mac[2];
  EXT_ADDR3 = Mac[3];
  EXT_ADDR4 = Mac[4];
  EXT_ADDR5 = Mac[5];
  EXT_ADDR6 = Mac[6];
  EXT_ADDR7 = Mac[7];
  /*TEST SHORT ADDR*/
  SHORT_ADDR0 = 0xEE;
  SHORT_ADDR1 = 0xEE;
  /*set  txpower*/
  TXPOWER     = TxPower;
  RFST        = 0xEC;
  RFST        = 0xE3;
  EA=1;
}
/*****************************************************************************
 Prototype    : HalRfSetMac
 Description  : ����MAC ��Ϣ
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/27
    Author       : x
    Modification : Created function

*****************************************************************************/
int    HalRfSetMac(uint8_t  *data,int len)
{
  
    if(len  !=  12)
        return  -1;
    
    chanle =  data[0];
    Pan[0] =  data[1];
    Pan[1] =  data[2];
    memcpy(Mac,&data[3],8);
    TxPower = data[11];
    HalUart0SendString("HalRfSetMac ok\r\n");
    return  0;
}
/*****************************************************************************
 Prototype    : HalRfReciveCallBack
 Description  : ���ý���ص����
 Input        : RF_Fun  Fun  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/12/1
    Author       : x
    Modification : Created function

*****************************************************************************/
void   HalRfReciveCallBack(RF_Fun  Fun)
{
   RF_fun = Fun;
}
/*****************************************************************************
 Prototype    : HalRFSend
 Description  : Rf���ͺ�����ע�ⷢ�ͱ���Ϊ 802.15.4 ���ݰ�
 Input        : char *pstr  
                char len    
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        : 
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void HalRfSend(uint8_t *pstr,char len)
{
  char i;
  RFST = 0xEC;         
  RFST = 0xE3;          
  while(FSMSTAT1&0x22);
  RFST = 0xEE;         
  RFIRQF1 &= ~0x02;    
      
  for(i=0;i<len;i++)   
  {
    RFD=pstr[i];
  }
  RFST = 0xE9;           
  while(!(RFIRQF1&0x02));
  RFIRQF1 = ~0x02;     
}
/*****************************************************************************
 Prototype    : HalReciveCallBack
 Description  : �������ݴ���
 Input        : void  
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
void  HalRecive(void)
{
  char len = 0;
  char i   = 0;
  uint8_t data[128] = {0};
  
  RFIRQM0 &= ~0x40;
  IEN2 &= ~0x01;
  EA=1;
  len = RFD;
  data[0] = len;
  for(i=1;i<=len;i++)
    data[i] = RFD;
  
  if(RF_fun)
    RF_fun(data,len+1);
  
  EA=0;
  RFIRQM0 |= 0x40;
  IEN2    |= 0x01;
}
/*****************************************************************************
 Prototype    : pragma vector=RF_VECTOR
 Description  : ���������ж�
 Input        : None
 Output       : None
 Return Value : 
 Calls        : 
 Called By    : 
 
  History        :
  1.Date         : 2020/11/19
    Author       : x
    Modification : Created function

*****************************************************************************/
#pragma vector=RF_VECTOR
__interrupt void RF_IRQ(void)
{
  EA=0;
  if(RFIRQF0&0x40)
  {
    HalRecive();     
    S1CON= 0;        
    RFIRQF0&= ~0x40; 
  }
      
  RFST = 0xEC;
  RFST = 0xE3;
  EA=1;
}

