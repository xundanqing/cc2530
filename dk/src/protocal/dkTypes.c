#include "dkTypes.h"
#include "string.h"
#include <stdio.h>
//#include "dkCommon.h"

A_Type read_A_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((A_Type*)buf);
}
void write_A_Type(uint8_t *buf, A_Type *val) {
  buffer_size_t size = sizeof(A_Type);
  memcpy(buf, (uint8_t *)val, size);
}

A_Subtype read_A_Subtype(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((A_Subtype*)buf);
}
void write_A_Subtype(uint8_t *buf, A_Subtype *val) {
  buffer_size_t size = sizeof(A_Subtype);
  memcpy(buf, (uint8_t *)val, size);
}

AC_Character read_AC_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((AC_Character*)buf);
}
void write_AC_Character(uint8_t *buf, AC_Character *val) {
  buffer_size_t size = sizeof(AC_Character);
  memcpy(buf, (uint8_t *)val, size);
}

Angle1 read_Angle1(uint8_t *buf) {
  uint16_t v = buf[0];
  v <<= 8; v += buf[1];
  return v;
}
void write_Angle1(uint8_t *buf, Angle1 *val) {
  buf[0] = ((*val) >> 8) & 0xFF;
  buf[1] = ((*val) >> 0) & 0xFF;
}

Angle2 read_Angle2(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Angle2*)buf);
}
void write_Angle2(uint8_t *buf, Angle2 *val) {
  buffer_size_t size = sizeof(Angle2);
  memcpy(buf, (uint8_t *)val, size);
}

Angle3 read_Angle3(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Angle3*)buf);
}
void write_Angle3(uint8_t *buf, Angle3 *val) {
  buffer_size_t size = sizeof(Angle3);
  memcpy(buf, (uint8_t *)val, size);
}

BP_Character read_BP_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((BP_Character*)buf);
}
void write_BP_Character(uint8_t *buf, BP_Character *val) {
  buffer_size_t size = sizeof(BP_Character);
  memcpy(buf, (uint8_t *)val, size);
}

BR_Attribute read_BR_Attribute(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((BR_Attribute*)buf);
}
void write_BR_Attribute(uint8_t *buf, BR_Attribute *val) {
  buffer_size_t size = sizeof(BR_Attribute);
  memcpy(buf, (uint8_t *)val, size);
}

C_Idegree read_C_Idegree(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((C_Idegree*)buf);
}
void write_C_Idegree(uint8_t *buf, C_Idegree *val) {
  buffer_size_t size = sizeof(C_Idegree);
  memcpy(buf, (uint8_t *)val, size);
}

CE_Character read_CE_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((CE_Character*)buf);
}
void write_CE_Character(uint8_t *buf, CE_Character *val) {
  buffer_size_t size = sizeof(CE_Character);
  memcpy(buf, (uint8_t *)val, size);
}

CM_Character read_CM_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((CM_Character*)buf);
}
void write_CM_Character(uint8_t *buf, CM_Character *val) {
  buffer_size_t size = sizeof(CM_Character);
  memcpy(buf, (uint8_t *)val, size);
}

D_Len read_D_Len(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((D_Len*)buf);
}
void write_D_Len(uint8_t *buf, D_Len *val) {
  buffer_size_t size = sizeof(D_Len);
  memcpy(buf, (uint8_t *)val, size);
}

Data_Frame read_Data_Frame(uint8_t *buf) {
  uint16_t v = buf[0];
  v <<= 8; v += buf[1];
  return v;
}
void write_Data_Frame(uint8_t *buf, Data_Frame *val) {
  buf[0] = ((*val) >> 8) & 0xFF;
  buf[1] = ((*val) >> 0) & 0xFF;
}

Direction read_Direction(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Direction*)buf);
}
void write_Direction(uint8_t *buf, Direction *val) {
  buffer_size_t size = sizeof(Direction);
  memcpy(buf, (uint8_t *)val, size);
}

D_Type read_D_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((D_Type*)buf);
}
void write_D_Type(uint8_t *buf, D_Type *val) {
  buffer_size_t size = sizeof(D_Type);
  memcpy(buf, (uint8_t *)val, size);
}

