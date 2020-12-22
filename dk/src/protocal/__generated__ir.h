
#ifndef __GENERATED__IR_H
#define __GENERATED__IR_H
#include "dkTypes.h"
#define MAX_DATA_PACK_SIZE 256
#define MAX_EVENT_PACK_SIZE 256

// **********************************************
// 7.1 身份信息读取指令（0xA2，0x67）
// **********************************************

#define REQUEST_IDENTITY_MAX_SIZE (9)
typedef struct {
  uint8_t data[REQUEST_IDENTITY_MAX_SIZE];
} RequestIdentityBuffer;

// 数据帧头，为 0xA2，0x67
static inline Data_Frame RequestIdentity__dataFrame(RequestIdentityBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RequestIdentity__set_dataFrame_ptr(RequestIdentityBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RequestIdentity__set_dataFrame(RequestIdentityBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RequestIdentity__dLen(RequestIdentityBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RequestIdentity__set_dLen_ptr(RequestIdentityBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RequestIdentity__set_dLen(RequestIdentityBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 设置设备实体类型
static inline T_Type RequestIdentity__tType(RequestIdentityBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RequestIdentity__set_tType_ptr(RequestIdentityBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RequestIdentity__set_tType(RequestIdentityBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 设置设备实体子类型。
static inline T_Subtype RequestIdentity__tSubtype(RequestIdentityBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RequestIdentity__set_tSubtype_ptr(RequestIdentityBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RequestIdentity__set_tSubtype(RequestIdentityBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 设置设备单位代字
static inline RID RequestIdentity__rID(RequestIdentityBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RequestIdentity__set_rID_ptr(RequestIdentityBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RequestIdentity__set_rID(RequestIdentityBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 设置设备编号
static inline PID RequestIdentity__pID_use_uPID_instead(RequestIdentityBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RequestIdentity__set_pID_use_uPID_instead_ptr(RequestIdentityBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RequestIdentity__set_pID_use_uPID_instead(RequestIdentityBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RequestIdentity__uPid(RequestIdentityBuffer *buf) {
  UPid uPid = {
    .tType = RequestIdentity__tType(buf),
    .tSubtype = RequestIdentity__tSubtype(buf),
    .rID = RequestIdentity__rID(buf),
    .pID = RequestIdentity__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void RequestIdentity__set_uPid_ptr(RequestIdentityBuffer *buf, UPid *val) {
  RequestIdentity__set_tType(buf, val->tType);
  RequestIdentity__set_tSubtype(buf, val->tSubtype);
  RequestIdentity__set_rID(buf, val->rID);
  RequestIdentity__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void RequestIdentity__set_uPid(RequestIdentityBuffer *buf, UPid val) {
  RequestIdentity__set_tType(buf, val.tType);
  RequestIdentity__set_tSubtype(buf, val.tSubtype);
  RequestIdentity__set_rID(buf, val.rID);
  RequestIdentity__set_pID_use_uPID_instead(buf, val.pID);
}
static inline uint16_t RequestIdentity__computeSize() {
  return 9;
}
static inline uint8_t RequestIdentity__computeCheckSum(RequestIdentityBuffer *buf) {
  return computeCheckSum(buf->data, RequestIdentity__computeSize() - 1);
}
static inline uint8_t RequestIdentity__checkSum(RequestIdentityBuffer *buf) {
  return buf->data[RequestIdentity__computeSize() - 1];
}
static inline bool RequestIdentity__isCheckSumValid(RequestIdentityBuffer *buf) {
  return RequestIdentity__checkSum(buf) == RequestIdentity__computeCheckSum(buf);
}
static inline void RequestIdentity__set_checkSum(RequestIdentityBuffer *buf, uint8_t checkSum) {
  buf->data[RequestIdentity__computeSize() - 1] = checkSum;
}
static inline void RequestIdentity__initEmpty(RequestIdentityBuffer *buf) {
  RequestIdentity__set_dLen(buf, RequestIdentity__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RequestIdentity__set_dataFrame(buf, 0xa267);
  RequestIdentity__set_checkSum(buf, RequestIdentity__computeCheckSum(buf));
}

// **********************************************
// 7.2 身份信息输出指令（0xA3，0x60）
// **********************************************

#define SEND_IDENTITY_MAX_SIZE (20)
typedef struct {
  uint8_t data[SEND_IDENTITY_MAX_SIZE];
} SendIdentityBuffer;

// 数据帧头，为 0xA3，0x60
static inline Data_Frame SendIdentity__dataFrame(SendIdentityBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SendIdentity__set_dataFrame_ptr(SendIdentityBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SendIdentity__set_dataFrame(SendIdentityBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SendIdentity__dLen(SendIdentityBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SendIdentity__set_dLen_ptr(SendIdentityBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SendIdentity__set_dLen(SendIdentityBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 实体类型
static inline T_Type SendIdentity__tType(SendIdentityBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SendIdentity__set_tType_ptr(SendIdentityBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SendIdentity__set_tType(SendIdentityBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 实体子类型。
static inline T_Subtype SendIdentity__tSubtype(SendIdentityBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SendIdentity__set_tSubtype_ptr(SendIdentityBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SendIdentity__set_tSubtype(SendIdentityBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 实体的单位代字
static inline RID SendIdentity__rID(SendIdentityBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SendIdentity__set_rID_ptr(SendIdentityBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SendIdentity__set_rID(SendIdentityBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 实体的设备编号
static inline PID SendIdentity__pID_use_uPID_instead(SendIdentityBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SendIdentity__set_pID_use_uPID_instead_ptr(SendIdentityBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SendIdentity__set_pID_use_uPID_instead(SendIdentityBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SendIdentity__uPid(SendIdentityBuffer *buf) {
  UPid uPid = {
    .tType = SendIdentity__tType(buf),
    .tSubtype = SendIdentity__tSubtype(buf),
    .rID = SendIdentity__rID(buf),
    .pID = SendIdentity__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SendIdentity__set_uPid_ptr(SendIdentityBuffer *buf, UPid *val) {
  SendIdentity__set_tType(buf, val->tType);
  SendIdentity__set_tSubtype(buf, val->tSubtype);
  SendIdentity__set_rID(buf, val->rID);
  SendIdentity__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SendIdentity__set_uPid(SendIdentityBuffer *buf, UPid val) {
  SendIdentity__set_tType(buf, val.tType);
  SendIdentity__set_tSubtype(buf, val.tSubtype);
  SendIdentity__set_rID(buf, val.rID);
  SendIdentity__set_pID_use_uPID_instead(buf, val.pID);
}

// 配置方案编号
static inline EP_Num SendIdentity__ePNum(SendIdentityBuffer *buf) { return read_EP_Num(buf->data + (8)); }
static inline void SendIdentity__set_ePNum_ptr(SendIdentityBuffer *buf, EP_Num *val) { write_EP_Num(buf->data + (8), val); }
static inline void SendIdentity__set_ePNum(SendIdentityBuffer *buf, EP_Num val) { write_EP_Num(buf->data + (8), &val); }

// 演习开始时间
static inline Time1 SendIdentity__startTime(SendIdentityBuffer *buf) { return read_Time1(buf->data + (11)); }
static inline void SendIdentity__set_startTime_ptr(SendIdentityBuffer *buf, Time1 *val) { write_Time1(buf->data + (11), val); }
static inline void SendIdentity__set_startTime(SendIdentityBuffer *buf, Time1 val) { write_Time1(buf->data + (11), &val); }

// 密钥
static inline Key SendIdentity__key(SendIdentityBuffer *buf) { return read_Key(buf->data + (17)); }
static inline void SendIdentity__set_key_ptr(SendIdentityBuffer *buf, Key *val) { write_Key(buf->data + (17), val); }
static inline void SendIdentity__set_key(SendIdentityBuffer *buf, Key val) { write_Key(buf->data + (17), &val); }

// 实体状态字 1
static inline TS_Character1 SendIdentity__tSCharacter1(SendIdentityBuffer *buf) { return read_TS_Character1(buf->data + (18)); }
static inline void SendIdentity__set_tSCharacter1_ptr(SendIdentityBuffer *buf, TS_Character1 *val) { write_TS_Character1(buf->data + (18), val); }
static inline void SendIdentity__set_tSCharacter1(SendIdentityBuffer *buf, TS_Character1 val) { write_TS_Character1(buf->data + (18), &val); }
static inline uint16_t SendIdentity__computeSize() {
  return 20;
}
static inline uint8_t SendIdentity__computeCheckSum(SendIdentityBuffer *buf) {
  return computeCheckSum(buf->data, SendIdentity__computeSize() - 1);
}
static inline uint8_t SendIdentity__checkSum(SendIdentityBuffer *buf) {
  return buf->data[SendIdentity__computeSize() - 1];
}
static inline bool SendIdentity__isCheckSumValid(SendIdentityBuffer *buf) {
  return SendIdentity__checkSum(buf) == SendIdentity__computeCheckSum(buf);
}
static inline void SendIdentity__set_checkSum(SendIdentityBuffer *buf, uint8_t checkSum) {
  buf->data[SendIdentity__computeSize() - 1] = checkSum;
}
static inline void SendIdentity__initEmpty(SendIdentityBuffer *buf) {
  SendIdentity__set_dLen(buf, SendIdentity__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SendIdentity__set_dataFrame(buf, 0xa360);
  SendIdentity__set_checkSum(buf, SendIdentity__computeCheckSum(buf));
}

// **********************************************
// IrSetEquipParamsAmmoItem
// **********************************************

#define IR_SET_EQUIP_PARAMS_AMMO_ITEM_MAX_SIZE (11)
typedef struct {
  uint8_t data[IR_SET_EQUIP_PARAMS_AMMO_ITEM_MAX_SIZE];
} IrSetEquipParamsAmmoItemBuffer;

// 第1号弹药类型
static inline A_Type IrSetEquipParamsAmmoItem__aType(IrSetEquipParamsAmmoItemBuffer *buf) { return read_A_Type(buf->data + (0)); }
static inline void IrSetEquipParamsAmmoItem__set_aType_ptr(IrSetEquipParamsAmmoItemBuffer *buf, A_Type *val) { write_A_Type(buf->data + (0), val); }
static inline void IrSetEquipParamsAmmoItem__set_aType(IrSetEquipParamsAmmoItemBuffer *buf, A_Type val) { write_A_Type(buf->data + (0), &val); }

// 第1号弹药子类型
static inline A_Subtype IrSetEquipParamsAmmoItem__aSubtype(IrSetEquipParamsAmmoItemBuffer *buf) { return read_A_Subtype(buf->data + (1)); }
static inline void IrSetEquipParamsAmmoItem__set_aSubtype_ptr(IrSetEquipParamsAmmoItemBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (1), val); }
static inline void IrSetEquipParamsAmmoItem__set_aSubtype(IrSetEquipParamsAmmoItemBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (1), &val); }

// 第1号弹药初始配置数量
static inline Num3 IrSetEquipParamsAmmoItem__num3(IrSetEquipParamsAmmoItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void IrSetEquipParamsAmmoItem__set_num3_ptr(IrSetEquipParamsAmmoItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void IrSetEquipParamsAmmoItem__set_num3(IrSetEquipParamsAmmoItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }

// 第1号弹药命中概率（仅用于自寻的导弹）
static inline Strength IrSetEquipParamsAmmoItem__strength(IrSetEquipParamsAmmoItemBuffer *buf) { return read_Strength(buf->data + (5)); }
static inline void IrSetEquipParamsAmmoItem__set_strength_ptr(IrSetEquipParamsAmmoItemBuffer *buf, Strength *val) { write_Strength(buf->data + (5), val); }
static inline void IrSetEquipParamsAmmoItem__set_strength(IrSetEquipParamsAmmoItemBuffer *buf, Strength val) { write_Strength(buf->data + (5), &val); }

// 第1号弹药侵彻角（仅用于自寻的导弹）
static inline Angle3 IrSetEquipParamsAmmoItem__angle3(IrSetEquipParamsAmmoItemBuffer *buf) { return read_Angle3(buf->data + (6)); }
static inline void IrSetEquipParamsAmmoItem__set_angle3_ptr(IrSetEquipParamsAmmoItemBuffer *buf, Angle3 *val) { write_Angle3(buf->data + (6), val); }
static inline void IrSetEquipParamsAmmoItem__set_angle3(IrSetEquipParamsAmmoItemBuffer *buf, Angle3 val) { write_Angle3(buf->data + (6), &val); }

// 第1号弹药弹丸飞行速度
static inline Velocity3 IrSetEquipParamsAmmoItem__velocity3(IrSetEquipParamsAmmoItemBuffer *buf) { return read_Velocity3(buf->data + (7)); }
static inline void IrSetEquipParamsAmmoItem__set_velocity3_ptr(IrSetEquipParamsAmmoItemBuffer *buf, Velocity3 *val) { write_Velocity3(buf->data + (7), val); }
static inline void IrSetEquipParamsAmmoItem__set_velocity3(IrSetEquipParamsAmmoItemBuffer *buf, Velocity3 val) { write_Velocity3(buf->data + (7), &val); }

// 第1号弹药穿甲深度
static inline Thickness IrSetEquipParamsAmmoItem__piercingArmo(IrSetEquipParamsAmmoItemBuffer *buf) { return read_Thickness(buf->data + (8)); }
static inline void IrSetEquipParamsAmmoItem__set_piercingArmo_ptr(IrSetEquipParamsAmmoItemBuffer *buf, Thickness *val) { write_Thickness(buf->data + (8), val); }
static inline void IrSetEquipParamsAmmoItem__set_piercingArmo(IrSetEquipParamsAmmoItemBuffer *buf, Thickness val) { write_Thickness(buf->data + (8), &val); }

// 第1号弹药穿透混凝土厚度
static inline Thickness IrSetEquipParamsAmmoItem__piercingConcrete(IrSetEquipParamsAmmoItemBuffer *buf) { return read_Thickness(buf->data + (9)); }
static inline void IrSetEquipParamsAmmoItem__set_piercingConcrete_ptr(IrSetEquipParamsAmmoItemBuffer *buf, Thickness *val) { write_Thickness(buf->data + (9), val); }
static inline void IrSetEquipParamsAmmoItem__set_piercingConcrete(IrSetEquipParamsAmmoItemBuffer *buf, Thickness val) { write_Thickness(buf->data + (9), &val); }

// 第1号弹药有效射程（间瞄武器为直射时有效射程）
static inline Range IrSetEquipParamsAmmoItem__range(IrSetEquipParamsAmmoItemBuffer *buf) { return read_Range(buf->data + (10)); }
static inline void IrSetEquipParamsAmmoItem__set_range_ptr(IrSetEquipParamsAmmoItemBuffer *buf, Range *val) { write_Range(buf->data + (10), val); }
static inline void IrSetEquipParamsAmmoItem__set_range(IrSetEquipParamsAmmoItemBuffer *buf, Range val) { write_Range(buf->data + (10), &val); }
static inline uint16_t IrSetEquipParamsAmmoItem__computeSize() {
  return 11;
}
static inline void IrSetEquipParamsAmmoItem__initEmpty(IrSetEquipParamsAmmoItemBuffer *buf) {
}

// **********************************************
// IrSetEquipParamsMaterialItem
// **********************************************

#define IR_SET_EQUIP_PARAMS_MATERIAL_ITEM_MAX_SIZE (5)
typedef struct {
  uint8_t data[IR_SET_EQUIP_PARAMS_MATERIAL_ITEM_MAX_SIZE];
} IrSetEquipParamsMaterialItemBuffer;

// 第1号物资类型
static inline M_Type IrSetEquipParamsMaterialItem__mType(IrSetEquipParamsMaterialItemBuffer *buf) { return read_M_Type(buf->data + (0)); }
static inline void IrSetEquipParamsMaterialItem__set_mType_ptr(IrSetEquipParamsMaterialItemBuffer *buf, M_Type *val) { write_M_Type(buf->data + (0), val); }
static inline void IrSetEquipParamsMaterialItem__set_mType(IrSetEquipParamsMaterialItemBuffer *buf, M_Type val) { write_M_Type(buf->data + (0), &val); }

// 第1号物资子类型
static inline M_Subtype IrSetEquipParamsMaterialItem__mSubtype(IrSetEquipParamsMaterialItemBuffer *buf) { return read_M_Subtype(buf->data + (1)); }
static inline void IrSetEquipParamsMaterialItem__set_mSubtype_ptr(IrSetEquipParamsMaterialItemBuffer *buf, M_Subtype *val) { write_M_Subtype(buf->data + (1), val); }
static inline void IrSetEquipParamsMaterialItem__set_mSubtype(IrSetEquipParamsMaterialItemBuffer *buf, M_Subtype val) { write_M_Subtype(buf->data + (1), &val); }

// 第1号物资初始配置数量
static inline Num3 IrSetEquipParamsMaterialItem__num3(IrSetEquipParamsMaterialItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void IrSetEquipParamsMaterialItem__set_num3_ptr(IrSetEquipParamsMaterialItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void IrSetEquipParamsMaterialItem__set_num3(IrSetEquipParamsMaterialItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }
static inline uint16_t IrSetEquipParamsMaterialItem__computeSize() {
  return 5;
}
static inline void IrSetEquipParamsMaterialItem__initEmpty(IrSetEquipParamsMaterialItemBuffer *buf) {
}

// **********************************************
// 7.3 演习参数设置指令（非单兵）（0xA2，0x69）
// **********************************************

#define IR_SET_EQUIP_PARAMS_MAX_SIZE (40 + IR_SET_EQUIP_PARAMS_AMMO_ITEM_MAX_SIZE * 10 + IR_SET_EQUIP_PARAMS_MATERIAL_ITEM_MAX_SIZE * 10)
typedef struct {
  uint8_t data[IR_SET_EQUIP_PARAMS_MAX_SIZE];
} IrSetEquipParamsBuffer;

// 数据帧头，为0xA2，0x69
static inline Data_Frame IrSetEquipParams__dataFrame(IrSetEquipParamsBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void IrSetEquipParams__set_dataFrame_ptr(IrSetEquipParamsBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void IrSetEquipParams__set_dataFrame(IrSetEquipParamsBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len IrSetEquipParams__dLen(IrSetEquipParamsBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void IrSetEquipParams__set_dLen_ptr(IrSetEquipParamsBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void IrSetEquipParams__set_dLen(IrSetEquipParamsBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 实体类型
static inline T_Type IrSetEquipParams__tType(IrSetEquipParamsBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void IrSetEquipParams__set_tType_ptr(IrSetEquipParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void IrSetEquipParams__set_tType(IrSetEquipParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 实体子类型
static inline T_Subtype IrSetEquipParams__tSubtype(IrSetEquipParamsBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void IrSetEquipParams__set_tSubtype_ptr(IrSetEquipParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void IrSetEquipParams__set_tSubtype(IrSetEquipParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 实体单位代字
static inline RID IrSetEquipParams__rID(IrSetEquipParamsBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void IrSetEquipParams__set_rID_ptr(IrSetEquipParamsBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void IrSetEquipParams__set_rID(IrSetEquipParamsBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 实体设备编号
static inline PID IrSetEquipParams__pID_use_uPID_instead(IrSetEquipParamsBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void IrSetEquipParams__set_pID_use_uPID_instead_ptr(IrSetEquipParamsBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void IrSetEquipParams__set_pID_use_uPID_instead(IrSetEquipParamsBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid IrSetEquipParams__uPid(IrSetEquipParamsBuffer *buf) {
  UPid uPid = {
    .tType = IrSetEquipParams__tType(buf),
    .tSubtype = IrSetEquipParams__tSubtype(buf),
    .rID = IrSetEquipParams__rID(buf),
    .pID = IrSetEquipParams__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void IrSetEquipParams__set_uPid_ptr(IrSetEquipParamsBuffer *buf, UPid *val) {
  IrSetEquipParams__set_tType(buf, val->tType);
  IrSetEquipParams__set_tSubtype(buf, val->tSubtype);
  IrSetEquipParams__set_rID(buf, val->rID);
  IrSetEquipParams__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void IrSetEquipParams__set_uPid(IrSetEquipParamsBuffer *buf, UPid val) {
  IrSetEquipParams__set_tType(buf, val.tType);
  IrSetEquipParams__set_tSubtype(buf, val.tSubtype);
  IrSetEquipParams__set_rID(buf, val.rID);
  IrSetEquipParams__set_pID_use_uPID_instead(buf, val.pID);
}

// 主控系统实体类型
static inline T_Type IrSetEquipParams__ctrTType(IrSetEquipParamsBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void IrSetEquipParams__set_ctrTType_ptr(IrSetEquipParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void IrSetEquipParams__set_ctrTType(IrSetEquipParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 主控系统实体子类型
static inline T_Subtype IrSetEquipParams__ctrTSubtype(IrSetEquipParamsBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void IrSetEquipParams__set_ctrTSubtype_ptr(IrSetEquipParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void IrSetEquipParams__set_ctrTSubtype(IrSetEquipParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 主控系统单位代字
static inline RID IrSetEquipParams__ctrRID(IrSetEquipParamsBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void IrSetEquipParams__set_ctrRID_ptr(IrSetEquipParamsBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void IrSetEquipParams__set_ctrRID(IrSetEquipParamsBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 主控系统设备编号
static inline PID IrSetEquipParams__ctrPID(IrSetEquipParamsBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void IrSetEquipParams__set_ctrPID_ptr(IrSetEquipParamsBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void IrSetEquipParams__set_ctrPID(IrSetEquipParamsBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

static inline UPid IrSetEquipParams__ctrUPid(IrSetEquipParamsBuffer *buf) {
  UPid uPid = {
    .tType = IrSetEquipParams__ctrTType(buf),
    .tSubtype = IrSetEquipParams__ctrTSubtype(buf),
    .rID = IrSetEquipParams__ctrRID(buf),
    .pID = IrSetEquipParams__ctrPID(buf),
  };
  return uPid;
}
static inline void IrSetEquipParams__set_ctrUPid_ptr(IrSetEquipParamsBuffer *buf, UPid *val) {
  IrSetEquipParams__set_ctrTType(buf, val->tType);
  IrSetEquipParams__set_ctrTSubtype(buf, val->tSubtype);
  IrSetEquipParams__set_ctrRID(buf, val->rID);
  IrSetEquipParams__set_ctrPID(buf, val->pID);
}
static inline void IrSetEquipParams__set_ctrUPid(IrSetEquipParamsBuffer *buf, UPid val) {
  IrSetEquipParams__set_ctrTType(buf, val.tType);
  IrSetEquipParams__set_ctrTSubtype(buf, val.tSubtype);
  IrSetEquipParams__set_ctrRID(buf, val.rID);
  IrSetEquipParams__set_ctrPID(buf, val.pID);
}

// 演习开始时间
static inline Time1 IrSetEquipParams__startTime(IrSetEquipParamsBuffer *buf) { return read_Time1(buf->data + (13)); }
static inline void IrSetEquipParams__set_startTime_ptr(IrSetEquipParamsBuffer *buf, Time1 *val) { write_Time1(buf->data + (13), val); }
static inline void IrSetEquipParams__set_startTime(IrSetEquipParamsBuffer *buf, Time1 val) { write_Time1(buf->data + (13), &val); }

// 切换到白天的起始时间
static inline Time2 IrSetEquipParams__dayStart(IrSetEquipParamsBuffer *buf) { return read_Time2(buf->data + (19)); }
static inline void IrSetEquipParams__set_dayStart_ptr(IrSetEquipParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (19), val); }
static inline void IrSetEquipParams__set_dayStart(IrSetEquipParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (19), &val); }

// 切换到黑夜的起始时间
static inline Time2 IrSetEquipParams__nightStart(IrSetEquipParamsBuffer *buf) { return read_Time2(buf->data + (22)); }
static inline void IrSetEquipParams__set_nightStart_ptr(IrSetEquipParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (22), val); }
static inline void IrSetEquipParams__set_nightStart(IrSetEquipParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (22), &val); }

// 密钥
static inline Key IrSetEquipParams__key(IrSetEquipParamsBuffer *buf) { return read_Key(buf->data + (25)); }
static inline void IrSetEquipParams__set_key_ptr(IrSetEquipParamsBuffer *buf, Key *val) { write_Key(buf->data + (25), val); }
static inline void IrSetEquipParams__set_key(IrSetEquipParamsBuffer *buf, Key val) { write_Key(buf->data + (25), &val); }

// 红蓝属性
static inline BR_Attribute IrSetEquipParams__bRAttribute(IrSetEquipParamsBuffer *buf) { return read_BR_Attribute(buf->data + (26)); }
static inline void IrSetEquipParams__set_bRAttribute_ptr(IrSetEquipParamsBuffer *buf, BR_Attribute *val) { write_BR_Attribute(buf->data + (26), val); }
static inline void IrSetEquipParams__set_bRAttribute(IrSetEquipParamsBuffer *buf, BR_Attribute val) { write_BR_Attribute(buf->data + (26), &val); }

// 枪弹最大携带数量
static inline Num3 IrSetEquipParams__maxGunAmmo(IrSetEquipParamsBuffer *buf) { return read_Num3(buf->data + (27)); }
static inline void IrSetEquipParams__set_maxGunAmmo_ptr(IrSetEquipParamsBuffer *buf, Num3 *val) { write_Num3(buf->data + (27), val); }
static inline void IrSetEquipParams__set_maxGunAmmo(IrSetEquipParamsBuffer *buf, Num3 val) { write_Num3(buf->data + (27), &val); }

// 炮弹/火箭弹最大携带数量
static inline Num3 IrSetEquipParams__maxRocketAmmo(IrSetEquipParamsBuffer *buf) { return read_Num3(buf->data + (30)); }
static inline void IrSetEquipParams__set_maxRocketAmmo_ptr(IrSetEquipParamsBuffer *buf, Num3 *val) { write_Num3(buf->data + (30), val); }
static inline void IrSetEquipParams__set_maxRocketAmmo(IrSetEquipParamsBuffer *buf, Num3 val) { write_Num3(buf->data + (30), &val); }

// 配置弹药种类数（m，m=0时，弹药数据区无内容）
static inline Num1 IrSetEquipParams__mAmmo(IrSetEquipParamsBuffer *buf) { return read_Num1(buf->data + (33)); }
static inline void IrSetEquipParams__set_mAmmo_ptr(IrSetEquipParamsBuffer *buf, Num1 *val) { write_Num1(buf->data + (33), val); }
static inline void IrSetEquipParams__set_mAmmo(IrSetEquipParamsBuffer *buf, Num1 val) { write_Num1(buf->data + (33), &val); }

// 配置物资种类数（n，n=0时，物资数据区无内容）
static inline Num1 IrSetEquipParams__nMaterial(IrSetEquipParamsBuffer *buf) { return read_Num1(buf->data + (34)); }
static inline void IrSetEquipParams__set_nMaterial_ptr(IrSetEquipParamsBuffer *buf, Num1 *val) { write_Num1(buf->data + (34), val); }
static inline void IrSetEquipParams__set_nMaterial(IrSetEquipParamsBuffer *buf, Num1 val) { write_Num1(buf->data + (34), &val); }

// IrSetEquipParamsAmmoItem
static inline IrSetEquipParamsAmmoItemBuffer* IrSetEquipParams__ammo(IrSetEquipParamsBuffer *buf, uint8_t index);
static inline uint16_t IrSetEquipParams__ammo_pos(IrSetEquipParamsBuffer *buf, uint8_t idx) {
return idx * IrSetEquipParamsAmmoItem__computeSize();
}
static inline uint16_t IrSetEquipParams__ammo_maxCount() { return 10;}
static inline IrSetEquipParamsAmmoItemBuffer* IrSetEquipParams__ammo(IrSetEquipParamsBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (IrSetEquipParamsAmmoItemBuffer*)(buf->data + 35 + IrSetEquipParams__ammo_pos(buf, index));
}

// IrSetEquipParamsMaterialItem
static inline IrSetEquipParamsMaterialItemBuffer* IrSetEquipParams__material(IrSetEquipParamsBuffer *buf, uint8_t index);
static inline uint16_t IrSetEquipParams__material_pos(IrSetEquipParamsBuffer *buf, uint8_t idx) {
return idx * IrSetEquipParamsMaterialItem__computeSize();
}
static inline uint16_t IrSetEquipParams__material_maxCount() { return 10;}
static inline IrSetEquipParamsMaterialItemBuffer* IrSetEquipParams__material(IrSetEquipParamsBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (IrSetEquipParamsMaterialItemBuffer*)(buf->data + 35 + IrSetEquipParams__ammo_pos(buf, IrSetEquipParams__mAmmo(buf)) + IrSetEquipParams__material_pos(buf, index));
}

// 配置方案编号
static inline EP_Num IrSetEquipParams__ePNum(IrSetEquipParamsBuffer *buf) { return read_EP_Num(buf->data + (35 + IrSetEquipParams__ammo_pos(buf, IrSetEquipParams__mAmmo(buf)) + IrSetEquipParams__material_pos(buf, IrSetEquipParams__nMaterial(buf)))); }
static inline void IrSetEquipParams__set_ePNum_ptr(IrSetEquipParamsBuffer *buf, EP_Num *val) { write_EP_Num(buf->data + (35 + IrSetEquipParams__ammo_pos(buf, IrSetEquipParams__mAmmo(buf)) + IrSetEquipParams__material_pos(buf, IrSetEquipParams__nMaterial(buf))), val); }
static inline void IrSetEquipParams__set_ePNum(IrSetEquipParamsBuffer *buf, EP_Num val) { write_EP_Num(buf->data + (35 + IrSetEquipParams__ammo_pos(buf, IrSetEquipParams__mAmmo(buf)) + IrSetEquipParams__material_pos(buf, IrSetEquipParams__nMaterial(buf))), &val); }

// 实体防护能力（等效均质装甲厚度或混凝土厚度）
static inline Thickness IrSetEquipParams__defenceThickness(IrSetEquipParamsBuffer *buf) { return read_Thickness(buf->data + (35 + IrSetEquipParams__ammo_pos(buf, IrSetEquipParams__mAmmo(buf)) + IrSetEquipParams__material_pos(buf, IrSetEquipParams__nMaterial(buf)) + 3)); }
static inline void IrSetEquipParams__set_defenceThickness_ptr(IrSetEquipParamsBuffer *buf, Thickness *val) { write_Thickness(buf->data + (35 + IrSetEquipParams__ammo_pos(buf, IrSetEquipParams__mAmmo(buf)) + IrSetEquipParams__material_pos(buf, IrSetEquipParams__nMaterial(buf)) + 3), val); }
static inline void IrSetEquipParams__set_defenceThickness(IrSetEquipParamsBuffer *buf, Thickness val) { write_Thickness(buf->data + (35 + IrSetEquipParams__ammo_pos(buf, IrSetEquipParams__mAmmo(buf)) + IrSetEquipParams__material_pos(buf, IrSetEquipParams__nMaterial(buf)) + 3), &val); }
static inline uint16_t IrSetEquipParams__computeSize(IrSetEquipParamsBuffer *buf) {
  return 40 + (IrSetEquipParams__mAmmo(buf) * IrSetEquipParamsAmmoItem__computeSize()) + (IrSetEquipParams__nMaterial(buf) * IrSetEquipParamsMaterialItem__computeSize());
}
static inline uint8_t IrSetEquipParams__computeCheckSum(IrSetEquipParamsBuffer *buf) {
  return computeCheckSum(buf->data, IrSetEquipParams__computeSize(buf) - 1);
}
static inline uint8_t IrSetEquipParams__checkSum(IrSetEquipParamsBuffer *buf) {
  return buf->data[IrSetEquipParams__computeSize(buf) - 1];
}
static inline bool IrSetEquipParams__isCheckSumValid(IrSetEquipParamsBuffer *buf) {
  return IrSetEquipParams__checkSum(buf) == IrSetEquipParams__computeCheckSum(buf);
}
static inline void IrSetEquipParams__set_checkSum(IrSetEquipParamsBuffer *buf, uint8_t checkSum) {
  buf->data[IrSetEquipParams__computeSize(buf) - 1] = checkSum;
}
static inline void IrSetEquipParams__initEmpty(IrSetEquipParamsBuffer *buf, uint16_t mAmmo, uint16_t nMaterial) {
  IrSetEquipParams__set_mAmmo(buf, mAmmo);
  IrSetEquipParams__set_nMaterial(buf, nMaterial);
  IrSetEquipParams__set_dLen(buf, IrSetEquipParams__computeSize(buf) - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  IrSetEquipParams__set_dataFrame(buf, 0xa269);
  IrSetEquipParams__set_checkSum(buf, IrSetEquipParams__computeCheckSum(buf));
}

// **********************************************
// IrSetPeopleParamsWeaponItemAmmoItem
// **********************************************

#define IR_SET_PEOPLE_PARAMS_WEAPON_ITEM_AMMO_ITEM_MAX_SIZE (8)
typedef struct {
  uint8_t data[IR_SET_PEOPLE_PARAMS_WEAPON_ITEM_AMMO_ITEM_MAX_SIZE];
} IrSetPeopleParamsWeaponItemAmmoItemBuffer;

// 第1种武器第1号弹药类型
static inline A_Type IrSetPeopleParamsWeaponItemAmmoItem__aType(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf) { return read_A_Type(buf->data + (0)); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_aType_ptr(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, A_Type *val) { write_A_Type(buf->data + (0), val); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_aType(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, A_Type val) { write_A_Type(buf->data + (0), &val); }

// 第1种武器第1号弹药子类型
static inline A_Subtype IrSetPeopleParamsWeaponItemAmmoItem__aSubtype(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf) { return read_A_Subtype(buf->data + (1)); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_aSubtype_ptr(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (1), val); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_aSubtype(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (1), &val); }

// 第1种武器第1号弹药初始配置数量
static inline Num3 IrSetPeopleParamsWeaponItemAmmoItem__num3(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_num3_ptr(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_num3(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }

// 第1号弹药穿甲深度
static inline Thickness IrSetPeopleParamsWeaponItemAmmoItem__piercingArmo(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf) { return read_Thickness(buf->data + (5)); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_piercingArmo_ptr(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Thickness *val) { write_Thickness(buf->data + (5), val); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_piercingArmo(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Thickness val) { write_Thickness(buf->data + (5), &val); }

// 第1号弹药穿透混凝土厚度
static inline Thickness IrSetPeopleParamsWeaponItemAmmoItem__piercingConcrete(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf) { return read_Thickness(buf->data + (6)); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_piercingConcrete_ptr(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Thickness *val) { write_Thickness(buf->data + (6), val); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_piercingConcrete(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Thickness val) { write_Thickness(buf->data + (6), &val); }

// 第1号弹药有效射程（间瞄武器为直射时有效射程）
static inline Range IrSetPeopleParamsWeaponItemAmmoItem__range(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf) { return read_Range(buf->data + (7)); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_range_ptr(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Range *val) { write_Range(buf->data + (7), val); }
static inline void IrSetPeopleParamsWeaponItemAmmoItem__set_range(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf, Range val) { write_Range(buf->data + (7), &val); }
static inline uint16_t IrSetPeopleParamsWeaponItemAmmoItem__computeSize() {
  return 8;
}
static inline void IrSetPeopleParamsWeaponItemAmmoItem__initEmpty(IrSetPeopleParamsWeaponItemAmmoItemBuffer *buf) {
}

// **********************************************
// IrSetPeopleParamsWeaponItem
// **********************************************

#define IR_SET_PEOPLE_PARAMS_WEAPON_ITEM_MAX_SIZE (3 + IR_SET_PEOPLE_PARAMS_WEAPON_ITEM_AMMO_ITEM_MAX_SIZE * 5)
typedef struct {
  uint8_t data[IR_SET_PEOPLE_PARAMS_WEAPON_ITEM_MAX_SIZE];
} IrSetPeopleParamsWeaponItemBuffer;

// 第1种武器实体类型
static inline T_Type IrSetPeopleParamsWeaponItem__tType(IrSetPeopleParamsWeaponItemBuffer *buf) { return read_T_Type(buf->data + (0)); }
static inline void IrSetPeopleParamsWeaponItem__set_tType_ptr(IrSetPeopleParamsWeaponItemBuffer *buf, T_Type *val) { write_T_Type(buf->data + (0), val); }
static inline void IrSetPeopleParamsWeaponItem__set_tType(IrSetPeopleParamsWeaponItemBuffer *buf, T_Type val) { write_T_Type(buf->data + (0), &val); }

// 第1种武器实体子类型
static inline T_Subtype IrSetPeopleParamsWeaponItem__tSubtype(IrSetPeopleParamsWeaponItemBuffer *buf) { return read_T_Subtype(buf->data + (1)); }
static inline void IrSetPeopleParamsWeaponItem__set_tSubtype_ptr(IrSetPeopleParamsWeaponItemBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (1), val); }
static inline void IrSetPeopleParamsWeaponItem__set_tSubtype(IrSetPeopleParamsWeaponItemBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (1), &val); }

// 配置弹药种类数（n1，n1=0时，弹药数据区无内容）
static inline Num1 IrSetPeopleParamsWeaponItem__nAmmo(IrSetPeopleParamsWeaponItemBuffer *buf) { return read_Num1(buf->data + (2)); }
static inline void IrSetPeopleParamsWeaponItem__set_nAmmo_ptr(IrSetPeopleParamsWeaponItemBuffer *buf, Num1 *val) { write_Num1(buf->data + (2), val); }
static inline void IrSetPeopleParamsWeaponItem__set_nAmmo(IrSetPeopleParamsWeaponItemBuffer *buf, Num1 val) { write_Num1(buf->data + (2), &val); }

// IrSetPeopleParamsWeaponItemAmmoItem
static inline IrSetPeopleParamsWeaponItemAmmoItemBuffer* IrSetPeopleParamsWeaponItem__ammo(IrSetPeopleParamsWeaponItemBuffer *buf, uint8_t index);
static inline uint16_t IrSetPeopleParamsWeaponItem__ammo_pos(IrSetPeopleParamsWeaponItemBuffer *buf, uint8_t idx) {
return idx * IrSetPeopleParamsWeaponItemAmmoItem__computeSize();
}
static inline uint16_t IrSetPeopleParamsWeaponItem__ammo_maxCount() { return 5;}
static inline IrSetPeopleParamsWeaponItemAmmoItemBuffer* IrSetPeopleParamsWeaponItem__ammo(IrSetPeopleParamsWeaponItemBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (IrSetPeopleParamsWeaponItemAmmoItemBuffer*)(buf->data + 3 + IrSetPeopleParamsWeaponItem__ammo_pos(buf, index));
}
static inline uint16_t IrSetPeopleParamsWeaponItem__computeSize(IrSetPeopleParamsWeaponItemBuffer *buf) {
  return 3 + (IrSetPeopleParamsWeaponItem__nAmmo(buf) * IrSetPeopleParamsWeaponItemAmmoItem__computeSize());
}
static inline void IrSetPeopleParamsWeaponItem__initEmpty(IrSetPeopleParamsWeaponItemBuffer *buf, uint16_t nAmmo) {
  IrSetPeopleParamsWeaponItem__set_nAmmo(buf, nAmmo);
}

// **********************************************
// 7.4 单兵演习参数设置指令（0xA2，0x68）
// **********************************************

#define IR_SET_PEOPLE_PARAMS_MAX_SIZE (39 + IR_SET_PEOPLE_PARAMS_WEAPON_ITEM_MAX_SIZE * 5)
typedef struct {
  uint8_t data[IR_SET_PEOPLE_PARAMS_MAX_SIZE];
} IrSetPeopleParamsBuffer;

// 数据帧头，为0xA2，0x68
static inline Data_Frame IrSetPeopleParams__dataFrame(IrSetPeopleParamsBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void IrSetPeopleParams__set_dataFrame_ptr(IrSetPeopleParamsBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void IrSetPeopleParams__set_dataFrame(IrSetPeopleParamsBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len IrSetPeopleParams__dLen(IrSetPeopleParamsBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void IrSetPeopleParams__set_dLen_ptr(IrSetPeopleParamsBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void IrSetPeopleParams__set_dLen(IrSetPeopleParamsBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 被设置实体类型
static inline T_Type IrSetPeopleParams__tType(IrSetPeopleParamsBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void IrSetPeopleParams__set_tType_ptr(IrSetPeopleParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void IrSetPeopleParams__set_tType(IrSetPeopleParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 被设置实体子类型
static inline T_Subtype IrSetPeopleParams__tSubtype(IrSetPeopleParamsBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void IrSetPeopleParams__set_tSubtype_ptr(IrSetPeopleParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void IrSetPeopleParams__set_tSubtype(IrSetPeopleParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 被设置实体单位代字
static inline RID IrSetPeopleParams__rID(IrSetPeopleParamsBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void IrSetPeopleParams__set_rID_ptr(IrSetPeopleParamsBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void IrSetPeopleParams__set_rID(IrSetPeopleParamsBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 被设置实体设备编号
static inline PID IrSetPeopleParams__pID_use_uPID_instead(IrSetPeopleParamsBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void IrSetPeopleParams__set_pID_use_uPID_instead_ptr(IrSetPeopleParamsBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void IrSetPeopleParams__set_pID_use_uPID_instead(IrSetPeopleParamsBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid IrSetPeopleParams__uPid(IrSetPeopleParamsBuffer *buf) {
  UPid uPid = {
    .tType = IrSetPeopleParams__tType(buf),
    .tSubtype = IrSetPeopleParams__tSubtype(buf),
    .rID = IrSetPeopleParams__rID(buf),
    .pID = IrSetPeopleParams__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void IrSetPeopleParams__set_uPid_ptr(IrSetPeopleParamsBuffer *buf, UPid *val) {
  IrSetPeopleParams__set_tType(buf, val->tType);
  IrSetPeopleParams__set_tSubtype(buf, val->tSubtype);
  IrSetPeopleParams__set_rID(buf, val->rID);
  IrSetPeopleParams__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void IrSetPeopleParams__set_uPid(IrSetPeopleParamsBuffer *buf, UPid val) {
  IrSetPeopleParams__set_tType(buf, val.tType);
  IrSetPeopleParams__set_tSubtype(buf, val.tSubtype);
  IrSetPeopleParams__set_rID(buf, val.rID);
  IrSetPeopleParams__set_pID_use_uPID_instead(buf, val.pID);
}

// 主控系统实体类型
static inline T_Type IrSetPeopleParams__ctrTType(IrSetPeopleParamsBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void IrSetPeopleParams__set_ctrTType_ptr(IrSetPeopleParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void IrSetPeopleParams__set_ctrTType(IrSetPeopleParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 主控系统实体子类型
static inline T_Subtype IrSetPeopleParams__ctrTSubtype(IrSetPeopleParamsBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void IrSetPeopleParams__set_ctrTSubtype_ptr(IrSetPeopleParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void IrSetPeopleParams__set_ctrTSubtype(IrSetPeopleParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 主控系统单位代字
static inline RID IrSetPeopleParams__ctrRID(IrSetPeopleParamsBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void IrSetPeopleParams__set_ctrRID_ptr(IrSetPeopleParamsBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void IrSetPeopleParams__set_ctrRID(IrSetPeopleParamsBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 主控系统设备编号
static inline PID IrSetPeopleParams__ctrPID(IrSetPeopleParamsBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void IrSetPeopleParams__set_ctrPID_ptr(IrSetPeopleParamsBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void IrSetPeopleParams__set_ctrPID(IrSetPeopleParamsBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

static inline UPid IrSetPeopleParams__ctrUPid(IrSetPeopleParamsBuffer *buf) {
  UPid uPid = {
    .tType = IrSetPeopleParams__ctrTType(buf),
    .tSubtype = IrSetPeopleParams__ctrTSubtype(buf),
    .rID = IrSetPeopleParams__ctrRID(buf),
    .pID = IrSetPeopleParams__ctrPID(buf),
  };
  return uPid;
}
static inline void IrSetPeopleParams__set_ctrUPid_ptr(IrSetPeopleParamsBuffer *buf, UPid *val) {
  IrSetPeopleParams__set_ctrTType(buf, val->tType);
  IrSetPeopleParams__set_ctrTSubtype(buf, val->tSubtype);
  IrSetPeopleParams__set_ctrRID(buf, val->rID);
  IrSetPeopleParams__set_ctrPID(buf, val->pID);
}
static inline void IrSetPeopleParams__set_ctrUPid(IrSetPeopleParamsBuffer *buf, UPid val) {
  IrSetPeopleParams__set_ctrTType(buf, val.tType);
  IrSetPeopleParams__set_ctrTSubtype(buf, val.tSubtype);
  IrSetPeopleParams__set_ctrRID(buf, val.rID);
  IrSetPeopleParams__set_ctrPID(buf, val.pID);
}

// 演习开始时间
static inline Time1 IrSetPeopleParams__startTime(IrSetPeopleParamsBuffer *buf) { return read_Time1(buf->data + (13)); }
static inline void IrSetPeopleParams__set_startTime_ptr(IrSetPeopleParamsBuffer *buf, Time1 *val) { write_Time1(buf->data + (13), val); }
static inline void IrSetPeopleParams__set_startTime(IrSetPeopleParamsBuffer *buf, Time1 val) { write_Time1(buf->data + (13), &val); }

// 切换到白天的起始时间
static inline Time2 IrSetPeopleParams__dayStart(IrSetPeopleParamsBuffer *buf) { return read_Time2(buf->data + (19)); }
static inline void IrSetPeopleParams__set_dayStart_ptr(IrSetPeopleParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (19), val); }
static inline void IrSetPeopleParams__set_dayStart(IrSetPeopleParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (19), &val); }

// 切换到黑夜的起始时间
static inline Time2 IrSetPeopleParams__nightStart(IrSetPeopleParamsBuffer *buf) { return read_Time2(buf->data + (22)); }
static inline void IrSetPeopleParams__set_nightStart_ptr(IrSetPeopleParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (22), val); }
static inline void IrSetPeopleParams__set_nightStart(IrSetPeopleParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (22), &val); }

// 密钥
static inline Key IrSetPeopleParams__key(IrSetPeopleParamsBuffer *buf) { return read_Key(buf->data + (25)); }
static inline void IrSetPeopleParams__set_key_ptr(IrSetPeopleParamsBuffer *buf, Key *val) { write_Key(buf->data + (25), val); }
static inline void IrSetPeopleParams__set_key(IrSetPeopleParamsBuffer *buf, Key val) { write_Key(buf->data + (25), &val); }

// 红蓝属性
static inline BR_Attribute IrSetPeopleParams__bRAttribute(IrSetPeopleParamsBuffer *buf) { return read_BR_Attribute(buf->data + (26)); }
static inline void IrSetPeopleParams__set_bRAttribute_ptr(IrSetPeopleParamsBuffer *buf, BR_Attribute *val) { write_BR_Attribute(buf->data + (26), val); }
static inline void IrSetPeopleParams__set_bRAttribute(IrSetPeopleParamsBuffer *buf, BR_Attribute val) { write_BR_Attribute(buf->data + (26), &val); }

// 枪弹最大携带数量
static inline Num3 IrSetPeopleParams__maxGunAmmo(IrSetPeopleParamsBuffer *buf) { return read_Num3(buf->data + (27)); }
static inline void IrSetPeopleParams__set_maxGunAmmo_ptr(IrSetPeopleParamsBuffer *buf, Num3 *val) { write_Num3(buf->data + (27), val); }
static inline void IrSetPeopleParams__set_maxGunAmmo(IrSetPeopleParamsBuffer *buf, Num3 val) { write_Num3(buf->data + (27), &val); }

// 炮弹/火箭弹最大携带数量
static inline Num3 IrSetPeopleParams__maxRocketAmmo(IrSetPeopleParamsBuffer *buf) { return read_Num3(buf->data + (30)); }
static inline void IrSetPeopleParams__set_maxRocketAmmo_ptr(IrSetPeopleParamsBuffer *buf, Num3 *val) { write_Num3(buf->data + (30), val); }
static inline void IrSetPeopleParams__set_maxRocketAmmo(IrSetPeopleParamsBuffer *buf, Num3 val) { write_Num3(buf->data + (30), &val); }

// 携带的武器数量（m,m=0时，后续无内容）
static inline Num1 IrSetPeopleParams__mWeapon(IrSetPeopleParamsBuffer *buf) { return read_Num1(buf->data + (33)); }
static inline void IrSetPeopleParams__set_mWeapon_ptr(IrSetPeopleParamsBuffer *buf, Num1 *val) { write_Num1(buf->data + (33), val); }
static inline void IrSetPeopleParams__set_mWeapon(IrSetPeopleParamsBuffer *buf, Num1 val) { write_Num1(buf->data + (33), &val); }

// IrSetPeopleParamsWeaponItem
static inline IrSetPeopleParamsWeaponItemBuffer* IrSetPeopleParams__weapon(IrSetPeopleParamsBuffer *buf, uint8_t index);
static inline uint16_t IrSetPeopleParams__weapon_pos(IrSetPeopleParamsBuffer *buf, uint8_t idx) {
  uint16_t pos = 0;
  for (uint16_t i = 0; i < idx; i++) {
    IrSetPeopleParamsWeaponItemBuffer *itemBuf = IrSetPeopleParams__weapon(buf, i);
    pos += IrSetPeopleParamsWeaponItem__computeSize(itemBuf);
  }
  return pos;
}
static inline uint16_t IrSetPeopleParams__weapon_maxCount() { return 5;}
static inline IrSetPeopleParamsWeaponItemBuffer* IrSetPeopleParams__weapon(IrSetPeopleParamsBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (IrSetPeopleParamsWeaponItemBuffer*)(buf->data + 34 + IrSetPeopleParams__weapon_pos(buf, index));
}

// 配置方案编号
static inline EP_Num IrSetPeopleParams__ePNum(IrSetPeopleParamsBuffer *buf) { return read_EP_Num(buf->data + (34 + IrSetPeopleParams__weapon_pos(buf, IrSetPeopleParams__mWeapon(buf)))); }
static inline void IrSetPeopleParams__set_ePNum_ptr(IrSetPeopleParamsBuffer *buf, EP_Num *val) { write_EP_Num(buf->data + (34 + IrSetPeopleParams__weapon_pos(buf, IrSetPeopleParams__mWeapon(buf))), val); }
static inline void IrSetPeopleParams__set_ePNum(IrSetPeopleParamsBuffer *buf, EP_Num val) { write_EP_Num(buf->data + (34 + IrSetPeopleParams__weapon_pos(buf, IrSetPeopleParams__mWeapon(buf))), &val); }

// 实体防护能力（等效均质装甲厚度）
static inline Thickness IrSetPeopleParams__defenceThickness(IrSetPeopleParamsBuffer *buf) { return read_Thickness(buf->data + (34 + IrSetPeopleParams__weapon_pos(buf, IrSetPeopleParams__mWeapon(buf)) + 3)); }
static inline void IrSetPeopleParams__set_defenceThickness_ptr(IrSetPeopleParamsBuffer *buf, Thickness *val) { write_Thickness(buf->data + (34 + IrSetPeopleParams__weapon_pos(buf, IrSetPeopleParams__mWeapon(buf)) + 3), val); }
static inline void IrSetPeopleParams__set_defenceThickness(IrSetPeopleParamsBuffer *buf, Thickness val) { write_Thickness(buf->data + (34 + IrSetPeopleParams__weapon_pos(buf, IrSetPeopleParams__mWeapon(buf)) + 3), &val); }
static inline uint16_t IrSetPeopleParams__computeSize(IrSetPeopleParamsBuffer *buf) {
  return 39 + IrSetPeopleParams__weapon_pos(buf, IrSetPeopleParams__mWeapon(buf));
}
static inline uint8_t IrSetPeopleParams__computeCheckSum(IrSetPeopleParamsBuffer *buf) {
  return computeCheckSum(buf->data, IrSetPeopleParams__computeSize(buf) - 1);
}
static inline uint8_t IrSetPeopleParams__checkSum(IrSetPeopleParamsBuffer *buf) {
  return buf->data[IrSetPeopleParams__computeSize(buf) - 1];
}
static inline bool IrSetPeopleParams__isCheckSumValid(IrSetPeopleParamsBuffer *buf) {
  return IrSetPeopleParams__checkSum(buf) == IrSetPeopleParams__computeCheckSum(buf);
}
static inline void IrSetPeopleParams__set_checkSum(IrSetPeopleParamsBuffer *buf, uint8_t checkSum) {
  buf->data[IrSetPeopleParams__computeSize(buf) - 1] = checkSum;
}
static inline void IrSetPeopleParams__initEmpty(IrSetPeopleParamsBuffer *buf, uint16_t mWeapon, uint16_t mWeaponItems[]) {
  IrSetPeopleParams__set_mWeapon(buf, mWeapon);
  for (int i = 0; i < mWeapon; i++) {
    IrSetPeopleParamsWeaponItemBuffer *itemBuf = IrSetPeopleParams__weapon(buf, i);
    IrSetPeopleParamsWeaponItem__initEmpty(itemBuf, mWeaponItems[i]);
  }
  IrSetPeopleParams__set_dLen(buf, IrSetPeopleParams__computeSize(buf) - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  IrSetPeopleParams__set_dataFrame(buf, 0xa268);
  IrSetPeopleParams__set_checkSum(buf, IrSetPeopleParams__computeCheckSum(buf));
}

// **********************************************
// 7.5 弹药/物资信息读取指令（0xA2，0x71）
// **********************************************

#define REQUEST_AMMO_MATERIAL_MAX_SIZE (9)
typedef struct {
  uint8_t data[REQUEST_AMMO_MATERIAL_MAX_SIZE];
} RequestAmmoMaterialBuffer;

// 数据帧头，为 0xA2，0x71
static inline Data_Frame RequestAmmoMaterial__dataFrame(RequestAmmoMaterialBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RequestAmmoMaterial__set_dataFrame_ptr(RequestAmmoMaterialBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RequestAmmoMaterial__set_dataFrame(RequestAmmoMaterialBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RequestAmmoMaterial__dLen(RequestAmmoMaterialBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RequestAmmoMaterial__set_dLen_ptr(RequestAmmoMaterialBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RequestAmmoMaterial__set_dLen(RequestAmmoMaterialBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 实施查询实体的类型
static inline T_Type RequestAmmoMaterial__tType(RequestAmmoMaterialBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RequestAmmoMaterial__set_tType_ptr(RequestAmmoMaterialBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RequestAmmoMaterial__set_tType(RequestAmmoMaterialBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 实施查询实体的子类型。
static inline T_Subtype RequestAmmoMaterial__tSubtype(RequestAmmoMaterialBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RequestAmmoMaterial__set_tSubtype_ptr(RequestAmmoMaterialBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RequestAmmoMaterial__set_tSubtype(RequestAmmoMaterialBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 实施查询实体的单位代字
static inline RID RequestAmmoMaterial__rID(RequestAmmoMaterialBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RequestAmmoMaterial__set_rID_ptr(RequestAmmoMaterialBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RequestAmmoMaterial__set_rID(RequestAmmoMaterialBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 实施查询实体的设备编号
static inline PID RequestAmmoMaterial__pID_use_uPID_instead(RequestAmmoMaterialBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RequestAmmoMaterial__set_pID_use_uPID_instead_ptr(RequestAmmoMaterialBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RequestAmmoMaterial__set_pID_use_uPID_instead(RequestAmmoMaterialBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RequestAmmoMaterial__uPid(RequestAmmoMaterialBuffer *buf) {
  UPid uPid = {
    .tType = RequestAmmoMaterial__tType(buf),
    .tSubtype = RequestAmmoMaterial__tSubtype(buf),
    .rID = RequestAmmoMaterial__rID(buf),
    .pID = RequestAmmoMaterial__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void RequestAmmoMaterial__set_uPid_ptr(RequestAmmoMaterialBuffer *buf, UPid *val) {
  RequestAmmoMaterial__set_tType(buf, val->tType);
  RequestAmmoMaterial__set_tSubtype(buf, val->tSubtype);
  RequestAmmoMaterial__set_rID(buf, val->rID);
  RequestAmmoMaterial__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void RequestAmmoMaterial__set_uPid(RequestAmmoMaterialBuffer *buf, UPid val) {
  RequestAmmoMaterial__set_tType(buf, val.tType);
  RequestAmmoMaterial__set_tSubtype(buf, val.tSubtype);
  RequestAmmoMaterial__set_rID(buf, val.rID);
  RequestAmmoMaterial__set_pID_use_uPID_instead(buf, val.pID);
}
static inline uint16_t RequestAmmoMaterial__computeSize() {
  return 9;
}
static inline uint8_t RequestAmmoMaterial__computeCheckSum(RequestAmmoMaterialBuffer *buf) {
  return computeCheckSum(buf->data, RequestAmmoMaterial__computeSize() - 1);
}
static inline uint8_t RequestAmmoMaterial__checkSum(RequestAmmoMaterialBuffer *buf) {
  return buf->data[RequestAmmoMaterial__computeSize() - 1];
}
static inline bool RequestAmmoMaterial__isCheckSumValid(RequestAmmoMaterialBuffer *buf) {
  return RequestAmmoMaterial__checkSum(buf) == RequestAmmoMaterial__computeCheckSum(buf);
}
static inline void RequestAmmoMaterial__set_checkSum(RequestAmmoMaterialBuffer *buf, uint8_t checkSum) {
  buf->data[RequestAmmoMaterial__computeSize() - 1] = checkSum;
}
static inline void RequestAmmoMaterial__initEmpty(RequestAmmoMaterialBuffer *buf) {
  RequestAmmoMaterial__set_dLen(buf, RequestAmmoMaterial__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RequestAmmoMaterial__set_dataFrame(buf, 0xa271);
  RequestAmmoMaterial__set_checkSum(buf, RequestAmmoMaterial__computeCheckSum(buf));
}

// **********************************************
// SendAmmoMaterialAmmoItem
// **********************************************

#define SEND_AMMO_MATERIAL_AMMO_ITEM_MAX_SIZE (5)
typedef struct {
  uint8_t data[SEND_AMMO_MATERIAL_AMMO_ITEM_MAX_SIZE];
} SendAmmoMaterialAmmoItemBuffer;

// 第 1 种弹药类型
static inline A_Type SendAmmoMaterialAmmoItem__aType(SendAmmoMaterialAmmoItemBuffer *buf) { return read_A_Type(buf->data + (0)); }
static inline void SendAmmoMaterialAmmoItem__set_aType_ptr(SendAmmoMaterialAmmoItemBuffer *buf, A_Type *val) { write_A_Type(buf->data + (0), val); }
static inline void SendAmmoMaterialAmmoItem__set_aType(SendAmmoMaterialAmmoItemBuffer *buf, A_Type val) { write_A_Type(buf->data + (0), &val); }

// 第 1 种弹药子类型
static inline A_Subtype SendAmmoMaterialAmmoItem__aSubtype(SendAmmoMaterialAmmoItemBuffer *buf) { return read_A_Subtype(buf->data + (1)); }
static inline void SendAmmoMaterialAmmoItem__set_aSubtype_ptr(SendAmmoMaterialAmmoItemBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (1), val); }
static inline void SendAmmoMaterialAmmoItem__set_aSubtype(SendAmmoMaterialAmmoItemBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (1), &val); }

// 第 1 种弹药当前剩余数量
static inline Num3 SendAmmoMaterialAmmoItem__num3(SendAmmoMaterialAmmoItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void SendAmmoMaterialAmmoItem__set_num3_ptr(SendAmmoMaterialAmmoItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void SendAmmoMaterialAmmoItem__set_num3(SendAmmoMaterialAmmoItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }
static inline uint16_t SendAmmoMaterialAmmoItem__computeSize() {
  return 5;
}
static inline void SendAmmoMaterialAmmoItem__initEmpty(SendAmmoMaterialAmmoItemBuffer *buf) {
}

// **********************************************
// SendAmmoMaterialMaterialItem
// **********************************************

#define SEND_AMMO_MATERIAL_MATERIAL_ITEM_MAX_SIZE (5)
typedef struct {
  uint8_t data[SEND_AMMO_MATERIAL_MATERIAL_ITEM_MAX_SIZE];
} SendAmmoMaterialMaterialItemBuffer;

// 第 1 号物资类型
static inline M_Type SendAmmoMaterialMaterialItem__mType(SendAmmoMaterialMaterialItemBuffer *buf) { return read_M_Type(buf->data + (0)); }
static inline void SendAmmoMaterialMaterialItem__set_mType_ptr(SendAmmoMaterialMaterialItemBuffer *buf, M_Type *val) { write_M_Type(buf->data + (0), val); }
static inline void SendAmmoMaterialMaterialItem__set_mType(SendAmmoMaterialMaterialItemBuffer *buf, M_Type val) { write_M_Type(buf->data + (0), &val); }

// 第 1 号物资子类型
static inline M_Subtype SendAmmoMaterialMaterialItem__mSubtype(SendAmmoMaterialMaterialItemBuffer *buf) { return read_M_Subtype(buf->data + (1)); }
static inline void SendAmmoMaterialMaterialItem__set_mSubtype_ptr(SendAmmoMaterialMaterialItemBuffer *buf, M_Subtype *val) { write_M_Subtype(buf->data + (1), val); }
static inline void SendAmmoMaterialMaterialItem__set_mSubtype(SendAmmoMaterialMaterialItemBuffer *buf, M_Subtype val) { write_M_Subtype(buf->data + (1), &val); }

// 第 1 号物资剩余数量
static inline Num3 SendAmmoMaterialMaterialItem__num3(SendAmmoMaterialMaterialItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void SendAmmoMaterialMaterialItem__set_num3_ptr(SendAmmoMaterialMaterialItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void SendAmmoMaterialMaterialItem__set_num3(SendAmmoMaterialMaterialItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }
static inline uint16_t SendAmmoMaterialMaterialItem__computeSize() {
  return 5;
}
static inline void SendAmmoMaterialMaterialItem__initEmpty(SendAmmoMaterialMaterialItemBuffer *buf) {
}

// **********************************************
// 7.6 弹药/物资信息输出指令（0xA3，0x71）
// **********************************************

#define SEND_AMMO_MATERIAL_MAX_SIZE (22 + SEND_AMMO_MATERIAL_AMMO_ITEM_MAX_SIZE * 10 + SEND_AMMO_MATERIAL_MATERIAL_ITEM_MAX_SIZE * 10)
typedef struct {
  uint8_t data[SEND_AMMO_MATERIAL_MAX_SIZE];
} SendAmmoMaterialBuffer;

// 数据帧头，为 0xA3，0x71
static inline Data_Frame SendAmmoMaterial__dataFrame(SendAmmoMaterialBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SendAmmoMaterial__set_dataFrame_ptr(SendAmmoMaterialBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SendAmmoMaterial__set_dataFrame(SendAmmoMaterialBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SendAmmoMaterial__dLen(SendAmmoMaterialBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SendAmmoMaterial__set_dLen_ptr(SendAmmoMaterialBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SendAmmoMaterial__set_dLen(SendAmmoMaterialBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 实体类型
static inline T_Type SendAmmoMaterial__tType(SendAmmoMaterialBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SendAmmoMaterial__set_tType_ptr(SendAmmoMaterialBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SendAmmoMaterial__set_tType(SendAmmoMaterialBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 实体子类型。
static inline T_Subtype SendAmmoMaterial__tSubtype(SendAmmoMaterialBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SendAmmoMaterial__set_tSubtype_ptr(SendAmmoMaterialBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SendAmmoMaterial__set_tSubtype(SendAmmoMaterialBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 实体的单位代字
static inline RID SendAmmoMaterial__rID(SendAmmoMaterialBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SendAmmoMaterial__set_rID_ptr(SendAmmoMaterialBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SendAmmoMaterial__set_rID(SendAmmoMaterialBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 实体的设备编号
static inline PID SendAmmoMaterial__pID_use_uPID_instead(SendAmmoMaterialBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SendAmmoMaterial__set_pID_use_uPID_instead_ptr(SendAmmoMaterialBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SendAmmoMaterial__set_pID_use_uPID_instead(SendAmmoMaterialBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SendAmmoMaterial__uPid(SendAmmoMaterialBuffer *buf) {
  UPid uPid = {
    .tType = SendAmmoMaterial__tType(buf),
    .tSubtype = SendAmmoMaterial__tSubtype(buf),
    .rID = SendAmmoMaterial__rID(buf),
    .pID = SendAmmoMaterial__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SendAmmoMaterial__set_uPid_ptr(SendAmmoMaterialBuffer *buf, UPid *val) {
  SendAmmoMaterial__set_tType(buf, val->tType);
  SendAmmoMaterial__set_tSubtype(buf, val->tSubtype);
  SendAmmoMaterial__set_rID(buf, val->rID);
  SendAmmoMaterial__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SendAmmoMaterial__set_uPid(SendAmmoMaterialBuffer *buf, UPid val) {
  SendAmmoMaterial__set_tType(buf, val.tType);
  SendAmmoMaterial__set_tSubtype(buf, val.tSubtype);
  SendAmmoMaterial__set_rID(buf, val.rID);
  SendAmmoMaterial__set_pID_use_uPID_instead(buf, val.pID);
}

// 配置方案编号
static inline EP_Num SendAmmoMaterial__ePNum(SendAmmoMaterialBuffer *buf) { return read_EP_Num(buf->data + (8)); }
static inline void SendAmmoMaterial__set_ePNum_ptr(SendAmmoMaterialBuffer *buf, EP_Num *val) { write_EP_Num(buf->data + (8), val); }
static inline void SendAmmoMaterial__set_ePNum(SendAmmoMaterialBuffer *buf, EP_Num val) { write_EP_Num(buf->data + (8), &val); }

// 演习开始时间
static inline Time1 SendAmmoMaterial__time1(SendAmmoMaterialBuffer *buf) { return read_Time1(buf->data + (11)); }
static inline void SendAmmoMaterial__set_time1_ptr(SendAmmoMaterialBuffer *buf, Time1 *val) { write_Time1(buf->data + (11), val); }
static inline void SendAmmoMaterial__set_time1(SendAmmoMaterialBuffer *buf, Time1 val) { write_Time1(buf->data + (11), &val); }

// 密钥
static inline Key SendAmmoMaterial__key(SendAmmoMaterialBuffer *buf) { return read_Key(buf->data + (17)); }
static inline void SendAmmoMaterial__set_key_ptr(SendAmmoMaterialBuffer *buf, Key *val) { write_Key(buf->data + (17), val); }
static inline void SendAmmoMaterial__set_key(SendAmmoMaterialBuffer *buf, Key val) { write_Key(buf->data + (17), &val); }

// 实体状态字 1
static inline TS_Character1 SendAmmoMaterial__tSCharacter1(SendAmmoMaterialBuffer *buf) { return read_TS_Character1(buf->data + (18)); }
static inline void SendAmmoMaterial__set_tSCharacter1_ptr(SendAmmoMaterialBuffer *buf, TS_Character1 *val) { write_TS_Character1(buf->data + (18), val); }
static inline void SendAmmoMaterial__set_tSCharacter1(SendAmmoMaterialBuffer *buf, TS_Character1 val) { write_TS_Character1(buf->data + (18), &val); }

// 携行弹药种类数（m，m=0 时，弹药数据区无内容）
static inline Num1 SendAmmoMaterial__mAmmo(SendAmmoMaterialBuffer *buf) { return read_Num1(buf->data + (19)); }
static inline void SendAmmoMaterial__set_mAmmo_ptr(SendAmmoMaterialBuffer *buf, Num1 *val) { write_Num1(buf->data + (19), val); }
static inline void SendAmmoMaterial__set_mAmmo(SendAmmoMaterialBuffer *buf, Num1 val) { write_Num1(buf->data + (19), &val); }

// 携行物资种类数（n，n=0 时，物资数据区无内容）
static inline Num1 SendAmmoMaterial__nMaterial(SendAmmoMaterialBuffer *buf) { return read_Num1(buf->data + (20)); }
static inline void SendAmmoMaterial__set_nMaterial_ptr(SendAmmoMaterialBuffer *buf, Num1 *val) { write_Num1(buf->data + (20), val); }
static inline void SendAmmoMaterial__set_nMaterial(SendAmmoMaterialBuffer *buf, Num1 val) { write_Num1(buf->data + (20), &val); }

// SendAmmoMaterialAmmoItem
static inline SendAmmoMaterialAmmoItemBuffer* SendAmmoMaterial__ammo(SendAmmoMaterialBuffer *buf, uint8_t index);
static inline uint16_t SendAmmoMaterial__ammo_pos(SendAmmoMaterialBuffer *buf, uint8_t idx) {
return idx * SendAmmoMaterialAmmoItem__computeSize();
}
static inline uint16_t SendAmmoMaterial__ammo_maxCount() { return 10;}
static inline SendAmmoMaterialAmmoItemBuffer* SendAmmoMaterial__ammo(SendAmmoMaterialBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (SendAmmoMaterialAmmoItemBuffer*)(buf->data + 21 + SendAmmoMaterial__ammo_pos(buf, index));
}

// SendAmmoMaterialMaterialItem
static inline SendAmmoMaterialMaterialItemBuffer* SendAmmoMaterial__material(SendAmmoMaterialBuffer *buf, uint8_t index);
static inline uint16_t SendAmmoMaterial__material_pos(SendAmmoMaterialBuffer *buf, uint8_t idx) {
return idx * SendAmmoMaterialMaterialItem__computeSize();
}
static inline uint16_t SendAmmoMaterial__material_maxCount() { return 10;}
static inline SendAmmoMaterialMaterialItemBuffer* SendAmmoMaterial__material(SendAmmoMaterialBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (SendAmmoMaterialMaterialItemBuffer*)(buf->data + 21 + SendAmmoMaterial__ammo_pos(buf, SendAmmoMaterial__mAmmo(buf)) + SendAmmoMaterial__material_pos(buf, index));
}
static inline uint16_t SendAmmoMaterial__computeSize(SendAmmoMaterialBuffer *buf) {
  return 22 + (SendAmmoMaterial__mAmmo(buf) * SendAmmoMaterialAmmoItem__computeSize()) + (SendAmmoMaterial__nMaterial(buf) * SendAmmoMaterialMaterialItem__computeSize());
}
static inline uint8_t SendAmmoMaterial__computeCheckSum(SendAmmoMaterialBuffer *buf) {
  return computeCheckSum(buf->data, SendAmmoMaterial__computeSize(buf) - 1);
}
static inline uint8_t SendAmmoMaterial__checkSum(SendAmmoMaterialBuffer *buf) {
  return buf->data[SendAmmoMaterial__computeSize(buf) - 1];
}
static inline bool SendAmmoMaterial__isCheckSumValid(SendAmmoMaterialBuffer *buf) {
  return SendAmmoMaterial__checkSum(buf) == SendAmmoMaterial__computeCheckSum(buf);
}
static inline void SendAmmoMaterial__set_checkSum(SendAmmoMaterialBuffer *buf, uint8_t checkSum) {
  buf->data[SendAmmoMaterial__computeSize(buf) - 1] = checkSum;
}
static inline void SendAmmoMaterial__initEmpty(SendAmmoMaterialBuffer *buf, uint16_t mAmmo, uint16_t nMaterial) {
  SendAmmoMaterial__set_mAmmo(buf, mAmmo);
  SendAmmoMaterial__set_nMaterial(buf, nMaterial);
  SendAmmoMaterial__set_dLen(buf, SendAmmoMaterial__computeSize(buf) - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SendAmmoMaterial__set_dataFrame(buf, 0xa371);
  SendAmmoMaterial__set_checkSum(buf, SendAmmoMaterial__computeCheckSum(buf));
}

// **********************************************
// FillAmmoMaterialAmmoItem
// **********************************************

#define FILL_AMMO_MATERIAL_AMMO_ITEM_MAX_SIZE (5)
typedef struct {
  uint8_t data[FILL_AMMO_MATERIAL_AMMO_ITEM_MAX_SIZE];
} FillAmmoMaterialAmmoItemBuffer;

// 第 1 种弹药类型
static inline A_Type FillAmmoMaterialAmmoItem__aType(FillAmmoMaterialAmmoItemBuffer *buf) { return read_A_Type(buf->data + (0)); }
static inline void FillAmmoMaterialAmmoItem__set_aType_ptr(FillAmmoMaterialAmmoItemBuffer *buf, A_Type *val) { write_A_Type(buf->data + (0), val); }
static inline void FillAmmoMaterialAmmoItem__set_aType(FillAmmoMaterialAmmoItemBuffer *buf, A_Type val) { write_A_Type(buf->data + (0), &val); }

// 第 1 种弹药子类型
static inline A_Subtype FillAmmoMaterialAmmoItem__aSubtype(FillAmmoMaterialAmmoItemBuffer *buf) { return read_A_Subtype(buf->data + (1)); }
static inline void FillAmmoMaterialAmmoItem__set_aSubtype_ptr(FillAmmoMaterialAmmoItemBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (1), val); }
static inline void FillAmmoMaterialAmmoItem__set_aSubtype(FillAmmoMaterialAmmoItemBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (1), &val); }

// 第 1 种弹药当前剩余数量
static inline Num3 FillAmmoMaterialAmmoItem__num3(FillAmmoMaterialAmmoItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void FillAmmoMaterialAmmoItem__set_num3_ptr(FillAmmoMaterialAmmoItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void FillAmmoMaterialAmmoItem__set_num3(FillAmmoMaterialAmmoItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }
static inline uint16_t FillAmmoMaterialAmmoItem__computeSize() {
  return 5;
}
static inline void FillAmmoMaterialAmmoItem__initEmpty(FillAmmoMaterialAmmoItemBuffer *buf) {
}

// **********************************************
// FillAmmoMaterialMaterialItem
// **********************************************

#define FILL_AMMO_MATERIAL_MATERIAL_ITEM_MAX_SIZE (5)
typedef struct {
  uint8_t data[FILL_AMMO_MATERIAL_MATERIAL_ITEM_MAX_SIZE];
} FillAmmoMaterialMaterialItemBuffer;

// 第 1 号物资类型
static inline M_Type FillAmmoMaterialMaterialItem__mType(FillAmmoMaterialMaterialItemBuffer *buf) { return read_M_Type(buf->data + (0)); }
static inline void FillAmmoMaterialMaterialItem__set_mType_ptr(FillAmmoMaterialMaterialItemBuffer *buf, M_Type *val) { write_M_Type(buf->data + (0), val); }
static inline void FillAmmoMaterialMaterialItem__set_mType(FillAmmoMaterialMaterialItemBuffer *buf, M_Type val) { write_M_Type(buf->data + (0), &val); }

// 第 1 号物资子类型
static inline M_Subtype FillAmmoMaterialMaterialItem__mSubtype(FillAmmoMaterialMaterialItemBuffer *buf) { return read_M_Subtype(buf->data + (1)); }
static inline void FillAmmoMaterialMaterialItem__set_mSubtype_ptr(FillAmmoMaterialMaterialItemBuffer *buf, M_Subtype *val) { write_M_Subtype(buf->data + (1), val); }
static inline void FillAmmoMaterialMaterialItem__set_mSubtype(FillAmmoMaterialMaterialItemBuffer *buf, M_Subtype val) { write_M_Subtype(buf->data + (1), &val); }

// 第 1 号物资剩余数量
static inline Num3 FillAmmoMaterialMaterialItem__num3(FillAmmoMaterialMaterialItemBuffer *buf) { return read_Num3(buf->data + (2)); }
static inline void FillAmmoMaterialMaterialItem__set_num3_ptr(FillAmmoMaterialMaterialItemBuffer *buf, Num3 *val) { write_Num3(buf->data + (2), val); }
static inline void FillAmmoMaterialMaterialItem__set_num3(FillAmmoMaterialMaterialItemBuffer *buf, Num3 val) { write_Num3(buf->data + (2), &val); }
static inline uint16_t FillAmmoMaterialMaterialItem__computeSize() {
  return 5;
}
static inline void FillAmmoMaterialMaterialItem__initEmpty(FillAmmoMaterialMaterialItemBuffer *buf) {
}

// **********************************************
// 7.7 弹药/物资补充（0xA2，0x74）
// **********************************************

#define FILL_AMMO_MATERIAL_MAX_SIZE (6 + FILL_AMMO_MATERIAL_AMMO_ITEM_MAX_SIZE * 10 + FILL_AMMO_MATERIAL_MATERIAL_ITEM_MAX_SIZE * 10)
typedef struct {
  uint8_t data[FILL_AMMO_MATERIAL_MAX_SIZE];
} FillAmmoMaterialBuffer;

// 数据帧头，为 0xA2，0x74
static inline Data_Frame FillAmmoMaterial__dataFrame(FillAmmoMaterialBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void FillAmmoMaterial__set_dataFrame_ptr(FillAmmoMaterialBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void FillAmmoMaterial__set_dataFrame(FillAmmoMaterialBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len FillAmmoMaterial__dLen(FillAmmoMaterialBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void FillAmmoMaterial__set_dLen_ptr(FillAmmoMaterialBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void FillAmmoMaterial__set_dLen(FillAmmoMaterialBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 补充弹药种类数（m，m=0 时，弹药数据区无内容）
static inline Num1 FillAmmoMaterial__mAmmo(FillAmmoMaterialBuffer *buf) { return read_Num1(buf->data + (3)); }
static inline void FillAmmoMaterial__set_mAmmo_ptr(FillAmmoMaterialBuffer *buf, Num1 *val) { write_Num1(buf->data + (3), val); }
static inline void FillAmmoMaterial__set_mAmmo(FillAmmoMaterialBuffer *buf, Num1 val) { write_Num1(buf->data + (3), &val); }

// 补充物资种类数（n，n=0 时，物资数据区无内容）
static inline Num1 FillAmmoMaterial__nMaterial(FillAmmoMaterialBuffer *buf) { return read_Num1(buf->data + (4)); }
static inline void FillAmmoMaterial__set_nMaterial_ptr(FillAmmoMaterialBuffer *buf, Num1 *val) { write_Num1(buf->data + (4), val); }
static inline void FillAmmoMaterial__set_nMaterial(FillAmmoMaterialBuffer *buf, Num1 val) { write_Num1(buf->data + (4), &val); }

// FillAmmoMaterialAmmoItem
static inline FillAmmoMaterialAmmoItemBuffer* FillAmmoMaterial__ammo(FillAmmoMaterialBuffer *buf, uint8_t index);
static inline uint16_t FillAmmoMaterial__ammo_pos(FillAmmoMaterialBuffer *buf, uint8_t idx) {
return idx * FillAmmoMaterialAmmoItem__computeSize();
}
static inline uint16_t FillAmmoMaterial__ammo_maxCount() { return 10;}
static inline FillAmmoMaterialAmmoItemBuffer* FillAmmoMaterial__ammo(FillAmmoMaterialBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (FillAmmoMaterialAmmoItemBuffer*)(buf->data + 5 + FillAmmoMaterial__ammo_pos(buf, index));
}

// FillAmmoMaterialMaterialItem
static inline FillAmmoMaterialMaterialItemBuffer* FillAmmoMaterial__material(FillAmmoMaterialBuffer *buf, uint8_t index);
static inline uint16_t FillAmmoMaterial__material_pos(FillAmmoMaterialBuffer *buf, uint8_t idx) {
return idx * FillAmmoMaterialMaterialItem__computeSize();
}
static inline uint16_t FillAmmoMaterial__material_maxCount() { return 10;}
static inline FillAmmoMaterialMaterialItemBuffer* FillAmmoMaterial__material(FillAmmoMaterialBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (FillAmmoMaterialMaterialItemBuffer*)(buf->data + 5 + FillAmmoMaterial__ammo_pos(buf, FillAmmoMaterial__mAmmo(buf)) + FillAmmoMaterial__material_pos(buf, index));
}
static inline uint16_t FillAmmoMaterial__computeSize(FillAmmoMaterialBuffer *buf) {
  return 6 + (FillAmmoMaterial__mAmmo(buf) * FillAmmoMaterialAmmoItem__computeSize()) + (FillAmmoMaterial__nMaterial(buf) * FillAmmoMaterialMaterialItem__computeSize());
}
static inline uint8_t FillAmmoMaterial__computeCheckSum(FillAmmoMaterialBuffer *buf) {
  return computeCheckSum(buf->data, FillAmmoMaterial__computeSize(buf) - 1);
}
static inline uint8_t FillAmmoMaterial__checkSum(FillAmmoMaterialBuffer *buf) {
  return buf->data[FillAmmoMaterial__computeSize(buf) - 1];
}
static inline bool FillAmmoMaterial__isCheckSumValid(FillAmmoMaterialBuffer *buf) {
  return FillAmmoMaterial__checkSum(buf) == FillAmmoMaterial__computeCheckSum(buf);
}
static inline void FillAmmoMaterial__set_checkSum(FillAmmoMaterialBuffer *buf, uint8_t checkSum) {
  buf->data[FillAmmoMaterial__computeSize(buf) - 1] = checkSum;
}
static inline void FillAmmoMaterial__initEmpty(FillAmmoMaterialBuffer *buf, uint16_t mAmmo, uint16_t nMaterial) {
  FillAmmoMaterial__set_mAmmo(buf, mAmmo);
  FillAmmoMaterial__set_nMaterial(buf, nMaterial);
  FillAmmoMaterial__set_dLen(buf, FillAmmoMaterial__computeSize(buf) - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  FillAmmoMaterial__set_dataFrame(buf, 0xa274);
  FillAmmoMaterial__set_checkSum(buf, FillAmmoMaterial__computeCheckSum(buf));
}

// **********************************************
// 7.8 人员伤情读取指令（0xA2，0x51）
// **********************************************

#define REQUEST_DAMAGE_MAX_SIZE (9)
typedef struct {
  uint8_t data[REQUEST_DAMAGE_MAX_SIZE];
} RequestDamageBuffer;

// 数据帧头，为 0xA2，0x51
static inline Data_Frame RequestDamage__dataFrame(RequestDamageBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RequestDamage__set_dataFrame_ptr(RequestDamageBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RequestDamage__set_dataFrame(RequestDamageBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RequestDamage__dLen(RequestDamageBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RequestDamage__set_dLen_ptr(RequestDamageBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RequestDamage__set_dLen(RequestDamageBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 查询操作实体的类型
static inline T_Type RequestDamage__tType(RequestDamageBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RequestDamage__set_tType_ptr(RequestDamageBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RequestDamage__set_tType(RequestDamageBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 查询操作实体的子类型。
static inline T_Subtype RequestDamage__tSubtype(RequestDamageBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RequestDamage__set_tSubtype_ptr(RequestDamageBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RequestDamage__set_tSubtype(RequestDamageBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 查询操作实体的单位代字
static inline RID RequestDamage__rID(RequestDamageBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RequestDamage__set_rID_ptr(RequestDamageBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RequestDamage__set_rID(RequestDamageBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 查询操作实体的设备编号
static inline PID RequestDamage__pID_use_uPID_instead(RequestDamageBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RequestDamage__set_pID_use_uPID_instead_ptr(RequestDamageBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RequestDamage__set_pID_use_uPID_instead(RequestDamageBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RequestDamage__uPid(RequestDamageBuffer *buf) {
  UPid uPid = {
    .tType = RequestDamage__tType(buf),
    .tSubtype = RequestDamage__tSubtype(buf),
    .rID = RequestDamage__rID(buf),
    .pID = RequestDamage__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void RequestDamage__set_uPid_ptr(RequestDamageBuffer *buf, UPid *val) {
  RequestDamage__set_tType(buf, val->tType);
  RequestDamage__set_tSubtype(buf, val->tSubtype);
  RequestDamage__set_rID(buf, val->rID);
  RequestDamage__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void RequestDamage__set_uPid(RequestDamageBuffer *buf, UPid val) {
  RequestDamage__set_tType(buf, val.tType);
  RequestDamage__set_tSubtype(buf, val.tSubtype);
  RequestDamage__set_rID(buf, val.rID);
  RequestDamage__set_pID_use_uPID_instead(buf, val.pID);
}
static inline uint16_t RequestDamage__computeSize() {
  return 9;
}
static inline uint8_t RequestDamage__computeCheckSum(RequestDamageBuffer *buf) {
  return computeCheckSum(buf->data, RequestDamage__computeSize() - 1);
}
static inline uint8_t RequestDamage__checkSum(RequestDamageBuffer *buf) {
  return buf->data[RequestDamage__computeSize() - 1];
}
static inline bool RequestDamage__isCheckSumValid(RequestDamageBuffer *buf) {
  return RequestDamage__checkSum(buf) == RequestDamage__computeCheckSum(buf);
}
static inline void RequestDamage__set_checkSum(RequestDamageBuffer *buf, uint8_t checkSum) {
  buf->data[RequestDamage__computeSize() - 1] = checkSum;
}
static inline void RequestDamage__initEmpty(RequestDamageBuffer *buf) {
  RequestDamage__set_dLen(buf, RequestDamage__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RequestDamage__set_dataFrame(buf, 0xa251);
  RequestDamage__set_checkSum(buf, RequestDamage__computeCheckSum(buf));
}

// **********************************************
// SendDamagepartsItem
// **********************************************

#define SEND_DAMAGEPARTS_ITEM_MAX_SIZE (3)
typedef struct {
  uint8_t data[SEND_DAMAGEPARTS_ITEM_MAX_SIZE];
} SendDamagepartsItemBuffer;

// 第 1 种被打体命中部位
static inline H_Part SendDamagepartsItem__hPart(SendDamagepartsItemBuffer *buf) { return read_H_Part(buf->data + (0)); }
static inline void SendDamagepartsItem__set_hPart_ptr(SendDamagepartsItemBuffer *buf, H_Part *val) { write_H_Part(buf->data + (0), val); }
static inline void SendDamagepartsItem__set_hPart(SendDamagepartsItemBuffer *buf, H_Part val) { write_H_Part(buf->data + (0), &val); }

// 第 1 种被打击伤类
static inline H_Type SendDamagepartsItem__hType(SendDamagepartsItemBuffer *buf) { return read_H_Type(buf->data + (1)); }
static inline void SendDamagepartsItem__set_hType_ptr(SendDamagepartsItemBuffer *buf, H_Type *val) { write_H_Type(buf->data + (1), val); }
static inline void SendDamagepartsItem__set_hType(SendDamagepartsItemBuffer *buf, H_Type val) { write_H_Type(buf->data + (1), &val); }

// 第 1 种被打击命中伤势
static inline H_Idegree SendDamagepartsItem__hIdegree(SendDamagepartsItemBuffer *buf) { return read_H_Idegree(buf->data + (2)); }
static inline void SendDamagepartsItem__set_hIdegree_ptr(SendDamagepartsItemBuffer *buf, H_Idegree *val) { write_H_Idegree(buf->data + (2), val); }
static inline void SendDamagepartsItem__set_hIdegree(SendDamagepartsItemBuffer *buf, H_Idegree val) { write_H_Idegree(buf->data + (2), &val); }
static inline uint16_t SendDamagepartsItem__computeSize() {
  return 3;
}
static inline void SendDamagepartsItem__initEmpty(SendDamagepartsItemBuffer *buf) {
}

// **********************************************
// 7.9 人员伤情输出指令（0xA3，0x51）
// **********************************************

#define SEND_DAMAGE_MAX_SIZE (13 + SEND_DAMAGEPARTS_ITEM_MAX_SIZE * 20)
typedef struct {
  uint8_t data[SEND_DAMAGE_MAX_SIZE];
} SendDamageBuffer;

// 数据帧头，为 0xA3，0x51
static inline Data_Frame SendDamage__dataFrame(SendDamageBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SendDamage__set_dataFrame_ptr(SendDamageBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SendDamage__set_dataFrame(SendDamageBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SendDamage__dLen(SendDamageBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SendDamage__set_dLen_ptr(SendDamageBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SendDamage__set_dLen(SendDamageBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 被查询实体的类型
static inline T_Type SendDamage__tType(SendDamageBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SendDamage__set_tType_ptr(SendDamageBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SendDamage__set_tType(SendDamageBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 被查询实体的子类型。
static inline T_Subtype SendDamage__tSubtype(SendDamageBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SendDamage__set_tSubtype_ptr(SendDamageBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SendDamage__set_tSubtype(SendDamageBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 被查询实体的的单位代字
static inline RID SendDamage__rID(SendDamageBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SendDamage__set_rID_ptr(SendDamageBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SendDamage__set_rID(SendDamageBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 被查询实体的的设备编号
static inline PID SendDamage__pID_use_uPID_instead(SendDamageBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SendDamage__set_pID_use_uPID_instead_ptr(SendDamageBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SendDamage__set_pID_use_uPID_instead(SendDamageBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SendDamage__uPid(SendDamageBuffer *buf) {
  UPid uPid = {
    .tType = SendDamage__tType(buf),
    .tSubtype = SendDamage__tSubtype(buf),
    .rID = SendDamage__rID(buf),
    .pID = SendDamage__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SendDamage__set_uPid_ptr(SendDamageBuffer *buf, UPid *val) {
  SendDamage__set_tType(buf, val->tType);
  SendDamage__set_tSubtype(buf, val->tSubtype);
  SendDamage__set_rID(buf, val->rID);
  SendDamage__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SendDamage__set_uPid(SendDamageBuffer *buf, UPid val) {
  SendDamage__set_tType(buf, val.tType);
  SendDamage__set_tSubtype(buf, val.tSubtype);
  SendDamage__set_rID(buf, val.rID);
  SendDamage__set_pID_use_uPID_instead(buf, val.pID);
}

// 密钥
static inline Key SendDamage__key(SendDamageBuffer *buf) { return read_Key(buf->data + (8)); }
static inline void SendDamage__set_key_ptr(SendDamageBuffer *buf, Key *val) { write_Key(buf->data + (8), val); }
static inline void SendDamage__set_key(SendDamageBuffer *buf, Key val) { write_Key(buf->data + (8), &val); }

// 实体状态字 1
static inline TS_Character1 SendDamage__tSCharacter1(SendDamageBuffer *buf) { return read_TS_Character1(buf->data + (9)); }
static inline void SendDamage__set_tSCharacter1_ptr(SendDamageBuffer *buf, TS_Character1 *val) { write_TS_Character1(buf->data + (9), val); }
static inline void SendDamage__set_tSCharacter1(SendDamageBuffer *buf, TS_Character1 val) { write_TS_Character1(buf->data + (9), &val); }

// 综合伤势
static inline C_Idegree SendDamage__cIdegree(SendDamageBuffer *buf) { return read_C_Idegree(buf->data + (10)); }
static inline void SendDamage__set_cIdegree_ptr(SendDamageBuffer *buf, C_Idegree *val) { write_C_Idegree(buf->data + (10), val); }
static inline void SendDamage__set_cIdegree(SendDamageBuffer *buf, C_Idegree val) { write_C_Idegree(buf->data + (10), &val); }

// 命中次数（n，n=0 时，伤情区无内容）
static inline H_Num SendDamage__nParts(SendDamageBuffer *buf) { return read_H_Num(buf->data + (11)); }
static inline void SendDamage__set_nParts_ptr(SendDamageBuffer *buf, H_Num *val) { write_H_Num(buf->data + (11), val); }
static inline void SendDamage__set_nParts(SendDamageBuffer *buf, H_Num val) { write_H_Num(buf->data + (11), &val); }

// SendDamagepartsItem
static inline SendDamagepartsItemBuffer* SendDamage__parts(SendDamageBuffer *buf, uint8_t index);
static inline uint16_t SendDamage__parts_pos(SendDamageBuffer *buf, uint8_t idx) {
return idx * SendDamagepartsItem__computeSize();
}
static inline uint16_t SendDamage__parts_maxCount() { return 20;}
static inline SendDamagepartsItemBuffer* SendDamage__parts(SendDamageBuffer *buf, uint8_t index) {
  // HACKY CODE: 检查这里有没有内存对齐之类的问题
  return (SendDamagepartsItemBuffer*)(buf->data + 12 + SendDamage__parts_pos(buf, index));
}
static inline uint16_t SendDamage__computeSize(SendDamageBuffer *buf) {
  return 13 + (SendDamage__nParts(buf) * SendDamagepartsItem__computeSize());
}
static inline uint8_t SendDamage__computeCheckSum(SendDamageBuffer *buf) {
  return computeCheckSum(buf->data, SendDamage__computeSize(buf) - 1);
}
static inline uint8_t SendDamage__checkSum(SendDamageBuffer *buf) {
  return buf->data[SendDamage__computeSize(buf) - 1];
}
static inline bool SendDamage__isCheckSumValid(SendDamageBuffer *buf) {
  return SendDamage__checkSum(buf) == SendDamage__computeCheckSum(buf);
}
static inline void SendDamage__set_checkSum(SendDamageBuffer *buf, uint8_t checkSum) {
  buf->data[SendDamage__computeSize(buf) - 1] = checkSum;
}
static inline void SendDamage__initEmpty(SendDamageBuffer *buf, uint16_t nParts) {
  SendDamage__set_nParts(buf, nParts);
  SendDamage__set_dLen(buf, SendDamage__computeSize(buf) - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SendDamage__set_dataFrame(buf, 0xa351);
  SendDamage__set_checkSum(buf, SendDamage__computeCheckSum(buf));
}

// **********************************************
// 7.10 人员救治结果反馈指令（0xA2，0x52）
// **********************************************

#define CURE_RESPONSE_MAX_SIZE (11)
typedef struct {
  uint8_t data[CURE_RESPONSE_MAX_SIZE];
} CureResponseBuffer;

// 数据帧头，为 0xA2，0x52
static inline Data_Frame CureResponse__dataFrame(CureResponseBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void CureResponse__set_dataFrame_ptr(CureResponseBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void CureResponse__set_dataFrame(CureResponseBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len CureResponse__dLen(CureResponseBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void CureResponse__set_dLen_ptr(CureResponseBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void CureResponse__set_dLen(CureResponseBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 卫勤救护终端实体类型
static inline T_Type CureResponse__tType(CureResponseBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void CureResponse__set_tType_ptr(CureResponseBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void CureResponse__set_tType(CureResponseBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 卫勤救护终端实体子类型。
static inline T_Subtype CureResponse__tSubtype(CureResponseBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void CureResponse__set_tSubtype_ptr(CureResponseBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void CureResponse__set_tSubtype(CureResponseBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 卫勤救护终端单位代字
static inline RID CureResponse__rID(CureResponseBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void CureResponse__set_rID_ptr(CureResponseBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void CureResponse__set_rID(CureResponseBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 卫勤救护终端设备编号
static inline PID CureResponse__pID_use_uPID_instead(CureResponseBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void CureResponse__set_pID_use_uPID_instead_ptr(CureResponseBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void CureResponse__set_pID_use_uPID_instead(CureResponseBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid CureResponse__uPid(CureResponseBuffer *buf) {
  UPid uPid = {
    .tType = CureResponse__tType(buf),
    .tSubtype = CureResponse__tSubtype(buf),
    .rID = CureResponse__rID(buf),
    .pID = CureResponse__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void CureResponse__set_uPid_ptr(CureResponseBuffer *buf, UPid *val) {
  CureResponse__set_tType(buf, val->tType);
  CureResponse__set_tSubtype(buf, val->tSubtype);
  CureResponse__set_rID(buf, val->rID);
  CureResponse__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void CureResponse__set_uPid(CureResponseBuffer *buf, UPid val) {
  CureResponse__set_tType(buf, val.tType);
  CureResponse__set_tSubtype(buf, val.tSubtype);
  CureResponse__set_rID(buf, val.rID);
  CureResponse__set_pID_use_uPID_instead(buf, val.pID);
}

// 救治方式标识字
static inline CM_Character CureResponse__cMCharacter(CureResponseBuffer *buf) { return read_CM_Character(buf->data + (8)); }
static inline void CureResponse__set_cMCharacter_ptr(CureResponseBuffer *buf, CM_Character *val) { write_CM_Character(buf->data + (8), val); }
static inline void CureResponse__set_cMCharacter(CureResponseBuffer *buf, CM_Character val) { write_CM_Character(buf->data + (8), &val); }

// 人员救治结果标识字
static inline CE_Character CureResponse__cECharacter(CureResponseBuffer *buf) { return read_CE_Character(buf->data + (9)); }
static inline void CureResponse__set_cECharacter_ptr(CureResponseBuffer *buf, CE_Character *val) { write_CE_Character(buf->data + (9), val); }
static inline void CureResponse__set_cECharacter(CureResponseBuffer *buf, CE_Character val) { write_CE_Character(buf->data + (9), &val); }
static inline uint16_t CureResponse__computeSize() {
  return 11;
}
static inline uint8_t CureResponse__computeCheckSum(CureResponseBuffer *buf) {
  return computeCheckSum(buf->data, CureResponse__computeSize() - 1);
}
static inline uint8_t CureResponse__checkSum(CureResponseBuffer *buf) {
  return buf->data[CureResponse__computeSize() - 1];
}
static inline bool CureResponse__isCheckSumValid(CureResponseBuffer *buf) {
  return CureResponse__checkSum(buf) == CureResponse__computeCheckSum(buf);
}
static inline void CureResponse__set_checkSum(CureResponseBuffer *buf, uint8_t checkSum) {
  buf->data[CureResponse__computeSize() - 1] = checkSum;
}
static inline void CureResponse__initEmpty(CureResponseBuffer *buf) {
  CureResponse__set_dLen(buf, CureResponse__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  CureResponse__set_dataFrame(buf, 0xa252);
  CureResponse__set_checkSum(buf, CureResponse__computeCheckSum(buf));
}

// **********************************************
// 7.11 设置（救治）应答指令（0xA3，0x61）
// **********************************************

#define SET_CURE_ACK_MAX_SIZE (10)
typedef struct {
  uint8_t data[SET_CURE_ACK_MAX_SIZE];
} SetCureAckBuffer;

// 数据帧头，为 0xA3，0x61
static inline Data_Frame SetCureAck__dataFrame(SetCureAckBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void SetCureAck__set_dataFrame_ptr(SetCureAckBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void SetCureAck__set_dataFrame(SetCureAckBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len SetCureAck__dLen(SetCureAckBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void SetCureAck__set_dLen_ptr(SetCureAckBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void SetCureAck__set_dLen(SetCureAckBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 被设置实体的类型
static inline T_Type SetCureAck__tType(SetCureAckBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void SetCureAck__set_tType_ptr(SetCureAckBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void SetCureAck__set_tType(SetCureAckBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 被设置实体的子类型。
static inline T_Subtype SetCureAck__tSubtype(SetCureAckBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void SetCureAck__set_tSubtype_ptr(SetCureAckBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void SetCureAck__set_tSubtype(SetCureAckBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 被设置实体的单位代字
static inline RID SetCureAck__rID(SetCureAckBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void SetCureAck__set_rID_ptr(SetCureAckBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void SetCureAck__set_rID(SetCureAckBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 被设置实体的设备编号
static inline PID SetCureAck__pID_use_uPID_instead(SetCureAckBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void SetCureAck__set_pID_use_uPID_instead_ptr(SetCureAckBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void SetCureAck__set_pID_use_uPID_instead(SetCureAckBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid SetCureAck__uPid(SetCureAckBuffer *buf) {
  UPid uPid = {
    .tType = SetCureAck__tType(buf),
    .tSubtype = SetCureAck__tSubtype(buf),
    .rID = SetCureAck__rID(buf),
    .pID = SetCureAck__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void SetCureAck__set_uPid_ptr(SetCureAckBuffer *buf, UPid *val) {
  SetCureAck__set_tType(buf, val->tType);
  SetCureAck__set_tSubtype(buf, val->tSubtype);
  SetCureAck__set_rID(buf, val->rID);
  SetCureAck__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void SetCureAck__set_uPid(SetCureAckBuffer *buf, UPid val) {
  SetCureAck__set_tType(buf, val.tType);
  SetCureAck__set_tSubtype(buf, val.tSubtype);
  SetCureAck__set_rID(buf, val.rID);
  SetCureAck__set_pID_use_uPID_instead(buf, val.pID);
}

// 设置结果
static inline SR_Character SetCureAck__sRCharacter(SetCureAckBuffer *buf) { return read_SR_Character(buf->data + (8)); }
static inline void SetCureAck__set_sRCharacter_ptr(SetCureAckBuffer *buf, SR_Character *val) { write_SR_Character(buf->data + (8), val); }
static inline void SetCureAck__set_sRCharacter(SetCureAckBuffer *buf, SR_Character val) { write_SR_Character(buf->data + (8), &val); }
static inline uint16_t SetCureAck__computeSize() {
  return 10;
}
static inline uint8_t SetCureAck__computeCheckSum(SetCureAckBuffer *buf) {
  return computeCheckSum(buf->data, SetCureAck__computeSize() - 1);
}
static inline uint8_t SetCureAck__checkSum(SetCureAckBuffer *buf) {
  return buf->data[SetCureAck__computeSize() - 1];
}
static inline bool SetCureAck__isCheckSumValid(SetCureAckBuffer *buf) {
  return SetCureAck__checkSum(buf) == SetCureAck__computeCheckSum(buf);
}
static inline void SetCureAck__set_checkSum(SetCureAckBuffer *buf, uint8_t checkSum) {
  buf->data[SetCureAck__computeSize() - 1] = checkSum;
}
static inline void SetCureAck__initEmpty(SetCureAckBuffer *buf) {
  SetCureAck__set_dLen(buf, SetCureAck__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  SetCureAck__set_dataFrame(buf, 0xa361);
  SetCureAck__set_checkSum(buf, SetCureAck__computeCheckSum(buf));
}

// **********************************************
// 7.12 布雷指令（0xA2，0x81）
// **********************************************

#define PLANT_MINE_MAX_SIZE (26)
typedef struct {
  uint8_t data[PLANT_MINE_MAX_SIZE];
} PlantMineBuffer;

// 数据帧头，为 0xA2，0x81
static inline Data_Frame PlantMine__dataFrame(PlantMineBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void PlantMine__set_dataFrame_ptr(PlantMineBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void PlantMine__set_dataFrame(PlantMineBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len PlantMine__dLen(PlantMineBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void PlantMine__set_dLen_ptr(PlantMineBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void PlantMine__set_dLen(PlantMineBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 配置方案编号
static inline EP_Num PlantMine__ePNum(PlantMineBuffer *buf) { return read_EP_Num(buf->data + (3)); }
static inline void PlantMine__set_ePNum_ptr(PlantMineBuffer *buf, EP_Num *val) { write_EP_Num(buf->data + (3), val); }
static inline void PlantMine__set_ePNum(PlantMineBuffer *buf, EP_Num val) { write_EP_Num(buf->data + (3), &val); }

// 演习开始时间
static inline Time1 PlantMine__time1(PlantMineBuffer *buf) { return read_Time1(buf->data + (6)); }
static inline void PlantMine__set_time1_ptr(PlantMineBuffer *buf, Time1 *val) { write_Time1(buf->data + (6), val); }
static inline void PlantMine__set_time1(PlantMineBuffer *buf, Time1 val) { write_Time1(buf->data + (6), &val); }

// 密钥
static inline Key PlantMine__key(PlantMineBuffer *buf) { return read_Key(buf->data + (12)); }
static inline void PlantMine__set_key_ptr(PlantMineBuffer *buf, Key *val) { write_Key(buf->data + (12), val); }
static inline void PlantMine__set_key(PlantMineBuffer *buf, Key val) { write_Key(buf->data + (12), &val); }

// 实体经纬度坐标
static inline L_Position PlantMine__lPosition(PlantMineBuffer *buf) { return read_L_Position(buf->data + (13)); }
static inline void PlantMine__set_lPosition_ptr(PlantMineBuffer *buf, L_Position *val) { write_L_Position(buf->data + (13), val); }
static inline void PlantMine__set_lPosition(PlantMineBuffer *buf, L_Position val) { write_L_Position(buf->data + (13), &val); }
static inline uint16_t PlantMine__computeSize() {
  return 26;
}
static inline uint8_t PlantMine__computeCheckSum(PlantMineBuffer *buf) {
  return computeCheckSum(buf->data, PlantMine__computeSize() - 1);
}
static inline uint8_t PlantMine__checkSum(PlantMineBuffer *buf) {
  return buf->data[PlantMine__computeSize() - 1];
}
static inline bool PlantMine__isCheckSumValid(PlantMineBuffer *buf) {
  return PlantMine__checkSum(buf) == PlantMine__computeCheckSum(buf);
}
static inline void PlantMine__set_checkSum(PlantMineBuffer *buf, uint8_t checkSum) {
  buf->data[PlantMine__computeSize() - 1] = checkSum;
}
static inline void PlantMine__initEmpty(PlantMineBuffer *buf) {
  PlantMine__set_dLen(buf, PlantMine__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  PlantMine__set_dataFrame(buf, 0xa281);
  PlantMine__set_checkSum(buf, PlantMine__computeCheckSum(buf));
}

// **********************************************
// 7.13 排雷指令（0xA2，0x82）
// **********************************************

#define REMOVE_MINE_MAX_SIZE (5)
typedef struct {
  uint8_t data[REMOVE_MINE_MAX_SIZE];
} RemoveMineBuffer;

// 数据帧头，为 0xA2，0x82
static inline Data_Frame RemoveMine__dataFrame(RemoveMineBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RemoveMine__set_dataFrame_ptr(RemoveMineBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RemoveMine__set_dataFrame(RemoveMineBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RemoveMine__dLen(RemoveMineBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RemoveMine__set_dLen_ptr(RemoveMineBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RemoveMine__set_dLen(RemoveMineBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 密钥
static inline Key RemoveMine__key(RemoveMineBuffer *buf) { return read_Key(buf->data + (3)); }
static inline void RemoveMine__set_key_ptr(RemoveMineBuffer *buf, Key *val) { write_Key(buf->data + (3), val); }
static inline void RemoveMine__set_key(RemoveMineBuffer *buf, Key val) { write_Key(buf->data + (3), &val); }
static inline uint16_t RemoveMine__computeSize() {
  return 5;
}
static inline uint8_t RemoveMine__computeCheckSum(RemoveMineBuffer *buf) {
  return computeCheckSum(buf->data, RemoveMine__computeSize() - 1);
}
static inline uint8_t RemoveMine__checkSum(RemoveMineBuffer *buf) {
  return buf->data[RemoveMine__computeSize() - 1];
}
static inline bool RemoveMine__isCheckSumValid(RemoveMineBuffer *buf) {
  return RemoveMine__checkSum(buf) == RemoveMine__computeCheckSum(buf);
}
static inline void RemoveMine__set_checkSum(RemoveMineBuffer *buf, uint8_t checkSum) {
  buf->data[RemoveMine__computeSize() - 1] = checkSum;
}
static inline void RemoveMine__initEmpty(RemoveMineBuffer *buf) {
  RemoveMine__set_dLen(buf, RemoveMine__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RemoveMine__set_dataFrame(buf, 0xa282);
  RemoveMine__set_checkSum(buf, RemoveMine__computeCheckSum(buf));
}

// **********************************************
// EXT 布雷成功指令（0xEA，0x31）
// **********************************************

#define PLANT_MINE_ACK_MAX_SIZE (9)
typedef struct {
  uint8_t data[PLANT_MINE_ACK_MAX_SIZE];
} PlantMineAckIRBuffer;

// 数据帧头，为 0xEA，0x31
static inline Data_Frame PlantMineAckIR__dataFrame(PlantMineAckIRBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void PlantMineAckIR__set_dataFrame_ptr(PlantMineAckIRBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void PlantMineAckIR__set_dataFrame(PlantMineAckIRBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len PlantMineAckIR__dLen(PlantMineAckIRBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void PlantMineAckIR__set_dLen_ptr(PlantMineAckIRBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void PlantMineAckIR__set_dLen(PlantMineAckIRBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 地雷的实体类型
static inline T_Type PlantMineAckIR__mineTType(PlantMineAckIRBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void PlantMineAckIR__set_mineTType_ptr(PlantMineAckIRBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void PlantMineAckIR__set_mineTType(PlantMineAckIRBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 地雷的实体子类型
static inline T_Subtype PlantMineAckIR__mineTSubtype(PlantMineAckIRBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void PlantMineAckIR__set_mineTSubtype_ptr(PlantMineAckIRBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void PlantMineAckIR__set_mineTSubtype(PlantMineAckIRBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 地雷的实体单位代字
static inline RID PlantMineAckIR__mineRID(PlantMineAckIRBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void PlantMineAckIR__set_mineRID_ptr(PlantMineAckIRBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void PlantMineAckIR__set_mineRID(PlantMineAckIRBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 地雷的实体设备编号
static inline PID PlantMineAckIR__minePID(PlantMineAckIRBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void PlantMineAckIR__set_minePID_ptr(PlantMineAckIRBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void PlantMineAckIR__set_minePID(PlantMineAckIRBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid PlantMineAckIR__mineUPid(PlantMineAckIRBuffer *buf) {
  UPid uPid = {
    .tType = PlantMineAckIR__mineTType(buf),
    .tSubtype = PlantMineAckIR__mineTSubtype(buf),
    .rID = PlantMineAckIR__mineRID(buf),
    .pID = PlantMineAckIR__minePID(buf),
  };
  return uPid;
}
static inline void PlantMineAckIR__set_mineUPid_ptr(PlantMineAckIRBuffer *buf, UPid *val) {
  PlantMineAckIR__set_mineTType(buf, val->tType);
  PlantMineAckIR__set_mineTSubtype(buf, val->tSubtype);
  PlantMineAckIR__set_mineRID(buf, val->rID);
  PlantMineAckIR__set_minePID(buf, val->pID);
}
static inline void PlantMineAckIR__set_mineUPid(PlantMineAckIRBuffer *buf, UPid val) {
  PlantMineAckIR__set_mineTType(buf, val.tType);
  PlantMineAckIR__set_mineTSubtype(buf, val.tSubtype);
  PlantMineAckIR__set_mineRID(buf, val.rID);
  PlantMineAckIR__set_minePID(buf, val.pID);
}
static inline uint16_t PlantMineAckIR__computeSize() {
  return 9;
}
static inline uint8_t PlantMineAckIR__computeCheckSum(PlantMineAckIRBuffer *buf) {
  return computeCheckSum(buf->data, PlantMineAckIR__computeSize() - 1);
}
static inline uint8_t PlantMineAckIR__checkSum(PlantMineAckIRBuffer *buf) {
  return buf->data[PlantMineAckIR__computeSize() - 1];
}
static inline bool PlantMineAckIR__isCheckSumValid(PlantMineAckIRBuffer *buf) {
  return PlantMineAckIR__checkSum(buf) == PlantMineAckIR__computeCheckSum(buf);
}
static inline void PlantMineAckIR__set_checkSum(PlantMineAckIRBuffer *buf, uint8_t checkSum) {
  buf->data[PlantMineAckIR__computeSize() - 1] = checkSum;
}
static inline void PlantMineAckIR__initEmpty(PlantMineAckIRBuffer *buf) {
  PlantMineAckIR__set_dLen(buf, PlantMineAckIR__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  PlantMineAckIR__set_dataFrame(buf, 0xea31);
  PlantMineAckIR__set_checkSum(buf, PlantMineAckIR__computeCheckSum(buf));
}

// **********************************************
// EXT 排雷成功指令（0xEA，0x32）
// **********************************************

#define REMOVE_MINE_ACK_MAX_SIZE (9)
typedef struct {
  uint8_t data[REMOVE_MINE_ACK_MAX_SIZE];
} RemoveMineAckIRBuffer;

// 数据帧头，为 0xEA，0x32
static inline Data_Frame RemoveMineAckIR__dataFrame(RemoveMineAckIRBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void RemoveMineAckIR__set_dataFrame_ptr(RemoveMineAckIRBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void RemoveMineAckIR__set_dataFrame(RemoveMineAckIRBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len RemoveMineAckIR__dLen(RemoveMineAckIRBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void RemoveMineAckIR__set_dLen_ptr(RemoveMineAckIRBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void RemoveMineAckIR__set_dLen(RemoveMineAckIRBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 地雷的实体类型
static inline T_Type RemoveMineAckIR__mineTType(RemoveMineAckIRBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void RemoveMineAckIR__set_mineTType_ptr(RemoveMineAckIRBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void RemoveMineAckIR__set_mineTType(RemoveMineAckIRBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 地雷的实体子类型
static inline T_Subtype RemoveMineAckIR__mineTSubtype(RemoveMineAckIRBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void RemoveMineAckIR__set_mineTSubtype_ptr(RemoveMineAckIRBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void RemoveMineAckIR__set_mineTSubtype(RemoveMineAckIRBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 地雷的实体单位代字
static inline RID RemoveMineAckIR__mineRID(RemoveMineAckIRBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void RemoveMineAckIR__set_mineRID_ptr(RemoveMineAckIRBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void RemoveMineAckIR__set_mineRID(RemoveMineAckIRBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 地雷的实体设备编号
static inline PID RemoveMineAckIR__minePID(RemoveMineAckIRBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void RemoveMineAckIR__set_minePID_ptr(RemoveMineAckIRBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void RemoveMineAckIR__set_minePID(RemoveMineAckIRBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid RemoveMineAckIR__mineUPid(RemoveMineAckIRBuffer *buf) {
  UPid uPid = {
    .tType = RemoveMineAckIR__mineTType(buf),
    .tSubtype = RemoveMineAckIR__mineTSubtype(buf),
    .rID = RemoveMineAckIR__mineRID(buf),
    .pID = RemoveMineAckIR__minePID(buf),
  };
  return uPid;
}
static inline void RemoveMineAckIR__set_mineUPid_ptr(RemoveMineAckIRBuffer *buf, UPid *val) {
  RemoveMineAckIR__set_mineTType(buf, val->tType);
  RemoveMineAckIR__set_mineTSubtype(buf, val->tSubtype);
  RemoveMineAckIR__set_mineRID(buf, val->rID);
  RemoveMineAckIR__set_minePID(buf, val->pID);
}
static inline void RemoveMineAckIR__set_mineUPid(RemoveMineAckIRBuffer *buf, UPid val) {
  RemoveMineAckIR__set_mineTType(buf, val.tType);
  RemoveMineAckIR__set_mineTSubtype(buf, val.tSubtype);
  RemoveMineAckIR__set_mineRID(buf, val.rID);
  RemoveMineAckIR__set_minePID(buf, val.pID);
}
static inline uint16_t RemoveMineAckIR__computeSize() {
  return 9;
}
static inline uint8_t RemoveMineAckIR__computeCheckSum(RemoveMineAckIRBuffer *buf) {
  return computeCheckSum(buf->data, RemoveMineAckIR__computeSize() - 1);
}
static inline uint8_t RemoveMineAckIR__checkSum(RemoveMineAckIRBuffer *buf) {
  return buf->data[RemoveMineAckIR__computeSize() - 1];
}
static inline bool RemoveMineAckIR__isCheckSumValid(RemoveMineAckIRBuffer *buf) {
  return RemoveMineAckIR__checkSum(buf) == RemoveMineAckIR__computeCheckSum(buf);
}
static inline void RemoveMineAckIR__set_checkSum(RemoveMineAckIRBuffer *buf, uint8_t checkSum) {
  buf->data[RemoveMineAckIR__computeSize() - 1] = checkSum;
}
static inline void RemoveMineAckIR__initEmpty(RemoveMineAckIRBuffer *buf) {
  RemoveMineAckIR__set_dLen(buf, RemoveMineAckIR__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  RemoveMineAckIR__set_dataFrame(buf, 0xea32);
  RemoveMineAckIR__set_checkSum(buf, RemoveMineAckIR__computeCheckSum(buf));
}

// **********************************************
// EXT 序列号设置指令（0xEA，0x20）
// **********************************************

#define OVERRIDE_PID_MAX_SIZE (14)
typedef struct {
  uint8_t data[OVERRIDE_PID_MAX_SIZE];
} OverrideUPidBuffer;

// 数据帧头，为 0xEA，0x20
static inline Data_Frame OverrideUPid__dataFrame(OverrideUPidBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void OverrideUPid__set_dataFrame_ptr(OverrideUPidBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void OverrideUPid__set_dataFrame(OverrideUPidBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len OverrideUPid__dLen(OverrideUPidBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void OverrideUPid__set_dLen_ptr(OverrideUPidBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void OverrideUPid__set_dLen(OverrideUPidBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 被设置实体的类型
static inline T_Type OverrideUPid__tType(OverrideUPidBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void OverrideUPid__set_tType_ptr(OverrideUPidBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void OverrideUPid__set_tType(OverrideUPidBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 被设置实体的子类型。
static inline T_Subtype OverrideUPid__tSubtype(OverrideUPidBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void OverrideUPid__set_tSubtype_ptr(OverrideUPidBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void OverrideUPid__set_tSubtype(OverrideUPidBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 被设置实体的单位代字
static inline RID OverrideUPid__rID(OverrideUPidBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void OverrideUPid__set_rID_ptr(OverrideUPidBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void OverrideUPid__set_rID(OverrideUPidBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 被设置实体的设备编号
static inline PID OverrideUPid__pID_use_uPID_instead(OverrideUPidBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void OverrideUPid__set_pID_use_uPID_instead_ptr(OverrideUPidBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void OverrideUPid__set_pID_use_uPID_instead(OverrideUPidBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid OverrideUPid__uPid(OverrideUPidBuffer *buf) {
  UPid uPid = {
    .tType = OverrideUPid__tType(buf),
    .tSubtype = OverrideUPid__tSubtype(buf),
    .rID = OverrideUPid__rID(buf),
    .pID = OverrideUPid__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void OverrideUPid__set_uPid_ptr(OverrideUPidBuffer *buf, UPid *val) {
  OverrideUPid__set_tType(buf, val->tType);
  OverrideUPid__set_tSubtype(buf, val->tSubtype);
  OverrideUPid__set_rID(buf, val->rID);
  OverrideUPid__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void OverrideUPid__set_uPid(OverrideUPidBuffer *buf, UPid val) {
  OverrideUPid__set_tType(buf, val.tType);
  OverrideUPid__set_tSubtype(buf, val.tSubtype);
  OverrideUPid__set_rID(buf, val.rID);
  OverrideUPid__set_pID_use_uPID_instead(buf, val.pID);
}

// 更新的实体类型
static inline T_Type OverrideUPid__newTType(OverrideUPidBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void OverrideUPid__set_newTType_ptr(OverrideUPidBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void OverrideUPid__set_newTType(OverrideUPidBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 更新的实体子类型
static inline T_Subtype OverrideUPid__newTSubtype(OverrideUPidBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void OverrideUPid__set_newTSubtype_ptr(OverrideUPidBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void OverrideUPid__set_newTSubtype(OverrideUPidBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 更新的实体单位代字
static inline RID OverrideUPid__newRID(OverrideUPidBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void OverrideUPid__set_newRID_ptr(OverrideUPidBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void OverrideUPid__set_newRID(OverrideUPidBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 更新的实体设备编号
static inline PID OverrideUPid__newPID(OverrideUPidBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void OverrideUPid__set_newPID_ptr(OverrideUPidBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void OverrideUPid__set_newPID(OverrideUPidBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

static inline UPid OverrideUPid__newUPid(OverrideUPidBuffer *buf) {
  UPid uPid = {
    .tType = OverrideUPid__newTType(buf),
    .tSubtype = OverrideUPid__newTSubtype(buf),
    .rID = OverrideUPid__newRID(buf),
    .pID = OverrideUPid__newPID(buf),
  };
  return uPid;
}
static inline void OverrideUPid__set_newUPid_ptr(OverrideUPidBuffer *buf, UPid *val) {
  OverrideUPid__set_newTType(buf, val->tType);
  OverrideUPid__set_newTSubtype(buf, val->tSubtype);
  OverrideUPid__set_newRID(buf, val->rID);
  OverrideUPid__set_newPID(buf, val->pID);
}
static inline void OverrideUPid__set_newUPid(OverrideUPidBuffer *buf, UPid val) {
  OverrideUPid__set_newTType(buf, val.tType);
  OverrideUPid__set_newTSubtype(buf, val.tSubtype);
  OverrideUPid__set_newRID(buf, val.rID);
  OverrideUPid__set_newPID(buf, val.pID);
}
static inline uint16_t OverrideUPid__computeSize() {
  return 14;
}
static inline uint8_t OverrideUPid__computeCheckSum(OverrideUPidBuffer *buf) {
  return computeCheckSum(buf->data, OverrideUPid__computeSize() - 1);
}
static inline uint8_t OverrideUPid__checkSum(OverrideUPidBuffer *buf) {
  return buf->data[OverrideUPid__computeSize() - 1];
}
static inline bool OverrideUPid__isCheckSumValid(OverrideUPidBuffer *buf) {
  return OverrideUPid__checkSum(buf) == OverrideUPid__computeCheckSum(buf);
}
static inline void OverrideUPid__set_checkSum(OverrideUPidBuffer *buf, uint8_t checkSum) {
  buf->data[OverrideUPid__computeSize() - 1] = checkSum;
}
static inline void OverrideUPid__initEmpty(OverrideUPidBuffer *buf) {
  OverrideUPid__set_dLen(buf, OverrideUPid__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  OverrideUPid__set_dataFrame(buf, 0xea20);
  OverrideUPid__set_checkSum(buf, OverrideUPid__computeCheckSum(buf));
}

// **********************************************
// EXT 火力点参数设置指令（0xEA，0x21）
// **********************************************

#define IR_SET_FIRE_POINT_PARAMS_MAX_SIZE (44)
typedef struct {
  uint8_t data[IR_SET_FIRE_POINT_PARAMS_MAX_SIZE];
} IrSetFirePointParamsBuffer;

// 数据帧头，为0xEA，0x21
static inline Data_Frame IrSetFirePointParams__dataFrame(IrSetFirePointParamsBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void IrSetFirePointParams__set_dataFrame_ptr(IrSetFirePointParamsBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void IrSetFirePointParams__set_dataFrame(IrSetFirePointParamsBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 数据帧长度
static inline D_Len IrSetFirePointParams__dLen(IrSetFirePointParamsBuffer *buf) { return read_D_Len(buf->data + (2)); }
static inline void IrSetFirePointParams__set_dLen_ptr(IrSetFirePointParamsBuffer *buf, D_Len *val) { write_D_Len(buf->data + (2), val); }
static inline void IrSetFirePointParams__set_dLen(IrSetFirePointParamsBuffer *buf, D_Len val) { write_D_Len(buf->data + (2), &val); }

// 实体类型
static inline T_Type IrSetFirePointParams__tType(IrSetFirePointParamsBuffer *buf) { return read_T_Type(buf->data + (3)); }
static inline void IrSetFirePointParams__set_tType_ptr(IrSetFirePointParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (3), val); }
static inline void IrSetFirePointParams__set_tType(IrSetFirePointParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (3), &val); }

// 实体子类型
static inline T_Subtype IrSetFirePointParams__tSubtype(IrSetFirePointParamsBuffer *buf) { return read_T_Subtype(buf->data + (4)); }
static inline void IrSetFirePointParams__set_tSubtype_ptr(IrSetFirePointParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (4), val); }
static inline void IrSetFirePointParams__set_tSubtype(IrSetFirePointParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (4), &val); }

// 单位代字
static inline RID IrSetFirePointParams__rID(IrSetFirePointParamsBuffer *buf) { return read_RID(buf->data + (5)); }
static inline void IrSetFirePointParams__set_rID_ptr(IrSetFirePointParamsBuffer *buf, RID *val) { write_RID(buf->data + (5), val); }
static inline void IrSetFirePointParams__set_rID(IrSetFirePointParamsBuffer *buf, RID val) { write_RID(buf->data + (5), &val); }

// 设备编号
static inline PID IrSetFirePointParams__pID_use_uPID_instead(IrSetFirePointParamsBuffer *buf) { return read_PID(buf->data + (6)); }
static inline void IrSetFirePointParams__set_pID_use_uPID_instead_ptr(IrSetFirePointParamsBuffer *buf, PID *val) { write_PID(buf->data + (6), val); }
static inline void IrSetFirePointParams__set_pID_use_uPID_instead(IrSetFirePointParamsBuffer *buf, PID val) { write_PID(buf->data + (6), &val); }

static inline UPid IrSetFirePointParams__uPid(IrSetFirePointParamsBuffer *buf) {
  UPid uPid = {
    .tType = IrSetFirePointParams__tType(buf),
    .tSubtype = IrSetFirePointParams__tSubtype(buf),
    .rID = IrSetFirePointParams__rID(buf),
    .pID = IrSetFirePointParams__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void IrSetFirePointParams__set_uPid_ptr(IrSetFirePointParamsBuffer *buf, UPid *val) {
  IrSetFirePointParams__set_tType(buf, val->tType);
  IrSetFirePointParams__set_tSubtype(buf, val->tSubtype);
  IrSetFirePointParams__set_rID(buf, val->rID);
  IrSetFirePointParams__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void IrSetFirePointParams__set_uPid(IrSetFirePointParamsBuffer *buf, UPid val) {
  IrSetFirePointParams__set_tType(buf, val.tType);
  IrSetFirePointParams__set_tSubtype(buf, val.tSubtype);
  IrSetFirePointParams__set_rID(buf, val.rID);
  IrSetFirePointParams__set_pID_use_uPID_instead(buf, val.pID);
}

// 主控系统实体类型
static inline T_Type IrSetFirePointParams__ctrTType(IrSetFirePointParamsBuffer *buf) { return read_T_Type(buf->data + (8)); }
static inline void IrSetFirePointParams__set_ctrTType_ptr(IrSetFirePointParamsBuffer *buf, T_Type *val) { write_T_Type(buf->data + (8), val); }
static inline void IrSetFirePointParams__set_ctrTType(IrSetFirePointParamsBuffer *buf, T_Type val) { write_T_Type(buf->data + (8), &val); }

// 主控系统实体子类型
static inline T_Subtype IrSetFirePointParams__ctrTSubtype(IrSetFirePointParamsBuffer *buf) { return read_T_Subtype(buf->data + (9)); }
static inline void IrSetFirePointParams__set_ctrTSubtype_ptr(IrSetFirePointParamsBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (9), val); }
static inline void IrSetFirePointParams__set_ctrTSubtype(IrSetFirePointParamsBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (9), &val); }

// 主控系统单位代字
static inline RID IrSetFirePointParams__ctrRID(IrSetFirePointParamsBuffer *buf) { return read_RID(buf->data + (10)); }
static inline void IrSetFirePointParams__set_ctrRID_ptr(IrSetFirePointParamsBuffer *buf, RID *val) { write_RID(buf->data + (10), val); }
static inline void IrSetFirePointParams__set_ctrRID(IrSetFirePointParamsBuffer *buf, RID val) { write_RID(buf->data + (10), &val); }

// 主控系统设备编号
static inline PID IrSetFirePointParams__ctrPID(IrSetFirePointParamsBuffer *buf) { return read_PID(buf->data + (11)); }
static inline void IrSetFirePointParams__set_ctrPID_ptr(IrSetFirePointParamsBuffer *buf, PID *val) { write_PID(buf->data + (11), val); }
static inline void IrSetFirePointParams__set_ctrPID(IrSetFirePointParamsBuffer *buf, PID val) { write_PID(buf->data + (11), &val); }

static inline UPid IrSetFirePointParams__ctrUPid(IrSetFirePointParamsBuffer *buf) {
  UPid uPid = {
    .tType = IrSetFirePointParams__ctrTType(buf),
    .tSubtype = IrSetFirePointParams__ctrTSubtype(buf),
    .rID = IrSetFirePointParams__ctrRID(buf),
    .pID = IrSetFirePointParams__ctrPID(buf),
  };
  return uPid;
}
static inline void IrSetFirePointParams__set_ctrUPid_ptr(IrSetFirePointParamsBuffer *buf, UPid *val) {
  IrSetFirePointParams__set_ctrTType(buf, val->tType);
  IrSetFirePointParams__set_ctrTSubtype(buf, val->tSubtype);
  IrSetFirePointParams__set_ctrRID(buf, val->rID);
  IrSetFirePointParams__set_ctrPID(buf, val->pID);
}
static inline void IrSetFirePointParams__set_ctrUPid(IrSetFirePointParamsBuffer *buf, UPid val) {
  IrSetFirePointParams__set_ctrTType(buf, val.tType);
  IrSetFirePointParams__set_ctrTSubtype(buf, val.tSubtype);
  IrSetFirePointParams__set_ctrRID(buf, val.rID);
  IrSetFirePointParams__set_ctrPID(buf, val.pID);
}

// 演习开始时间
static inline Time1 IrSetFirePointParams__startTime(IrSetFirePointParamsBuffer *buf) { return read_Time1(buf->data + (13)); }
static inline void IrSetFirePointParams__set_startTime_ptr(IrSetFirePointParamsBuffer *buf, Time1 *val) { write_Time1(buf->data + (13), val); }
static inline void IrSetFirePointParams__set_startTime(IrSetFirePointParamsBuffer *buf, Time1 val) { write_Time1(buf->data + (13), &val); }

// 切换到白天的起始时间
static inline Time2 IrSetFirePointParams__dayStart(IrSetFirePointParamsBuffer *buf) { return read_Time2(buf->data + (19)); }
static inline void IrSetFirePointParams__set_dayStart_ptr(IrSetFirePointParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (19), val); }
static inline void IrSetFirePointParams__set_dayStart(IrSetFirePointParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (19), &val); }

// 切换到黑夜的起始时间
static inline Time2 IrSetFirePointParams__nightStart(IrSetFirePointParamsBuffer *buf) { return read_Time2(buf->data + (22)); }
static inline void IrSetFirePointParams__set_nightStart_ptr(IrSetFirePointParamsBuffer *buf, Time2 *val) { write_Time2(buf->data + (22), val); }
static inline void IrSetFirePointParams__set_nightStart(IrSetFirePointParamsBuffer *buf, Time2 val) { write_Time2(buf->data + (22), &val); }

// 密钥
static inline Key IrSetFirePointParams__key(IrSetFirePointParamsBuffer *buf) { return read_Key(buf->data + (25)); }
static inline void IrSetFirePointParams__set_key_ptr(IrSetFirePointParamsBuffer *buf, Key *val) { write_Key(buf->data + (25), val); }
static inline void IrSetFirePointParams__set_key(IrSetFirePointParamsBuffer *buf, Key val) { write_Key(buf->data + (25), &val); }

// 红蓝属性
static inline BR_Attribute IrSetFirePointParams__bRAttribute(IrSetFirePointParamsBuffer *buf) { return read_BR_Attribute(buf->data + (26)); }
static inline void IrSetFirePointParams__set_bRAttribute_ptr(IrSetFirePointParamsBuffer *buf, BR_Attribute *val) { write_BR_Attribute(buf->data + (26), val); }
static inline void IrSetFirePointParams__set_bRAttribute(IrSetFirePointParamsBuffer *buf, BR_Attribute val) { write_BR_Attribute(buf->data + (26), &val); }

// 火力点开始扫射的时间（当该值全为0时，火力点通过手动发射，发射弹药间隔0.2秒，轮流时间2秒）
static inline Time1 IrSetFirePointParams__start(IrSetFirePointParamsBuffer *buf) { return read_Time1(buf->data + (27)); }
static inline void IrSetFirePointParams__set_start_ptr(IrSetFirePointParamsBuffer *buf, Time1 *val) { write_Time1(buf->data + (27), val); }
static inline void IrSetFirePointParams__set_start(IrSetFirePointParamsBuffer *buf, Time1 val) { write_Time1(buf->data + (27), &val); }

// 火力点停止扫射的时间（当开始扫射时间值为0时，结束时间也为0）
static inline Time1 IrSetFirePointParams__end(IrSetFirePointParamsBuffer *buf) { return read_Time1(buf->data + (33)); }
static inline void IrSetFirePointParams__set_end_ptr(IrSetFirePointParamsBuffer *buf, Time1 *val) { write_Time1(buf->data + (33), val); }
static inline void IrSetFirePointParams__set_end(IrSetFirePointParamsBuffer *buf, Time1 val) { write_Time1(buf->data + (33), &val); }

// 火力点发射弹药时间间隔
static inline T_Span1 IrSetFirePointParams__interval1(IrSetFirePointParamsBuffer *buf) { return read_T_Span1(buf->data + (39)); }
static inline void IrSetFirePointParams__set_interval1_ptr(IrSetFirePointParamsBuffer *buf, T_Span1 *val) { write_T_Span1(buf->data + (39), val); }
static inline void IrSetFirePointParams__set_interval1(IrSetFirePointParamsBuffer *buf, T_Span1 val) { write_T_Span1(buf->data + (39), &val); }

// 火力点轮流发射间隔时间
static inline T_Span2 IrSetFirePointParams__interval2(IrSetFirePointParamsBuffer *buf) { return read_T_Span2(buf->data + (40)); }
static inline void IrSetFirePointParams__set_interval2_ptr(IrSetFirePointParamsBuffer *buf, T_Span2 *val) { write_T_Span2(buf->data + (40), val); }
static inline void IrSetFirePointParams__set_interval2(IrSetFirePointParamsBuffer *buf, T_Span2 val) { write_T_Span2(buf->data + (40), &val); }

// 弹药类型
static inline A_Type IrSetFirePointParams__aType(IrSetFirePointParamsBuffer *buf) { return read_A_Type(buf->data + (41)); }
static inline void IrSetFirePointParams__set_aType_ptr(IrSetFirePointParamsBuffer *buf, A_Type *val) { write_A_Type(buf->data + (41), val); }
static inline void IrSetFirePointParams__set_aType(IrSetFirePointParamsBuffer *buf, A_Type val) { write_A_Type(buf->data + (41), &val); }

// 弹药子类
static inline A_Subtype IrSetFirePointParams__aSubtype(IrSetFirePointParamsBuffer *buf) { return read_A_Subtype(buf->data + (42)); }
static inline void IrSetFirePointParams__set_aSubtype_ptr(IrSetFirePointParamsBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (42), val); }
static inline void IrSetFirePointParams__set_aSubtype(IrSetFirePointParamsBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (42), &val); }
static inline uint16_t IrSetFirePointParams__computeSize() {
  return 44;
}
static inline uint8_t IrSetFirePointParams__computeCheckSum(IrSetFirePointParamsBuffer *buf) {
  return computeCheckSum(buf->data, IrSetFirePointParams__computeSize() - 1);
}
static inline uint8_t IrSetFirePointParams__checkSum(IrSetFirePointParamsBuffer *buf) {
  return buf->data[IrSetFirePointParams__computeSize() - 1];
}
static inline bool IrSetFirePointParams__isCheckSumValid(IrSetFirePointParamsBuffer *buf) {
  return IrSetFirePointParams__checkSum(buf) == IrSetFirePointParams__computeCheckSum(buf);
}
static inline void IrSetFirePointParams__set_checkSum(IrSetFirePointParamsBuffer *buf, uint8_t checkSum) {
  buf->data[IrSetFirePointParams__computeSize() - 1] = checkSum;
}
static inline void IrSetFirePointParams__initEmpty(IrSetFirePointParamsBuffer *buf) {
  IrSetFirePointParams__set_dLen(buf, IrSetFirePointParams__computeSize() - 4 /* exclude DataFrame[2] + dLen[1] + checksum[1] */);
  IrSetFirePointParams__set_dataFrame(buf, 0xea21);
  IrSetFirePointParams__set_checkSum(buf, IrSetFirePointParams__computeCheckSum(buf));
}
void send_ir_RequestIdentity(RequestIdentityBuffer *buf);
void send_ir_SendIdentity(SendIdentityBuffer *buf);
void send_ir_IrSetEquipParams(IrSetEquipParamsBuffer *buf);
void send_ir_IrSetPeopleParams(IrSetPeopleParamsBuffer *buf);
void send_ir_RequestAmmoMaterial(RequestAmmoMaterialBuffer *buf);
void send_ir_SendAmmoMaterial(SendAmmoMaterialBuffer *buf);
void send_ir_FillAmmoMaterial(FillAmmoMaterialBuffer *buf);
void send_ir_RequestDamage(RequestDamageBuffer *buf);
void send_ir_SendDamage(SendDamageBuffer *buf);
void send_ir_CureResponse(CureResponseBuffer *buf);
void send_ir_SetCureAck(SetCureAckBuffer *buf);
void send_ir_PlantMine(PlantMineBuffer *buf);
void send_ir_RemoveMine(RemoveMineBuffer *buf);
void send_ir_PlantMineAckIR(PlantMineAckIRBuffer *buf);
void send_ir_RemoveMineAckIR(RemoveMineAckIRBuffer *buf);
void send_ir_OverrideUPid(OverrideUPidBuffer *buf);
void send_ir_IrSetFirePointParams(IrSetFirePointParamsBuffer *buf);

#endif // __GENERATED__IR_H
