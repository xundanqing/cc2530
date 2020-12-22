
#ifndef __GENERATED__LASER_H
#define __GENERATED__LASER_H
#include "dkTypes.h"
#define MAX_DATA_PACK_SIZE 256
#define MAX_EVENT_PACK_SIZE 256
#define MAX_LASER_PACK_SIZE 64

// **********************************************
// (0xD1，0x01)附表 1 轻武器、单兵班组武器及模拟测距激光编码数据内容
// **********************************************

#define SHOOT_OR_RANGE_DETECTION_MAX_SIZE (26)
typedef struct {
  uint8_t data[SHOOT_OR_RANGE_DETECTION_MAX_SIZE];
} ShootOrRangeDetectionBuffer;

// 数据帧头，为0xD1，0x01
static inline Data_Frame ShootOrRangeDetection__dataFrame(ShootOrRangeDetectionBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void ShootOrRangeDetection__set_dataFrame_ptr(ShootOrRangeDetectionBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void ShootOrRangeDetection__set_dataFrame(ShootOrRangeDetectionBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 弹药类型
static inline A_Type ShootOrRangeDetection__aType(ShootOrRangeDetectionBuffer *buf) { return read_A_Type(buf->data + (2)); }
static inline void ShootOrRangeDetection__set_aType_ptr(ShootOrRangeDetectionBuffer *buf, A_Type *val) { write_A_Type(buf->data + (2), val); }
static inline void ShootOrRangeDetection__set_aType(ShootOrRangeDetectionBuffer *buf, A_Type val) { write_A_Type(buf->data + (2), &val); }

// 弹药子类型
static inline A_Subtype ShootOrRangeDetection__aSubtype(ShootOrRangeDetectionBuffer *buf) { return read_A_Subtype(buf->data + (3)); }
static inline void ShootOrRangeDetection__set_aSubtype_ptr(ShootOrRangeDetectionBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (3), val); }
static inline void ShootOrRangeDetection__set_aSubtype(ShootOrRangeDetectionBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (3), &val); }

// 武器实体类型
static inline T_Type ShootOrRangeDetection__tType(ShootOrRangeDetectionBuffer *buf) { return read_T_Type(buf->data + (4)); }
static inline void ShootOrRangeDetection__set_tType_ptr(ShootOrRangeDetectionBuffer *buf, T_Type *val) { write_T_Type(buf->data + (4), val); }
static inline void ShootOrRangeDetection__set_tType(ShootOrRangeDetectionBuffer *buf, T_Type val) { write_T_Type(buf->data + (4), &val); }

// 武器实体子类型
static inline T_Subtype ShootOrRangeDetection__tSubtype(ShootOrRangeDetectionBuffer *buf) { return read_T_Subtype(buf->data + (5)); }
static inline void ShootOrRangeDetection__set_tSubtype_ptr(ShootOrRangeDetectionBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (5), val); }
static inline void ShootOrRangeDetection__set_tSubtype(ShootOrRangeDetectionBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (5), &val); }

// 武器单位代字
static inline RID ShootOrRangeDetection__rID(ShootOrRangeDetectionBuffer *buf) { return read_RID(buf->data + (6)); }
static inline void ShootOrRangeDetection__set_rID_ptr(ShootOrRangeDetectionBuffer *buf, RID *val) { write_RID(buf->data + (6), val); }
static inline void ShootOrRangeDetection__set_rID(ShootOrRangeDetectionBuffer *buf, RID val) { write_RID(buf->data + (6), &val); }

// 武器设备编号
static inline PID ShootOrRangeDetection__pID_use_uPID_instead(ShootOrRangeDetectionBuffer *buf) { return read_PID(buf->data + (7)); }
static inline void ShootOrRangeDetection__set_pID_use_uPID_instead_ptr(ShootOrRangeDetectionBuffer *buf, PID *val) { write_PID(buf->data + (7), val); }
static inline void ShootOrRangeDetection__set_pID_use_uPID_instead(ShootOrRangeDetectionBuffer *buf, PID val) { write_PID(buf->data + (7), &val); }