E_Type read_E_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((E_Type*)buf);
}
void write_E_Type(uint8_t *buf, E_Type *val) {
  buffer_size_t size = sizeof(E_Type);
  memcpy(buf, (uint8_t *)val, size);
}

EP_Num read_EP_Num(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((EP_Num*)buf);
}
void write_EP_Num(uint8_t *buf, EP_Num *val) {
  buffer_size_t size = sizeof(EP_Num);
  memcpy(buf, (uint8_t *)val, size);
}

ES_Num read_ES_Num(uint8_t *buf) {
  uint16_t v = buf[0];
  v <<= 8; v += buf[1];
  return v;
}
void write_ES_Num(uint8_t *buf, ES_Num *val) {
  buf[0] = ((*val) >> 8) & 0xFF;
  buf[1] = ((*val) >> 0) & 0xFF;
}

ELR_Character read_ELR_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((ELR_Character*)buf);
}
void write_ELR_Character(uint8_t *buf, ELR_Character *val) {
  buffer_size_t size = sizeof(ELR_Character);
  memcpy(buf, (uint8_t *)val, size);
}

Fuse_Type read_Fuse_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Fuse_Type*)buf);
}
void write_Fuse_Type(uint8_t *buf, Fuse_Type *val) {
  buffer_size_t size = sizeof(Fuse_Type);
  memcpy(buf, (uint8_t *)val, size);
}

G_Num read_G_Num(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((G_Num*)buf);
}
void write_G_Num(uint8_t *buf, G_Num *val) {
  buffer_size_t size = sizeof(G_Num);
  memcpy(buf, (uint8_t *)val, size);
}

G_Position read_G_Position(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((G_Position*)buf);
}
void write_G_Position(uint8_t *buf, G_Position *val) {
  buffer_size_t size = sizeof(G_Position);
  memcpy(buf, (uint8_t *)val, size);
}

H_Idegree read_H_Idegree(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((H_Idegree*)buf);
}
void write_H_Idegree(uint8_t *buf, H_Idegree *val) {
  buffer_size_t size = sizeof(H_Idegree);
  memcpy(buf, (uint8_t *)val, size);
}

H_Num read_H_Num(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((H_Num*)buf);
}
void write_H_Num(uint8_t *buf, H_Num *val) {
  buffer_size_t size = sizeof(H_Num);
  memcpy(buf, (uint8_t *)val, size);
}

H_Part read_H_Part(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((H_Part*)buf);
}
void write_H_Part(uint8_t *buf, H_Part *val) {
  buffer_size_t size = sizeof(H_Part);
  memcpy(buf, (uint8_t *)val, size);
}

H_Type read_H_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((H_Type*)buf);
}
void write_H_Type(uint8_t *buf, H_Type *val) {
  buffer_size_t size = sizeof(H_Type);
  memcpy(buf, (uint8_t *)val, size);
}

IE_Type read_IE_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((IE_Type*)buf);
}
void write_IE_Type(uint8_t *buf, IE_Type *val) {
  buffer_size_t size = sizeof(IE_Type);
  memcpy(buf, (uint8_t *)val, size);
}

IO_Character read_IO_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((IO_Character*)buf);
}
void write_IO_Character(uint8_t *buf, IO_Character *val) {
  buffer_size_t size = sizeof(IO_Character);
  memcpy(buf, (uint8_t *)val, size);
}

IP_Address read_IP_Address(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((IP_Address*)buf);
}
void write_IP_Address(uint8_t *buf, IP_Address *val) {
  buffer_size_t size = sizeof(IP_Address);
  memcpy(buf, (uint8_t *)val, size);
}

Key read_Key(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Key*)buf);
}
void write_Key(uint8_t *buf, Key *val) {
  buffer_size_t size = sizeof(Key);
  memcpy(buf, (uint8_t *)val, size);
}

