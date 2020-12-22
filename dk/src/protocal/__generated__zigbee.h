
#ifndef __GENERATED__ZIGBEE_H
#define __GENERATED__ZIGBEE_H
#include "dkTypes.h"
#define MAX_DATA_PACK_SIZE 256
#define MAX_EVENT_PACK_SIZE 256
#define MAX_LASER_PACK_SIZE 64

// **********************************************
// 10.1.1 车辆伤情读取指令（0xC2，0x11）
// **********************************************

#define REQUEST_CAR_DAMAGE_MAX_SIZE (14)
typedef struct {
  uint8_t data[REQUEST_CAR_DAMAGE_MAX_SIZE];
} RequestCarDamageBuffer;

// 数据帧头，为 0xC2，0x11
static inline Data_Frame RequestCarDamage__dataFrame(RequestCarDamageBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RequestCarDamage__set_dataFrame_ptr(RequestCarDamageBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RequestCarDamage__set_dataFrame(RequestCarDamageBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RequestCarDamage__dLen(RequestCarDamageBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RequestCarDamage__set_dLen_ptr(RequestCarDamageBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RequestCarDamage__set_dLen(RequestCarDamageBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 抢修车模拟终端实体类型
static inline T_Type RequestCarDamage__tType(RequestCarDamageBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RequestCarDamage__set_tType_ptr(RequestCarDamageBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RequestCarDamage__set_tType(RequestCarDamageBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 抢修车模拟终端实体子类型
static inline T_Subtype RequestCarDamage__tSubtype(RequestCarDamageBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RequestCarDamage__set_tSubtype_ptr(RequestCarDamageBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RequestCarDamage__set_tSubtype(RequestCarDamageBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 抢修车模拟终端单位代字
static inline RID RequestCarDamage__rID(RequestCarDamageBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RequestCarDamage__set_rID_ptr(RequestCarDamageBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RequestCarDamage__set_rID(RequestCarDamageBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 抢修车模拟终端设备编号
static inline PID RequestCarDamage__pID_use_uPID_instead(RequestCarDamageBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RequestCarDamage__set_pID_use_uPID_instead_ptr(RequestCarDamageBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RequestCarDamage__set_pID_use_uPID_instead(RequestCarDamageBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RequestCarDamage__uPid(RequestCarDamageBuffer *buf) {
  UPid uPid = {
    .tType = RequestCarDamage__tType(buf),
    .tSubtype = RequestCarDamage__tSubtype(buf),
    .rID = RequestCarDamage__rID(buf),
    .pID = RequestCarDamage__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void RequestCarDamage__set_uPid_ptr(RequestCarDamageBuffer *buf, UPid *val) {
  RequestCarDamage__set_tType(buf, val->tType);
  RequestCarDamage__set_tSubtype(buf, val->tSubtype);
  RequestCarDamage__set_rID(buf, val->rID);
  RequestCarDamage__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void RequestCarDamage__set_uPid(RequestCarDamageBuffer *buf, UPid val) {
  RequestCarDamage__set_tType(buf, val.tType);
  RequestCarDamage__set_tSubtype(buf, val.tSubtype);
  RequestCarDamage__set_rID(buf, val.rID);
  RequestCarDamage__set_pID_use_uPID_instead(buf, val.pID);
}

// 车辆实体类型
static inline T_Type RequestCarDamage__carTType(RequestCarDamageBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void RequestCarDamage__set_carTType_ptr(RequestCarDamageBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void RequestCarDamage__set_carTType(RequestCarDamageBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 车辆实体子类型
static inline T_Subtype RequestCarDamage__carTSubtype(RequestCarDamageBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void RequestCarDamage__set_carTSubtype_ptr(RequestCarDamageBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void RequestCarDamage__set_carTSubtype(RequestCarDamageBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 车辆单位代字
static inline RID RequestCarDamage__carRid(RequestCarDamageBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void RequestCarDamage__set_carRid_ptr(RequestCarDamageBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void RequestCarDamage__set_carRid(RequestCarDamageBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 车辆设备编号
static inline PID RequestCarDamage__carPid(RequestCarDamageBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void RequestCarDamage__set_carPid_ptr(RequestCarDamageBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void RequestCarDamage__set_carPid(RequestCarDamageBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }
static inline uint16_t RequestCarDamage__computeSize() {
  return 14;
}
static inline uint8_t RequestCarDamage__computeCheckSum(RequestCarDamageBuffer *buf) {
  return computeCheckSum(buf->data, RequestCarDamage__computeSize() - 1);
}
static inline uint8_t RequestCarDamage__checkSum(RequestCarDamageBuffer *buf) {
  return buf->data[RequestCarDamage__computeSize() - 1];
}
static inline bool RequestCarDamage__isCheckSumValid(RequestCarDamageBuffer *buf) {
  return RequestCarDamage__checkSum(buf) == RequestCarDamage__computeCheckSum(buf);
}
static inline void RequestCarDamage__set_checkSum(RequestCarDamageBuffer *buf, uint8_t checkSum) {
  buf->data[RequestCarDamage__computeSize() - 1] = checkSum;
}
static inline void RequestCarDamage__initEmpty(RequestCarDamageBuffer *buf) {
  RequestCarDamage__set_dLen(buf, RequestCarDamage__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RequestCarDamage__set_dataFrame(buf, 0xc211);
  RequestCarDamage__set_checkSum(buf, RequestCarDamage__computeCheckSum(buf));
}

// **********************************************
// SendCarDamagehitsItem
// **********************************************

#define SEND_CAR_DAMAGEHITS_ITEM_MAX_SIZE (3)
typedef struct {
  uint8_t data[SEND_CAR_DAMAGEHITS_ITEM_MAX_SIZE];
} SendCarDamagehitsItemBuffer;

// 第 1 个伤情的命中部位
static inline H_Part SendCarDamagehitsItem__hPart(SendCarDamagehitsItemBuffer *buf) { return read_H_Part(buf->data + (0)); }
static inline void SendCarDamagehitsItem__set_hPart_ptr(SendCarDamagehitsItemBuffer *buf, H_Part *val) { write_H_Part(buf->data + (0), val); }
static inline void SendCarDamagehitsItem__set_hPart(SendCarDamagehitsItemBuffer *buf, H_Part val) { write_H_Part(buf->data + (0), &val); }

// 第 1 个伤情的伤类
static inline H_Type SendCarDamagehitsItem__hType(SendCarDamagehitsItemBuffer *buf) { return read_H_Type(buf->data + (1)); }
static inline void SendCarDamagehitsItem__set_hType_ptr(SendCarDamagehitsItemBuffer *buf, H_Type *val) { write_H_Type(buf->data + (1), val); }
static inline void SendCarDamagehitsItem__set_hType(SendCarDamagehitsItemBuffer *buf, H_Type val) { write_H_Type(buf->data + (1), &val); }

// 第 1 个伤情的命中伤势
static inline H_Idegree SendCarDamagehitsItem__hIdegree(SendCarDamagehitsItemBuffer *buf) { return read_H_Idegree(buf->data + (2)); }
static inline void SendCarDamagehitsItem__set_hIdegree_ptr(SendCarDamagehitsItemBuffer *buf, H_Idegree *val) { write_H_Idegree(buf->data + (2), val); }
static inline void SendCarDamagehitsItem__set_hIdegree(SendCarDamagehitsItemBuffer *buf, H_Idegree val) { write_H_Idegree(buf->data + (2), &val); }
static inline uint16_t SendCarDamagehitsItem__computeSize() {
  return 3;
}
static inline void SendCarDamagehitsItem__initEmpty(SendCarDamagehitsItemBuffer *buf) {
}

// **********************************************
// 10.1.2 车辆伤情输出指令（0xC3，0x11）
// **********************************************

#define SEND_CAR_DAMAGE_MAX_SIZE (18 + SEND_CAR_DAMAGEHITS_ITEM_MAX_SIZE * 20)
typedef struct {
  uint8_t data[SEND_CAR_DAMAGE_MAX_SIZE];
} SendCarDamageBuffer;

// 数据帧头，为 0xC3，0x11
static inline Data_Frame SendCarDamage__dataFrame(SendCarDamageBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SendCarDamage__set_dataFrame_ptr(SendCarDamageBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SendCarDamage__set_dataFrame(SendCarDamageBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SendCarDamage__dLen(SendCarDamageBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SendCarDamage__set_dLen_ptr(SendCarDamageBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SendCarDamage__set_dLen(SendCarDamageBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 车辆实体类型
static inline T_Type SendCarDamage__tType(SendCarDamageBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SendCarDamage__set_tType_ptr(SendCarDamageBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SendCarDamage__set_tType(SendCarDamageBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 车辆实体子类型
static inline T_Subtype SendCarDamage__tSubtype(SendCarDamageBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SendCarDamage__set_tSubtype_ptr(SendCarDamageBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SendCarDamage__set_tSubtype(SendCarDamageBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 车辆单位代字
static inline RID SendCarDamage__rID(SendCarDamageBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SendCarDamage__set_rID_ptr(SendCarDamageBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SendCarDamage__set_rID(SendCarDamageBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 车辆设备编号
static inline PID SendCarDamage__pID_use_uPID_instead(SendCarDamageBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SendCarDamage__set_pID_use_uPID_instead_ptr(SendCarDamageBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SendCarDamage__set_pID_use_uPID_instead(SendCarDamageBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SendCarDamage__uPid(SendCarDamageBuffer *buf) {
  UPid uPid = {
    .tType = SendCarDamage__tType(buf),
    .tSubtype = SendCarDamage__tSubtype(buf),
    .rID = SendCarDamage__rID(buf),
    .pID = SendCarDamage__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SendCarDamage__set_uPid_ptr(SendCarDamageBuffer *buf, UPid *val) {
  SendCarDamage__set_tType(buf, val->tType);
  SendCarDamage__set_tSubtype(buf, val->tSubtype);
  SendCarDamage__set_rID(buf, val->rID);
  SendCarDamage__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SendCarDamage__set_uPid(SendCarDamageBuffer *buf, UPid val) {
  SendCarDamage__set_tType(buf, val.tType);
  SendCarDamage__set_tSubtype(buf, val.tSubtype);
  SendCarDamage__set_rID(buf, val.rID);
  SendCarDamage__set_pID_use_uPID_instead(buf, val.pID);
}

// 密钥
static inline Key SendCarDamage__key(SendCarDamageBuffer *buf) { return read_Key(buf->data + (8)); }
static inline void SendCarDamage__set_key_ptr(SendCarDamageBuffer *buf, Key *val) { write_Key(buf->data + (8), val); }
static inline void SendCarDamage__set_key(SendCarDamageBuffer *buf, Key val) { write_Key(buf->data + (8), &val); }

// 实体状态字 1
static inline TS_Character1 SendCarDamage__tSCharacter1(SendCarDamageBuffer *buf) { return read_TS_Character1(buf->data + (9)); }
static inline void SendCarDamage__set_tSCharacter1_ptr(SendCarDamageBuffer *buf, TS_Character1 *val) { write_TS_Character1(buf->data + (9), val); }
static inline void SendCarDamage__set_tSCharacter1(SendCarDamageBuffer *buf, TS_Character1 val) { write_TS_Character1(buf->data + (9), &val); }

// 综合伤势
static inline C_Idegree SendCarDamage__cIdegree(SendCarDamageBuffer *buf) { return read_C_Idegree(buf->data + (10)); }
static inline void SendCarDamage__set_cIdegree_ptr(SendCarDamageBuffer *buf, C_Idegree *val) { write_C_Idegree(buf->data + (10), val); }
static inline void SendCarDamage__set_cIdegree(SendCarDamageBuffer *buf, C_Idegree val) { write_C_Idegree(buf->data + (10), &val); }

// 命中次数（n，n=0 时，伤情无内容）
static inline H_Num SendCarDamage__nHit(SendCarDamageBuffer *buf) { return read_H_Num(buf->data + (11)); }
static inline void SendCarDamage__set_nHit_ptr(SendCarDamageBuffer *buf, H_Num *val) { write_H_Num(buf->data + (11), val); }
static inline void SendCarDamage__set_nHit(SendCarDamageBuffer *buf, H_Num val) { write_H_Num(buf->data + (11), &val); }

// SendCarDamagehitsItem
static inline SendCarDamagehitsItemBuffer* SendCarDamage__hits(SendCarDamageBuffer *buf, uint8_t index);
static inline uint16_t SendCarDamage__hits_pos(SendCarDamageBuffer *buf, uint8_t idx) {
return idx * SendCarDamagehitsItem__computeSize();
}
static inline uint16_t SendCarDamage__hits_maxCount() { return 20;}
static inline SendCarDamagehitsItemBuffer* SendCarDamage__hits(SendCarDamageBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (SendCarDamagehitsItemBuffer*)(buf->data + 12 + SendCarDamage__hits_pos(buf, index));
}

// 保留
static inline Reserve5 SendCarDamage__reserve5(SendCarDamageBuffer *buf) { return read_Reserve5(buf->data + (12 + SendCarDamage__hits_pos(buf, SendCarDamage__nHit(buf)))); }
static inline void SendCarDamage__set_reserve5_ptr(SendCarDamageBuffer *buf, Reserve5 *val) { write_Reserve5(buf->data + (12 + SendCarDamage__hits_pos(buf, SendCarDamage__nHit(buf))), val); }
static inline void SendCarDamage__set_reserve5(SendCarDamageBuffer *buf, Reserve5 val) { write_Reserve5(buf->data + (12 + SendCarDamage__hits_pos(buf, SendCarDamage__nHit(buf))), &val); }
static inline uint16_t SendCarDamage__computeSize(SendCarDamageBuffer *buf) {
  return 18 + (SendCarDamage__nHit(buf) * SendCarDamagehitsItem__computeSize());
}
static inline uint8_t SendCarDamage__computeCheckSum(SendCarDamageBuffer *buf) {
  return computeCheckSum(buf->data, SendCarDamage__computeSize(buf) - 1);
}
static inline uint8_t SendCarDamage__checkSum(SendCarDamageBuffer *buf) {
  return buf->data[SendCarDamage__computeSize(buf) - 1];
}
static inline bool SendCarDamage__isCheckSumValid(SendCarDamageBuffer *buf) {
  return SendCarDamage__checkSum(buf) == SendCarDamage__computeCheckSum(buf);
}
static inline void SendCarDamage__set_checkSum(SendCarDamageBuffer *buf, uint8_t checkSum) {
  buf->data[SendCarDamage__computeSize(buf) - 1] = checkSum;
}
static inline void SendCarDamage__initEmpty(SendCarDamageBuffer *buf, uint16_t nHit) {
  SendCarDamage__set_nHit(buf, nHit);
  SendCarDamage__set_dLen(buf, SendCarDamage__computeSize(buf) - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SendCarDamage__set_dataFrame(buf, 0xc311);
  SendCarDamage__set_checkSum(buf, SendCarDamage__computeCheckSum(buf));
}

// **********************************************
// 10.1.3 维修进度通报指令（0xC2，0x12）
// **********************************************

#define REQUEST_REPAIR_PROGRESS_MAX_SIZE (16)
typedef struct {
  uint8_t data[REQUEST_REPAIR_PROGRESS_MAX_SIZE];
} RequestRepairProgressBuffer;

// 数据帧头，为 0xC2，0x12
static inline Data_Frame RequestRepairProgress__dataFrame(RequestRepairProgressBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RequestRepairProgress__set_dataFrame_ptr(RequestRepairProgressBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RequestRepairProgress__set_dataFrame(RequestRepairProgressBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RequestRepairProgress__dLen(RequestRepairProgressBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RequestRepairProgress__set_dLen_ptr(RequestRepairProgressBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RequestRepairProgress__set_dLen(RequestRepairProgressBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 抢修车模拟终端实体的类型
static inline T_Type RequestRepairProgress__tType(RequestRepairProgressBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RequestRepairProgress__set_tType_ptr(RequestRepairProgressBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RequestRepairProgress__set_tType(RequestRepairProgressBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 抢修车模拟终端实体的子类型。
static inline T_Subtype RequestRepairProgress__tSubtype(RequestRepairProgressBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RequestRepairProgress__set_tSubtype_ptr(RequestRepairProgressBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RequestRepairProgress__set_tSubtype(RequestRepairProgressBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 抢修车模拟终端实体的的单位代字
static inline RID RequestRepairProgress__rID(RequestRepairProgressBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RequestRepairProgress__set_rID_ptr(RequestRepairProgressBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RequestRepairProgress__set_rID(RequestRepairProgressBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 抢修车模拟终端的的设备编号
static inline PID RequestRepairProgress__pID_use_uPID_instead(RequestRepairProgressBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RequestRepairProgress__set_pID_use_uPID_instead_ptr(RequestRepairProgressBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RequestRepairProgress__set_pID_use_uPID_instead(RequestRepairProgressBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RequestRepairProgress__uPid(RequestRepairProgressBuffer *buf) {
  UPid uPid = {
    .tType = RequestRepairProgress__tType(buf),
    .tSubtype = RequestRepairProgress__tSubtype(buf),
    .rID = RequestRepairProgress__rID(buf),
    .pID = RequestRepairProgress__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void RequestRepairProgress__set_uPid_ptr(RequestRepairProgressBuffer *buf, UPid *val) {
  RequestRepairProgress__set_tType(buf, val->tType);
  RequestRepairProgress__set_tSubtype(buf, val->tSubtype);
  RequestRepairProgress__set_rID(buf, val->rID);
  RequestRepairProgress__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void RequestRepairProgress__set_uPid(RequestRepairProgressBuffer *buf, UPid val) {
  RequestRepairProgress__set_tType(buf, val.tType);
  RequestRepairProgress__set_tSubtype(buf, val.tSubtype);
  RequestRepairProgress__set_rID(buf, val.rID);
  RequestRepairProgress__set_pID_use_uPID_instead(buf, val.pID);
}

// 时长选择
static inline TSpan_Select RequestRepairProgress__tSpanSelect(RequestRepairProgressBuffer *buf) { return read_TSpan_Select(buf->data + (8)); }
static inline void RequestRepairProgress__set_tSpanSelect_ptr(RequestRepairProgressBuffer *buf, TSpan_Select *val) { write_TSpan_Select(buf->data + (8), val); }
static inline void RequestRepairProgress__set_tSpanSelect(RequestRepairProgressBuffer *buf, TSpan_Select val) { write_TSpan_Select(buf->data + (8), &val); }

// 距完成修理所需时间
static inline T_Span12345 RequestRepairProgress__tSpan12345(RequestRepairProgressBuffer *buf) { return read_T_Span12345(buf->data + (9)); }
static inline void RequestRepairProgress__set_tSpan12345_ptr(RequestRepairProgressBuffer *buf, T_Span12345 *val) { write_T_Span12345(buf->data + (9), val); }
static inline void RequestRepairProgress__set_tSpan12345(RequestRepairProgressBuffer *buf, T_Span12345 val) { write_T_Span12345(buf->data + (9), &val); }

// 当前维修车辆的命中部位
static inline H_Part RequestRepairProgress__hPart(RequestRepairProgressBuffer *buf) { return read_H_Part(buf->data + (10)); }
static inline void RequestRepairProgress__set_hPart_ptr(RequestRepairProgressBuffer *buf, H_Part *val) { write_H_Part(buf->data + (10), val); }
static inline void RequestRepairProgress__set_hPart(RequestRepairProgressBuffer *buf, H_Part val) { write_H_Part(buf->data + (10), &val); }

// 当前维修车辆的伤类
static inline H_Type RequestRepairProgress__hType(RequestRepairProgressBuffer *buf) { return read_H_Type(buf->data + (11)); }
static inline void RequestRepairProgress__set_hType_ptr(RequestRepairProgressBuffer *buf, H_Type *val) { write_H_Type(buf->data + (11), val); }
static inline void RequestRepairProgress__set_hType(RequestRepairProgressBuffer *buf, H_Type val) { write_H_Type(buf->data + (11), &val); }

// 当前维修车辆的命中伤势
static inline H_Idegree RequestRepairProgress__hIdegree(RequestRepairProgressBuffer *buf) { return read_H_Idegree(buf->data + (12)); }
static inline void RequestRepairProgress__set_hIdegree_ptr(RequestRepairProgressBuffer *buf, H_Idegree *val) { write_H_Idegree(buf->data + (12), val); }
static inline void RequestRepairProgress__set_hIdegree(RequestRepairProgressBuffer *buf, H_Idegree val) { write_H_Idegree(buf->data + (12), &val); }

// 保留2字节
static inline Reserve2 RequestRepairProgress__reserve2(RequestRepairProgressBuffer *buf) { return read_Reserve2(buf->data + (13)); }
static inline void RequestRepairProgress__set_reserve2_ptr(RequestRepairProgressBuffer *buf, Reserve2 *val) { write_Reserve2(buf->data + (13), val); }
static inline void RequestRepairProgress__set_reserve2(RequestRepairProgressBuffer *buf, Reserve2 val) { write_Reserve2(buf->data + (13), &val); }
static inline uint16_t RequestRepairProgress__computeSize() {
  return 16;
}
static inline uint8_t RequestRepairProgress__computeCheckSum(RequestRepairProgressBuffer *buf) {
  return computeCheckSum(buf->data, RequestRepairProgress__computeSize() - 1);
}
static inline uint8_t RequestRepairProgress__checkSum(RequestRepairProgressBuffer *buf) {
  return buf->data[RequestRepairProgress__computeSize() - 1];
}
static inline bool RequestRepairProgress__isCheckSumValid(RequestRepairProgressBuffer *buf) {
  return RequestRepairProgress__checkSum(buf) == RequestRepairProgress__computeCheckSum(buf);
}
static inline void RequestRepairProgress__set_checkSum(RequestRepairProgressBuffer *buf, uint8_t checkSum) {
  buf->data[RequestRepairProgress__computeSize() - 1] = checkSum;
}
static inline void RequestRepairProgress__initEmpty(RequestRepairProgressBuffer *buf) {
  RequestRepairProgress__set_dLen(buf, RequestRepairProgress__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RequestRepairProgress__set_dataFrame(buf, 0xc212);
  RequestRepairProgress__set_checkSum(buf, RequestRepairProgress__computeCheckSum(buf));
}

// **********************************************
// 10.1.4 维修进度应答指令（0xC3，0x12）
// **********************************************

#define SEND_REPAIR_PROGRESS_MAX_SIZE (14)
typedef struct {
  uint8_t data[SEND_REPAIR_PROGRESS_MAX_SIZE];
} SendRepairProgressBuffer;

//  数据帧头，为 0xC3，0x12
static inline Data_Frame SendRepairProgress__dataFrame(SendRepairProgressBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SendRepairProgress__set_dataFrame_ptr(SendRepairProgressBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SendRepairProgress__set_dataFrame(SendRepairProgressBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

//  数据帧长度
static inline D_Len SendRepairProgress__dLen(SendRepairProgressBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SendRepairProgress__set_dLen_ptr(SendRepairProgressBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SendRepairProgress__set_dLen(SendRepairProgressBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

//  车辆实体类型
static inline T_Type SendRepairProgress__tType(SendRepairProgressBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SendRepairProgress__set_tType_ptr(SendRepairProgressBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SendRepairProgress__set_tType(SendRepairProgressBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

//  车辆实体子类型。
static inline T_Subtype SendRepairProgress__tSubtype(SendRepairProgressBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SendRepairProgress__set_tSubtype_ptr(SendRepairProgressBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SendRepairProgress__set_tSubtype(SendRepairProgressBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

//  车辆单位代字
static inline RID SendRepairProgress__rID(SendRepairProgressBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SendRepairProgress__set_rID_ptr(SendRepairProgressBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SendRepairProgress__set_rID(SendRepairProgressBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

//  车辆设备编号
static inline PID SendRepairProgress__pID_use_uPID_instead(SendRepairProgressBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SendRepairProgress__set_pID_use_uPID_instead_ptr(SendRepairProgressBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SendRepairProgress__set_pID_use_uPID_instead(SendRepairProgressBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SendRepairProgress__uPid(SendRepairProgressBuffer *buf) {
  UPid uPid = {
    .tType = SendRepairProgress__tType(buf),
    .tSubtype = SendRepairProgress__tSubtype(buf),
    .rID = SendRepairProgress__rID(buf),
    .pID = SendRepairProgress__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SendRepairProgress__set_uPid_ptr(SendRepairProgressBuffer *buf, UPid *val) {
  SendRepairProgress__set_tType(buf, val->tType);
  SendRepairProgress__set_tSubtype(buf, val->tSubtype);
  SendRepairProgress__set_rID(buf, val->rID);
  SendRepairProgress__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SendRepairProgress__set_uPid(SendRepairProgressBuffer *buf, UPid val) {
  SendRepairProgress__set_tType(buf, val.tType);
  SendRepairProgress__set_tSubtype(buf, val.tSubtype);
  SendRepairProgress__set_rID(buf, val.rID);
  SendRepairProgress__set_pID_use_uPID_instead(buf, val.pID);
}

// 保留
static inline Reserve5 SendRepairProgress__reserve5(SendRepairProgressBuffer *buf) { return read_Reserve5(buf->data + (8)); }
static inline void SendRepairProgress__set_reserve5_ptr(SendRepairProgressBuffer *buf, Reserve5 *val) { write_Reserve5(buf->data + (8), val); }
static inline void SendRepairProgress__set_reserve5(SendRepairProgressBuffer *buf, Reserve5 val) { write_Reserve5(buf->data + (8), &val); }
static inline uint16_t SendRepairProgress__computeSize() {
  return 14;
}
static inline uint8_t SendRepairProgress__computeCheckSum(SendRepairProgressBuffer *buf) {
  return computeCheckSum(buf->data, SendRepairProgress__computeSize() - 1);
}
static inline uint8_t SendRepairProgress__checkSum(SendRepairProgressBuffer *buf) {
  return buf->data[SendRepairProgress__computeSize() - 1];
}
static inline bool SendRepairProgress__isCheckSumValid(SendRepairProgressBuffer *buf) {
  return SendRepairProgress__checkSum(buf) == SendRepairProgress__computeCheckSum(buf);
}
static inline void SendRepairProgress__set_checkSum(SendRepairProgressBuffer *buf, uint8_t checkSum) {
  buf->data[SendRepairProgress__computeSize() - 1] = checkSum;
}
static inline void SendRepairProgress__initEmpty(SendRepairProgressBuffer *buf) {
  SendRepairProgress__set_dLen(buf, SendRepairProgress__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SendRepairProgress__set_dataFrame(buf, 0xc312);
  SendRepairProgress__set_checkSum(buf, SendRepairProgress__computeCheckSum(buf));
}



// **********************************************
// 10.1.7 绑定人员（装备）事件应答指令（0xF1，0x71）
// **********************************************

#define CREW_EVENT_PACK_ACK_MAX_SIZE (6)
typedef struct {
  uint8_t data[CREW_EVENT_PACK_ACK_MAX_SIZE];
} CrewEventPackAckBuffer;

// 数据帧头，为 0xF1，0x71
static inline Data_Frame CrewEventPackAck__dataFrame(CrewEventPackAckBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void CrewEventPackAck__set_dataFrame_ptr(CrewEventPackAckBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void CrewEventPackAck__set_dataFrame(CrewEventPackAckBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len CrewEventPackAck__dLen(CrewEventPackAckBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void CrewEventPackAck__set_dLen_ptr(CrewEventPackAckBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void CrewEventPackAck__set_dLen(CrewEventPackAckBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 事件数据帧序列号
static inline ES_Num CrewEventPackAck__eSNum(CrewEventPackAckBuffer *buf) { return read_ES_Num(buf->data + (3)); }
static inline void CrewEventPackAck__set_eSNum_ptr(CrewEventPackAckBuffer *buf, ES_Num *val) { write_ES_Num(buf->data + (3), val); }
static inline void CrewEventPackAck__set_eSNum(CrewEventPackAckBuffer *buf, ES_Num val) { write_ES_Num(buf->data + (3), &val); }
static inline uint16_t CrewEventPackAck__computeSize() {
  return 6;
}
static inline uint8_t CrewEventPackAck__computeCheckSum(CrewEventPackAckBuffer *buf) {
  return computeCheckSum(buf->data, CrewEventPackAck__computeSize() - 1);
}
static inline uint8_t CrewEventPackAck__checkSum(CrewEventPackAckBuffer *buf) {
  return buf->data[CrewEventPackAck__computeSize() - 1];
}
static inline bool CrewEventPackAck__isCheckSumValid(CrewEventPackAckBuffer *buf) {
  return CrewEventPackAck__checkSum(buf) == CrewEventPackAck__computeCheckSum(buf);
}
static inline void CrewEventPackAck__set_checkSum(CrewEventPackAckBuffer *buf, uint8_t checkSum) {
  buf->data[CrewEventPackAck__computeSize() - 1] = checkSum;
}
static inline void CrewEventPackAck__initEmpty(CrewEventPackAckBuffer *buf) {
  CrewEventPackAck__set_dLen(buf, CrewEventPackAck__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  CrewEventPackAck__set_dataFrame(buf, 0xf171);
  CrewEventPackAck__set_checkSum(buf, CrewEventPackAck__computeCheckSum(buf));
}

// **********************************************
// 10.1.8 连带毁伤结果下发指令（0xF1，0x72）
// **********************************************

#define SECOND_DAMAGE_MAX_SIZE (54)
typedef struct {
  uint8_t data[SECOND_DAMAGE_MAX_SIZE];
} SecondDamageBuffer;

// 数据帧头，为 0xF1，0x72
static inline Data_Frame SecondDamage__dataFrame(SecondDamageBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SecondDamage__set_dataFrame_ptr(SecondDamageBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SecondDamage__set_dataFrame(SecondDamageBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SecondDamage__dLen(SecondDamageBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SecondDamage__set_dLen_ptr(SecondDamageBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SecondDamage__set_dLen(SecondDamageBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 内部人员（装备）实体类型
static inline T_Type SecondDamage__tType(SecondDamageBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SecondDamage__set_tType_ptr(SecondDamageBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SecondDamage__set_tType(SecondDamageBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 内部人员（装备）实体子类型
static inline T_Subtype SecondDamage__tSubtype(SecondDamageBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SecondDamage__set_tSubtype_ptr(SecondDamageBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SecondDamage__set_tSubtype(SecondDamageBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 内部人员（装备）单位代字
static inline RID SecondDamage__rID(SecondDamageBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SecondDamage__set_rID_ptr(SecondDamageBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SecondDamage__set_rID(SecondDamageBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 内部人员（装备）设备编号
static inline PID SecondDamage__pID_use_uPID_instead(SecondDamageBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SecondDamage__set_pID_use_uPID_instead_ptr(SecondDamageBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SecondDamage__set_pID_use_uPID_instead(SecondDamageBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SecondDamage__uPid(SecondDamageBuffer *buf) {
  UPid uPid = {
    .tType = SecondDamage__tType(buf),
    .tSubtype = SecondDamage__tSubtype(buf),
    .rID = SecondDamage__rID(buf),
    .pID = SecondDamage__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SecondDamage__set_uPid_ptr(SecondDamageBuffer *buf, UPid *val) {
  SecondDamage__set_tType(buf, val->tType);
  SecondDamage__set_tSubtype(buf, val->tSubtype);
  SecondDamage__set_rID(buf, val->rID);
  SecondDamage__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SecondDamage__set_uPid(SecondDamageBuffer *buf, UPid val) {
  SecondDamage__set_tType(buf, val.tType);
  SecondDamage__set_tSubtype(buf, val.tSubtype);
  SecondDamage__set_rID(buf, val.rID);
  SecondDamage__set_pID_use_uPID_instead(buf, val.pID);
}

// 实体被打击时的地理位置
static inline L_Position SecondDamage__lPosition(SecondDamageBuffer *buf) { return read_L_Position(buf->data + (8)); }
static inline void SecondDamage__set_lPosition_ptr(SecondDamageBuffer *buf, L_Position *val) { write_L_Position(buf->data + (8), val); }
static inline void SecondDamage__set_lPosition(SecondDamageBuffer *buf, L_Position val) { write_L_Position(buf->data + (8), &val); }

// 实体被打击时间
static inline Time1 SecondDamage__time1(SecondDamageBuffer *buf) { return read_Time1(buf->data + (20)); }
static inline void SecondDamage__set_time1_ptr(SecondDamageBuffer *buf, Time1 *val) { write_Time1(buf->data + (20), val); }
static inline void SecondDamage__set_time1(SecondDamageBuffer *buf, Time1 val) { write_Time1(buf->data + (20), &val); }

// 攻击方实体类型
static inline T_Type SecondDamage__attTType(SecondDamageBuffer *buf) { return read_T_Type(buf->data + (26)); }
static inline void SecondDamage__set_attTType_ptr(SecondDamageBuffer *buf, T_Type *val) { write_T_Type(buf->data + (26), val); }
static inline void SecondDamage__set_attTType(SecondDamageBuffer *buf, T_Type val) { write_T_Type(buf->data + (26), &val); }

// 攻击方实体子类型
static inline T_Subtype SecondDamage__attTSubtype(SecondDamageBuffer *buf) { return read_T_Subtype(buf->data + (27)); }
static inline void SecondDamage__set_attTSubtype_ptr(SecondDamageBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (27), val); }
static inline void SecondDamage__set_attTSubtype(SecondDamageBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (27), &val); }

// 攻击方单位代字
static inline RID SecondDamage__attRID(SecondDamageBuffer *buf) { return read_RID(buf->data + (28)); }
static inline void SecondDamage__set_attRID_ptr(SecondDamageBuffer *buf, RID *val) { write_RID(buf->data + (28), val); }
static inline void SecondDamage__set_attRID(SecondDamageBuffer *buf, RID val) { write_RID(buf->data + (28), &val); }

// 攻击方设备编号
static inline PID SecondDamage__attPID(SecondDamageBuffer *buf) { return read_PID(buf->data + (29)); }
static inline void SecondDamage__set_attPID_ptr(SecondDamageBuffer *buf, PID *val) { write_PID(buf->data + (29), val); }
static inline void SecondDamage__set_attPID(SecondDamageBuffer *buf, PID val) { write_PID(buf->data + (29), &val); }

static inline UPid SecondDamage__attUPid(SecondDamageBuffer *buf) {
  UPid uPid = {
    .tType = SecondDamage__attTType(buf),
    .tSubtype = SecondDamage__attTSubtype(buf),
    .rID = SecondDamage__attRID(buf),
    .pID = SecondDamage__attPID(buf),
  };
  return uPid;
}
static inline void SecondDamage__set_attUPid_ptr(SecondDamageBuffer *buf, UPid *val) {
  SecondDamage__set_attTType(buf, val->tType);
  SecondDamage__set_attTSubtype(buf, val->tSubtype);
  SecondDamage__set_attRID(buf, val->rID);
  SecondDamage__set_attPID(buf, val->pID);
}
static inline void SecondDamage__set_attUPid(SecondDamageBuffer *buf, UPid val) {
  SecondDamage__set_attTType(buf, val.tType);
  SecondDamage__set_attTSubtype(buf, val.tSubtype);
  SecondDamage__set_attRID(buf, val.rID);
  SecondDamage__set_attPID(buf, val.pID);
}

// 攻击方弹药类型
static inline A_Type SecondDamage__aType(SecondDamageBuffer *buf) { return read_A_Type(buf->data + (31)); }
static inline void SecondDamage__set_aType_ptr(SecondDamageBuffer *buf, A_Type *val) { write_A_Type(buf->data + (31), val); }
static inline void SecondDamage__set_aType(SecondDamageBuffer *buf, A_Type val) { write_A_Type(buf->data + (31), &val); }

// 攻击方弹药子类型
static inline A_Subtype SecondDamage__aSubtype(SecondDamageBuffer *buf) { return read_A_Subtype(buf->data + (32)); }
static inline void SecondDamage__set_aSubtype_ptr(SecondDamageBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (32), val); }
static inline void SecondDamage__set_aSubtype(SecondDamageBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (32), &val); }

// 内部人员（装备）被命中部位
static inline H_Part SecondDamage__hPart(SecondDamageBuffer *buf) { return read_H_Part(buf->data + (33)); }
static inline void SecondDamage__set_hPart_ptr(SecondDamageBuffer *buf, H_Part *val) { write_H_Part(buf->data + (33), val); }
static inline void SecondDamage__set_hPart(SecondDamageBuffer *buf, H_Part val) { write_H_Part(buf->data + (33), &val); }

// 内部人员（装备）的伤类
static inline H_Type SecondDamage__hType(SecondDamageBuffer *buf) { return read_H_Type(buf->data + (34)); }
static inline void SecondDamage__set_hType_ptr(SecondDamageBuffer *buf, H_Type *val) { write_H_Type(buf->data + (34), val); }
static inline void SecondDamage__set_hType(SecondDamageBuffer *buf, H_Type val) { write_H_Type(buf->data + (34), &val); }

// 内部人员（装备）的命中伤势
static inline H_Idegree SecondDamage__hIdegree(SecondDamageBuffer *buf) { return read_H_Idegree(buf->data + (35)); }
static inline void SecondDamage__set_hIdegree_ptr(SecondDamageBuffer *buf, H_Idegree *val) { write_H_Idegree(buf->data + (35), val); }
static inline void SecondDamage__set_hIdegree(SecondDamageBuffer *buf, H_Idegree val) { write_H_Idegree(buf->data + (35), &val); }

// 攻击方地理位置
static inline L_Position SecondDamage__attLPosition(SecondDamageBuffer *buf) { return read_L_Position(buf->data + (36)); }
static inline void SecondDamage__set_attLPosition_ptr(SecondDamageBuffer *buf, L_Position *val) { write_L_Position(buf->data + (36), val); }
static inline void SecondDamage__set_attLPosition(SecondDamageBuffer *buf, L_Position val) { write_L_Position(buf->data + (36), &val); }

// 保留
static inline Reserve5 SecondDamage__reserve5(SecondDamageBuffer *buf) { return read_Reserve5(buf->data + (48)); }
static inline void SecondDamage__set_reserve5_ptr(SecondDamageBuffer *buf, Reserve5 *val) { write_Reserve5(buf->data + (48), val); }
static inline void SecondDamage__set_reserve5(SecondDamageBuffer *buf, Reserve5 val) { write_Reserve5(buf->data + (48), &val); }
static inline uint16_t SecondDamage__computeSize() {
  return 54;
}
static inline uint8_t SecondDamage__computeCheckSum(SecondDamageBuffer *buf) {
  return computeCheckSum(buf->data, SecondDamage__computeSize() - 1);
}
static inline uint8_t SecondDamage__checkSum(SecondDamageBuffer *buf) {
  return buf->data[SecondDamage__computeSize() - 1];
}
static inline bool SecondDamage__isCheckSumValid(SecondDamageBuffer *buf) {
  return SecondDamage__checkSum(buf) == SecondDamage__computeCheckSum(buf);
}
static inline void SecondDamage__set_checkSum(SecondDamageBuffer *buf, uint8_t checkSum) {
  buf->data[SecondDamage__computeSize() - 1] = checkSum;
}
static inline void SecondDamage__initEmpty(SecondDamageBuffer *buf) {
  SecondDamage__set_dLen(buf, SecondDamage__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SecondDamage__set_dataFrame(buf, 0xf172);
  SecondDamage__set_checkSum(buf, SecondDamage__computeCheckSum(buf));
}

// **********************************************
// 10.1.9 单兵武器绑定指令（0xF3，0x10）
// **********************************************

#define BIND_WEAPON_MAX_SIZE (16)
typedef struct {
  uint8_t data[BIND_WEAPON_MAX_SIZE];
} BindWeaponBuffer;

// 数据帧头，为 0xF3，0x10
static inline Data_Frame BindWeapon__dataFrame(BindWeaponBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void BindWeapon__set_dataFrame_ptr(BindWeaponBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void BindWeapon__set_dataFrame(BindWeaponBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len BindWeapon__dLen(BindWeaponBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void BindWeapon__set_dLen_ptr(BindWeaponBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void BindWeapon__set_dLen(BindWeaponBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 被绑定武器实体类型
static inline T_Type BindWeapon__tType(BindWeaponBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void BindWeapon__set_tType_ptr(BindWeaponBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void BindWeapon__set_tType(BindWeaponBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 被绑定武器实体子类型
static inline T_Subtype BindWeapon__tSubtype(BindWeaponBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void BindWeapon__set_tSubtype_ptr(BindWeaponBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void BindWeapon__set_tSubtype(BindWeaponBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 被绑定武器单位代字
static inline RID BindWeapon__rID(BindWeaponBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void BindWeapon__set_rID_ptr(BindWeaponBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void BindWeapon__set_rID(BindWeaponBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 被绑定武器设备编号
static inline PID BindWeapon__pID_use_uPID_instead(BindWeaponBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void BindWeapon__set_pID_use_uPID_instead_ptr(BindWeaponBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void BindWeapon__set_pID_use_uPID_instead(BindWeaponBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid BindWeapon__uPid(BindWeaponBuffer *buf) {
  UPid uPid = {
    .tType = BindWeapon__tType(buf),
    .tSubtype = BindWeapon__tSubtype(buf),
    .rID = BindWeapon__rID(buf),
    .pID = BindWeapon__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void BindWeapon__set_uPid_ptr(BindWeaponBuffer *buf, UPid *val) {
  BindWeapon__set_tType(buf, val->tType);
  BindWeapon__set_tSubtype(buf, val->tSubtype);
  BindWeapon__set_rID(buf, val->rID);
  BindWeapon__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void BindWeapon__set_uPid(BindWeaponBuffer *buf, UPid val) {
  BindWeapon__set_tType(buf, val.tType);
  BindWeapon__set_tSubtype(buf, val.tSubtype);
  BindWeapon__set_rID(buf, val.rID);
  BindWeapon__set_pID_use_uPID_instead(buf, val.pID);
}

// 单兵装具实体类型
static inline T_Type BindWeapon__pplTType(BindWeaponBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void BindWeapon__set_pplTType_ptr(BindWeaponBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void BindWeapon__set_pplTType(BindWeaponBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 单兵装具实体子类型
static inline T_Subtype BindWeapon__pplTSubtype(BindWeaponBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void BindWeapon__set_pplTSubtype_ptr(BindWeaponBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void BindWeapon__set_pplTSubtype(BindWeaponBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 单兵装具单位代字
static inline RID BindWeapon__pplRid(BindWeaponBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void BindWeapon__set_pplRid_ptr(BindWeaponBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void BindWeapon__set_pplRid(BindWeaponBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 单兵装具设备编号
static inline PID BindWeapon__pplPid(BindWeaponBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void BindWeapon__set_pplPid_ptr(BindWeaponBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void BindWeapon__set_pplPid(BindWeaponBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

// 密钥
static inline Key BindWeapon__key(BindWeaponBuffer *buf) { return read_Key(buf->data + (13)); }
static inline void BindWeapon__set_key_ptr(BindWeaponBuffer *buf, Key *val) { write_Key(buf->data + (13), val); }
static inline void BindWeapon__set_key(BindWeaponBuffer *buf, Key val) { write_Key(buf->data + (13), &val); }

// 实体状态字 1
static inline TS_Character1 BindWeapon__tSCharacter1(BindWeaponBuffer *buf) { return read_TS_Character1(buf->data + (14)); }
static inline void BindWeapon__set_tSCharacter1_ptr(BindWeaponBuffer *buf, TS_Character1 *val) { write_TS_Character1(buf->data + (14), val); }
static inline void BindWeapon__set_tSCharacter1(BindWeaponBuffer *buf, TS_Character1 val) { write_TS_Character1(buf->data + (14), &val); }
static inline uint16_t BindWeapon__computeSize() {
  return 16;
}
static inline uint8_t BindWeapon__computeCheckSum(BindWeaponBuffer *buf) {
  return computeCheckSum(buf->data, BindWeapon__computeSize() - 1);
}
static inline uint8_t BindWeapon__checkSum(BindWeaponBuffer *buf) {
  return buf->data[BindWeapon__computeSize() - 1];
}
static inline bool BindWeapon__isCheckSumValid(BindWeaponBuffer *buf) {
  return BindWeapon__checkSum(buf) == BindWeapon__computeCheckSum(buf);
}
static inline void BindWeapon__set_checkSum(BindWeaponBuffer *buf, uint8_t checkSum) {
  buf->data[BindWeapon__computeSize() - 1] = checkSum;
}
static inline void BindWeapon__initEmpty(BindWeaponBuffer *buf) {
  BindWeapon__set_dLen(buf, BindWeapon__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  BindWeapon__set_dataFrame(buf, 0xf310);
  BindWeapon__set_checkSum(buf, BindWeapon__computeCheckSum(buf));
}

// **********************************************
// 10.1.10 单兵火箭参数设置指令（0xF3，0x11）
// **********************************************

#define SET_MISSILE_PARAMS_MAX_SIZE (39)
typedef struct {
  uint8_t data[SET_MISSILE_PARAMS_MAX_SIZE];
} SetMissileParamsBuffer;

// 数据帧头，为 0xF3，0x11
static inline Data_Frame SetMissileParams__dataFrame(SetMissileParamsBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SetMissileParams__set_dataFrame_ptr(SetMissileParamsBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SetMissileParams__set_dataFrame(SetMissileParamsBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SetMissileParams__dLen(SetMissileParamsBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SetMissileParams__set_dLen_ptr(SetMissileParamsBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SetMissileParams__set_dLen(SetMissileParamsBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 单兵火箭实体类型
static inline T_Type SetMissileParams__tType(SetMissileParamsBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SetMissileParams__set_tType_ptr(SetMissileParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SetMissileParams__set_tType(SetMissileParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 单兵火箭实体子类型
static inline T_Subtype SetMissileParams__tSubtype(SetMissileParamsBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SetMissileParams__set_tSubtype_ptr(SetMissileParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SetMissileParams__set_tSubtype(SetMissileParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 单兵火箭单位代字
static inline RID SetMissileParams__rID(SetMissileParamsBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SetMissileParams__set_rID_ptr(SetMissileParamsBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SetMissileParams__set_rID(SetMissileParamsBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 单兵火箭设备编号
static inline PID SetMissileParams__pID_use_uPID_instead(SetMissileParamsBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SetMissileParams__set_pID_use_uPID_instead_ptr(SetMissileParamsBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SetMissileParams__set_pID_use_uPID_instead(SetMissileParamsBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SetMissileParams__uPid(SetMissileParamsBuffer *buf) {
  UPid uPid = {
    .tType = SetMissileParams__tType(buf),
    .tSubtype = SetMissileParams__tSubtype(buf),
    .rID = SetMissileParams__rID(buf),
    .pID = SetMissileParams__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SetMissileParams__set_uPid_ptr(SetMissileParamsBuffer *buf, UPid *val) {
  SetMissileParams__set_tType(buf, val->tType);
  SetMissileParams__set_tSubtype(buf, val->tSubtype);
  SetMissileParams__set_rID(buf, val->rID);
  SetMissileParams__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SetMissileParams__set_uPid(SetMissileParamsBuffer *buf, UPid val) {
  SetMissileParams__set_tType(buf, val.tType);
  SetMissileParams__set_tSubtype(buf, val.tSubtype);
  SetMissileParams__set_rID(buf, val.rID);
  SetMissileParams__set_pID_use_uPID_instead(buf, val.pID);
}

// 单兵装具实体类型
static inline T_Type SetMissileParams__pplTType(SetMissileParamsBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void SetMissileParams__set_pplTType_ptr(SetMissileParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void SetMissileParams__set_pplTType(SetMissileParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 单兵装具实体子类型
static inline T_Subtype SetMissileParams__pplTSubtype(SetMissileParamsBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void SetMissileParams__set_pplTSubtype_ptr(SetMissileParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void SetMissileParams__set_pplTSubtype(SetMissileParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 单兵装具单位代字
static inline RID SetMissileParams__pplRID(SetMissileParamsBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void SetMissileParams__set_pplRID_ptr(SetMissileParamsBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void SetMissileParams__set_pplRID(SetMissileParamsBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 单兵装具设备编号
static inline PID SetMissileParams__pplPID(SetMissileParamsBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void SetMissileParams__set_pplPID_ptr(SetMissileParamsBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void SetMissileParams__set_pplPID(SetMissileParamsBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

static inline UPid SetMissileParams__pplUPid(SetMissileParamsBuffer *buf) {
  UPid uPid = {
    .tType = SetMissileParams__pplTType(buf),
    .tSubtype = SetMissileParams__pplTSubtype(buf),
    .rID = SetMissileParams__pplRID(buf),
    .pID = SetMissileParams__pplPID(buf),
  };
  return uPid;
}
static inline void SetMissileParams__set_pplUPid_ptr(SetMissileParamsBuffer *buf, UPid *val) {
  SetMissileParams__set_pplTType(buf, val->tType);
  SetMissileParams__set_pplTSubtype(buf, val->tSubtype);
  SetMissileParams__set_pplRID(buf, val->rID);
  SetMissileParams__set_pplPID(buf, val->pID);
}
static inline void SetMissileParams__set_pplUPid(SetMissileParamsBuffer *buf, UPid val) {
  SetMissileParams__set_pplTType(buf, val.tType);
  SetMissileParams__set_pplTSubtype(buf, val.tSubtype);
  SetMissileParams__set_pplRID(buf, val.rID);
  SetMissileParams__set_pplPID(buf, val.pID);
}

// 演习开始时间
static inline Time1 SetMissileParams__startTime(SetMissileParamsBuffer *buf) { return read_Time1(buf->data + (13)); }
static inline void SetMissileParams__set_startTime_ptr(SetMissileParamsBuffer *buf, Time1 *val) { write_Time1(buf->data + (13), val); }
static inline void SetMissileParams__set_startTime(SetMissileParamsBuffer *buf, Time1 val) { write_Time1(buf->data + (13), &val); }

// 切换到白天的起始时间
static inline Time2 SetMissileParams__dayStart(SetMissileParamsBuffer *buf) { return read_Time2(buf->data + (19)); }
static inline void SetMissileParams__set_dayStart_ptr(SetMissileParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (19), val); }
static inline void SetMissileParams__set_dayStart(SetMissileParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (19), &val); }

// 切换到黑夜的起始时间
static inline Time2 SetMissileParams__nightStart(SetMissileParamsBuffer *buf) { return read_Time2(buf->data + (22)); }
static inline void SetMissileParams__set_nightStart_ptr(SetMissileParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (22), val); }
static inline void SetMissileParams__set_nightStart(SetMissileParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (22), &val); }

// 密钥
static inline Key SetMissileParams__pplTKey(SetMissileParamsBuffer *buf) { return read_Key(buf->data + (25)); }
static inline void SetMissileParams__set_pplTKey_ptr(SetMissileParamsBuffer *buf, Key *val) { write_Key(buf->data + (25), val); }
static inline void SetMissileParams__set_pplTKey(SetMissileParamsBuffer *buf, Key val) { write_Key(buf->data + (25), &val); }

// 弹药类型
static inline A_Type SetMissileParams__msAType(SetMissileParamsBuffer *buf) { return read_A_Type(buf->data + (26)); }
static inline void SetMissileParams__set_msAType_ptr(SetMissileParamsBuffer *buf, A_Type *val) { write_A_Type(buf->data + (26), val); }
static inline void SetMissileParams__set_msAType(SetMissileParamsBuffer *buf, A_Type val) { write_A_Type(buf->data + (26), &val); }

// 弹药子类型
static inline A_Subtype SetMissileParams__msASubtype(SetMissileParamsBuffer *buf) { return read_A_Subtype(buf->data + (27)); }
static inline void SetMissileParams__set_msASubtype_ptr(SetMissileParamsBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (27), val); }
static inline void SetMissileParams__set_msASubtype(SetMissileParamsBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (27), &val); }

// 弹药数量
static inline Num1 SetMissileParams__pplTNum1(SetMissileParamsBuffer *buf) { return read_Num1(buf->data + (28)); }
static inline void SetMissileParams__set_pplTNum1_ptr(SetMissileParamsBuffer *buf, Num1 *val) { write_Num1(buf->data + (28), val); }
static inline void SetMissileParams__set_pplTNum1(SetMissileParamsBuffer *buf, Num1 val) { write_Num1(buf->data + (28), &val); }

// 弹药穿甲深度
static inline Thickness SetMissileParams__piercingArmo(SetMissileParamsBuffer *buf) { return read_Thickness(buf->data + (29)); }
static inline void SetMissileParams__set_piercingArmo_ptr(SetMissileParamsBuffer *buf, Thickness *val) { write_Thickness(buf->data + (29), val); }
static inline void SetMissileParams__set_piercingArmo(SetMissileParamsBuffer *buf, Thickness val) { write_Thickness(buf->data + (29), &val); }

// 弹药穿透混凝土厚度
static inline Thickness SetMissileParams__piercingConcrete(SetMissileParamsBuffer *buf) { return read_Thickness(buf->data + (30)); }
static inline void SetMissileParams__set_piercingConcrete_ptr(SetMissileParamsBuffer *buf, Thickness *val) { write_Thickness(buf->data + (30), val); }
static inline void SetMissileParams__set_piercingConcrete(SetMissileParamsBuffer *buf, Thickness val) { write_Thickness(buf->data + (30), &val); }

// 弹药有效射程
static inline Range SetMissileParams__pplTRange(SetMissileParamsBuffer *buf) { return read_Range(buf->data + (31)); }
static inline void SetMissileParams__set_pplTRange_ptr(SetMissileParamsBuffer *buf, Range *val) { write_Range(buf->data + (31), val); }
static inline void SetMissileParams__set_pplTRange(SetMissileParamsBuffer *buf, Range val) { write_Range(buf->data + (31), &val); }

// 当前时间
static inline Time1 SetMissileParams__pplTTime1(SetMissileParamsBuffer *buf) { return read_Time1(buf->data + (32)); }
static inline void SetMissileParams__set_pplTTime1_ptr(SetMissileParamsBuffer *buf, Time1 *val) { write_Time1(buf->data + (32), val); }
static inline void SetMissileParams__set_pplTTime1(SetMissileParamsBuffer *buf, Time1 val) { write_Time1(buf->data + (32), &val); }
static inline uint16_t SetMissileParams__computeSize() {
  return 39;
}
static inline uint8_t SetMissileParams__computeCheckSum(SetMissileParamsBuffer *buf) {
  return computeCheckSum(buf->data, SetMissileParams__computeSize() - 1);
}
static inline uint8_t SetMissileParams__checkSum(SetMissileParamsBuffer *buf) {
  return buf->data[SetMissileParams__computeSize() - 1];
}
static inline bool SetMissileParams__isCheckSumValid(SetMissileParamsBuffer *buf) {
  return SetMissileParams__checkSum(buf) == SetMissileParams__computeCheckSum(buf);
}
static inline void SetMissileParams__set_checkSum(SetMissileParamsBuffer *buf, uint8_t checkSum) {
  buf->data[SetMissileParams__computeSize() - 1] = checkSum;
}
static inline void SetMissileParams__initEmpty(SetMissileParamsBuffer *buf) {
  SetMissileParams__set_dLen(buf, SetMissileParams__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SetMissileParams__set_dataFrame(buf, 0xf311);
  SetMissileParams__set_checkSum(buf, SetMissileParams__computeCheckSum(buf));
}

// **********************************************
// WeaponResponseammoItem
// **********************************************

#define WEAPON_RESPONSEAMMO_ITEM_MAX_SIZE (8)
typedef struct {
  uint8_t data[WEAPON_RESPONSEAMMO_ITEM_MAX_SIZE];
} WeaponResponseammoItemBuffer;

// 第 1 种弹药类型
static inline A_Type WeaponResponseammoItem__aType(WeaponResponseammoItemBuffer *buf) { return read_A_Type(buf->data + (0)); }
static inline void WeaponResponseammoItem__set_aType_ptr(WeaponResponseammoItemBuffer *buf, A_Type *val) { write_A_Type(buf->data + (0), val); }
static inline void WeaponResponseammoItem__set_aType(WeaponResponseammoItemBuffer *buf, A_Type val) { write_A_Type(buf->data + (0), &val); }

// 第 1 种弹药子类型
static inline A_Subtype WeaponResponseammoItem__aSubtype(WeaponResponseammoItemBuffer *buf) { return read_A_Subtype(buf->data + (1)); }
static inline void WeaponResponseammoItem__set_aSubtype_ptr(WeaponResponseammoItemBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (1), val); }
static inline void WeaponResponseammoItem__set_aSubtype(WeaponResponseammoItemBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (1), &val); }

// 第 1 种弹药剩余数量
static inline Num3 WeaponResponseammoItem__remain(WeaponResponseammoItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void WeaponResponseammoItem__set_remain_ptr(WeaponResponseammoItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void WeaponResponseammoItem__set_remain(WeaponResponseammoItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }

// 第 1 种弹药消耗数量
static inline Num3 WeaponResponseammoItem__consumed(WeaponResponseammoItemBuffer *buf) { return read_Num3(buf->data + (5)); }
static inline void WeaponResponseammoItem__set_consumed_ptr(WeaponResponseammoItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (5), val); }
static inline void WeaponResponseammoItem__set_consumed(WeaponResponseammoItemBuffer *buf, Num3 val) { write_Num3(buf->data + (5), &val); }
static inline uint16_t WeaponResponseammoItem__computeSize() {
  return 8;
}
static inline void WeaponResponseammoItem__initEmpty(WeaponResponseammoItemBuffer *buf) {
}

// **********************************************
// 10.1.11 单兵武器应答指令（0xF4，0x10）
// **********************************************

#define WEAPON_RESPONSE_MAX_SIZE (18 + WEAPON_RESPONSEAMMO_ITEM_MAX_SIZE * 5)
typedef struct {
  uint8_t data[WEAPON_RESPONSE_MAX_SIZE];
} WeaponResponseBuffer;

// 数据帧头，为 0xF4，0x10
static inline Data_Frame WeaponResponse__dataFrame(WeaponResponseBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void WeaponResponse__set_dataFrame_ptr(WeaponResponseBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void WeaponResponse__set_dataFrame(WeaponResponseBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len WeaponResponse__dLen(WeaponResponseBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void WeaponResponse__set_dLen_ptr(WeaponResponseBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void WeaponResponse__set_dLen(WeaponResponseBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 单兵装具实体类型
static inline T_Type WeaponResponse__tType(WeaponResponseBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void WeaponResponse__set_tType_ptr(WeaponResponseBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void WeaponResponse__set_tType(WeaponResponseBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 单兵装具实体子类型
static inline T_Subtype WeaponResponse__tSubtype(WeaponResponseBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void WeaponResponse__set_tSubtype_ptr(WeaponResponseBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void WeaponResponse__set_tSubtype(WeaponResponseBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 单兵装具单位代字
static inline RID WeaponResponse__rID(WeaponResponseBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void WeaponResponse__set_rID_ptr(WeaponResponseBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void WeaponResponse__set_rID(WeaponResponseBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 单兵装具设备编号
static inline PID WeaponResponse__pID_use_uPID_instead(WeaponResponseBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void WeaponResponse__set_pID_use_uPID_instead_ptr(WeaponResponseBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void WeaponResponse__set_pID_use_uPID_instead(WeaponResponseBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid WeaponResponse__uPid(WeaponResponseBuffer *buf) {
  UPid uPid = {
    .tType = WeaponResponse__tType(buf),
    .tSubtype = WeaponResponse__tSubtype(buf),
    .rID = WeaponResponse__rID(buf),
    .pID = WeaponResponse__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void WeaponResponse__set_uPid_ptr(WeaponResponseBuffer *buf, UPid *val) {
  WeaponResponse__set_tType(buf, val->tType);
  WeaponResponse__set_tSubtype(buf, val->tSubtype);
  WeaponResponse__set_rID(buf, val->rID);
  WeaponResponse__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void WeaponResponse__set_uPid(WeaponResponseBuffer *buf, UPid val) {
  WeaponResponse__set_tType(buf, val.tType);
  WeaponResponse__set_tSubtype(buf, val.tSubtype);
  WeaponResponse__set_rID(buf, val.rID);
  WeaponResponse__set_pID_use_uPID_instead(buf, val.pID);
}

// 被绑定武器实体类型
static inline T_Type WeaponResponse__weaponTType(WeaponResponseBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void WeaponResponse__set_weaponTType_ptr(WeaponResponseBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void WeaponResponse__set_weaponTType(WeaponResponseBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 被绑定武器实体子类型
static inline T_Subtype WeaponResponse__weaponTSubtype(WeaponResponseBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void WeaponResponse__set_weaponTSubtype_ptr(WeaponResponseBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void WeaponResponse__set_weaponTSubtype(WeaponResponseBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 被绑定武器单位代字
static inline RID WeaponResponse__weaponRid(WeaponResponseBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void WeaponResponse__set_weaponRid_ptr(WeaponResponseBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void WeaponResponse__set_weaponRid(WeaponResponseBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 被绑定武器设备编号
static inline PID WeaponResponse__weaponPid(WeaponResponseBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void WeaponResponse__set_weaponPid_ptr(WeaponResponseBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void WeaponResponse__set_weaponPid(WeaponResponseBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

// 密钥
static inline Key WeaponResponse__key(WeaponResponseBuffer *buf) { return read_Key(buf->data + (13)); }
static inline void WeaponResponse__set_key_ptr(WeaponResponseBuffer *buf, Key *val) { write_Key(buf->data + (13), val); }
static inline void WeaponResponse__set_key(WeaponResponseBuffer *buf, Key val) { write_Key(buf->data + (13), &val); }

// 实体状态字 1
static inline TS_Character1 WeaponResponse__tSCharacter1(WeaponResponseBuffer *buf) { return read_TS_Character1(buf->data + (14)); }
static inline void WeaponResponse__set_tSCharacter1_ptr(WeaponResponseBuffer *buf, TS_Character1 *val) { write_TS_Character1(buf->data + (14), val); }
static inline void WeaponResponse__set_tSCharacter1(WeaponResponseBuffer *buf, TS_Character1 val) { write_TS_Character1(buf->data + (14), &val); }

// 综合伤势
static inline C_Idegree WeaponResponse__cIdegree(WeaponResponseBuffer *buf) { return read_C_Idegree(buf->data + (15)); }
static inline void WeaponResponse__set_cIdegree_ptr(WeaponResponseBuffer *buf, C_Idegree *val) { write_C_Idegree(buf->data + (15), val); }
static inline void WeaponResponse__set_cIdegree(WeaponResponseBuffer *buf, C_Idegree val) { write_C_Idegree(buf->data + (15), &val); }

// 携行弹药种类数（m，m=0 时，弹药数据区无内容）
static inline Num1 WeaponResponse__nAmmo(WeaponResponseBuffer *buf) { return read_Num1(buf->data + (16)); }
static inline void WeaponResponse__set_nAmmo_ptr(WeaponResponseBuffer *buf, Num1 *val) { write_Num1(buf->data + (16), val); }
static inline void WeaponResponse__set_nAmmo(WeaponResponseBuffer *buf, Num1 val) { write_Num1(buf->data + (16), &val); }

// WeaponResponseammoItem
static inline WeaponResponseammoItemBuffer* WeaponResponse__ammo(WeaponResponseBuffer *buf, uint8_t index);
static inline uint16_t WeaponResponse__ammo_pos(WeaponResponseBuffer *buf, uint8_t idx) {
return idx * WeaponResponseammoItem__computeSize();
}
static inline uint16_t WeaponResponse__ammo_maxCount() { return 5;}
static inline WeaponResponseammoItemBuffer* WeaponResponse__ammo(WeaponResponseBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (WeaponResponseammoItemBuffer*)(buf->data + 17 + WeaponResponse__ammo_pos(buf, index));
}
static inline uint16_t WeaponResponse__computeSize(WeaponResponseBuffer *buf) {
  return 18 + (WeaponResponse__nAmmo(buf) * WeaponResponseammoItem__computeSize());
}
static inline uint8_t WeaponResponse__computeCheckSum(WeaponResponseBuffer *buf) {
  return computeCheckSum(buf->data, WeaponResponse__computeSize(buf) - 1);
}
static inline uint8_t WeaponResponse__checkSum(WeaponResponseBuffer *buf) {
  return buf->data[WeaponResponse__computeSize(buf) - 1];
}
static inline bool WeaponResponse__isCheckSumValid(WeaponResponseBuffer *buf) {
  return WeaponResponse__checkSum(buf) == WeaponResponse__computeCheckSum(buf);
}
static inline void WeaponResponse__set_checkSum(WeaponResponseBuffer *buf, uint8_t checkSum) {
  buf->data[WeaponResponse__computeSize(buf) - 1] = checkSum;
}
static inline void WeaponResponse__initEmpty(WeaponResponseBuffer *buf, uint16_t nAmmo) {
  WeaponResponse__set_nAmmo(buf, nAmmo);
  WeaponResponse__set_dLen(buf, WeaponResponse__computeSize(buf) - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  WeaponResponse__set_dataFrame(buf, 0xf410);
  WeaponResponse__set_checkSum(buf, WeaponResponse__computeCheckSum(buf));
}

// **********************************************
// 10.2.1 爆炸模拟指令（爆炸物）（0xF1，0x86）
// **********************************************

#define SIMULATE_EXPLOSIVE_MAX_SIZE (27)
typedef struct {
  uint8_t data[SIMULATE_EXPLOSIVE_MAX_SIZE];
} SimulateExplosiveBuffer;

// 数据帧头，为 0xF1，0x86
static inline Data_Frame SimulateExplosive__dataFrame(SimulateExplosiveBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SimulateExplosive__set_dataFrame_ptr(SimulateExplosiveBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SimulateExplosive__set_dataFrame(SimulateExplosiveBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SimulateExplosive__dLen(SimulateExplosiveBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SimulateExplosive__set_dLen_ptr(SimulateExplosiveBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SimulateExplosive__set_dLen(SimulateExplosiveBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 爆炸实体的类型
static inline T_Type SimulateExplosive__srcTType(SimulateExplosiveBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SimulateExplosive__set_srcTType_ptr(SimulateExplosiveBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SimulateExplosive__set_srcTType(SimulateExplosiveBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 爆炸实体的子类型
static inline T_Subtype SimulateExplosive__srcTSubtype(SimulateExplosiveBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SimulateExplosive__set_srcTSubtype_ptr(SimulateExplosiveBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SimulateExplosive__set_srcTSubtype(SimulateExplosiveBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 爆炸实体的单位代字
static inline RID SimulateExplosive__srcRID(SimulateExplosiveBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SimulateExplosive__set_srcRID_ptr(SimulateExplosiveBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SimulateExplosive__set_srcRID(SimulateExplosiveBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 爆炸实体的设备编号
static inline PID SimulateExplosive__srcPID(SimulateExplosiveBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SimulateExplosive__set_srcPID_ptr(SimulateExplosiveBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SimulateExplosive__set_srcPID(SimulateExplosiveBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SimulateExplosive__srcUPid(SimulateExplosiveBuffer *buf) {
  UPid uPid = {
    .tType = SimulateExplosive__srcTType(buf),
    .tSubtype = SimulateExplosive__srcTSubtype(buf),
    .rID = SimulateExplosive__srcRID(buf),
    .pID = SimulateExplosive__srcPID(buf),
  };
  return uPid;
}
static inline void SimulateExplosive__set_srcUPid_ptr(SimulateExplosiveBuffer *buf, UPid *val) {
  SimulateExplosive__set_srcTType(buf, val->tType);
  SimulateExplosive__set_srcTSubtype(buf, val->tSubtype);
  SimulateExplosive__set_srcRID(buf, val->rID);
  SimulateExplosive__set_srcPID(buf, val->pID);
}
static inline void SimulateExplosive__set_srcUPid(SimulateExplosiveBuffer *buf, UPid val) {
  SimulateExplosive__set_srcTType(buf, val.tType);
  SimulateExplosive__set_srcTSubtype(buf, val.tSubtype);
  SimulateExplosive__set_srcRID(buf, val.rID);
  SimulateExplosive__set_srcPID(buf, val.pID);
}

// 密钥
static inline Key SimulateExplosive__key(SimulateExplosiveBuffer *buf) { return read_Key(buf->data + (8)); }
static inline void SimulateExplosive__set_key_ptr(SimulateExplosiveBuffer *buf, Key *val) { write_Key(buf->data + (8), val); }
static inline void SimulateExplosive__set_key(SimulateExplosiveBuffer *buf, Key val) { write_Key(buf->data + (8), &val); }

// 爆炸实体爆炸时的经纬度坐标（手雷填 0）
static inline L_Position SimulateExplosive__lPosition(SimulateExplosiveBuffer *buf) { return read_L_Position(buf->data + (9)); }
static inline void SimulateExplosive__set_lPosition_ptr(SimulateExplosiveBuffer *buf, L_Position *val) { write_L_Position(buf->data + (9), val); }
static inline void SimulateExplosive__set_lPosition(SimulateExplosiveBuffer *buf, L_Position val) { write_L_Position(buf->data + (9), &val); }

// 保留
static inline Reserve5 SimulateExplosive__reserve5(SimulateExplosiveBuffer *buf) { return read_Reserve5(buf->data + (21)); }
static inline void SimulateExplosive__set_reserve5_ptr(SimulateExplosiveBuffer *buf, Reserve5 *val) { write_Reserve5(buf->data + (21), val); }
static inline void SimulateExplosive__set_reserve5(SimulateExplosiveBuffer *buf, Reserve5 val) { write_Reserve5(buf->data + (21), &val); }
static inline uint16_t SimulateExplosive__computeSize() {
  return 27;
}
static inline uint8_t SimulateExplosive__computeCheckSum(SimulateExplosiveBuffer *buf) {
  return computeCheckSum(buf->data, SimulateExplosive__computeSize() - 1);
}
static inline uint8_t SimulateExplosive__checkSum(SimulateExplosiveBuffer *buf) {
  return buf->data[SimulateExplosive__computeSize() - 1];
}
static inline bool SimulateExplosive__isCheckSumValid(SimulateExplosiveBuffer *buf) {
  return SimulateExplosive__checkSum(buf) == SimulateExplosive__computeCheckSum(buf);
}
static inline void SimulateExplosive__set_checkSum(SimulateExplosiveBuffer *buf, uint8_t checkSum) {
  buf->data[SimulateExplosive__computeSize() - 1] = checkSum;
}
static inline void SimulateExplosive__initEmpty(SimulateExplosiveBuffer *buf) {
  SimulateExplosive__set_dLen(buf, SimulateExplosive__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SimulateExplosive__set_dataFrame(buf, 0xf186);
  SimulateExplosive__set_checkSum(buf, SimulateExplosive__computeCheckSum(buf));
}

// **********************************************
// 10.2.2 爆炸模拟指令（炸弹）（0xF1，0x91）
// **********************************************

#define SIMULATE_BOMB_MAX_SIZE (41)
typedef struct {
  uint8_t data[SIMULATE_BOMB_MAX_SIZE];
} SimulateBombBuffer;

// 数据帧头，为 0xF1，0x91
static inline Data_Frame SimulateBomb__dataFrame(SimulateBombBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SimulateBomb__set_dataFrame_ptr(SimulateBombBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SimulateBomb__set_dataFrame(SimulateBombBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SimulateBomb__dLen(SimulateBombBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SimulateBomb__set_dLen_ptr(SimulateBombBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SimulateBomb__set_dLen(SimulateBombBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 发射弹药的直瞄武器实体类型
static inline T_Type SimulateBomb__srcTType(SimulateBombBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SimulateBomb__set_srcTType_ptr(SimulateBombBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SimulateBomb__set_srcTType(SimulateBombBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 发射弹药的直瞄武器实体子类型
static inline T_Subtype SimulateBomb__srcTSubtype(SimulateBombBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SimulateBomb__set_srcTSubtype_ptr(SimulateBombBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SimulateBomb__set_srcTSubtype(SimulateBombBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 发射弹药的直瞄武器实体单位代字
static inline RID SimulateBomb__srcRID(SimulateBombBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SimulateBomb__set_srcRID_ptr(SimulateBombBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SimulateBomb__set_srcRID(SimulateBombBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 发射弹药的直瞄武器实体设备编号
static inline PID SimulateBomb__srcPID(SimulateBombBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SimulateBomb__set_srcPID_ptr(SimulateBombBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SimulateBomb__set_srcPID(SimulateBombBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SimulateBomb__srcUPid(SimulateBombBuffer *buf) {
  UPid uPid = {
    .tType = SimulateBomb__srcTType(buf),
    .tSubtype = SimulateBomb__srcTSubtype(buf),
    .rID = SimulateBomb__srcRID(buf),
    .pID = SimulateBomb__srcPID(buf),
  };
  return uPid;
}
static inline void SimulateBomb__set_srcUPid_ptr(SimulateBombBuffer *buf, UPid *val) {
  SimulateBomb__set_srcTType(buf, val->tType);
  SimulateBomb__set_srcTSubtype(buf, val->tSubtype);
  SimulateBomb__set_srcRID(buf, val->rID);
  SimulateBomb__set_srcPID(buf, val->pID);
}
static inline void SimulateBomb__set_srcUPid(SimulateBombBuffer *buf, UPid val) {
  SimulateBomb__set_srcTType(buf, val.tType);
  SimulateBomb__set_srcTSubtype(buf, val.tSubtype);
  SimulateBomb__set_srcRID(buf, val.rID);
  SimulateBomb__set_srcPID(buf, val.pID);
}

// 密钥
static inline Key SimulateBomb__key(SimulateBombBuffer *buf) { return read_Key(buf->data + (8)); }
static inline void SimulateBomb__set_key_ptr(SimulateBombBuffer *buf, Key *val) { write_Key(buf->data + (8), val); }
static inline void SimulateBomb__set_key(SimulateBombBuffer *buf, Key val) { write_Key(buf->data + (8), &val); }

// 弹药类型
static inline A_Type SimulateBomb__aType(SimulateBombBuffer *buf) { return read_A_Type(buf->data + (9)); }
static inline void SimulateBomb__set_aType_ptr(SimulateBombBuffer *buf, A_Type *val) { write_A_Type(buf->data + (9), val); }
static inline void SimulateBomb__set_aType(SimulateBombBuffer *buf, A_Type val) { write_A_Type(buf->data + (9), &val); }

// 弹药子类型
static inline A_Subtype SimulateBomb__aSubtype(SimulateBombBuffer *buf) { return read_A_Subtype(buf->data + (10)); }
static inline void SimulateBomb__set_aSubtype_ptr(SimulateBombBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (10), val); }
static inline void SimulateBomb__set_aSubtype(SimulateBombBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (10), &val); }

// 发射弹药的直瞄武器实体的经纬度坐标
static inline L_Position SimulateBomb__fromLPostion(SimulateBombBuffer *buf) { return read_L_Position(buf->data + (11)); }
static inline void SimulateBomb__set_fromLPostion_ptr(SimulateBombBuffer *buf, L_Position *val) { write_L_Position(buf->data + (11), val); }
static inline void SimulateBomb__set_fromLPostion(SimulateBombBuffer *buf, L_Position val) { write_L_Position(buf->data + (11), &val); }

// 爆炸点的经纬度坐标
static inline L_Position SimulateBomb__hitLPostion(SimulateBombBuffer *buf) { return read_L_Position(buf->data + (23)); }
static inline void SimulateBomb__set_hitLPostion_ptr(SimulateBombBuffer *buf, L_Position *val) { write_L_Position(buf->data + (23), val); }
static inline void SimulateBomb__set_hitLPostion(SimulateBombBuffer *buf, L_Position val) { write_L_Position(buf->data + (23), &val); }

// 保留
static inline Reserve5 SimulateBomb__reserve5(SimulateBombBuffer *buf) { return read_Reserve5(buf->data + (35)); }
static inline void SimulateBomb__set_reserve5_ptr(SimulateBombBuffer *buf, Reserve5 *val) { write_Reserve5(buf->data + (35), val); }
static inline void SimulateBomb__set_reserve5(SimulateBombBuffer *buf, Reserve5 val) { write_Reserve5(buf->data + (35), &val); }
static inline uint16_t SimulateBomb__computeSize() {
  return 41;
}
static inline uint8_t SimulateBomb__computeCheckSum(SimulateBombBuffer *buf) {
  return computeCheckSum(buf->data, SimulateBomb__computeSize() - 1);
}
static inline uint8_t SimulateBomb__checkSum(SimulateBombBuffer *buf) {
  return buf->data[SimulateBomb__computeSize() - 1];
}
static inline bool SimulateBomb__isCheckSumValid(SimulateBombBuffer *buf) {
  return SimulateBomb__checkSum(buf) == SimulateBomb__computeCheckSum(buf);
}
static inline void SimulateBomb__set_checkSum(SimulateBombBuffer *buf, uint8_t checkSum) {
  buf->data[SimulateBomb__computeSize() - 1] = checkSum;
}
static inline void SimulateBomb__initEmpty(SimulateBombBuffer *buf) {
  SimulateBomb__set_dLen(buf, SimulateBomb__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SimulateBomb__set_dataFrame(buf, 0xf191);
  SimulateBomb__set_checkSum(buf, SimulateBomb__computeCheckSum(buf));
}

// **********************************************
// 10.2.3 广播信标（0xF1，0x70）
// **********************************************

#define BEACON_MAX_SIZE (33)
typedef struct {
  uint8_t data[BEACON_MAX_SIZE];
} BeaconBuffer;

// 数据帧头，为 0xF1，0x70
static inline Data_Frame Beacon__dataFrame(BeaconBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void Beacon__set_dataFrame_ptr(BeaconBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void Beacon__set_dataFrame(BeaconBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len Beacon__dLen(BeaconBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void Beacon__set_dLen_ptr(BeaconBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void Beacon__set_dLen(BeaconBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 实体类型
static inline T_Type Beacon__srcTType(BeaconBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void Beacon__set_srcTType_ptr(BeaconBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void Beacon__set_srcTType(BeaconBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 实体子类型。
static inline T_Subtype Beacon__srcTSubtype(BeaconBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void Beacon__set_srcTSubtype_ptr(BeaconBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void Beacon__set_srcTSubtype(BeaconBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 实体单位代字
static inline RID Beacon__srcRID(BeaconBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void Beacon__set_srcRID_ptr(BeaconBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void Beacon__set_srcRID(BeaconBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 实体设备编号
static inline PID Beacon__srcPID(BeaconBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void Beacon__set_srcPID_ptr(BeaconBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void Beacon__set_srcPID(BeaconBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid Beacon__srcUPid(BeaconBuffer *buf) {
  UPid uPid = {
    .tType = Beacon__srcTType(buf),
    .tSubtype = Beacon__srcTSubtype(buf),
    .rID = Beacon__srcRID(buf),
    .pID = Beacon__srcPID(buf),
  };
  return uPid;
}
static inline void Beacon__set_srcUPid_ptr(BeaconBuffer *buf, UPid *val) {
  Beacon__set_srcTType(buf, val->tType);
  Beacon__set_srcTSubtype(buf, val->tSubtype);
  Beacon__set_srcRID(buf, val->rID);
  Beacon__set_srcPID(buf, val->pID);
}
static inline void Beacon__set_srcUPid(BeaconBuffer *buf, UPid val) {
  Beacon__set_srcTType(buf, val.tType);
  Beacon__set_srcTSubtype(buf, val.tSubtype);
  Beacon__set_srcRID(buf, val.rID);
  Beacon__set_srcPID(buf, val.pID);
}

// 实体综合伤势
static inline C_Idegree Beacon__cIdegree(BeaconBuffer *buf) { return read_C_Idegree(buf->data + (8)); }
static inline void Beacon__set_cIdegree_ptr(BeaconBuffer *buf, C_Idegree *val) { write_C_Idegree(buf->data + (8), val); }
static inline void Beacon__set_cIdegree(BeaconBuffer *buf, C_Idegree val) { write_C_Idegree(buf->data + (8), &val); }

// 实体经纬度坐标
static inline L_Position Beacon__lPosition(BeaconBuffer *buf) { return read_L_Position(buf->data + (9)); }
static inline void Beacon__set_lPosition_ptr(BeaconBuffer *buf, L_Position *val) { write_L_Position(buf->data + (9), val); }
static inline void Beacon__set_lPosition(BeaconBuffer *buf, L_Position val) { write_L_Position(buf->data + (9), &val); }

// 发送指令的时间
static inline Time1 Beacon__time1(BeaconBuffer *buf) { return read_Time1(buf->data + (21)); }
static inline void Beacon__set_time1_ptr(BeaconBuffer *buf, Time1 *val) { write_Time1(buf->data + (21), val); }
static inline void Beacon__set_time1(BeaconBuffer *buf, Time1 val) { write_Time1(buf->data + (21), &val); }

// 保留
static inline Reserve5 Beacon__reserve5(BeaconBuffer *buf) { return read_Reserve5(buf->data + (27)); }
static inline void Beacon__set_reserve5_ptr(BeaconBuffer *buf, Reserve5 *val) { write_Reserve5(buf->data + (27), val); }
static inline void Beacon__set_reserve5(BeaconBuffer *buf, Reserve5 val) { write_Reserve5(buf->data + (27), &val); }
static inline uint16_t Beacon__computeSize() {
  return 33;
}
static inline uint8_t Beacon__computeCheckSum(BeaconBuffer *buf) {
  return computeCheckSum(buf->data, Beacon__computeSize() - 1);
}
static inline uint8_t Beacon__checkSum(BeaconBuffer *buf) {
  return buf->data[Beacon__computeSize() - 1];
}
static inline bool Beacon__isCheckSumValid(BeaconBuffer *buf) {
  return Beacon__checkSum(buf) == Beacon__computeCheckSum(buf);
}
static inline void Beacon__set_checkSum(BeaconBuffer *buf, uint8_t checkSum) {
  buf->data[Beacon__computeSize() - 1] = checkSum;
}
static inline void Beacon__initEmpty(BeaconBuffer *buf) {
  Beacon__set_dLen(buf, Beacon__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  Beacon__set_dataFrame(buf, 0xf170);
  Beacon__set_checkSum(buf, Beacon__computeCheckSum(buf));
}

// **********************************************
// EXT 单兵->武器同步包（0xEF，0x30）
// **********************************************

#define PEOPLE_DATA_DOWNLOAD_MAX_SIZE (35)
typedef struct {
  uint8_t data[PEOPLE_DATA_DOWNLOAD_MAX_SIZE];
} PeopleDataDownloadBuffer;

// 数据帧头，为 0xEF，0x30
static inline Data_Frame PeopleDataDownload__dataFrame(PeopleDataDownloadBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void PeopleDataDownload__set_dataFrame_ptr(PeopleDataDownloadBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void PeopleDataDownload__set_dataFrame(PeopleDataDownloadBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len PeopleDataDownload__dLen(PeopleDataDownloadBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void PeopleDataDownload__set_dLen_ptr(PeopleDataDownloadBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void PeopleDataDownload__set_dLen(PeopleDataDownloadBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 被绑定武器实体类型
static inline T_Type PeopleDataDownload__tType(PeopleDataDownloadBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void PeopleDataDownload__set_tType_ptr(PeopleDataDownloadBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void PeopleDataDownload__set_tType(PeopleDataDownloadBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 被绑定武器实体子类型
static inline T_Subtype PeopleDataDownload__tSubtype(PeopleDataDownloadBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void PeopleDataDownload__set_tSubtype_ptr(PeopleDataDownloadBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void PeopleDataDownload__set_tSubtype(PeopleDataDownloadBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 被绑定武器单位代字
static inline RID PeopleDataDownload__rID(PeopleDataDownloadBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void PeopleDataDownload__set_rID_ptr(PeopleDataDownloadBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void PeopleDataDownload__set_rID(PeopleDataDownloadBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 被绑定武器设备编号
static inline PID PeopleDataDownload__pID_use_uPID_instead(PeopleDataDownloadBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void PeopleDataDownload__set_pID_use_uPID_instead_ptr(PeopleDataDownloadBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void PeopleDataDownload__set_pID_use_uPID_instead(PeopleDataDownloadBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid PeopleDataDownload__uPid(PeopleDataDownloadBuffer *buf) {
  UPid uPid = {
    .tType = PeopleDataDownload__tType(buf),
    .tSubtype = PeopleDataDownload__tSubtype(buf),
    .rID = PeopleDataDownload__rID(buf),
    .pID = PeopleDataDownload__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void PeopleDataDownload__set_uPid_ptr(PeopleDataDownloadBuffer *buf, UPid *val) {
  PeopleDataDownload__set_tType(buf, val->tType);
  PeopleDataDownload__set_tSubtype(buf, val->tSubtype);
  PeopleDataDownload__set_rID(buf, val->rID);
  PeopleDataDownload__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void PeopleDataDownload__set_uPid(PeopleDataDownloadBuffer *buf, UPid val) {
  PeopleDataDownload__set_tType(buf, val.tType);
  PeopleDataDownload__set_tSubtype(buf, val.tSubtype);
  PeopleDataDownload__set_rID(buf, val.rID);
  PeopleDataDownload__set_pID_use_uPID_instead(buf, val.pID);
}

// 单兵装具实体类型
static inline T_Type PeopleDataDownload__pplTType(PeopleDataDownloadBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void PeopleDataDownload__set_pplTType_ptr(PeopleDataDownloadBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void PeopleDataDownload__set_pplTType(PeopleDataDownloadBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 单兵装具实体子类型
static inline T_Subtype PeopleDataDownload__pplTSubtype(PeopleDataDownloadBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void PeopleDataDownload__set_pplTSubtype_ptr(PeopleDataDownloadBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void PeopleDataDownload__set_pplTSubtype(PeopleDataDownloadBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 单兵装具单位代字
static inline RID PeopleDataDownload__pplRid(PeopleDataDownloadBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void PeopleDataDownload__set_pplRid_ptr(PeopleDataDownloadBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void PeopleDataDownload__set_pplRid(PeopleDataDownloadBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 单兵装具设备编号
static inline PID PeopleDataDownload__pplPid(PeopleDataDownloadBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void PeopleDataDownload__set_pplPid_ptr(PeopleDataDownloadBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void PeopleDataDownload__set_pplPid(PeopleDataDownloadBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

// 弹药类型
static inline A_Type PeopleDataDownload__aType(PeopleDataDownloadBuffer *buf) { return read_A_Type(buf->data + (13)); }
static inline void PeopleDataDownload__set_aType_ptr(PeopleDataDownloadBuffer *buf, A_Type *val) { write_A_Type(buf->data + (13), val); }
static inline void PeopleDataDownload__set_aType(PeopleDataDownloadBuffer *buf, A_Type val) { write_A_Type(buf->data + (13), &val); }

// 弹药子类型
static inline A_Subtype PeopleDataDownload__aSubtype(PeopleDataDownloadBuffer *buf) { return read_A_Subtype(buf->data + (14)); }
static inline void PeopleDataDownload__set_aSubtype_ptr(PeopleDataDownloadBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (14), val); }
static inline void PeopleDataDownload__set_aSubtype(PeopleDataDownloadBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (14), &val); }

// 模式/密钥
static inline TS_Character2 PeopleDataDownload__tSCharacter2(PeopleDataDownloadBuffer *buf) { return read_TS_Character2(buf->data + (15)); }
static inline void PeopleDataDownload__set_tSCharacter2_ptr(PeopleDataDownloadBuffer *buf, TS_Character2 *val) { write_TS_Character2(buf->data + (15), val); }
static inline void PeopleDataDownload__set_tSCharacter2(PeopleDataDownloadBuffer *buf, TS_Character2 val) { write_TS_Character2(buf->data + (15), &val); }

// 经纬度坐标
static inline L_Position PeopleDataDownload__lPosition(PeopleDataDownloadBuffer *buf) { return read_L_Position(buf->data + (16)); }
static inline void PeopleDataDownload__set_lPosition_ptr(PeopleDataDownloadBuffer *buf, L_Position *val) { write_L_Position(buf->data + (16), val); }
static inline void PeopleDataDownload__set_lPosition(PeopleDataDownloadBuffer *buf, L_Position val) { write_L_Position(buf->data + (16), &val); }

// 穿甲深度
static inline Thickness PeopleDataDownload__piercingArmo(PeopleDataDownloadBuffer *buf) { return read_Thickness(buf->data + (28)); }
static inline void PeopleDataDownload__set_piercingArmo_ptr(PeopleDataDownloadBuffer *buf, Thickness *val) { write_Thickness(buf->data + (28), val); }
static inline void PeopleDataDownload__set_piercingArmo(PeopleDataDownloadBuffer *buf, Thickness val) { write_Thickness(buf->data + (28), &val); }

// 穿透混凝土厚度
static inline Thickness PeopleDataDownload__piercingConcrete(PeopleDataDownloadBuffer *buf) { return read_Thickness(buf->data + (29)); }
static inline void PeopleDataDownload__set_piercingConcrete_ptr(PeopleDataDownloadBuffer *buf, Thickness *val) { write_Thickness(buf->data + (29), val); }
static inline void PeopleDataDownload__set_piercingConcrete(PeopleDataDownloadBuffer *buf, Thickness val) { write_Thickness(buf->data + (29), &val); }

// 有效射程
static inline Range PeopleDataDownload__range(PeopleDataDownloadBuffer *buf) { return read_Range(buf->data + (30)); }
static inline void PeopleDataDownload__set_range_ptr(PeopleDataDownloadBuffer *buf, Range *val) { write_Range(buf->data + (30), val); }
static inline void PeopleDataDownload__set_range(PeopleDataDownloadBuffer *buf, Range val) { write_Range(buf->data + (30), &val); }

// 该类子弹已分发总数量（同一把枪）
static inline Num2 PeopleDataDownload__allocatedCount(PeopleDataDownloadBuffer *buf) { return read_Num2(buf->data + (31)); }
static inline void PeopleDataDownload__set_allocatedCount_ptr(PeopleDataDownloadBuffer *buf, Num2 *val) { write_Num2(buf->data + (31), val); }
static inline void PeopleDataDownload__set_allocatedCount(PeopleDataDownloadBuffer *buf, Num2 val) { write_Num2(buf->data + (31), &val); }

// 击发锁定状态
static inline Num1 PeopleDataDownload__triggerLock(PeopleDataDownloadBuffer *buf) { return read_Num1(buf->data + (33)); }
static inline void PeopleDataDownload__set_triggerLock_ptr(PeopleDataDownloadBuffer *buf, Num1 *val) { write_Num1(buf->data + (33), val); }
static inline void PeopleDataDownload__set_triggerLock(PeopleDataDownloadBuffer *buf, Num1 val) { write_Num1(buf->data + (33), &val); }
static inline uint16_t PeopleDataDownload__computeSize() {
  return 35;
}
static inline uint8_t PeopleDataDownload__computeCheckSum(PeopleDataDownloadBuffer *buf) {
  return computeCheckSum(buf->data, PeopleDataDownload__computeSize() - 1);
}
static inline uint8_t PeopleDataDownload__checkSum(PeopleDataDownloadBuffer *buf) {
  return buf->data[PeopleDataDownload__computeSize() - 1];
}
static inline bool PeopleDataDownload__isCheckSumValid(PeopleDataDownloadBuffer *buf) {
  return PeopleDataDownload__checkSum(buf) == PeopleDataDownload__computeCheckSum(buf);
}
static inline void PeopleDataDownload__set_checkSum(PeopleDataDownloadBuffer *buf, uint8_t checkSum) {
  buf->data[PeopleDataDownload__computeSize() - 1] = checkSum;
}
static inline void PeopleDataDownload__initEmpty(PeopleDataDownloadBuffer *buf) {
  PeopleDataDownload__set_dLen(buf, PeopleDataDownload__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  PeopleDataDownload__set_dataFrame(buf, 0xef30);
  PeopleDataDownload__set_checkSum(buf, PeopleDataDownload__computeCheckSum(buf));
}

// **********************************************
// EXT 武器->单兵同步包（0xEF，0x40）
// **********************************************

#define WEAPON_DATA_UPLOAD_MAX_SIZE (22)
typedef struct {
  uint8_t data[WEAPON_DATA_UPLOAD_MAX_SIZE];
} WeaponDataUploadBuffer;

// 数据帧头，为 0xEF，0x40
static inline Data_Frame WeaponDataUpload__dataFrame(WeaponDataUploadBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void WeaponDataUpload__set_dataFrame_ptr(WeaponDataUploadBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void WeaponDataUpload__set_dataFrame(WeaponDataUploadBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len WeaponDataUpload__dLen(WeaponDataUploadBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void WeaponDataUpload__set_dLen_ptr(WeaponDataUploadBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void WeaponDataUpload__set_dLen(WeaponDataUploadBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 单兵装具实体类型
static inline T_Type WeaponDataUpload__tType(WeaponDataUploadBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void WeaponDataUpload__set_tType_ptr(WeaponDataUploadBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void WeaponDataUpload__set_tType(WeaponDataUploadBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 单兵装具实体子类型
static inline T_Subtype WeaponDataUpload__tSubtype(WeaponDataUploadBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void WeaponDataUpload__set_tSubtype_ptr(WeaponDataUploadBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void WeaponDataUpload__set_tSubtype(WeaponDataUploadBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 单兵装具单位代字
static inline RID WeaponDataUpload__rID(WeaponDataUploadBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void WeaponDataUpload__set_rID_ptr(WeaponDataUploadBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void WeaponDataUpload__set_rID(WeaponDataUploadBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 单兵装具设备编号
static inline PID WeaponDataUpload__pID_use_uPID_instead(WeaponDataUploadBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void WeaponDataUpload__set_pID_use_uPID_instead_ptr(WeaponDataUploadBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void WeaponDataUpload__set_pID_use_uPID_instead(WeaponDataUploadBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid WeaponDataUpload__uPid(WeaponDataUploadBuffer *buf) {
  UPid uPid = {
    .tType = WeaponDataUpload__tType(buf),
    .tSubtype = WeaponDataUpload__tSubtype(buf),
    .rID = WeaponDataUpload__rID(buf),
    .pID = WeaponDataUpload__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void WeaponDataUpload__set_uPid_ptr(WeaponDataUploadBuffer *buf, UPid *val) {
  WeaponDataUpload__set_tType(buf, val->tType);
  WeaponDataUpload__set_tSubtype(buf, val->tSubtype);
  WeaponDataUpload__set_rID(buf, val->rID);
  WeaponDataUpload__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void WeaponDataUpload__set_uPid(WeaponDataUploadBuffer *buf, UPid val) {
  WeaponDataUpload__set_tType(buf, val.tType);
  WeaponDataUpload__set_tSubtype(buf, val.tSubtype);
  WeaponDataUpload__set_rID(buf, val.rID);
  WeaponDataUpload__set_pID_use_uPID_instead(buf, val.pID);
}

// 被绑定武器实体类型
static inline T_Type WeaponDataUpload__weaponTType(WeaponDataUploadBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void WeaponDataUpload__set_weaponTType_ptr(WeaponDataUploadBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void WeaponDataUpload__set_weaponTType(WeaponDataUploadBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 被绑定武器实体子类型
static inline T_Subtype WeaponDataUpload__weaponTSubtype(WeaponDataUploadBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void WeaponDataUpload__set_weaponTSubtype_ptr(WeaponDataUploadBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void WeaponDataUpload__set_weaponTSubtype(WeaponDataUploadBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 被绑定武器单位代字
static inline RID WeaponDataUpload__weaponRid(WeaponDataUploadBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void WeaponDataUpload__set_weaponRid_ptr(WeaponDataUploadBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void WeaponDataUpload__set_weaponRid(WeaponDataUploadBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 被绑定武器设备编号
static inline PID WeaponDataUpload__weaponPid(WeaponDataUploadBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void WeaponDataUpload__set_weaponPid_ptr(WeaponDataUploadBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void WeaponDataUpload__set_weaponPid(WeaponDataUploadBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

// 弹药类型
static inline A_Type WeaponDataUpload__aType(WeaponDataUploadBuffer *buf) { return read_A_Type(buf->data + (13)); }
static inline void WeaponDataUpload__set_aType_ptr(WeaponDataUploadBuffer *buf, A_Type *val) { write_A_Type(buf->data + (13), val); }
static inline void WeaponDataUpload__set_aType(WeaponDataUploadBuffer *buf, A_Type val) { write_A_Type(buf->data + (13), &val); }

// 弹药子类型
static inline A_Subtype WeaponDataUpload__aSubtype(WeaponDataUploadBuffer *buf) { return read_A_Subtype(buf->data + (14)); }
static inline void WeaponDataUpload__set_aSubtype_ptr(WeaponDataUploadBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (14), val); }
static inline void WeaponDataUpload__set_aSubtype(WeaponDataUploadBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (14), &val); }

// 弹夹内剩余子弹数量
static inline Num2 WeaponDataUpload__bulletCount(WeaponDataUploadBuffer *buf) { return read_Num2(buf->data + (15)); }
static inline void WeaponDataUpload__set_bulletCount_ptr(WeaponDataUploadBuffer *buf, Num2 *val) { write_Num2(buf->data + (15), val); }
static inline void WeaponDataUpload__set_bulletCount(WeaponDataUploadBuffer *buf, Num2 val) { write_Num2(buf->data + (15), &val); }

// 该类子弹已发射总数量（同一个终端）
static inline Num2 WeaponDataUpload__usedCount(WeaponDataUploadBuffer *buf) { return read_Num2(buf->data + (17)); }
static inline void WeaponDataUpload__set_usedCount_ptr(WeaponDataUploadBuffer *buf, Num2 *val) { write_Num2(buf->data + (17), val); }
static inline void WeaponDataUpload__set_usedCount(WeaponDataUploadBuffer *buf, Num2 val) { write_Num2(buf->data + (17), &val); }

// 弹夹容量
static inline Num2 WeaponDataUpload__magazine(WeaponDataUploadBuffer *buf) { return read_Num2(buf->data + (19)); }
static inline void WeaponDataUpload__set_magazine_ptr(WeaponDataUploadBuffer *buf, Num2 *val) { write_Num2(buf->data + (19), val); }
static inline void WeaponDataUpload__set_magazine(WeaponDataUploadBuffer *buf, Num2 val) { write_Num2(buf->data + (19), &val); }
static inline uint16_t WeaponDataUpload__computeSize() {
  return 22;
}
static inline uint8_t WeaponDataUpload__computeCheckSum(WeaponDataUploadBuffer *buf) {
  return computeCheckSum(buf->data, WeaponDataUpload__computeSize() - 1);
}
static inline uint8_t WeaponDataUpload__checkSum(WeaponDataUploadBuffer *buf) {
  return buf->data[WeaponDataUpload__computeSize() - 1];
}
static inline bool WeaponDataUpload__isCheckSumValid(WeaponDataUploadBuffer *buf) {
  return WeaponDataUpload__checkSum(buf) == WeaponDataUpload__computeCheckSum(buf);
}
static inline void WeaponDataUpload__set_checkSum(WeaponDataUploadBuffer *buf, uint8_t checkSum) {
  buf->data[WeaponDataUpload__computeSize() - 1] = checkSum;
}
static inline void WeaponDataUpload__initEmpty(WeaponDataUploadBuffer *buf) {
  WeaponDataUpload__set_dLen(buf, WeaponDataUpload__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  WeaponDataUpload__set_dataFrame(buf, 0xef40);
  WeaponDataUpload__set_checkSum(buf, WeaponDataUpload__computeCheckSum(buf));
}

// **********************************************
// EXT 布雷成功指令（0xEA，0x31）
// **********************************************

#define PLANT_MINE_ACK_ZIG_BEE_MAX_SIZE (9)
typedef struct {
  uint8_t data[PLANT_MINE_ACK_ZIG_BEE_MAX_SIZE];
} PlantMineAckZigBeeBuffer;

// 数据帧头，为 0xEA，0x31
static inline Data_Frame PlantMineAckZigBee__dataFrame(PlantMineAckZigBeeBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void PlantMineAckZigBee__set_dataFrame_ptr(PlantMineAckZigBeeBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void PlantMineAckZigBee__set_dataFrame(PlantMineAckZigBeeBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len PlantMineAckZigBee__dLen(PlantMineAckZigBeeBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void PlantMineAckZigBee__set_dLen_ptr(PlantMineAckZigBeeBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void PlantMineAckZigBee__set_dLen(PlantMineAckZigBeeBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 地雷的实体类型
static inline T_Type PlantMineAckZigBee__mineTType(PlantMineAckZigBeeBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void PlantMineAckZigBee__set_mineTType_ptr(PlantMineAckZigBeeBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void PlantMineAckZigBee__set_mineTType(PlantMineAckZigBeeBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 地雷的实体子类型
static inline T_Subtype PlantMineAckZigBee__mineTSubtype(PlantMineAckZigBeeBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void PlantMineAckZigBee__set_mineTSubtype_ptr(PlantMineAckZigBeeBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void PlantMineAckZigBee__set_mineTSubtype(PlantMineAckZigBeeBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 地雷的实体单位代字
static inline RID PlantMineAckZigBee__mineRID(PlantMineAckZigBeeBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void PlantMineAckZigBee__set_mineRID_ptr(PlantMineAckZigBeeBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void PlantMineAckZigBee__set_mineRID(PlantMineAckZigBeeBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 地雷的实体设备编号
static inline PID PlantMineAckZigBee__minePID(PlantMineAckZigBeeBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void PlantMineAckZigBee__set_minePID_ptr(PlantMineAckZigBeeBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void PlantMineAckZigBee__set_minePID(PlantMineAckZigBeeBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid PlantMineAckZigBee__mineUPid(PlantMineAckZigBeeBuffer *buf) {
  UPid uPid = {
    .tType = PlantMineAckZigBee__mineTType(buf),
    .tSubtype = PlantMineAckZigBee__mineTSubtype(buf),
    .rID = PlantMineAckZigBee__mineRID(buf),
    .pID = PlantMineAckZigBee__minePID(buf),
  };
  return uPid;
}
static inline void PlantMineAckZigBee__set_mineUPid_ptr(PlantMineAckZigBeeBuffer *buf, UPid *val) {
  PlantMineAckZigBee__set_mineTType(buf, val->tType);
  PlantMineAckZigBee__set_mineTSubtype(buf, val->tSubtype);
  PlantMineAckZigBee__set_mineRID(buf, val->rID);
  PlantMineAckZigBee__set_minePID(buf, val->pID);
}
static inline void PlantMineAckZigBee__set_mineUPid(PlantMineAckZigBeeBuffer *buf, UPid val) {
  PlantMineAckZigBee__set_mineTType(buf, val.tType);
  PlantMineAckZigBee__set_mineTSubtype(buf, val.tSubtype);
  PlantMineAckZigBee__set_mineRID(buf, val.rID);
  PlantMineAckZigBee__set_minePID(buf, val.pID);
}
static inline uint16_t PlantMineAckZigBee__computeSize() {
  return 9;
}
static inline uint8_t PlantMineAckZigBee__computeCheckSum(PlantMineAckZigBeeBuffer *buf) {
  return computeCheckSum(buf->data, PlantMineAckZigBee__computeSize() - 1);
}
static inline uint8_t PlantMineAckZigBee__checkSum(PlantMineAckZigBeeBuffer *buf) {
  return buf->data[PlantMineAckZigBee__computeSize() - 1];
}
static inline bool PlantMineAckZigBee__isCheckSumValid(PlantMineAckZigBeeBuffer *buf) {
  return PlantMineAckZigBee__checkSum(buf) == PlantMineAckZigBee__computeCheckSum(buf);
}
static inline void PlantMineAckZigBee__set_checkSum(PlantMineAckZigBeeBuffer *buf, uint8_t checkSum) {
  buf->data[PlantMineAckZigBee__computeSize() - 1] = checkSum;
}
static inline void PlantMineAckZigBee__initEmpty(PlantMineAckZigBeeBuffer *buf) {
  PlantMineAckZigBee__set_dLen(buf, PlantMineAckZigBee__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  PlantMineAckZigBee__set_dataFrame(buf, 0xea31);
  PlantMineAckZigBee__set_checkSum(buf, PlantMineAckZigBee__computeCheckSum(buf));
}

// **********************************************
// EXT 排雷成功指令（0xEA，0x32）
// **********************************************

#define REMOVE_MINE_ACK_ZIG_BEE_MAX_SIZE (9)
typedef struct {
  uint8_t data[REMOVE_MINE_ACK_ZIG_BEE_MAX_SIZE];
} RemoveMineAckZigBeeBuffer;

// 数据帧头，为 0xEA，0x32
static inline Data_Frame RemoveMineAckZigBee__dataFrame(RemoveMineAckZigBeeBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RemoveMineAckZigBee__set_dataFrame_ptr(RemoveMineAckZigBeeBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RemoveMineAckZigBee__set_dataFrame(RemoveMineAckZigBeeBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RemoveMineAckZigBee__dLen(RemoveMineAckZigBeeBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RemoveMineAckZigBee__set_dLen_ptr(RemoveMineAckZigBeeBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RemoveMineAckZigBee__set_dLen(RemoveMineAckZigBeeBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 地雷的实体类型
static inline T_Type RemoveMineAckZigBee__mineTType(RemoveMineAckZigBeeBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RemoveMineAckZigBee__set_mineTType_ptr(RemoveMineAckZigBeeBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RemoveMineAckZigBee__set_mineTType(RemoveMineAckZigBeeBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 地雷的实体子类型
static inline T_Subtype RemoveMineAckZigBee__mineTSubtype(RemoveMineAckZigBeeBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RemoveMineAckZigBee__set_mineTSubtype_ptr(RemoveMineAckZigBeeBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RemoveMineAckZigBee__set_mineTSubtype(RemoveMineAckZigBeeBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 地雷的实体单位代字
static inline RID RemoveMineAckZigBee__mineRID(RemoveMineAckZigBeeBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RemoveMineAckZigBee__set_mineRID_ptr(RemoveMineAckZigBeeBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RemoveMineAckZigBee__set_mineRID(RemoveMineAckZigBeeBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 地雷的实体设备编号
static inline PID RemoveMineAckZigBee__minePID(RemoveMineAckZigBeeBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RemoveMineAckZigBee__set_minePID_ptr(RemoveMineAckZigBeeBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RemoveMineAckZigBee__set_minePID(RemoveMineAckZigBeeBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RemoveMineAckZigBee__mineUPid(RemoveMineAckZigBeeBuffer *buf) {
  UPid uPid = {
    .tType = RemoveMineAckZigBee__mineTType(buf),
    .tSubtype = RemoveMineAckZigBee__mineTSubtype(buf),
    .rID = RemoveMineAckZigBee__mineRID(buf),
    .pID = RemoveMineAckZigBee__minePID(buf),
  };
  return uPid;
}
static inline void RemoveMineAckZigBee__set_mineUPid_ptr(RemoveMineAckZigBeeBuffer *buf, UPid *val) {
  RemoveMineAckZigBee__set_mineTType(buf, val->tType);
  RemoveMineAckZigBee__set_mineTSubtype(buf, val->tSubtype);
  RemoveMineAckZigBee__set_mineRID(buf, val->rID);
  RemoveMineAckZigBee__set_minePID(buf, val->pID);
}
static inline void RemoveMineAckZigBee__set_mineUPid(RemoveMineAckZigBeeBuffer *buf, UPid val) {
  RemoveMineAckZigBee__set_mineTType(buf, val.tType);
  RemoveMineAckZigBee__set_mineTSubtype(buf, val.tSubtype);
  RemoveMineAckZigBee__set_mineRID(buf, val.rID);
  RemoveMineAckZigBee__set_minePID(buf, val.pID);
}
static inline uint16_t RemoveMineAckZigBee__computeSize() {
  return 9;
}
static inline uint8_t RemoveMineAckZigBee__computeCheckSum(RemoveMineAckZigBeeBuffer *buf) {
  return computeCheckSum(buf->data, RemoveMineAckZigBee__computeSize() - 1);
}
static inline uint8_t RemoveMineAckZigBee__checkSum(RemoveMineAckZigBeeBuffer *buf) {
  return buf->data[RemoveMineAckZigBee__computeSize() - 1];
}
static inline bool RemoveMineAckZigBee__isCheckSumValid(RemoveMineAckZigBeeBuffer *buf) {
  return RemoveMineAckZigBee__checkSum(buf) == RemoveMineAckZigBee__computeCheckSum(buf);
}
static inline void RemoveMineAckZigBee__set_checkSum(RemoveMineAckZigBeeBuffer *buf, uint8_t checkSum) {
  buf->data[RemoveMineAckZigBee__computeSize() - 1] = checkSum;
}
static inline void RemoveMineAckZigBee__initEmpty(RemoveMineAckZigBeeBuffer *buf) {
  RemoveMineAckZigBee__set_dLen(buf, RemoveMineAckZigBee__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RemoveMineAckZigBee__set_dataFrame(buf, 0xea32);
  RemoveMineAckZigBee__set_checkSum(buf, RemoveMineAckZigBee__computeCheckSum(buf));
}

// **********************************************
// EXT 抢修车广播信标（0xEC，0x20）
// **********************************************

#define RESCUE_BEACON_MAX_SIZE (33)
typedef struct {
  uint8_t data[RESCUE_BEACON_MAX_SIZE];
} RescueBeaconBuffer;

// 数据帧头，为 0xEC，0x20
static inline Data_Frame RescueBeacon__dataFrame(RescueBeaconBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RescueBeacon__set_dataFrame_ptr(RescueBeaconBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RescueBeacon__set_dataFrame(RescueBeaconBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RescueBeacon__dLen(RescueBeaconBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RescueBeacon__set_dLen_ptr(RescueBeaconBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RescueBeacon__set_dLen(RescueBeaconBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 实体类型
static inline T_Type RescueBeacon__tType(RescueBeaconBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RescueBeacon__set_tType_ptr(RescueBeaconBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RescueBeacon__set_tType(RescueBeaconBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 实体子类型。
static inline T_Subtype RescueBeacon__tSubtype(RescueBeaconBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RescueBeacon__set_tSubtype_ptr(RescueBeaconBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RescueBeacon__set_tSubtype(RescueBeaconBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 实体单位代字
static inline RID RescueBeacon__rID(RescueBeaconBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RescueBeacon__set_rID_ptr(RescueBeaconBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RescueBeacon__set_rID(RescueBeaconBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 实体设备编号
static inline PID RescueBeacon__pID_use_uPID_instead(RescueBeaconBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RescueBeacon__set_pID_use_uPID_instead_ptr(RescueBeaconBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RescueBeacon__set_pID_use_uPID_instead(RescueBeaconBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RescueBeacon__uPid(RescueBeaconBuffer *buf) {
  UPid uPid = {
    .tType = RescueBeacon__tType(buf),
    .tSubtype = RescueBeacon__tSubtype(buf),
    .rID = RescueBeacon__rID(buf),
    .pID = RescueBeacon__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void RescueBeacon__set_uPid_ptr(RescueBeaconBuffer *buf, UPid *val) {
  RescueBeacon__set_tType(buf, val->tType);
  RescueBeacon__set_tSubtype(buf, val->tSubtype);
  RescueBeacon__set_rID(buf, val->rID);
  RescueBeacon__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void RescueBeacon__set_uPid(RescueBeaconBuffer *buf, UPid val) {
  RescueBeacon__set_tType(buf, val.tType);
  RescueBeacon__set_tSubtype(buf, val.tSubtype);
  RescueBeacon__set_rID(buf, val.rID);
  RescueBeacon__set_pID_use_uPID_instead(buf, val.pID);
}

// 实体综合伤势
static inline C_Idegree RescueBeacon__cIdegree(RescueBeaconBuffer *buf) { return read_C_Idegree(buf->data + (8)); }
static inline void RescueBeacon__set_cIdegree_ptr(RescueBeaconBuffer *buf, C_Idegree *val) { write_C_Idegree(buf->data + (8), val); }
static inline void RescueBeacon__set_cIdegree(RescueBeaconBuffer *buf, C_Idegree val) { write_C_Idegree(buf->data + (8), &val); }

// 实体经纬度坐标
static inline L_Position RescueBeacon__lPosition(RescueBeaconBuffer *buf) { return read_L_Position(buf->data + (9)); }
static inline void RescueBeacon__set_lPosition_ptr(RescueBeaconBuffer *buf, L_Position *val) { write_L_Position(buf->data + (9), val); }
static inline void RescueBeacon__set_lPosition(RescueBeaconBuffer *buf, L_Position val) { write_L_Position(buf->data + (9), &val); }

// 发送指令的时间
static inline Time1 RescueBeacon__time1(RescueBeaconBuffer *buf) { return read_Time1(buf->data + (21)); }
static inline void RescueBeacon__set_time1_ptr(RescueBeaconBuffer *buf, Time1 *val) { write_Time1(buf->data + (21), val); }
static inline void RescueBeacon__set_time1(RescueBeaconBuffer *buf, Time1 val) { write_Time1(buf->data + (21), &val); }

// 保留
static inline Reserve5 RescueBeacon__reserve5(RescueBeaconBuffer *buf) { return read_Reserve5(buf->data + (27)); }
static inline void RescueBeacon__set_reserve5_ptr(RescueBeaconBuffer *buf, Reserve5 *val) { write_Reserve5(buf->data + (27), val); }
static inline void RescueBeacon__set_reserve5(RescueBeaconBuffer *buf, Reserve5 val) { write_Reserve5(buf->data + (27), &val); }
static inline uint16_t RescueBeacon__computeSize() {
  return 33;
}
static inline uint8_t RescueBeacon__computeCheckSum(RescueBeaconBuffer *buf) {
  return computeCheckSum(buf->data, RescueBeacon__computeSize() - 1);
}
static inline uint8_t RescueBeacon__checkSum(RescueBeaconBuffer *buf) {
  return buf->data[RescueBeacon__computeSize() - 1];
}
static inline bool RescueBeacon__isCheckSumValid(RescueBeaconBuffer *buf) {
  return RescueBeacon__checkSum(buf) == RescueBeacon__computeCheckSum(buf);
}
static inline void RescueBeacon__set_checkSum(RescueBeaconBuffer *buf, uint8_t checkSum) {
  buf->data[RescueBeacon__computeSize() - 1] = checkSum;
}
static inline void RescueBeacon__initEmpty(RescueBeaconBuffer *buf) {
  RescueBeacon__set_dLen(buf, RescueBeacon__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RescueBeacon__set_dataFrame(buf, 0xec20);
  RescueBeacon__set_checkSum(buf, RescueBeacon__computeCheckSum(buf));
}

// **********************************************
// EXT 激光接收数据（0xED，0x01）
// **********************************************

#define LASER_DATA_MAX_SIZE (4 + MAX_LASER_PACK_SIZE)
typedef struct {
  uint8_t data[LASER_DATA_MAX_SIZE];
} LaserDataBuffer;

// 数据帧头，为 0xED，0x01
static inline Data_Frame LaserData__dataFrame(LaserDataBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void LaserData__set_dataFrame_ptr(LaserDataBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void LaserData__set_dataFrame(LaserDataBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len LaserData__dLen(LaserDataBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void LaserData__set_dLen_ptr(LaserDataBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void LaserData__set_dLen(LaserDataBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 原始激光数据
static inline uint8_t* LaserData__laserPack(LaserDataBuffer *buf) { return buf->data + (3); }
#include "./__generated__laser.h"
// Hack: 这里我们借用ShootOrRangeDetectionBuffer来读取LaserPack里面的UPID，因为所有的激光编码UPID位置都是一样的
static inline UPid LaserData__uPid(LaserDataBuffer *buf) { return ShootOrRangeDetection__uPid(((ShootOrRangeDetectionBuffer*)LaserData__laserPack(buf)));}
static inline uint16_t LaserData__computeSize(LaserDataBuffer *buf) {
  return 4 + LaserData__dLen(buf);
}
static inline uint8_t LaserData__computeCheckSum(LaserDataBuffer *buf) {
  return computeCheckSum(buf->data, LaserData__computeSize(buf) - 1);
}
static inline uint8_t LaserData__checkSum(LaserDataBuffer *buf) {
  return buf->data[LaserData__computeSize(buf) - 1];
}
static inline bool LaserData__isCheckSumValid(LaserDataBuffer *buf) {
  return LaserData__checkSum(buf) == LaserData__computeCheckSum(buf);
}
static inline void LaserData__set_checkSum(LaserDataBuffer *buf, uint8_t checkSum) {
  buf->data[LaserData__computeSize(buf) - 1] = checkSum;
}

// **********************************************
// EXT 手雷激活广播（0xEA，0x81）
// **********************************************

#define ACTIVATE_GRENADE_MAX_SIZE (14)
typedef struct {
  uint8_t data[ACTIVATE_GRENADE_MAX_SIZE];
} ActivateGrenadeBuffer;

// 数据帧头，为 0xEA，0x81
static inline Data_Frame ActivateGrenade__dataFrame(ActivateGrenadeBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void ActivateGrenade__set_dataFrame_ptr(ActivateGrenadeBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void ActivateGrenade__set_dataFrame(ActivateGrenadeBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len ActivateGrenade__dLen(ActivateGrenadeBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void ActivateGrenade__set_dLen_ptr(ActivateGrenadeBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void ActivateGrenade__set_dLen(ActivateGrenadeBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 配置方案编号
static inline EP_Num ActivateGrenade__ePNum(ActivateGrenadeBuffer *buf) { return read_EP_Num(buf->data + (3)); }
static inline void ActivateGrenade__set_ePNum_ptr(ActivateGrenadeBuffer *buf, EP_Num *val) { write_EP_Num(buf->data + (3), val); }
static inline void ActivateGrenade__set_ePNum(ActivateGrenadeBuffer *buf, EP_Num val) { write_EP_Num(buf->data + (3), &val); }

// 演习开始时间
static inline Time1 ActivateGrenade__time1(ActivateGrenadeBuffer *buf) { return read_Time1(buf->data + (6)); }
static inline void ActivateGrenade__set_time1_ptr(ActivateGrenadeBuffer *buf, Time1 *val) { write_Time1(buf->data + (6), val); }
static inline void ActivateGrenade__set_time1(ActivateGrenadeBuffer *buf, Time1 val) { write_Time1(buf->data + (6), &val); }

// 密钥
static inline Key ActivateGrenade__key(ActivateGrenadeBuffer *buf) { return read_Key(buf->data + (12)); }
static inline void ActivateGrenade__set_key_ptr(ActivateGrenadeBuffer *buf, Key *val) { write_Key(buf->data + (12), val); }
static inline void ActivateGrenade__set_key(ActivateGrenadeBuffer *buf, Key val) { write_Key(buf->data + (12), &val); }
static inline uint16_t ActivateGrenade__computeSize() {
  return 14;
}
static inline uint8_t ActivateGrenade__computeCheckSum(ActivateGrenadeBuffer *buf) {
  return computeCheckSum(buf->data, ActivateGrenade__computeSize() - 1);
}
static inline uint8_t ActivateGrenade__checkSum(ActivateGrenadeBuffer *buf) {
  return buf->data[ActivateGrenade__computeSize() - 1];
}
static inline bool ActivateGrenade__isCheckSumValid(ActivateGrenadeBuffer *buf) {
  return ActivateGrenade__checkSum(buf) == ActivateGrenade__computeCheckSum(buf);
}
static inline void ActivateGrenade__set_checkSum(ActivateGrenadeBuffer *buf, uint8_t checkSum) {
  buf->data[ActivateGrenade__computeSize() - 1] = checkSum;
}
static inline void ActivateGrenade__initEmpty(ActivateGrenadeBuffer *buf) {
  ActivateGrenade__set_dLen(buf, ActivateGrenade__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  ActivateGrenade__set_dataFrame(buf, 0xea81);
  ActivateGrenade__set_checkSum(buf, ActivateGrenade__computeCheckSum(buf));
}

// **********************************************
// EXT 车辆_探头串绑定（0xED，0x02）
// **********************************************

#define VEHICLE_SENSOR_BINDING_MAX_SIZE (9)
typedef struct {
  uint8_t data[VEHICLE_SENSOR_BINDING_MAX_SIZE];
} VehicleSensorBindingBuffer;

// 数据帧头，为 0xED，0x02
static inline Data_Frame VehicleSensorBinding__dataFrame(VehicleSensorBindingBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void VehicleSensorBinding__set_dataFrame_ptr(VehicleSensorBindingBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void VehicleSensorBinding__set_dataFrame(VehicleSensorBindingBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len VehicleSensorBinding__dLen(VehicleSensorBindingBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void VehicleSensorBinding__set_dLen_ptr(VehicleSensorBindingBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void VehicleSensorBinding__set_dLen(VehicleSensorBindingBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 车辆实体类型
static inline T_Type VehicleSensorBinding__vehicleTType(VehicleSensorBindingBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void VehicleSensorBinding__set_vehicleTType_ptr(VehicleSensorBindingBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void VehicleSensorBinding__set_vehicleTType(VehicleSensorBindingBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 车辆实体子类型
static inline T_Subtype VehicleSensorBinding__vehicleTSubtype(VehicleSensorBindingBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void VehicleSensorBinding__set_vehicleTSubtype_ptr(VehicleSensorBindingBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void VehicleSensorBinding__set_vehicleTSubtype(VehicleSensorBindingBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 车辆单位代字
static inline RID VehicleSensorBinding__vehicleRID(VehicleSensorBindingBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void VehicleSensorBinding__set_vehicleRID_ptr(VehicleSensorBindingBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void VehicleSensorBinding__set_vehicleRID(VehicleSensorBindingBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 车辆设备编号
static inline PID VehicleSensorBinding__vehiclePID(VehicleSensorBindingBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void VehicleSensorBinding__set_vehiclePID_ptr(VehicleSensorBindingBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void VehicleSensorBinding__set_vehiclePID(VehicleSensorBindingBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid VehicleSensorBinding__vehicleUPid(VehicleSensorBindingBuffer *buf) {
  UPid uPid = {
    .tType = VehicleSensorBinding__vehicleTType(buf),
    .tSubtype = VehicleSensorBinding__vehicleTSubtype(buf),
    .rID = VehicleSensorBinding__vehicleRID(buf),
    .pID = VehicleSensorBinding__vehiclePID(buf),
  };
  return uPid;
}
static inline void VehicleSensorBinding__set_vehicleUPid_ptr(VehicleSensorBindingBuffer *buf, UPid *val) {
  VehicleSensorBinding__set_vehicleTType(buf, val->tType);
  VehicleSensorBinding__set_vehicleTSubtype(buf, val->tSubtype);
  VehicleSensorBinding__set_vehicleRID(buf, val->rID);
  VehicleSensorBinding__set_vehiclePID(buf, val->pID);
}
static inline void VehicleSensorBinding__set_vehicleUPid(VehicleSensorBindingBuffer *buf, UPid val) {
  VehicleSensorBinding__set_vehicleTType(buf, val.tType);
  VehicleSensorBinding__set_vehicleTSubtype(buf, val.tSubtype);
  VehicleSensorBinding__set_vehicleRID(buf, val.rID);
  VehicleSensorBinding__set_vehiclePID(buf, val.pID);
}
static inline uint16_t VehicleSensorBinding__computeSize() {
  return 9;
}
static inline uint8_t VehicleSensorBinding__computeCheckSum(VehicleSensorBindingBuffer *buf) {
  return computeCheckSum(buf->data, VehicleSensorBinding__computeSize() - 1);
}
static inline uint8_t VehicleSensorBinding__checkSum(VehicleSensorBindingBuffer *buf) {
  return buf->data[VehicleSensorBinding__computeSize() - 1];
}
static inline bool VehicleSensorBinding__isCheckSumValid(VehicleSensorBindingBuffer *buf) {
  return VehicleSensorBinding__checkSum(buf) == VehicleSensorBinding__computeCheckSum(buf);
}
static inline void VehicleSensorBinding__set_checkSum(VehicleSensorBindingBuffer *buf, uint8_t checkSum) {
  buf->data[VehicleSensorBinding__computeSize() - 1] = checkSum;
}
static inline void VehicleSensorBinding__initEmpty(VehicleSensorBindingBuffer *buf) {
  VehicleSensorBinding__set_dLen(buf, VehicleSensorBinding__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  VehicleSensorBinding__set_dataFrame(buf, 0xed02);
  VehicleSensorBinding__set_checkSum(buf, VehicleSensorBinding__computeCheckSum(buf));
}
void send_zigbee_RequestCarDamage(RequestCarDamageBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_SendCarDamage(SendCarDamageBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_RequestRepairProgress(RequestRepairProgressBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_SendRepairProgress(SendRepairProgressBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_CrewEventPackAck(CrewEventPackAckBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_SecondDamage(SecondDamageBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_BindWeapon(BindWeaponBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_SetMissileParams(SetMissileParamsBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_WeaponResponse(WeaponResponseBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_SimulateExplosive(SimulateExplosiveBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_SimulateBomb(SimulateBombBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_Beacon(BeaconBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_PeopleDataDownload(PeopleDataDownloadBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_WeaponDataUpload(WeaponDataUploadBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_PlantMineAckZigBee(PlantMineAckZigBeeBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_RemoveMineAckZigBee(RemoveMineAckZigBeeBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_RescueBeacon(RescueBeaconBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_LaserData(LaserDataBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_ActivateGrenade(ActivateGrenadeBuffer *buf, UPid target, uint32_t boardNum);
void send_zigbee_VehicleSensorBinding(VehicleSensorBindingBuffer *buf, UPid target, uint32_t boardNum);

#endif // __GENERATED__ZIGBEE_H