static inline UPid ShootOrRangeDetection__uPid(ShootOrRangeDetectionBuffer *buf) {
  UPid uPid = {
    .tType = ShootOrRangeDetection__tType(buf),
    .tSubtype = ShootOrRangeDetection__tSubtype(buf),
    .rID = ShootOrRangeDetection__rID(buf),
    .pID = ShootOrRangeDetection__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void ShootOrRangeDetection__set_uPid_ptr(ShootOrRangeDetectionBuffer *buf, UPid *val) {
  ShootOrRangeDetection__set_tType(buf, val->tType);
  ShootOrRangeDetection__set_tSubtype(buf, val->tSubtype);
  ShootOrRangeDetection__set_rID(buf, val->rID);
  ShootOrRangeDetection__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void ShootOrRangeDetection__set_uPid(ShootOrRangeDetectionBuffer *buf, UPid val) {
  ShootOrRangeDetection__set_tType(buf, val.tType);
  ShootOrRangeDetection__set_tSubtype(buf, val.tSubtype);
  ShootOrRangeDetection__set_rID(buf, val.rID);
  ShootOrRangeDetection__set_pID_use_uPID_instead(buf, val.pID);
}

// 模式/密钥
static inline TS_Character2 ShootOrRangeDetection__tSCharacter2(ShootOrRangeDetectionBuffer *buf) { return read_TS_Character2(buf->data + (9)); }
static inline void ShootOrRangeDetection__set_tSCharacter2_ptr(ShootOrRangeDetectionBuffer *buf, TS_Character2 *val) { write_TS_Character2(buf->data + (9), val); }
static inline void ShootOrRangeDetection__set_tSCharacter2(ShootOrRangeDetectionBuffer *buf, TS_Character2 val) { write_TS_Character2(buf->data + (9), &val); }

// 经纬度坐标
static inline L_Position ShootOrRangeDetection__lPosition(ShootOrRangeDetectionBuffer *buf) { return read_L_Position(buf->data + (10)); }
static inline void ShootOrRangeDetection__set_lPosition_ptr(ShootOrRangeDetectionBuffer *buf, L_Position *val) { write_L_Position(buf->data + (10), val); }
static inline void ShootOrRangeDetection__set_lPosition(ShootOrRangeDetectionBuffer *buf, L_Position val) { write_L_Position(buf->data + (10), &val); }

// 穿甲深度
static inline Thickness ShootOrRangeDetection__piercingArmo(ShootOrRangeDetectionBuffer *buf) { return read_Thickness(buf->data + (22)); }
static inline void ShootOrRangeDetection__set_piercingArmo_ptr(ShootOrRangeDetectionBuffer *buf, Thickness *val) { write_Thickness(buf->data + (22), val); }
static inline void ShootOrRangeDetection__set_piercingArmo(ShootOrRangeDetectionBuffer *buf, Thickness val) { write_Thickness(buf->data + (22), &val); }

// 穿透混凝土厚度
static inline Thickness ShootOrRangeDetection__piercingConcrete(ShootOrRangeDetectionBuffer *buf) { return read_Thickness(buf->data + (23)); }
static inline void ShootOrRangeDetection__set_piercingConcrete_ptr(ShootOrRangeDetectionBuffer *buf, Thickness *val) { write_Thickness(buf->data + (23), val); }
static inline void ShootOrRangeDetection__set_piercingConcrete(ShootOrRangeDetectionBuffer *buf, Thickness val) { write_Thickness(buf->data + (23), &val); }

// 有效射程
static inline Range ShootOrRangeDetection__range(ShootOrRangeDetectionBuffer *buf) { return read_Range(buf->data + (24)); }
static inline void ShootOrRangeDetection__set_range_ptr(ShootOrRangeDetectionBuffer *buf, Range *val) { write_Range(buf->data + (24), val); }
static inline void ShootOrRangeDetection__set_range(ShootOrRangeDetectionBuffer *buf, Range val) { write_Range(buf->data + (24), &val); }
static inline uint16_t ShootOrRangeDetection__computeSize() {
  return 26;
}
static inline uint8_t ShootOrRangeDetection__computeCheckSum(ShootOrRangeDetectionBuffer *buf) {
  return computeCheckSum(buf->data, ShootOrRangeDetection__computeSize() - 1);
}
static inline uint8_t ShootOrRangeDetection__checkSum(ShootOrRangeDetectionBuffer *buf) {
  return buf->data[ShootOrRangeDetection__computeSize() - 1];
}
static inline bool ShootOrRangeDetection__isCheckSumValid(ShootOrRangeDetectionBuffer *buf) {
  return ShootOrRangeDetection__checkSum(buf) == ShootOrRangeDetection__computeCheckSum(buf);
}
static inline void ShootOrRangeDetection__set_checkSum(ShootOrRangeDetectionBuffer *buf, uint8_t checkSum) {
  buf->data[ShootOrRangeDetection__computeSize() - 1] = checkSum;
}
static inline void ShootOrRangeDetection__initEmpty(ShootOrRangeDetectionBuffer *buf) {
  ShootOrRangeDetection__set_dataFrame(buf, 0xd101);
  ShootOrRangeDetection__set_checkSum(buf, ShootOrRangeDetection__computeCheckSum(buf));
}

// **********************************************
// (0xD1，0x02)附表 2 直瞄重武器（嵌入式）激光编码数据内容
// **********************************************

#define HEAVY_SHOOT_EMD_MAX_SIZE (29)
typedef struct {
  uint8_t data[HEAVY_SHOOT_EMD_MAX_SIZE];
} HeavyShootEmdBuffer;

// 数据帧头，为0xD1，0x02
static inline Data_Frame HeavyShootEmd__dataFrame(HeavyShootEmdBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void HeavyShootEmd__set_dataFrame_ptr(HeavyShootEmdBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void HeavyShootEmd__set_dataFrame(HeavyShootEmdBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 弹药类型
static inline A_Type HeavyShootEmd__aType(HeavyShootEmdBuffer *buf) { return read_A_Type(buf->data + (2)); }
static inline void HeavyShootEmd__set_aType_ptr(HeavyShootEmdBuffer *buf, A_Type *val) { write_A_Type(buf->data + (2), val); }
static inline void HeavyShootEmd__set_aType(HeavyShootEmdBuffer *buf, A_Type val) { write_A_Type(buf->data + (2), &val); }

// 弹药子类型
static inline A_Subtype HeavyShootEmd__aSubtype(HeavyShootEmdBuffer *buf) { return read_A_Subtype(buf->data + (3)); }
static inline void HeavyShootEmd__set_aSubtype_ptr(HeavyShootEmdBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (3), val); }
static inline void HeavyShootEmd__set_aSubtype(HeavyShootEmdBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (3), &val); }

// 实体类型
static inline T_Type HeavyShootEmd__tType(HeavyShootEmdBuffer *buf) { return read_T_Type(buf->data + (4)); }
static inline void HeavyShootEmd__set_tType_ptr(HeavyShootEmdBuffer *buf, T_Type *val) { write_T_Type(buf->data + (4), val); }
static inline void HeavyShootEmd__set_tType(HeavyShootEmdBuffer *buf, T_Type val) { write_T_Type(buf->data + (4), &val); }

// 实体子类型
static inline T_Subtype HeavyShootEmd__tSubtype(HeavyShootEmdBuffer *buf) { return read_T_Subtype(buf->data + (5)); }
static inline void HeavyShootEmd__set_tSubtype_ptr(HeavyShootEmdBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (5), val); }
static inline void HeavyShootEmd__set_tSubtype(HeavyShootEmdBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (5), &val); }

// 单位代字
static inline RID HeavyShootEmd__rID(HeavyShootEmdBuffer *buf) { return read_RID(buf->data + (6)); }
static inline void HeavyShootEmd__set_rID_ptr(HeavyShootEmdBuffer *buf, RID *val) { write_RID(buf->data + (6), val); }
static inline void HeavyShootEmd__set_rID(HeavyShootEmdBuffer *buf, RID val) { write_RID(buf->data + (6), &val); }

// 设备编号
static inline PID HeavyShootEmd__pID_use_uPID_instead(HeavyShootEmdBuffer *buf) { return read_PID(buf->data + (7)); }
static inline void HeavyShootEmd__set_pID_use_uPID_instead_ptr(HeavyShootEmdBuffer *buf, PID *val) { write_PID(buf->data + (7), val); }
static inline void HeavyShootEmd__set_pID_use_uPID_instead(HeavyShootEmdBuffer *buf, PID val) { write_PID(buf->data + (7), &val); }

static inline UPid HeavyShootEmd__uPid(HeavyShootEmdBuffer *buf) {
  UPid uPid = {
    .tType = HeavyShootEmd__tType(buf),
    .tSubtype = HeavyShootEmd__tSubtype(buf),
    .rID = HeavyShootEmd__rID(buf),
    .pID = HeavyShootEmd__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void HeavyShootEmd__set_uPid_ptr(HeavyShootEmdBuffer *buf, UPid *val) {
  HeavyShootEmd__set_tType(buf, val->tType);
  HeavyShootEmd__set_tSubtype(buf, val->tSubtype);
  HeavyShootEmd__set_rID(buf, val->rID);
  HeavyShootEmd__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void HeavyShootEmd__set_uPid(HeavyShootEmdBuffer *buf, UPid val) {
  HeavyShootEmd__set_tType(buf, val.tType);
  HeavyShootEmd__set_tSubtype(buf, val.tSubtype);
  HeavyShootEmd__set_rID(buf, val.rID);
  HeavyShootEmd__set_pID_use_uPID_instead(buf, val.pID);
}

// 模式_密钥
static inline TS_Character2 HeavyShootEmd__tSCharacter2(HeavyShootEmdBuffer *buf) { return read_TS_Character2(buf->data + (9)); }
static inline void HeavyShootEmd__set_tSCharacter2_ptr(HeavyShootEmdBuffer *buf, TS_Character2 *val) { write_TS_Character2(buf->data + (9), val); }
static inline void HeavyShootEmd__set_tSCharacter2(HeavyShootEmdBuffer *buf, TS_Character2 val) { write_TS_Character2(buf->data + (9), &val); }

// 经纬度坐标
static inline L_Position HeavyShootEmd__lPosition(HeavyShootEmdBuffer *buf) { return read_L_Position(buf->data + (10)); }
static inline void HeavyShootEmd__set_lPosition_ptr(HeavyShootEmdBuffer *buf, L_Position *val) { write_L_Position(buf->data + (10), val); }
static inline void HeavyShootEmd__set_lPosition(HeavyShootEmdBuffer *buf, L_Position val) { write_L_Position(buf->data + (10), &val); }

// 发射斜角
static inline Angle3 HeavyShootEmd__angle3(HeavyShootEmdBuffer *buf) { return read_Angle3(buf->data + (22)); }
static inline void HeavyShootEmd__set_angle3_ptr(HeavyShootEmdBuffer *buf, Angle3 *val) { write_Angle3(buf->data + (22), val); }
static inline void HeavyShootEmd__set_angle3(HeavyShootEmdBuffer *buf, Angle3 val) { write_Angle3(buf->data + (22), &val); }

// 弹丸初速
static inline Velocity3 HeavyShootEmd__velocity3(HeavyShootEmdBuffer *buf) { return read_Velocity3(buf->data + (23)); }
static inline void HeavyShootEmd__set_velocity3_ptr(HeavyShootEmdBuffer *buf, Velocity3 *val) { write_Velocity3(buf->data + (23), val); }
static inline void HeavyShootEmd__set_velocity3(HeavyShootEmdBuffer *buf, Velocity3 val) { write_Velocity3(buf->data + (23), &val); }

// 引信时间
static inline T_Span1 HeavyShootEmd__tSpan1(HeavyShootEmdBuffer *buf) { return read_T_Span1(buf->data + (24)); }
static inline void HeavyShootEmd__set_tSpan1_ptr(HeavyShootEmdBuffer *buf, T_Span1 *val) { write_T_Span1(buf->data + (24), val); }
static inline void HeavyShootEmd__set_tSpan1(HeavyShootEmdBuffer *buf, T_Span1 val) { write_T_Span1(buf->data + (24), &val); }

// 穿甲深度
static inline Thickness HeavyShootEmd__piercingArmo(HeavyShootEmdBuffer *buf) { return read_Thickness(buf->data + (25)); }
static inline void HeavyShootEmd__set_piercingArmo_ptr(HeavyShootEmdBuffer *buf, Thickness *val) { write_Thickness(buf->data + (25), val); }
static inline void HeavyShootEmd__set_piercingArmo(HeavyShootEmdBuffer *buf, Thickness val) { write_Thickness(buf->data + (25), &val); }

// 穿透混凝土厚度
static inline Thickness HeavyShootEmd__piercingConcrete(HeavyShootEmdBuffer *buf) { return read_Thickness(buf->data + (26)); }
static inline void HeavyShootEmd__set_piercingConcrete_ptr(HeavyShootEmdBuffer *buf, Thickness *val) { write_Thickness(buf->data + (26), val); }
static inline void HeavyShootEmd__set_piercingConcrete(HeavyShootEmdBuffer *buf, Thickness val) { write_Thickness(buf->data + (26), &val); }

// 有效射程
static inline Range HeavyShootEmd__range(HeavyShootEmdBuffer *buf) { return read_Range(buf->data + (27)); }
static inline void HeavyShootEmd__set_range_ptr(HeavyShootEmdBuffer *buf, Range *val) { write_Range(buf->data + (27), val); }
static inline void HeavyShootEmd__set_range(HeavyShootEmdBuffer *buf, Range val) { write_Range(buf->data + (27), &val); }
static inline uint16_t HeavyShootEmd__computeSize() {
  return 29;
}
static inline uint8_t HeavyShootEmd__computeCheckSum(HeavyShootEmdBuffer *buf) {
  return computeCheckSum(buf->data, HeavyShootEmd__computeSize() - 1);
}
static inline uint8_t HeavyShootEmd__checkSum(HeavyShootEmdBuffer *buf) {
  return buf->data[HeavyShootEmd__computeSize() - 1];
}
static inline bool HeavyShootEmd__isCheckSumValid(HeavyShootEmdBuffer *buf) {
  return HeavyShootEmd__checkSum(buf) == HeavyShootEmd__computeCheckSum(buf);
}
static inline void HeavyShootEmd__set_checkSum(HeavyShootEmdBuffer *buf, uint8_t checkSum) {
  buf->data[HeavyShootEmd__computeSize() - 1] = checkSum;
}
static inline void HeavyShootEmd__initEmpty(HeavyShootEmdBuffer *buf) {
  HeavyShootEmd__set_dataFrame(buf, 0xd102);
  HeavyShootEmd__set_checkSum(buf, HeavyShootEmd__computeCheckSum(buf));
}

// **********************************************
// (0xD1，0x03)附表 3 直瞄重武器（外挂式）激光编码数据内容
// **********************************************

#define HEAVY_SHOOT_MAX_SIZE (28)
typedef struct {
  uint8_t data[HEAVY_SHOOT_MAX_SIZE];
} HeavyShootBuffer;

// 数据帧头，为0xD1，0x03
static inline Data_Frame HeavyShoot__dataFrame(HeavyShootBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void HeavyShoot__set_dataFrame_ptr(HeavyShootBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void HeavyShoot__set_dataFrame(HeavyShootBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 弹药类型
static inline A_Type HeavyShoot__aType(HeavyShootBuffer *buf) { return read_A_Type(buf->data + (2)); }
static inline void HeavyShoot__set_aType_ptr(HeavyShootBuffer *buf, A_Type *val) { write_A_Type(buf->data + (2), val); }
static inline void HeavyShoot__set_aType(HeavyShootBuffer *buf, A_Type val) { write_A_Type(buf->data + (2), &val); }

// 弹药子类型
static inline A_Subtype HeavyShoot__aSubtype(HeavyShootBuffer *buf) { return read_A_Subtype(buf->data + (3)); }
static inline void HeavyShoot__set_aSubtype_ptr(HeavyShootBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (3), val); }
static inline void HeavyShoot__set_aSubtype(HeavyShootBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (3), &val); }

// 实体类型
static inline T_Type HeavyShoot__tType(HeavyShootBuffer *buf) { return read_T_Type(buf->data + (4)); }
static inline void HeavyShoot__set_tType_ptr(HeavyShootBuffer *buf, T_Type *val) { write_T_Type(buf->data + (4), val); }
static inline void HeavyShoot__set_tType(HeavyShootBuffer *buf, T_Type val) { write_T_Type(buf->data + (4), &val); }

// 实体子类型
static inline T_Subtype HeavyShoot__tSubtype(HeavyShootBuffer *buf) { return read_T_Subtype(buf->data + (5)); }
static inline void HeavyShoot__set_tSubtype_ptr(HeavyShootBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (5), val); }
static inline void HeavyShoot__set_tSubtype(HeavyShootBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (5), &val); }

// 单位代字
static inline RID HeavyShoot__rID(HeavyShootBuffer *buf) { return read_RID(buf->data + (6)); }
static inline void HeavyShoot__set_rID_ptr(HeavyShootBuffer *buf, RID *val) { write_RID(buf->data + (6), val); }
static inline void HeavyShoot__set_rID(HeavyShootBuffer *buf, RID val) { write_RID(buf->data + (6), &val); }

// 设备编号
static inline PID HeavyShoot__pID_use_uPID_instead(HeavyShootBuffer *buf) { return read_PID(buf->data + (7)); }
static inline void HeavyShoot__set_pID_use_uPID_instead_ptr(HeavyShootBuffer *buf, PID *val) { write_PID(buf->data + (7), val); }
static inline void HeavyShoot__set_pID_use_uPID_instead(HeavyShootBuffer *buf, PID val) { write_PID(buf->data + (7), &val); }

static inline UPid HeavyShoot__uPid(HeavyShootBuffer *buf) {
  UPid uPid = {
    .tType = HeavyShoot__tType(buf),
    .tSubtype = HeavyShoot__tSubtype(buf),
    .rID = HeavyShoot__rID(buf),
    .pID = HeavyShoot__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void HeavyShoot__set_uPid_ptr(HeavyShootBuffer *buf, UPid *val) {
  HeavyShoot__set_tType(buf, val->tType);
  HeavyShoot__set_tSubtype(buf, val->tSubtype);
  HeavyShoot__set_rID(buf, val->rID);
  HeavyShoot__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void HeavyShoot__set_uPid(HeavyShootBuffer *buf, UPid val) {
  HeavyShoot__set_tType(buf, val.tType);
  HeavyShoot__set_tSubtype(buf, val.tSubtype);
  HeavyShoot__set_rID(buf, val.rID);
  HeavyShoot__set_pID_use_uPID_instead(buf, val.pID);
}

// 模式_密钥
static inline TS_Character2 HeavyShoot__tSCharacter2(HeavyShootBuffer *buf) { return read_TS_Character2(buf->data + (9)); }
static inline void HeavyShoot__set_tSCharacter2_ptr(HeavyShootBuffer *buf, TS_Character2 *val) { write_TS_Character2(buf->data + (9), val); }
static inline void HeavyShoot__set_tSCharacter2(HeavyShootBuffer *buf, TS_Character2 val) { write_TS_Character2(buf->data + (9), &val); }

// 经纬度坐标
static inline L_Position HeavyShoot__lPosition(HeavyShootBuffer *buf) { return read_L_Position(buf->data + (10)); }
static inline void HeavyShoot__set_lPosition_ptr(HeavyShootBuffer *buf, L_Position *val) { write_L_Position(buf->data + (10), val); }
static inline void HeavyShoot__set_lPosition(HeavyShootBuffer *buf, L_Position val) { write_L_Position(buf->data + (10), &val); }

// 弹丸初速
static inline Velocity3 HeavyShoot__velocity3(HeavyShootBuffer *buf) { return read_Velocity3(buf->data + (22)); }
static inline void HeavyShoot__set_velocity3_ptr(HeavyShootBuffer *buf, Velocity3 *val) { write_Velocity3(buf->data + (22), val); }
static inline void HeavyShoot__set_velocity3(HeavyShootBuffer *buf, Velocity3 val) { write_Velocity3(buf->data + (22), &val); }

// 引信时间
static inline T_Span1 HeavyShoot__tSpan1(HeavyShootBuffer *buf) { return read_T_Span1(buf->data + (23)); }
static inline void HeavyShoot__set_tSpan1_ptr(HeavyShootBuffer *buf, T_Span1 *val) { write_T_Span1(buf->data + (23), val); }
static inline void HeavyShoot__set_tSpan1(HeavyShootBuffer *buf, T_Span1 val) { write_T_Span1(buf->data + (23), &val); }

// 穿甲深度
static inline Thickness HeavyShoot__piercingArmo(HeavyShootBuffer *buf) { return read_Thickness(buf->data + (24)); }
static inline void HeavyShoot__set_piercingArmo_ptr(HeavyShootBuffer *buf, Thickness *val) { write_Thickness(buf->data + (24), val); }
static inline void HeavyShoot__set_piercingArmo(HeavyShootBuffer *buf, Thickness val) { write_Thickness(buf->data + (24), &val); }

// 穿透混凝土厚度
static inline Thickness HeavyShoot__piercingConcrete(HeavyShootBuffer *buf) { return read_Thickness(buf->data + (25)); }
static inline void HeavyShoot__set_piercingConcrete_ptr(HeavyShootBuffer *buf, Thickness *val) { write_Thickness(buf->data + (25), val); }
static inline void HeavyShoot__set_piercingConcrete(HeavyShootBuffer *buf, Thickness val) { write_Thickness(buf->data + (25), &val); }

// 有效射程
static inline Range HeavyShoot__range(HeavyShootBuffer *buf) { return read_Range(buf->data + (26)); }
static inline void HeavyShoot__set_range_ptr(HeavyShootBuffer *buf, Range *val) { write_Range(buf->data + (26), val); }
static inline void HeavyShoot__set_range(HeavyShootBuffer *buf, Range val) { write_Range(buf->data + (26), &val); }
static inline uint16_t HeavyShoot__computeSize() {
  return 28;
}
static inline uint8_t HeavyShoot__computeCheckSum(HeavyShootBuffer *buf) {
  return computeCheckSum(buf->data, HeavyShoot__computeSize() - 1);
}
static inline uint8_t HeavyShoot__checkSum(HeavyShootBuffer *buf) {
  return buf->data[HeavyShoot__computeSize() - 1];
}
static inline bool HeavyShoot__isCheckSumValid(HeavyShootBuffer *buf) {
  return HeavyShoot__checkSum(buf) == HeavyShoot__computeCheckSum(buf);
}
static inline void HeavyShoot__set_checkSum(HeavyShootBuffer *buf, uint8_t checkSum) {
  buf->data[HeavyShoot__computeSize() - 1] = checkSum;
}
static inline void HeavyShoot__initEmpty(HeavyShootBuffer *buf) {
  HeavyShoot__set_dataFrame(buf, 0xd103);
  HeavyShoot__set_checkSum(buf, HeavyShoot__computeCheckSum(buf));
}

// **********************************************
// (0xD1，0x04)附表 4 人在回路导弹激光编码数据内容
// **********************************************

#define MISSILE_MAX_SIZE (29)
typedef struct {
  uint8_t data[MISSILE_MAX_SIZE];
} HITLMissileBuffer;

// 数据帧头，为0xD1，0x04
static inline Data_Frame HITLMissile__dataFrame(HITLMissileBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void HITLMissile__set_dataFrame_ptr(HITLMissileBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void HITLMissile__set_dataFrame(HITLMissileBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 弹药类型
static inline A_Type HITLMissile__aType(HITLMissileBuffer *buf) { return read_A_Type(buf->data + (2)); }
static inline void HITLMissile__set_aType_ptr(HITLMissileBuffer *buf, A_Type *val) { write_A_Type(buf->data + (2), val); }
static inline void HITLMissile__set_aType(HITLMissileBuffer *buf, A_Type val) { write_A_Type(buf->data + (2), &val); }

// 弹药子类型
static inline A_Subtype HITLMissile__aSubtype(HITLMissileBuffer *buf) { return read_A_Subtype(buf->data + (3)); }
static inline void HITLMissile__set_aSubtype_ptr(HITLMissileBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (3), val); }
static inline void HITLMissile__set_aSubtype(HITLMissileBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (3), &val); }

// 武器实体类型
static inline T_Type HITLMissile__tType(HITLMissileBuffer *buf) { return read_T_Type(buf->data + (4)); }
static inline void HITLMissile__set_tType_ptr(HITLMissileBuffer *buf, T_Type *val) { write_T_Type(buf->data + (4), val); }
static inline void HITLMissile__set_tType(HITLMissileBuffer *buf, T_Type val) { write_T_Type(buf->data + (4), &val); }

// 武器实体子类型
static inline T_Subtype HITLMissile__tSubtype(HITLMissileBuffer *buf) { return read_T_Subtype(buf->data + (5)); }
static inline void HITLMissile__set_tSubtype_ptr(HITLMissileBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (5), val); }
static inline void HITLMissile__set_tSubtype(HITLMissileBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (5), &val); }

// 武器单位代字
static inline RID HITLMissile__rID(HITLMissileBuffer *buf) { return read_RID(buf->data + (6)); }
static inline void HITLMissile__set_rID_ptr(HITLMissileBuffer *buf, RID *val) { write_RID(buf->data + (6), val); }
static inline void HITLMissile__set_rID(HITLMissileBuffer *buf, RID val) { write_RID(buf->data + (6), &val); }

// 武器设备编号
static inline PID HITLMissile__pID_use_uPID_instead(HITLMissileBuffer *buf) { return read_PID(buf->data + (7)); }
static inline void HITLMissile__set_pID_use_uPID_instead_ptr(HITLMissileBuffer *buf, PID *val) { write_PID(buf->data + (7), val); }
static inline void HITLMissile__set_pID_use_uPID_instead(HITLMissileBuffer *buf, PID val) { write_PID(buf->data + (7), &val); }

static inline UPid HITLMissile__uPid(HITLMissileBuffer *buf) {
  UPid uPid = {
    .tType = HITLMissile__tType(buf),
    .tSubtype = HITLMissile__tSubtype(buf),
    .rID = HITLMissile__rID(buf),
    .pID = HITLMissile__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void HITLMissile__set_uPid_ptr(HITLMissileBuffer *buf, UPid *val) {
  HITLMissile__set_tType(buf, val->tType);
  HITLMissile__set_tSubtype(buf, val->tSubtype);
  HITLMissile__set_rID(buf, val->rID);
  HITLMissile__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void HITLMissile__set_uPid(HITLMissileBuffer *buf, UPid val) {
  HITLMissile__set_tType(buf, val.tType);
  HITLMissile__set_tSubtype(buf, val.tSubtype);
  HITLMissile__set_rID(buf, val.rID);
  HITLMissile__set_pID_use_uPID_instead(buf, val.pID);
}

// 模式_密钥
static inline TS_Character2 HITLMissile__tSCharacter2(HITLMissileBuffer *buf) { return read_TS_Character2(buf->data + (9)); }
static inline void HITLMissile__set_tSCharacter2_ptr(HITLMissileBuffer *buf, TS_Character2 *val) { write_TS_Character2(buf->data + (9), val); }
static inline void HITLMissile__set_tSCharacter2(HITLMissileBuffer *buf, TS_Character2 val) { write_TS_Character2(buf->data + (9), &val); }

// 经纬度坐标
static inline L_Position HITLMissile__lPosition(HITLMissileBuffer *buf) { return read_L_Position(buf->data + (10)); }
static inline void HITLMissile__set_lPosition_ptr(HITLMissileBuffer *buf, L_Position *val) { write_L_Position(buf->data + (10), val); }
static inline void HITLMissile__set_lPosition(HITLMissileBuffer *buf, L_Position val) { write_L_Position(buf->data + (10), &val); }

// 导弹速度
static inline Velocity3 HITLMissile__velocity3(HITLMissileBuffer *buf) { return read_Velocity3(buf->data + (22)); }
static inline void HITLMissile__set_velocity3_ptr(HITLMissileBuffer *buf, Velocity3 *val) { write_Velocity3(buf->data + (22), val); }
static inline void HITLMissile__set_velocity3(HITLMissileBuffer *buf, Velocity3 val) { write_Velocity3(buf->data + (22), &val); }

// 引信时间
static inline T_Span1 HITLMissile__tSpan1(HITLMissileBuffer *buf) { return read_T_Span1(buf->data + (23)); }
static inline void HITLMissile__set_tSpan1_ptr(HITLMissileBuffer *buf, T_Span1 *val) { write_T_Span1(buf->data + (23), val); }
static inline void HITLMissile__set_tSpan1(HITLMissileBuffer *buf, T_Span1 val) { write_T_Span1(buf->data + (23), &val); }

// 穿甲深度
static inline Thickness HITLMissile__piercingArmo(HITLMissileBuffer *buf) { return read_Thickness(buf->data + (24)); }
static inline void HITLMissile__set_piercingArmo_ptr(HITLMissileBuffer *buf, Thickness *val) { write_Thickness(buf->data + (24), val); }
static inline void HITLMissile__set_piercingArmo(HITLMissileBuffer *buf, Thickness val) { write_Thickness(buf->data + (24), &val); }

// 穿透混凝土厚度
static inline Thickness HITLMissile__piercingConcrete(HITLMissileBuffer *buf) { return read_Thickness(buf->data + (25)); }
static inline void HITLMissile__set_piercingConcrete_ptr(HITLMissileBuffer *buf, Thickness *val) { write_Thickness(buf->data + (25), val); }
static inline void HITLMissile__set_piercingConcrete(HITLMissileBuffer *buf, Thickness val) { write_Thickness(buf->data + (25), &val); }

// 有效射程
static inline Range HITLMissile__range(HITLMissileBuffer *buf) { return read_Range(buf->data + (26)); }
static inline void HITLMissile__set_range_ptr(HITLMissileBuffer *buf, Range *val) { write_Range(buf->data + (26), val); }
static inline void HITLMissile__set_range(HITLMissileBuffer *buf, Range val) { write_Range(buf->data + (26), &val); }

// 导弹跟踪序列号，从 0 开始每 0.2 秒增加 1
static inline T_SN HITLMissile__tSN(HITLMissileBuffer *buf) { return read_T_SN(buf->data + (27)); }
static inline void HITLMissile__set_tSN_ptr(HITLMissileBuffer *buf, T_SN *val) { write_T_SN(buf->data + (27), val); }
static inline void HITLMissile__set_tSN(HITLMissileBuffer *buf, T_SN val) { write_T_SN(buf->data + (27), &val); }
static inline uint16_t HITLMissile__computeSize() {
  return 29;
}
static inline uint8_t HITLMissile__computeCheckSum(HITLMissileBuffer *buf) {
  return computeCheckSum(buf->data, HITLMissile__computeSize() - 1);
}
static inline uint8_t HITLMissile__checkSum(HITLMissileBuffer *buf) {
  return buf->data[HITLMissile__computeSize() - 1];
}
static inline bool HITLMissile__isCheckSumValid(HITLMissileBuffer *buf) {
  return HITLMissile__checkSum(buf) == HITLMissile__computeCheckSum(buf);
}
static inline void HITLMissile__set_checkSum(HITLMissileBuffer *buf, uint8_t checkSum) {
  buf->data[HITLMissile__computeSize() - 1] = checkSum;
}
static inline void HITLMissile__initEmpty(HITLMissileBuffer *buf) {
  HITLMissile__set_dataFrame(buf, 0xd104);
  HITLMissile__set_checkSum(buf, HITLMissile__computeCheckSum(buf));
}

// **********************************************
// (0xD1，0x05)附表 5 自寻的导弹激光编码数据内容
// **********************************************

#define HOMING_MISSILE_MAX_SIZE (30)
typedef struct {
  uint8_t data[HOMING_MISSILE_MAX_SIZE];
} HomingMissileBuffer;

// 数据帧头，为0xD1，0x05
static inline Data_Frame HomingMissile__dataFrame(HomingMissileBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void HomingMissile__set_dataFrame_ptr(HomingMissileBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void HomingMissile__set_dataFrame(HomingMissileBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 弹药类型
static inline A_Type HomingMissile__aType(HomingMissileBuffer *buf) { return read_A_Type(buf->data + (2)); }
static inline void HomingMissile__set_aType_ptr(HomingMissileBuffer *buf, A_Type *val) { write_A_Type(buf->data + (2), val); }
static inline void HomingMissile__set_aType(HomingMissileBuffer *buf, A_Type val) { write_A_Type(buf->data + (2), &val); }

// 弹药子类型
static inline A_Subtype HomingMissile__aSubtype(HomingMissileBuffer *buf) { return read_A_Subtype(buf->data + (3)); }
static inline void HomingMissile__set_aSubtype_ptr(HomingMissileBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (3), val); }
static inline void HomingMissile__set_aSubtype(HomingMissileBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (3), &val); }

// 武器实体类型
static inline T_Type HomingMissile__tType(HomingMissileBuffer *buf) { return read_T_Type(buf->data + (4)); }
static inline void HomingMissile__set_tType_ptr(HomingMissileBuffer *buf, T_Type *val) { write_T_Type(buf->data + (4), val); }
static inline void HomingMissile__set_tType(HomingMissileBuffer *buf, T_Type val) { write_T_Type(buf->data + (4), &val); }

// 武器实体子类型
static inline T_Subtype HomingMissile__tSubtype(HomingMissileBuffer *buf) { return read_T_Subtype(buf->data + (5)); }
static inline void HomingMissile__set_tSubtype_ptr(HomingMissileBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (5), val); }
static inline void HomingMissile__set_tSubtype(HomingMissileBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (5), &val); }

// 武器单位代字
static inline RID HomingMissile__rID(HomingMissileBuffer *buf) { return read_RID(buf->data + (6)); }
static inline void HomingMissile__set_rID_ptr(HomingMissileBuffer *buf, RID *val) { write_RID(buf->data + (6), val); }
static inline void HomingMissile__set_rID(HomingMissileBuffer *buf, RID val) { write_RID(buf->data + (6), &val); }

// 武器设备编号
static inline PID HomingMissile__pID_use_uPID_instead(HomingMissileBuffer *buf) { return read_PID(buf->data + (7)); }
static inline void HomingMissile__set_pID_use_uPID_instead_ptr(HomingMissileBuffer *buf, PID *val) { write_PID(buf->data + (7), val); }
static inline void HomingMissile__set_pID_use_uPID_instead(HomingMissileBuffer *buf, PID val) { write_PID(buf->data + (7), &val); }

static inline UPid HomingMissile__uPid(HomingMissileBuffer *buf) {
  UPid uPid = {
    .tType = HomingMissile__tType(buf),
    .tSubtype = HomingMissile__tSubtype(buf),
    .rID = HomingMissile__rID(buf),
    .pID = HomingMissile__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void HomingMissile__set_uPid_ptr(HomingMissileBuffer *buf, UPid *val) {
  HomingMissile__set_tType(buf, val->tType);
  HomingMissile__set_tSubtype(buf, val->tSubtype);
  HomingMissile__set_rID(buf, val->rID);
  HomingMissile__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void HomingMissile__set_uPid(HomingMissileBuffer *buf, UPid val) {
  HomingMissile__set_tType(buf, val.tType);
  HomingMissile__set_tSubtype(buf, val.tSubtype);
  HomingMissile__set_rID(buf, val.rID);
  HomingMissile__set_pID_use_uPID_instead(buf, val.pID);
}

// 模式_密钥
static inline TS_Character2 HomingMissile__tSCharacter2(HomingMissileBuffer *buf) { return read_TS_Character2(buf->data + (9)); }
static inline void HomingMissile__set_tSCharacter2_ptr(HomingMissileBuffer *buf, TS_Character2 *val) { write_TS_Character2(buf->data + (9), val); }
static inline void HomingMissile__set_tSCharacter2(HomingMissileBuffer *buf, TS_Character2 val) { write_TS_Character2(buf->data + (9), &val); }

// 经纬度坐标
static inline L_Position HomingMissile__lPosition(HomingMissileBuffer *buf) { return read_L_Position(buf->data + (10)); }
static inline void HomingMissile__set_lPosition_ptr(HomingMissileBuffer *buf, L_Position *val) { write_L_Position(buf->data + (10), val); }
static inline void HomingMissile__set_lPosition(HomingMissileBuffer *buf, L_Position val) { write_L_Position(buf->data + (10), &val); }

// 命中概率
static inline Strength HomingMissile__strength(HomingMissileBuffer *buf) { return read_Strength(buf->data + (22)); }
static inline void HomingMissile__set_strength_ptr(HomingMissileBuffer *buf, Strength *val) { write_Strength(buf->data + (22), val); }
static inline void HomingMissile__set_strength(HomingMissileBuffer *buf, Strength val) { write_Strength(buf->data + (22), &val); }

// 导弹侵彻角
static inline Angle3 HomingMissile__angle3(HomingMissileBuffer *buf) { return read_Angle3(buf->data + (23)); }
static inline void HomingMissile__set_angle3_ptr(HomingMissileBuffer *buf, Angle3 *val) { write_Angle3(buf->data + (23), val); }
static inline void HomingMissile__set_angle3(HomingMissileBuffer *buf, Angle3 val) { write_Angle3(buf->data + (23), &val); }

// 导弹速度
static inline Velocity3 HomingMissile__velocity3(HomingMissileBuffer *buf) { return read_Velocity3(buf->data + (24)); }
static inline void HomingMissile__set_velocity3_ptr(HomingMissileBuffer *buf, Velocity3 *val) { write_Velocity3(buf->data + (24), val); }
static inline void HomingMissile__set_velocity3(HomingMissileBuffer *buf, Velocity3 val) { write_Velocity3(buf->data + (24), &val); }

// 引信时间
static inline T_Span1 HomingMissile__tSpan1(HomingMissileBuffer *buf) { return read_T_Span1(buf->data + (25)); }
static inline void HomingMissile__set_tSpan1_ptr(HomingMissileBuffer *buf, T_Span1 *val) { write_T_Span1(buf->data + (25), val); }
static inline void HomingMissile__set_tSpan1(HomingMissileBuffer *buf, T_Span1 val) { write_T_Span1(buf->data + (25), &val); }

// 穿甲深度
static inline Thickness HomingMissile__piercingArmo(HomingMissileBuffer *buf) { return read_Thickness(buf->data + (26)); }
static inline void HomingMissile__set_piercingArmo_ptr(HomingMissileBuffer *buf, Thickness *val) { write_Thickness(buf->data + (26), val); }
static inline void HomingMissile__set_piercingArmo(HomingMissileBuffer *buf, Thickness val) { write_Thickness(buf->data + (26), &val); }

// 穿透混凝土厚度
static inline Thickness HomingMissile__piercingConcrete(HomingMissileBuffer *buf) { return read_Thickness(buf->data + (27)); }
static inline void HomingMissile__set_piercingConcrete_ptr(HomingMissileBuffer *buf, Thickness *val) { write_Thickness(buf->data + (27), val); }
static inline void HomingMissile__set_piercingConcrete(HomingMissileBuffer *buf, Thickness val) { write_Thickness(buf->data + (27), &val); }

// 有效射程
static inline Range HomingMissile__range(HomingMissileBuffer *buf) { return read_Range(buf->data + (28)); }
static inline void HomingMissile__set_range_ptr(HomingMissileBuffer *buf, Range *val) { write_Range(buf->data + (28), val); }
static inline void HomingMissile__set_range(HomingMissileBuffer *buf, Range val) { write_Range(buf->data + (28), &val); }
static inline uint16_t HomingMissile__computeSize() {
  return 30;
}
static inline uint8_t HomingMissile__computeCheckSum(HomingMissileBuffer *buf) {
  return computeCheckSum(buf->data, HomingMissile__computeSize() - 1);
}
static inline uint8_t HomingMissile__checkSum(HomingMissileBuffer *buf) {
  return buf->data[HomingMissile__computeSize() - 1];
}
static inline bool HomingMissile__isCheckSumValid(HomingMissileBuffer *buf) {
  return HomingMissile__checkSum(buf) == HomingMissile__computeCheckSum(buf);
}
static inline void HomingMissile__set_checkSum(HomingMissileBuffer *buf, uint8_t checkSum) {
  buf->data[HomingMissile__computeSize() - 1] = checkSum;
}
static inline void HomingMissile__initEmpty(HomingMissileBuffer *buf) {
  HomingMissile__set_dataFrame(buf, 0xd105);
  HomingMissile__set_checkSum(buf, HomingMissile__computeCheckSum(buf));
}

// **********************************************
// (0xD1，0x06)附表 6 调理激光编码数据内容
// **********************************************

#define JUDGEMENT_MAX_SIZE (12)
typedef struct {
  uint8_t data[JUDGEMENT_MAX_SIZE];
} JudgementBuffer;

// 数据帧头，为0xD1，0x06
static inline Data_Frame Judgement__dataFrame(JudgementBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void Judgement__set_dataFrame_ptr(JudgementBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void Judgement__set_dataFrame(JudgementBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 弹药类型
static inline A_Type Judgement__aType(JudgementBuffer *buf) { return read_A_Type(buf->data + (2)); }
static inline void Judgement__set_aType_ptr(JudgementBuffer *buf, A_Type *val) { write_A_Type(buf->data + (2), val); }
static inline void Judgement__set_aType(JudgementBuffer *buf, A_Type val) { write_A_Type(buf->data + (2), &val); }

// 弹药子类型
static inline A_Subtype Judgement__aSubtype(JudgementBuffer *buf) { return read_A_Subtype(buf->data + (3)); }
static inline void Judgement__set_aSubtype_ptr(JudgementBuffer *buf, A_Subtype *val) { write_A_Subtype(buf->data + (3), val); }
static inline void Judgement__set_aSubtype(JudgementBuffer *buf, A_Subtype val) { write_A_Subtype(buf->data + (3), &val); }

// 实体类型
static inline T_Type Judgement__tType(JudgementBuffer *buf) { return read_T_Type(buf->data + (4)); }
static inline void Judgement__set_tType_ptr(JudgementBuffer *buf, T_Type *val) { write_T_Type(buf->data + (4), val); }
static inline void Judgement__set_tType(JudgementBuffer *buf, T_Type val) { write_T_Type(buf->data + (4), &val); }

// 实体子类型
static inline T_Subtype Judgement__tSubtype(JudgementBuffer *buf) { return read_T_Subtype(buf->data + (5)); }
static inline void Judgement__set_tSubtype_ptr(JudgementBuffer *buf, T_Subtype *val) { write_T_Subtype(buf->data + (5), val); }
static inline void Judgement__set_tSubtype(JudgementBuffer *buf, T_Subtype val) { write_T_Subtype(buf->data + (5), &val); }

// 单位代字
static inline RID Judgement__rID(JudgementBuffer *buf) { return read_RID(buf->data + (6)); }
static inline void Judgement__set_rID_ptr(JudgementBuffer *buf, RID *val) { write_RID(buf->data + (6), val); }
static inline void Judgement__set_rID(JudgementBuffer *buf, RID val) { write_RID(buf->data + (6), &val); }

// 设备编号
static inline PID Judgement__pID_use_uPID_instead(JudgementBuffer *buf) { return read_PID(buf->data + (7)); }
static inline void Judgement__set_pID_use_uPID_instead_ptr(JudgementBuffer *buf, PID *val) { write_PID(buf->data + (7), val); }
static inline void Judgement__set_pID_use_uPID_instead(JudgementBuffer *buf, PID val) { write_PID(buf->data + (7), &val); }

static inline UPid Judgement__uPid(JudgementBuffer *buf) {
  UPid uPid = {
    .tType = Judgement__tType(buf),
    .tSubtype = Judgement__tSubtype(buf),
    .rID = Judgement__rID(buf),
    .pID = Judgement__pID_use_uPID_instead(buf),
  };
  return uPid;
}
static inline void Judgement__set_uPid_ptr(JudgementBuffer *buf, UPid *val) {
  Judgement__set_tType(buf, val->tType);
  Judgement__set_tSubtype(buf, val->tSubtype);
  Judgement__set_rID(buf, val->rID);
  Judgement__set_pID_use_uPID_instead(buf, val->pID);
}
static inline void Judgement__set_uPid(JudgementBuffer *buf, UPid val) {
  Judgement__set_tType(buf, val.tType);
  Judgement__set_tSubtype(buf, val.tSubtype);
  Judgement__set_rID(buf, val.rID);
  Judgement__set_pID_use_uPID_instead(buf, val.pID);
}

// 模式_密钥
static inline TS_Character2 Judgement__tSCharacter2(JudgementBuffer *buf) { return read_TS_Character2(buf->data + (9)); }
static inline void Judgement__set_tSCharacter2_ptr(JudgementBuffer *buf, TS_Character2 *val) { write_TS_Character2(buf->data + (9), val); }
static inline void Judgement__set_tSCharacter2(JudgementBuffer *buf, TS_Character2 val) { write_TS_Character2(buf->data + (9), &val); }

// 裁决命令字
static inline AC_Character Judgement__aCCharacter(JudgementBuffer *buf) { return read_AC_Character(buf->data + (10)); }
static inline void Judgement__set_aCCharacter_ptr(JudgementBuffer *buf, AC_Character *val) { write_AC_Character(buf->data + (10), val); }
static inline void Judgement__set_aCCharacter(JudgementBuffer *buf, AC_Character val) { write_AC_Character(buf->data + (10), &val); }
static inline uint16_t Judgement__computeSize() {
  return 12;
}
static inline uint8_t Judgement__computeCheckSum(JudgementBuffer *buf) {
  return computeCheckSum(buf->data, Judgement__computeSize() - 1);
}
static inline uint8_t Judgement__checkSum(JudgementBuffer *buf) {
  return buf->data[Judgement__computeSize() - 1];
}
static inline bool Judgement__isCheckSumValid(JudgementBuffer *buf) {
  return Judgement__checkSum(buf) == Judgement__computeCheckSum(buf);
}
static inline void Judgement__set_checkSum(JudgementBuffer *buf, uint8_t checkSum) {
  buf->data[Judgement__computeSize() - 1] = checkSum;
}
static inline void Judgement__initEmpty(JudgementBuffer *buf) {
  Judgement__set_dataFrame(buf, 0xd106);
  Judgement__set_checkSum(buf, Judgement__computeCheckSum(buf));
}

// **********************************************
// (0xD1，0x07)附表 7 测试激光编码数据内容
// **********************************************

#define TEST_LASER_MAX_SIZE (7)
typedef struct {
  uint8_t data[TEST_LASER_MAX_SIZE];
} TestLaserBuffer;

// 数据帧头，为0xD1，0x07
static inline Data_Frame TestLaser__dataFrame(TestLaserBuffer *buf) { return read_Data_Frame(buf->data + (0)); }
static inline void TestLaser__set_dataFrame_ptr(TestLaserBuffer *buf, Data_Frame *val) { write_Data_Frame(buf->data + (0), val); }
static inline void TestLaser__set_dataFrame(TestLaserBuffer *buf, Data_Frame val) { write_Data_Frame(buf->data + (0), &val); }

// 测试弹
static inline A_Type TestLaser__testBullet(TestLaserBuffer *buf) { return read_A_Type(buf->data + (2)); }
static inline void TestLaser__set_testBullet_ptr(TestLaserBuffer *buf, A_Type *val) { write_A_Type(buf->data + (2), val); }
static inline void TestLaser__set_testBullet(TestLaserBuffer *buf, A_Type val) { write_A_Type(buf->data + (2), &val); }

// 单位代字
static inline RID TestLaser__ctrlRID(TestLaserBuffer *buf) { return read_RID(buf->data + (3)); }
static inline void TestLaser__set_ctrlRID_ptr(TestLaserBuffer *buf, RID *val) { write_RID(buf->data + (3), val); }
static inline void TestLaser__set_ctrlRID(TestLaserBuffer *buf, RID val) { write_RID(buf->data + (3), &val); }

// 设备编号
static inline PID TestLaser__ctrlPID(TestLaserBuffer *buf) { return read_PID(buf->data + (4)); }
static inline void TestLaser__set_ctrlPID_ptr(TestLaserBuffer *buf, PID *val) { write_PID(buf->data + (4), val); }
static inline void TestLaser__set_ctrlPID(TestLaserBuffer *buf, PID val) { write_PID(buf->data + (4), &val); }
static inline uint16_t TestLaser__computeSize() {
  return 7;
}
static inline uint8_t TestLaser__computeCheckSum(TestLaserBuffer *buf) {
  return computeCheckSum(buf->data, TestLaser__computeSize() - 1);
}
static inline uint8_t TestLaser__checkSum(TestLaserBuffer *buf) {
  return buf->data[TestLaser__computeSize() - 1];
}
static inline bool TestLaser__isCheckSumValid(TestLaserBuffer *buf) {
  return TestLaser__checkSum(buf) == TestLaser__computeCheckSum(buf);
}
static inline void TestLaser__set_checkSum(TestLaserBuffer *buf, uint8_t checkSum) {
  buf->data[TestLaser__computeSize() - 1] = checkSum;
}
static inline void TestLaser__initEmpty(TestLaserBuffer *buf) {
  TestLaser__set_dataFrame(buf, 0xd107);
  TestLaser__set_checkSum(buf, TestLaser__computeCheckSum(buf));
}
void send_laser_ShootOrRangeDetection(ShootOrRangeDetectionBuffer *buf);
void send_laser_HeavyShootEmd(HeavyShootEmdBuffer *buf);
void send_laser_HeavyShoot(HeavyShootBuffer *buf);
void send_laser_HITLMissile(HITLMissileBuffer *buf);
void send_laser_HomingMissile(HomingMissileBuffer *buf);
void send_laser_Judgement(JudgementBuffer *buf);
void send_laser_TestLaser(TestLaserBuffer *buf);

#endif // __GENERATED__LASER_H