L_Position read_L_Position(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((L_Position*)buf);
}
void write_L_Position(uint8_t *buf, L_Position *val) {
  buffer_size_t size = sizeof(L_Position);
  memcpy(buf, (uint8_t *)val, size);
}

L_Character read_L_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((L_Character*)buf);
}
void write_L_Character(uint8_t *buf, L_Character *val) {
  buffer_size_t size = sizeof(L_Character);
  memcpy(buf, (uint8_t *)val, size);
}

LT_Type read_LT_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((LT_Type*)buf);
}
void write_LT_Type(uint8_t *buf, LT_Type *val) {
  buffer_size_t size = sizeof(LT_Type);
  memcpy(buf, (uint8_t *)val, size);
}

M_Type read_M_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((M_Type*)buf);
}
void write_M_Type(uint8_t *buf, M_Type *val) {
  buffer_size_t size = sizeof(M_Type);
  memcpy(buf, (uint8_t *)val, size);
}

M_Subtype read_M_Subtype(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((M_Subtype*)buf);
}
void write_M_Subtype(uint8_t *buf, M_Subtype *val) {
  buffer_size_t size = sizeof(M_Subtype);
  memcpy(buf, (uint8_t *)val, size);
}

MCM_Character read_MCM_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((MCM_Character*)buf);
}
void write_MCM_Character(uint8_t *buf, MCM_Character *val) {
  buffer_size_t size = sizeof(MCM_Character);
  memcpy(buf, (uint8_t *)val, size);
}

NCBP_Type read_NCBP_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((NCBP_Type*)buf);
}
void write_NCBP_Type(uint8_t *buf, NCBP_Type *val) {
  buffer_size_t size = sizeof(NCBP_Type);
  memcpy(buf, (uint8_t *)val, size);
}

NCBT_Type read_NCBT_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((NCBT_Type*)buf);
}
void write_NCBT_Type(uint8_t *buf, NCBT_Type *val) {
  buffer_size_t size = sizeof(NCBT_Type);
  memcpy(buf, (uint8_t *)val, size);
}

Num1 read_Num1(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Num1*)buf);
}
void write_Num1(uint8_t *buf, Num1 *val) {
  buffer_size_t size = sizeof(Num1);
  memcpy(buf, (uint8_t *)val, size);
}

Num2 read_Num2(uint8_t *buf) {
  uint16_t v = buf[0];
  v <<= 8; v += buf[1];
  return v;
}
void write_Num2(uint8_t *buf, Num2 *val) {
  buf[0] = ((*val) >> 8) & 0xFF;
  buf[1] = ((*val) >> 0) & 0xFF;
}

Num3 read_Num3(uint8_t *buf) {
  uint32_t num3 = 0;
  num3 += buf[0];
  num3 <<= 8; num3 += buf[1];
  num3 <<= 8; num3 += buf[2];
  return num3;
}
void write_Num3(uint8_t *buf, Num3 *val) {
  buf[0] = ((*val) << 16) & 0xFF;
  buf[1] = ((*val) << 8) & 0xFF;
  buf[2] = ((*val) << 0) & 0xFF;
}

PO_Character read_PO_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((PO_Character*)buf);
}
void write_PO_Character(uint8_t *buf, PO_Character *val) {
  buffer_size_t size = sizeof(PO_Character);
  memcpy(buf, (uint8_t *)val, size);
}

Port_Num read_Port_Num(uint8_t *buf) {
  uint16_t v = buf[0];
  v <<= 8; v += buf[1];
  return v;
}
void write_Port_Num(uint8_t *buf, Port_Num *val) {
  buf[0] = ((*val) >> 8) & 0xFF;
  buf[1] = ((*val) >> 0) & 0xFF;
}

Pressure read_Pressure(uint8_t *buf) {
  uint16_t v = buf[0];
  v <<= 8; v += buf[1];
  return v;
}
void write_Pressure(uint8_t *buf, Pressure *val) {
  buf[0] = ((*val) >> 8) & 0xFF;
  buf[1] = ((*val) >> 0) & 0xFF;
}

PID read_PID(uint8_t *buf) {
  uint16_t v = buf[0];
  v <<= 8; v += buf[1];
  return v;
}
void write_PID(uint8_t *buf, PID *val) {
  buf[0] = ((*val) >> 8) & 0xFF;
  buf[1] = ((*val) >> 0) & 0xFF;
}

Range read_Range(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Range*)buf);
}
void write_Range(uint8_t *buf, Range *val) {
  buffer_size_t size = sizeof(Range);
  memcpy(buf, (uint8_t *)val, size);
}

RID read_RID(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((RID*)buf);
}
void write_RID(uint8_t *buf, RID *val) {
  buffer_size_t size = sizeof(RID);
  memcpy(buf, (uint8_t *)val, size);
}

RM_Character read_RM_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((RM_Character*)buf);
}
void write_RM_Character(uint8_t *buf, RM_Character *val) {
  buffer_size_t size = sizeof(RM_Character);
  memcpy(buf, (uint8_t *)val, size);
}

SAM_Character read_SAM_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((SAM_Character*)buf);
}
void write_SAM_Character(uint8_t *buf, SAM_Character *val) {
  buffer_size_t size = sizeof(SAM_Character);
  memcpy(buf, (uint8_t *)val, size);
}

SIP_Type read_SIP_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((SIP_Type*)buf);
}
void write_SIP_Type(uint8_t *buf, SIP_Type *val) {
  buffer_size_t size = sizeof(SIP_Type);
  memcpy(buf, (uint8_t *)val, size);
}

SS_Character read_SS_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((SS_Character*)buf);
}
void write_SS_Character(uint8_t *buf, SS_Character *val) {
  buffer_size_t size = sizeof(SS_Character);
  memcpy(buf, (uint8_t *)val, size);
}

SR_Character read_SR_Character(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((SR_Character*)buf);
}
void write_SR_Character(uint8_t *buf, SR_Character *val) {
  buffer_size_t size = sizeof(SR_Character);
  memcpy(buf, (uint8_t *)val, size);
}

Strength read_Strength(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Strength*)buf);
}
void write_Strength(uint8_t *buf, Strength *val) {
  buffer_size_t size = sizeof(Strength);
  memcpy(buf, (uint8_t *)val, size);
}

Thickness read_Thickness(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Thickness*)buf);
}
void write_Thickness(uint8_t *buf, Thickness *val) {
  buffer_size_t size = sizeof(Thickness);
  memcpy(buf, (uint8_t *)val, size);
}

TSpan_Select read_TSpan_Select(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((TSpan_Select*)buf);
}
void write_TSpan_Select(uint8_t *buf, TSpan_Select *val) {
  buffer_size_t size = sizeof(TSpan_Select);
  memcpy(buf, (uint8_t *)val, size);
}

T_Span1 read_T_Span1(uint8_t *buf) {
  T_Span1 res;
  res.valueInSecond = (*buf) * 0.01f;
  return res;
}
void write_T_Span1(uint8_t *buf, T_Span1 *val) {
  buffer_size_t size = sizeof(T_Span1);
  uint8_t converted = (uint8_t)(val->valueInSecond * 100 + 0.5f);
  memcpy(buf, &converted, size);
}

T_Span2 read_T_Span2(uint8_t *buf) {
  T_Span2 res;
  float value = *(buf);
  if (value < 10)
    value *= 0.1f;
  else
    value -= 9;
  res.valueInSecond = value;
  return res;
}
void write_T_Span2(uint8_t *buf, T_Span2 *val) {
  buffer_size_t size = sizeof(T_Span2);
  uint8_t converted = 0;
  if (val->valueInSecond >= 1)
    converted = val->valueInSecond + 9;
  else
    converted = val->valueInSecond * 10;
  memcpy(buf, &converted, size);
}

T_Span3 read_T_Span3(uint8_t *buf) {
  T_Span3 res;
  res.valueInSecond = (*buf);
  return res;
}
void write_T_Span3(uint8_t *buf, T_Span3 *val) {
  buffer_size_t size = sizeof(T_Span3);
  uint8_t converted = val->valueInSecond;
  memcpy(buf, &converted, size);
}

T_Span4 read_T_Span4(uint8_t *buf) {
  T_Span4 res;
  res.valueInSecond = (*buf) * 60.0f;
  return res;
}
void write_T_Span4(uint8_t *buf, T_Span4 *val) {
  buffer_size_t size = sizeof(T_Span4);
  uint8_t converted = val->valueInSecond / 60;
  memcpy(buf, &converted, size);
}

T_Span5 read_T_Span5(uint8_t *buf) {
  T_Span5 res;
  res.valueInSecond = (*buf) * 3600.0f;
  return res;
}
void write_T_Span5(uint8_t *buf, T_Span5 *val) {
  buffer_size_t size = sizeof(T_Span5);
  uint8_t converted = val->valueInSecond / 3600;
  memcpy(buf, &converted, size);
}

T_Span12345 read_T_Span12345(uint8_t *buf) {
  // Hack! TSpan_Select always comes before TSpan12345
  TSpan_Select select = *(buf - 1);
  T_Span12345 res;
  switch (select) {
    case 1:
      res.valueInSecond = read_T_Span1(buf).valueInSecond;
      break;
    case 2:
      res.valueInSecond = read_T_Span2(buf).valueInSecond;
      break;
    case 3:
      res.valueInSecond = read_T_Span3(buf).valueInSecond;
      break;
    case 4:
      res.valueInSecond = read_T_Span4(buf).valueInSecond;
      break;
    case 5:
      res.valueInSecond = read_T_Span5(buf).valueInSecond;
      break;
    default:
      res.valueInSecond = 0;
      break;
  }
  return res;
}
void write_T_Span12345(uint8_t *buf, T_Span12345 *val) {
  // Hack! TSpan_Select always comes before TSpan12345
  TSpan_Select select = *(buf - 1);
  switch (select) {
    case 1:
      write_T_Span1(buf, val);
      break;
    case 2:
      write_T_Span2(buf, val);
      break;
    case 3:
      write_T_Span3(buf, val);
      break;
    case 4:
      write_T_Span4(buf, val);
      break;
    case 5:
      write_T_Span5(buf, val);
      break;
  }
}

T_SN read_T_SN(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((T_SN*)buf);
}
void write_T_SN(uint8_t *buf, T_SN *val) {
  buffer_size_t size = sizeof(T_SN);
  memcpy(buf, (uint8_t *)val, size);
}

Time1 read_Time1(uint8_t *buf) {
  Time1 time = {
    .year = buf[0],
    .month = buf[1],
    .day = buf[2],
    .hour = buf[3],
    .minute = buf[4],
    .second = buf[5],
  };
  return time;
}
void write_Time1(uint8_t *buf, Time1 *val) {
  buf[0] = val->year;
  buf[1] = val->month;
  buf[2] = val->day;
  buf[3] = val->hour;
  buf[4] = val->minute;
  buf[5] = val->second;
}

Time2 read_Time2(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Time2*)buf);
}
void write_Time2(uint8_t *buf, Time2 *val) {
  buffer_size_t size = sizeof(Time2);
  memcpy(buf, (uint8_t *)val, size);
}

T_Type read_T_Type(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((T_Type*)buf);
}
void write_T_Type(uint8_t *buf, T_Type *val) {
  buffer_size_t size = sizeof(T_Type);
  memcpy(buf, (uint8_t *)val, size);
}

T_Subtype read_T_Subtype(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((T_Subtype*)buf);
}
void write_T_Subtype(uint8_t *buf, T_Subtype *val) {
  buffer_size_t size = sizeof(T_Subtype);
  memcpy(buf, (uint8_t *)val, size);
}

Temperature read_Temperature(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Temperature*)buf);
}
void write_Temperature(uint8_t *buf, Temperature *val) {
  buffer_size_t size = sizeof(Temperature);
  memcpy(buf, (uint8_t *)val, size);
}

TS_Character1 read_TS_Character1(uint8_t *buf) {
  TS_Character1 ret = {
    .isPartsDisconnected = (buf[0] & 0x02) != 0,
    .isInError = (buf[0] & 0x04) != 0,
    .isYanxi = (buf[0] & 0x08) != 0,
    .isPowerLow = (buf[0] & 0x10) != 0,
    .side = (buf[0] & 0x60) >> 5,
  };
  return ret;
}
void write_TS_Character1(uint8_t *buf, TS_Character1 *val) {
  uint8_t bufVal = 0x0;
  if (val->isPartsDisconnected) {
    bufVal |= 0x02;
  }
  if (val->isInError) {
    bufVal |= 0x04;
  }
  if (val->isYanxi) {
    bufVal |= 0x08;
  }
  if (val->isPowerLow) {
    bufVal |= 0x10;
  }
  bufVal |= ((val->side & 0x03) << 5);
  buf[0] = bufVal;
}

TS_Character2 read_TS_Character2(uint8_t *buf) {
  TS_Character2 ret = {
    .isYanxi = (buf[0] & 0x80) != 0,
    .key = (buf[0] & 0x7F),
  };
  return ret;
}
void write_TS_Character2(uint8_t *buf, TS_Character2 *val) {
  uint8_t bufVal = 0x0;
  if (val->isYanxi) {
    bufVal |= 0x80;
  }
  bufVal |= (val->key & 0x7F);
  buf[0] = bufVal;
}

Velocity1 read_Velocity1(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Velocity1*)buf);
}
void write_Velocity1(uint8_t *buf, Velocity1 *val) {
  buffer_size_t size = sizeof(Velocity1);
  memcpy(buf, (uint8_t *)val, size);
}

Velocity2 read_Velocity2(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Velocity2*)buf);
}
void write_Velocity2(uint8_t *buf, Velocity2 *val) {
  buffer_size_t size = sizeof(Velocity2);
  memcpy(buf, (uint8_t *)val, size);
}

Velocity3 read_Velocity3(uint8_t *buf) {
  // TODO: 如果必要的话，改变返回类型的结构，这里增加序列化/反序列化逻辑
  return *((Velocity3*)buf);
}
void write_Velocity3(uint8_t *buf, Velocity3 *val) {
  buffer_size_t size = sizeof(Velocity3);
  memcpy(buf, (uint8_t *)val, size);
}

Reserve5 read_Reserve5(uint8_t *buf) {
  return *((Reserve5*)buf);
}
void write_Reserve5(uint8_t *buf, Reserve5 *val) {
  buffer_size_t size = sizeof(Reserve5);
  memcpy(buf, (uint8_t *)val, size);
}

Reserve2 read_Reserve2(uint8_t *buf) {
  return *((Reserve2*)buf);
}
void write_Reserve2(uint8_t *buf, Reserve2 *val) {
  buffer_size_t size = sizeof(Reserve2);
  memcpy(buf, (uint8_t *)val, size);
}

//
// Utilities
//
uint8_t computeCheckSum(uint8_t *buf, uint16_t dataLen) {
  uint8_t xOr = 0x0;
  while ((dataLen--) > 0) {
    xOr ^= (*buf);
    buf++;
  }
  return xOr;
}

void printUpid(UPid u) {
  printf("0x%02x%02x%02x%04x", u.tType, u.tSubtype, u.rID, u.pID);
}

void handleIncommingCheckSumMismatch(
  uint8_t *buf, uint16_t dataLen,
  const char* name,
  uint8_t computed, uint8_t provided) {
#if 0
  printHex(buf, dataLen);
  CFF(false, 
    "Invalid checksum for received data of package %s:\r\n"
    "Expecting %02x, got %02x\r\n",
    name, computed, provided
  );
#endif
}

void handleUpidMismatch(
  uint8_t *buf, uint16_t dataLen,
  const char* name,
  UPid received, UPid mine) {
#if  0 
  printHex(buf, dataLen);
  printf("Received:"); printUpid(received);
  printf("\r\n    Mine:"); printUpid(mine);
  WARN(false, 
    "Invalid UPID message received for package  %s, will discard this message\r\n",
    name
  );
#endif
}
