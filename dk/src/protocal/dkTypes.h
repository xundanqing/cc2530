#ifndef DK_TYPES_H_
#define DK_TYPES_H_
#include"dk_system.h"

typedef uint16_t buffer_size_t;

// 定义几个非标准数据大小
typedef struct {
  uint8_t data[3];
} uint24_t;

typedef struct {
  uint8_t data[3];
} uint40_t;

typedef struct {
  uint8_t data[6];
} uint48_t;

typedef struct {
  uint8_t data[9];
} uint72_t;

typedef struct {
  uint8_t data[12];
} uint96_t;

// 5.1　弹药类型（A_Type）
// a)	描述：表示弹药的类别。
// b)	长度：1BYTE
// c)	格式：HEX
typedef uint8_t A_Type;
A_Type read_A_Type(uint8_t *buf);
void write_A_Type(uint8_t *buf, A_Type *val);

// 5.2　弹药子类型（A_Subtype）
// a)	描述：与A_Type组合使用，用于描述该类弹药的子类别。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表1
// 表1　弹药类型说明表
// A_Type取值	弹药类型	Sub-A_Type取值	弹药子类型	备注
// 0x01	普通子弹	1	5.8mm子弹	枪弹类
//     2	7.62mm子弹
//     3	12.7mm子弹
// 0x02	穿甲弹（枪弹）	1	5.8mm穿甲弹
//     2	12.7mm穿甲弹
// 0x03	穿甲燃烧弹（枪弹）	1	5.8mm穿甲燃烧弹
//     2	12.7mm穿甲燃烧弹
// 0x04	燃烧弹（枪弹）	1	5.8mm燃烧弹
//     2	12.7mm燃烧弹
// 0x05	穿甲爆炸燃烧弹（枪弹）	1	12.7mm穿甲爆炸燃烧弹
// 0x06	瞬爆弹（枪弹）	1	12.7mm瞬爆弹
// 0x07	霰弹	1	霰弹
// 0x08-0x1F	保留
// 0x10	杀伤榴弹	1	85mm坦克杀伤榴弹	火箭弹、炮弹类
//     2	125mm坦克杀伤榴弹
//     3	120mm坦克杀伤榴弹
//     4	105坦克杀伤榴弹
//     5	100坦克杀伤榴弹
//     6	73滑膛炮杀伤榴弹
//     7	35mm杀伤榴弹
//     8	40mm杀伤榴弹
// 0x11	破甲杀伤弹	1	73mm破甲杀伤弹
// 0x12	燃烧弹/杀伤燃烧弹	保留
// 0x13	空炸杀伤弹	保留
// 0x14	破甲弹	1	85mm坦克破甲弹
//     2	125mm坦克破甲弹
//     3	120mm坦克破甲弹
//     4	105坦克破甲弹
//     5	100坦克破甲弹
//     6	120mm破甲弹
//     7	82mm破甲弹
//     8	40mm破甲弹
// 0x15	攻坚弹	1	80mm攻坚弹
// 0x16	云爆弹	1	93mm云爆弹
//     2	80mm云爆弹
// 0x17	杀伤爆破燃烧弹	1	80mm杀伤爆破燃烧弹
// 0x18	杀伤爆破榴弹	1	73mm杀伤爆破榴弹
// 0x19	破甲燃烧弹	保留
// 0x1A	穿甲弹	1	85mm坦克穿甲弹
//     2	125mm坦克穿甲弹
//     3	120mm坦克穿甲弹
//     4	105坦克穿甲弹
//     5	100坦克穿甲弹
//     6	30mm穿甲弹
// 0x1B	碎甲弹	保留
// 0x1C	多用途弹	1	120mm多用途弹
// 0x1D-0x1F	保留
// 0x30	高炮穿甲弹	1	25mm高炮穿甲弹	炮弹（高炮类）
//     2	35mm高炮穿甲弹
//     3	37mm高炮穿甲弹
//     4	57mm高炮穿甲弹
//     5	100mm高炮穿甲弹
// 0x31	高炮爆破榴弹	保留
// 0x32	高炮穿甲爆破燃烧弹	保留
// 0x33	高炮多束定向预制破片弹	保留
// 0x34-0x3f	保留
// 0x40	人在回路导弹	1	红箭73导弹	导弹类
//     2	红箭8导弹
//     3	红箭9导弹
//     4	红箭10导弹
//     5	前卫一导弹
//     6	125mm坦克炮射导弹
// 0x41	发射后不管导弹	1	红缨5防空导弹
//     2	红缨6防空导弹
// 0x42-0x4f	保留
// 0x50	非致命性弹药	1	催泪弹
// 0x51-0x6f	保留
// 0x70	火炮炮弹	1	82mm杀爆榴弹	炮弹（间瞄火炮）
//     2	100mm杀爆榴弹
//     3	105mm杀爆榴弹
//     4	120mm杀爆榴弹
//     5	122mm杀爆榴弹
//     6	130mm杀爆榴弹
//     7	152mm杀爆榴弹
//     8	155mm杀爆榴弹
//     9	203mm杀爆榴弹
//     10	240mm杀爆榴弹
//     11	152mm末制导炮弹
// 0x71	火箭弹	1	122mm火箭弹
//     2	107mm火箭弹
//     3	雷霆2000火箭弹
//     4	工蜂-6火箭弹
//     5	300mm杀爆弹
//     6	300mm子母弹
//     7	300mm末敏弹
//     8	300mm云爆弹
// 0x72	火箭布雷弹	1	火箭布雷弹（反坦克雷）
//     2	火箭布雷弹（防步兵雷）
// 0x73	火箭爆破弹	1	火箭爆破弹
// 0x74	地雷	1	防单兵地雷
//     2	防坦克地雷
//     3	混合雷场
// 0x75	保留
// 0x76	化学弹	1	沙林
//     2	梭曼
//     3	维埃克斯
//     4	氢氰酸
//     5	芥子气
//     6	芥路混合
//     7	胶状芥子气
//     8	胶状芥路
// 0x77	烟雾弹	1	烟雾弹
// 0x78	测试弹	0
// 0x79	测距	0
// 0x7A	裁决	0
// 0x7B-0xFF	保留
// e)	其他要求：当用于激光编码时，弹药类型（A_Type）最高位（bit7）保留，为0。
typedef uint8_t A_Subtype;
A_Subtype read_A_Subtype(uint8_t *buf);
void write_A_Subtype(uint8_t *buf, A_Subtype *val);

// 5.3　裁决命令字（AC_Character）
// a)	描述：主控或调理终端对实体的裁决命令。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表2
typedef uint8_t AC_Character;
AC_Character read_AC_Character(uint8_t *buf);
void write_AC_Character(uint8_t *buf, AC_Character *val);

// 5.4　角度1（Angle1）
// a)	描述：表示角度（单位：密位）。
// b)	长度：2BYTE
// c)	格式：HEX
// d)	取值：0-6000
typedef uint16_t Angle1;
Angle1 read_Angle1(uint8_t *buf);
void write_Angle1(uint8_t *buf, Angle1 *val);

// 5.5　角度2（Angle2）
// a)	描述：表示角度（单位：度）。
// b)	长度：2BYTE
// c)	格式：HEX（补码）
// d)	取值：-360–360
typedef uint16_t Angle2;
Angle2 read_Angle2(uint8_t *buf);
void write_Angle2(uint8_t *buf, Angle2 *val);

// 5.6　角度3（Angle3）
// a)	描述：表示角度（单位：度）。
// b)	长度：BYTE
// c)	格式：HEX（补码）
// d)	取值：-90–90
typedef uint8_t Angle3;
Angle3 read_Angle3(uint8_t *buf);
void write_Angle3(uint8_t *buf, Angle3 *val);

// 5.7　人员姿态状态字（BP_Character）
// a)	描述：用位表示单兵的姿态。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表3
// 表3　人员姿态状态字说明表
// 取值	说  明	备注
// 0	保留
// 1	立姿
// 2	卧姿
// 3	跪姿
// 3-255	保留
typedef uint8_t BP_Character;
BP_Character read_BP_Character(uint8_t *buf);
void write_BP_Character(uint8_t *buf, BP_Character *val);

// 5.8　身份标识字（BR_Attribute）
// a)	描述：描述参与交战的实体身份。
// b)	长度：2BIT
// c)	格式：HEX
// d)	取值：见表4
// 表4　身份标识字说明表
// 取值	说明	备注
// 00	模拟蓝军	蓝
// 01	受训部队	红
// 10	群众	黄
// 11	调理人员或红十字医务人员	白
typedef uint8_t BR_Attribute;
BR_Attribute read_BR_Attribute(uint8_t *buf);
void write_BR_Attribute(uint8_t *buf, BR_Attribute *val);

// 5.9　综合伤势（C_Idegree）
// a)	描述：与实体类型T_Type组合使用，用于描述该类设备的当前综合毁伤等级。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表5
// 表5　综合伤势说明表
// 实体类型	C_Idegree	伤势等级	备注
// 装甲类（0x01-0x12）	0	击毁	K级
// 	1	机动和火力能力均丧失	M_F级
// 	2	丧失机动能力	M级
// 	3	丧失火力能力	F级
// 	4	防护装甲重度受损
// 	5	防护装甲中度受损
// 	6	防护装甲轻度受损
// 	7	正常
// 单兵类（0x13）	0	死亡
// 	1-5	危重伤
// 	6-9	重度伤
// 	10-11	中度伤
// 	12	轻伤
// 	13	正常
// 其他类	0	击毁
// 	1	击伤
// 	2	正常
typedef uint8_t C_Idegree;
C_Idegree read_C_Idegree(uint8_t *buf);
void write_C_Idegree(uint8_t *buf, C_Idegree *val);

// 5.10　人员救治结果标识字（CE_Character）
// a)	描述：表示人员被救治后的效果。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表6
// 表6　人员救治结果标识字说明表
// 取值	说明	备注
// 0	保留
// 1	救治得当，恢复战斗
// 2	救治成功，不再恶化
// 3	救治失败，伤情恶化
// 4	救治失败，死亡
// 5-255	保留
typedef uint8_t CE_Character;
CE_Character read_CE_Character(uint8_t *buf);
void write_CE_Character(uint8_t *buf, CE_Character *val);

// 5.11　救治方式标识字（CM_Character）
// a)	描述：医护人员救治方式。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表7
// 表7　救治方式标识字说明表
// 取值	说明	备注
// 0	保留
// 1	自救
// 2	互救
// 3	救护人员现场救治
// 4	救护人员急救后送
// 5-255	保留
typedef uint8_t CM_Character;
CM_Character read_CM_Character(uint8_t *buf);
void write_CM_Character(uint8_t *buf, CM_Character *val);

// 5.12　数据帧长度（D_Len）
// a)	描述：表示数据帧的长度。
// b)	长度：1BYTE
// c)	格式：HEX
typedef uint8_t D_Len;
D_Len read_D_Len(uint8_t *buf);
void write_D_Len(uint8_t *buf, D_Len *val);

// 5.13　数据帧头（Data_Frame）
// a)	描述：表示数据帧的头，不同数据使用不同帧头。
// b)	长度：2BYTE
// c)	格式：HEX
// 9.1 演习参数设置指令（非单兵）（0xC1，0xF1）
// 9.2 演习参数设置指令（单兵）（0xC1，0xF2）
// 9.3 上传周期设置指令（0xC1，0xF3）
// 9.4 弹药/物资补给指令（0xC1，0xF4）
// 9.5 主控系统裁决指令（0xC1，0xF5）
// 9.6 仿真模拟打击指令（0xC1，0xF6）
// 9.7 进入/离开核化生沾染区通报指令（0xC1，0xF7）
// 9.8 炸点显示器触发控制指令（0xC1，0xF8）
// 9.9 侦察/校射信息下发指令（炮位侦察雷达和炮兵侦察）（0xC1，0xF9）
// 9.10 火力点参数设置指令（0xC1，0xFA）
// 9.11 侦察信息下发指令（工程侦察）（0xC1，0xFB）
// 9.12 雷区控制指令（0xC1，0xFC）
// 9.13 事件接收应答指令（0xC1，0xFD）
// 10 上行指令（方向：实体->主控系统）
// 10.1 入网请求指令（0xA8，0x91）
// 10.2 状态上传指令（0xA8，0x92）
// 10.3 绑定人员（装备）的状态上传指令（主控）（0xA8，0x94）
// 10.4 事件上传指令（0xA8，0x93）
// 10.5 绑定人员（装备）的事件上传指令（主控）（0xA8，0x95）
typedef uint16_t Data_Frame;
Data_Frame read_Data_Frame(uint8_t *buf);
void write_Data_Frame(uint8_t *buf, Data_Frame *val);

// 5.14　方位（Direction）
// a)	描述：表示前、后、左、右、上、下6个方位。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表8
// 表8　方位说明表
// 取值	说明	备注
// 0	保留
// 1	前
// 2	后
// 3	左
// 4	右
// 5	上
// 6	下
// 7-255	保留
typedef uint8_t Direction;
Direction read_Direction(uint8_t *buf);
void write_Direction(uint8_t *buf, Direction *val);

// 5.15　状态类型（D_Type）
// a)	描述：表示状态数据类型。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表9
// 表9　状态类型说明表
// 取值	说明	备注
// 01 通用状态数据（非单兵）
// 02 单兵状态数据
// 03 炸点显示器状态数据
// 04 绑定人员（装备）基础数据
// F0 自定义状态（JSON格式）
// …	…
typedef uint8_t D_Type;
D_Type read_D_Type(uint8_t *buf);
void write_D_Type(uint8_t *buf, D_Type *val);

// 5.16　事件类型（E_Type）
// | 0x01 // 演习参数设置成功事件（非单兵）
// | 0x02 // 演习参数设置成功事件（单兵）
// | 0x03 // 上传周期设置成功事件
// | 0x04 // 弹药（物资）分发/补给事件
// | 0x05 // 火力毁伤事件
// | 0x06 // 核化生毁伤事件
// | 0x07 // 导控裁决事件
// | 0x08 // 进入/离开核化生沾染区事件
// | 0x09 // 核化生防护事件
// | 0x0A // 光电威胁事件
// | 0x0B // 烟雾/诱导防护事件
// | 0x0C // 数字化火炮发射事件
// | 0x0D // 非数字化火炮发射事件
// | 0x0E // 炮位侦察校射雷达侦察/校射事件
// | 0x0F // 直瞄重武器发射事件
// | 0x10 // 单兵布雷事件
// | 0x11 // 单兵排雷事件
// | 0x12 // 火箭布雷事件
// | 0x13 // 扫雷车扫雷事件
// | 0x14 // 火箭扫雷事件
// | 0x15 // 人员伤势恶化事件
// | 0x16 // 单兵救护事件
// | 0x17 // 战场障碍设置事件
// | 0x18 // 火力点设置事件
// | 0x19 // 状态自动恢复事件
// | 0x1A // 工程侦察事件
// | 0x1B // 装备抢修事件
// | 0x1C // 演习模式转换事件
// | 0x1D // 单兵武器绑定事件
// | 0x1E // 开关机事件
// | 0x1F // 违规开始事件
// | 0x20 // 持续性违规结束事件
typedef uint8_t E_Type;
E_Type read_E_Type(uint8_t *buf);
void write_E_Type(uint8_t *buf, E_Type *val);

// 5.17　方案编号（EP_Num）
// a)	描述：表示配置方案的编号。
// b)	长度：3BYTE
// c)	格式：HEX
typedef uint24_t EP_Num;
EP_Num read_EP_Num(uint8_t *buf);
void write_EP_Num(uint8_t *buf, EP_Num *val);

// 5.18　事件序列号（ES_Num）
// a)	描述：表示事件序列号。
// b)	长度：2BYTE
// c)	格式：HEX
typedef uint16_t ES_Num;
ES_Num read_ES_Num(uint8_t *buf);
void write_ES_Num(uint8_t *buf, ES_Num *val);

// 5.19　进入/离开危险地域标识字（ELR_Character）
// a)	描述：识别进入或离开某一危险地域（雷场、核化生沾染区等）。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表11
// 表11　进入/离开危险地域识别字说明表
// 取值	说明	备注
// 0	保留
// 1	进入
// 2	离开
// 3-255	保留
typedef uint8_t ELR_Character;
ELR_Character read_ELR_Character(uint8_t *buf);
void write_ELR_Character(uint8_t *buf, ELR_Character *val);

// 5.20　引信类型（Fuse_Type）
// a)	描述：表示弹药的引信类型。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表12
// 表12　引信类型说明表
// 取值	说明	备注
// 0	保留
// 1	短延期引信
// 2	延期引信
// 3	瞬发引信
// 4	时间引信
// 5	空炸引信
// 6-255	保留
typedef uint8_t Fuse_Type;
Fuse_Type read_Fuse_Type(uint8_t *buf);
void write_Fuse_Type(uint8_t *buf, Fuse_Type *val);

// 5.21　装药号（G_Num）
// a)	描述：表示间瞄弹药的装药号。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表13
// 表13　装药号说明表
// 取值	说明	备注
// 0	0号装药
// 1	1号装药
// 2	2号装药
// 3	3号装药
// 4	4号装药
// 5	5号装药
// 6	6号装药
// 7-255	保留
typedef uint8_t G_Num;
G_Num read_G_Num(uint8_t *buf);
void write_G_Num(uint8_t *buf, G_Num *val);

// 5.22　高斯坐标（G_Position）
// a)	描述：设备高斯坐标X、高斯坐标Y和高斯坐标高程。
// b)	长度：9BYTE
// c)	格式：HEX（补码）
// d)	取值：见表14
// 表14　高斯坐标说明表
// 字节序号	内容	备注
// 1-3	高斯坐标X
// 4-7	高斯坐标Y
// 8-9	坐标高程
typedef uint72_t G_Position;
G_Position read_G_Position(uint8_t *buf);
void write_G_Position(uint8_t *buf, G_Position *val);

// 5.23　命中伤势（H_Idegree）
// a)	描述：与实体类型T_Type组合使用，描述实体被命中后导致的具体毁伤等级。
// b)	长度：1BYTE
// c)	编码：HEX
// d)	取值：见表15
typedef uint8_t H_Idegree;
H_Idegree read_H_Idegree(uint8_t *buf);
void write_H_Idegree(uint8_t *buf, H_Idegree *val);

// 5.24　命中次数（H_Num）
// a)	描述：表示实体被击中的总次数。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：0-255
typedef uint8_t H_Num;
H_Num read_H_Num(uint8_t *buf);
void write_H_Num(uint8_t *buf, H_Num *val);

// 5.25　命中部位（H_Part）
// a)	描述：与实体类型T_Type组合使用，描述实体被命中的部位，部位分单一部位和多部位。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表15
typedef uint8_t H_Part;
H_Part read_H_Part(uint8_t *buf);
void write_H_Part(uint8_t *buf, H_Part *val);

// 5.26　伤类（H_Type）
// a)	描述：与实体类型T_Type组合使用，描述实体被命中后导致的受伤类型。
// b)	长度：1BYTE
// c)	编码：HEX
// d)	取值：见表15
typedef uint8_t H_Type;
H_Type read_H_Type(uint8_t *buf);
void write_H_Type(uint8_t *buf, H_Type *val);

// 5.27　违规事件子类型（IE_Type）
// a)	描述：表示违规操作的类型。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表16
// 表16　违规事件子类型说明表
// 取值	说明	备注
// 0	保留
// 1	遮挡探头作弊
// 2	探头未连接
// 3	警灯未连接
// 4	二次毁伤装置未连接
// 5	发烟罐未安装
// 6	声光弹未安装
// 7	击毁/死亡后运动
// 8	丧失机动能力后运动
// 9	单兵头盔未开机
// 10	违规关机
// 11	火力点移动
// 12-255	保留
typedef uint8_t IE_Type;
IE_Type read_IE_Type(uint8_t *buf);
void write_IE_Type(uint8_t *buf, IE_Type *val);

// 5.28　弹药 (物资)补给标识字（IO_Character）
// a)	描述：标识物资(弹药)补给或取出操作。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表17
// 表17　物资(弹药)补给标识字说明表
// 取值	说明	备注
// 0	保留
// 1	弹药/物资被取出（数量减少）
// 2	弹药/物资得到补给（数量增加）
// 3-255	保留
typedef uint8_t IO_Character;
IO_Character read_IO_Character(uint8_t *buf);
void write_IO_Character(uint8_t *buf, IO_Character *val);

// 5.29　IP地址（IP_Address）
// a)	描述：表示IP地址。
// b)	长度：4BYTE
// c)	格式：HEX
typedef uint32_t IP_Address;
IP_Address read_IP_Address(uint8_t *buf);
void write_IP_Address(uint8_t *buf, IP_Address *val);

// 5.30　密钥（Key）
// a)	描述：用于判别设备是否为系统合法用户的授权码。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表18
// 表18　密钥说明表
// 取值	说明	备注
// 0	无密钥
// 1-127	Key
// 128-255	保留
typedef uint8_t Key;
Key read_Key(uint8_t *buf);
void write_Key(uint8_t *buf, Key *val);

// 5.31　经纬度坐标（L_Position）
// a)	描述：设备经度、纬度、高度以及定位状态。
// b)	长度：12BYTE
// c)	格式：BCD
// d)	取值：见表19
// 表19　经纬度坐标说明表
// 字节序号	内容	位段	备注
// 1	经度	bit7	1：已定位；0：未定位
//   bit6-bit4	保留
//   bit3-bit0	度的百位
// 2		bit7-bit4	度的十位
//   bit3-bit0	度的个位
// 3		bit7-bit4	分的十位
//   bit3-bit0	分的个位
// 4		bit7-bit4	分的十分位
//   bit3-bit0	分的百分位
// 5		bit7-bit4	分的千分位
//   bit3-bit0	分的万分位
// 6	纬度	bit7-bit4	度的十位
//   bit3-bit0	度的个位
// 7		bit7-bit4	分的十位
//   bit3-bit0	分的个位
// 8		bit7-bit4	分的十分位
//   bit3-bit0	分的百分位
// 9		bit7-bit4	分的千分位
//   bit3-bit0	分的万分位
// 10	高度（单位：米）	bit7	0：+；1：-
//   bit3-bit0	千位
// 11		bit7-bit4	百位
//   bit3-bit0	十位
// 12		bit7-bit4	个位
//   bit3-bit0	十分位
typedef uint96_t L_Position;
L_Position read_L_Position(uint8_t *buf);
void write_L_Position(uint8_t *buf, L_Position *val);

// 5.32　链接标识字（L_Character）
// a)	描述：表示链接状态。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表20
// 表20　链接标识字说明表
// 取值	说明	备注
// 0	保留
// 1	链接，欠电
// 2	链接，不欠电
// 3	断链
// 4-255	保留
typedef uint8_t L_Character;
L_Character read_L_Character(uint8_t *buf);
void write_L_Character(uint8_t *buf, L_Character *val);

// 5.33　光电威胁类型（LT_Type）
// a)	描述：表示实体受到的光电威胁类型。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表21
// 表21　光电威胁类型说明表
// 取值	说明	备注
// 0	保留
// 1	测距激光威胁
// 2	照射激光威胁
// 3-255	保留
typedef uint8_t LT_Type;
LT_Type read_LT_Type(uint8_t *buf);
void write_LT_Type(uint8_t *buf, LT_Type *val);

// 5.34　物资类型（M_Type）
// a)	描述：表示物资的类别。
// b)	长度：1BYTE
// c)	格式：HEX
typedef uint8_t M_Type;
M_Type read_M_Type(uint8_t *buf);
void write_M_Type(uint8_t *buf, M_Type *val);

// 5.35　物资子类型（M_Subtype）
// a)	描述：表示物资的类别。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表22
// 表22　物资类型说明表
// M_Type取值	物资类型	M_Subtype取值	物资子类型	备注
// 1	燃油	1	柴油
//     2	汽油
//     3	航空燃油
// 2	军需物资	1	军被
//     2	帐篷
//     3	纱布
typedef uint8_t M_Subtype;
M_Subtype read_M_Subtype(uint8_t *buf);
void write_M_Subtype(uint8_t *buf, M_Subtype *val);

// 5.36　扫雷方式标识字（MCM_Character）
// a)	描述：表示扫雷车扫雷方式。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表23
// 表23　扫雷方式标识字说明表
// 取值	说明	备注
// 0	保留
// 1	犁扫
// 2	磁扫
// 3	压发扫雷
// 4-255	保留
typedef uint8_t MCM_Character;
MCM_Character read_MCM_Character(uint8_t *buf);
void write_MCM_Character(uint8_t *buf, MCM_Character *val);

// 5.37　核化生防护事件子类型（NCBP_Type）
// a)	描述：表示实体实施的核化生防护类型。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表24
// 表24　核化生防护事件子类型说明表
// 取值	说明	备注
// 0	保留
// 1	打开三防装置
// 2	关闭三防装置
// 3	佩戴防毒面具
// 4	摘下防毒面具
// 5-255	保留
typedef uint8_t NCBP_Type;
NCBP_Type read_NCBP_Type(uint8_t *buf);
void write_NCBP_Type(uint8_t *buf, NCBP_Type *val);

// 5.38　核化生标识字（NCBT_Type）
// a)	描述：表示核化生威胁、防护的具体类型
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表25
// 表25　核化生标识字类型表
// 取值	说明	备注
// 0	保留
// 1	核
// 2	化
// 3	生
// 4-255	保留	`
typedef uint8_t NCBT_Type;
NCBT_Type read_NCBT_Type(uint8_t *buf);
void write_NCBT_Type(uint8_t *buf, NCBT_Type *val);

// 5.39　数值1（Num1）
// a)	描述：表示数量。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值范围：0 –255
typedef uint8_t Num1;
Num1 read_Num1(uint8_t *buf);
void write_Num1(uint8_t *buf, Num1 *val);

// 5.40　数值2（Num2）
// a)	描述：表示数量。
// b)	长度：2BYTE
// c)	格式：HEX
// d)	取值范围：0 –65535
typedef uint16_t Num2;
Num2 read_Num2(uint8_t *buf);
void write_Num2(uint8_t *buf, Num2 *val);

// 5.41　数值3（Num3）
// a)	描述：表示数量。
// b)	长度：3BYTE
// c)	格式：HEX
// d)	取值范围：0–16777215
typedef uint32_t Num3;
Num3 read_Num3(uint8_t *buf);
void write_Num3(uint8_t *buf, Num3 *val);

// 5.42　开/关机操作标识字（PO_Character）
// a)	描述：表示开机或关机操作。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表26
// 表26　开机/关机操作
// 取值	说明	备注
// 0	保留
// 1	不欠电关机
// 2	欠电关机
// 3	开机
// 4-255	保留
typedef uint8_t PO_Character;
PO_Character read_PO_Character(uint8_t *buf);
void write_PO_Character(uint8_t *buf, PO_Character *val);

// 5.43　端口号（Port_Num）
// a)	描述：表示端口号。
// b)	长度：2BYTE
// c)	格式：HEX
// d)	取值：0-65535
typedef uint16_t Port_Num;
Port_Num read_Port_Num(uint8_t *buf);
void write_Port_Num(uint8_t *buf, Port_Num *val);

// 5.44　压强（Pressure）
// a)	描述：表示压强（单位：毫米汞柱高）。
// b)	长度：2BYTE
// c)	格式：HEX
// d)	取值：0-65535
typedef uint16_t Pressure;
Pressure read_Pressure(uint8_t *buf);
void write_Pressure(uint8_t *buf, Pressure *val);

// 5.45　设备编号（PID）
// a)	描述：与实体类型（T_Type）、实体子类型（T_Subtype）和单位代字（RID）组合使用，表示某类实体的设备编号。
// b)	长度：2BYTE
// c)	格式：HEX
typedef uint16_t PID;
PID read_PID(uint8_t *buf);
void write_PID(uint8_t *buf, PID *val);

// 5.46　射程（Range）
// a)	描述：表示弹药的射程（单位：50米）。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值： 0-255
typedef uint8_t Range;
Range read_Range(uint8_t *buf);
void write_Range(uint8_t *buf, Range *val);

// 5.47　单位代字（RID）
// a)	描述：终端设备使用单位编号。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表27
// 表27　单位代字说明表
// 取值	说明	备注
// 0	保留
// 1	朱日和基地
// 2	三界基地
// 3	XXX单位
// 4	XXX单位
// 5	XXX单位
// 6	XXX单位
// …	…
// 128-255	保留
typedef uint8_t RID;
RID read_RID(uint8_t *buf);
void write_RID(uint8_t *buf, RID *val);

// 5.48　火炮射击模式标识字（RM_Character）
// a)	描述：表示火炮的射击模式。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表28
// 表28　射界模式说明表
// 取值	说明	备注
// 0	保留
// 1	高射界射击
// 2	低射界射击
// 3-255	保留
typedef uint8_t RM_Character;
RM_Character read_RM_Character(uint8_t *buf);
void write_RM_Character(uint8_t *buf, RM_Character *val);

// 5.49　侦察/校射模式标识字（SAM_Character）
// a)	描述：用于识别侦察/校射雷达的当前实体状态字1。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表29
// 表29　侦察/校射模式说明表
// 取值	说明	备注
// 0	保留
// 1	侦察
// 2	校射
// 3-255	保留
typedef uint8_t SAM_Character;
SAM_Character read_SAM_Character(uint8_t *buf);
void write_SAM_Character(uint8_t *buf, SAM_Character *val);

// 5.50　光电防护事件子类型（SIP_Type）
// a)	描述：表示实体实施烟雾/诱导防护事件的具体类型。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表30
// 表30　光电防护事件子类型说明表
// 取值	说明	备注
// 0	保留
// 1	烟雾弹防护
// 2	激光诱偏防护
// 3-255	保留
typedef uint8_t SIP_Type;
SIP_Type read_SIP_Type(uint8_t *buf);
void write_SIP_Type(uint8_t *buf, SIP_Type *val);

// 5.51　开/停操作标识字（SS_Character）
// a)	描述：用于识别实体开始工作和停止工作操作动作。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表31
// 表31　开/停操作标识字说明表
// 取值	说明	备注
// 0	保留
// 1	开始
// 2	停止
// 3-255	保留
typedef uint8_t SS_Character;
SS_Character read_SS_Character(uint8_t *buf);
void write_SS_Character(uint8_t *buf, SS_Character *val);

// 5.52　设置结果标识字（SR_Character）
// a)	描述：表示设置结果。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表32
// 表32　设置结果说明表
// 取值	说明	备注
// 0	失败
// 1	成功
// 2-255	保留
typedef uint8_t SR_Character;
SR_Character read_SR_Character(uint8_t *buf);
void write_SR_Character(uint8_t *buf, SR_Character *val);

// 5.53　强度等级（Strength）
// a)	描述：表示核辐射、化学和生物污染等的强度等级值。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：0-100
typedef uint8_t Strength;
Strength read_Strength(uint8_t *buf);
void write_Strength(uint8_t *buf, Strength *val);

// 5.54　厚度（Thickness）
// e)	描述：表示物体的厚度。
// f)	长度：1BYTE
// g)	格式：HEX
// h)	取值：见表33
// 表33　厚度说明表
// 取值	说明	备注
// 0-19	取值*1mm	范围：0-19mm
// 20-255	（取值-19）*10mm	范围：20mm-2360mm
typedef uint8_t Thickness;
Thickness read_Thickness(uint8_t *buf);
void write_Thickness(uint8_t *buf, Thickness *val);

// 5.55　时长选择(TSpan_Select)
// a)	描述：与T_Span1、T_Span2、T_Span3、T_Span4、T_Span5配合使用，表示选择的时长。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表34
typedef uint8_t TSpan_Select;
TSpan_Select read_TSpan_Select(uint8_t *buf);
void write_TSpan_Select(uint8_t *buf, TSpan_Select *val);

typedef struct {
  float valueInSecond;
} T_SpanSeconds;

// 5.56　时长1（T_Span1）
// a)	描述：表示一段时间（单位：10毫秒）。 (返回值为秒钟)
// b)	长度：1BYTE
// c)	格式：HEX（补码）
typedef T_SpanSeconds T_Span1;
T_Span1 read_T_Span1(uint8_t *buf);
void write_T_Span1(uint8_t *buf, T_Span1 *val);

// 5.57　时长2（T_Span2）
// a)	描述：表示一段时间。 (返回值为秒钟)
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表35
// 表35　时长2说明表
// 取值	说明	备注
// 0-9	取值*0.1秒	范围：0.1秒-0.9秒
// 10-69	（取值-9）*1秒	范围：1秒-60秒
// 70-255	保留
typedef T_SpanSeconds T_Span2;
T_Span2 read_T_Span2(uint8_t *buf);
void write_T_Span2(uint8_t *buf, T_Span2 *val);

// 5.58　时长3（T_Span3）
// a)	描述：表示一段时间（单位：秒钟）。(返回值为秒钟)
// b)	长度：1BYTE
// c)	格式：HEX
typedef T_SpanSeconds T_Span3;
T_Span3 read_T_Span3(uint8_t *buf);
void write_T_Span3(uint8_t *buf, T_Span3 *val);

// 5.59　时长4（T_Span4）
// a)	描述：表示一段时间（单位：分钟）。(返回值为秒钟)
// b)	长度：1BYTE
// c)	格式：HEX
typedef T_SpanSeconds T_Span4;
T_Span4 read_T_Span4(uint8_t *buf);
void write_T_Span4(uint8_t *buf, T_Span4 *val);

// 5.60　时长5（T_Span5）
// a)	描述：表示一段时间（单位：小时）。(返回值为秒钟)
// b)	长度：1BYTE
// c)	格式：HEX
typedef T_SpanSeconds T_Span5;
T_Span5 read_T_Span5(uint8_t *buf);
void write_T_Span5(uint8_t *buf, T_Span5 *val);

// 配合T_SpanSelect使用
typedef T_SpanSeconds T_Span12345;
T_Span12345 read_T_Span12345(uint8_t *buf);
void write_T_Span12345(uint8_t *buf, T_Span12345 *val);

// 5.61　序列号（T_SN）
// a)	描述：表示数据帧的序号。
// b)	长度：1BYTE
// c)	格式：HEX
typedef uint8_t T_SN;
T_SN read_T_SN(uint8_t *buf);
void write_T_SN(uint8_t *buf, T_SN *val);

// 5.62　时刻1（Time1）
// a)	描述：该数据表示某一时刻。
// b)	长度：6BYTE
// c)	编码：HEX
// d)	取值：见表36
// 表36　时刻1说明表
// 字节序号	内容	备注
// 1	年
// 2	月
// 3	日
// 4	时
// 5	分
// 6	秒
typedef struct {
  uint8_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t minute;
  uint8_t second;
} Time1;
Time1 read_Time1(uint8_t *buf);
void write_Time1(uint8_t *buf, Time1 *val);

// 5.63　时刻2（Time2）
// a)	描述：该数据表示某一时刻。
// b)	长度：3BYTE
// c)	编码：HEX
// d)	取值：见表37
// 表37　时刻2说明表
// 字节序号	内容	备注
// 1	时
// 2	分
// 3	秒
typedef uint24_t Time2;
Time2 read_Time2(uint8_t *buf);
void write_Time2(uint8_t *buf, Time2 *val);

// 5.64　实体类型（T_Type）
// a)	描述：表示系统实体类别，其中模拟设备类型用于表示该设备所模拟的武器装备或战场目标类别。
// b)	格式：HEX
// c)	长度：1BYTE

// T_Type取值	类型名称
// 0x01	坦克（非火控模拟）
// 0x02	坦克（嵌入式模拟）
// 0x03	步战车
// 0x04	装甲输送车
// 0x05	突击车
// 0x06	突击炮
// 0x07	反坦克导弹系统
// 0x08-0x0F	保留
// 0x10	牵引火炮
// 0x11	自行火炮（非数字化）
// 0x12	自行火炮（数字化）
// 0x13	火箭炮
// 0x14	迫击炮
// 0x15	炮兵侦察
// 0x16-0x1F	保留
// 0x20	高炮（有火控）
// 0x21	高炮（无火控）
// 0x22	防空导弹系统
// 0x23	防空雷达系统
// 0x24	防空指挥系统
// 0x25	单兵防空导弹
// 0x26-0x2F	保留
// 0x30	人员
// 0x31	自动步枪
// 0x32	班用机枪
// 0x33	狙击步枪
// 0x34	微声冲锋枪
// 0x35	霰弹枪
// 0x36	手枪
// 0x37	单兵榴弹发射器
// 0x38	重机枪
// 0x39	高射机枪
// 0x3A	光学侦察设备
// 0x3B-0x3F	保留
// 0x40	单兵火箭
// 0x41	单兵反坦克火箭
// 0x42	单兵反坦克导弹
// 0x43	地雷
// 0x44	单兵排雷器
// 0x45	手雷
// 0x46	简易爆炸物
// 0x47	卫勤救护装备
// 0x48	调理设备
// 0x49-0x4F	保留
// 0x50	通用车辆
// 0x51	指挥车辆
// 0x52	通信车辆
// 0x53	弹药输送车
// 0x54	油料运输车
// 0x55	火箭布雷车
// 0x56	工程侦察车
// 0x57	轻型破障车
// 0x58	综合扫雷车
// 0x59	重型机械化桥
// 0x5A	抢修车辆
// 0x5B	工程作业车辆
// 0x5C-0x5F	保留
// 0x60	直升机
// 0x61	无人机
// 0x62	战斗机/轰炸机
// 0x63	电子对抗
// 0x64	工事设施
// 0x65	战场障碍
// 0x66-0xFE	保留
// 0xFF	主控台
typedef uint8_t T_Type;
T_Type read_T_Type(uint8_t *buf);
void write_T_Type(uint8_t *buf, T_Type *val);

// 5.65　实体子类型（T_Subtype）
// a)	描述：
// 表示系统实体子类别，其中模拟设备子类型与T_Type组合使用，用于描述该类设备所模拟武器装备或战场目标的子类别。
// b)	格式：HEX
// c)	长度：1BYTE
// d)	取值：见表38
// T_Type取值	类型名称	T_Subtype取值	子类型名称
// 0x01	坦克（非火控模拟）	0x01	96式坦克
// 0x01	坦克（非火控模拟）	0x02	88B式坦克
// 0x01	坦克（非火控模拟）	0x03	62式坦克
// 0x01	坦克（非火控模拟）	0x04	59式坦克
// 0x01	坦克（非火控模拟）	0x05	M60A3坦克
// 0x01	坦克（非火控模拟）	0x06	63A式坦克
// 0x01	坦克（非火控模拟）	0x07	59改式坦克
// 0x01	坦克（非火控模拟）	0x08	M1A1坦克
// 0x01	坦克（非火控模拟）	0x09	99式坦克
// 0x01	坦克（非火控模拟）	0x0a	96A式坦克
// 0x02	坦克（嵌入式模拟）	0x01	96A嵌入式坦克
// 0x03	步战车	0x01	86式步战车
// 0x03	步战车	0x02	92轮式步战车
// 0x03	步战车	0x03	04式步战车
// 0x03	步战车	0x04	05式步战车
// 0x03	步战车	0x05	05式两栖装甲步兵战车
// 0x03	步战车	0x06	08式轮式步战车
// 0x04	装甲输送车	0x01	63C式装甲输送车
// 0x04	装甲输送车	0x02	001型两栖装甲输送车
// 0x04	装甲输送车	0x03	89式装甲输送车
// 0x04	装甲输送车	0x04	10式装甲输送车
// 0x05	突击车	0x01	05式突击车
// 0x05	突击车	0x02	11式突击车
// 0x05	突击车	0x03	03式突击车
// 0x05	突击车	0x04	05式两栖装甲突击车
// 0x06	突击炮	0x01	100mm轮式突击炮
// 0x06	突击炮	0x02	120mm反坦克滑膛炮
// 0x07	反坦克导弹系统	0x01	红箭9反坦克导弹系统
// 0x07	反坦克导弹系统	0x02	红箭10反坦克导弹系统
// 0x08-0x0F	保留	/	/
// 0x10	牵引火炮	0x01	PL83/96式122榴弹炮
// 0x10	牵引火炮	0x02	PL59-1式130加农炮
// 0x10	牵引火炮	0x03	PL66式152加榴炮
// 0x11	自行火炮（非数字化）	0x01	PLZ89式122榴弹炮
// 0x11	自行火炮（非数字化）	0x02	PLZ83式152加榴炮
// 0x12	自行火炮（数字化）	0x01	PLZ05式155加榴炮
// 0x12	自行火炮（数字化）	0x02	PLZ07式122榴弹炮
// 0x12	自行火炮（数字化）	0x03	PLC09式122榴弹炮
// 0x12	自行火炮（数字化）	0x04	PLL05式120mm自行迫榴炮
// 0x12	自行火炮（数字化）	0x05	两栖自行榴弹炮
// 0x13	火箭炮	0x01	PHL81式122火箭炮
// 0x13	火箭炮	0x02	PHZ89式122火箭炮
// 0x13	火箭炮	0x03	PHZ05式300mm远程火箭炮
// 0x14	迫击炮	0x01	89式82mm迫击炮
// 0x14	迫击炮	0x02	89式100mm迫击炮
// 0x14	迫击炮	0x03	120mm迫击炮
// 0x14	迫击炮	0x04	89式60mm迫击炮
// 0x14	迫击炮	0x05	82mm速射迫击炮
// 0x15	炮兵侦察	0x01	炮位侦察雷达
// 0x15	炮兵侦察	0x02	炮兵侦察车
// 0x15	炮兵侦察	0x03	炮兵活动目标侦察雷达
// 0x15	炮兵侦察	0x04	炮兵侦察用模拟炸点指示器
// 0x16-0x1F	保留	/	/
// 0x20	高炮（有火控）	0x01	PZK091A35毫米高炮战车
// 0x20	高炮（有火控）	0x02	PG99式35毫米高炮数据采集设备
// 0x20	高炮（有火控）	0x03	PGZ04型弹炮结合武器系统战车
// 0x20	高炮（有火控）	0x04	PLB625弹炮结合武器战车
// 0x21	高炮（无火控）	0x01	双37高炮
// 0x21	高炮（无火控）	0x02	双25高炮
// 0x21	高炮（无火控）	0x03	四－25高炮
// 0x21	高炮（无火控）	0x04	57mm高炮
// 0x22	防空导弹系统	0x01	红旗17导弹武器系统S车
// 0x22	防空导弹系统	0x02	红旗17导弹武器系统F车
// 0x22	防空导弹系统	0x03	红旗16A/D导弹武器系统数据采集设备
// 0x22	防空导弹系统	0x04	红旗7B导弹武器S车系统数据采集设备
// 0x22	防空导弹系统	0x05	红旗7B导弹武器F车系统数据采集设备
// 0x23	防空雷达系统	0x01	LLP12A火控雷达数据采集设备
// 0x23	防空雷达系统	0x02	情报雷达数据采集设备（标准型）
// 0x24	防空指挥系统	0x01	指挥信息系统旅（营）站数据采集设备
// 0x24	防空指挥系统	0x02	指挥信息系统高炮连站数据采集设备
// 0x25	单兵防空导弹	0x01	红缨5
// 0x25	单兵防空导弹	0x02	红缨6便携式防空导弹
// 0x25	单兵防空导弹	0x03	前卫2便携式防空导弹
// 0x25	单兵防空导弹	0x04	红缨6便携式导弹
// 0x25	单兵防空导弹	0x05	前卫2便携式防空导弹
// 0x26-0x2F	保留	/	/
// 0x30	人员	0x01	单兵装具
// 0x30	人员	0x02	单兵装具（特战型）
// 0x30	人员	0x03	单兵装具（两栖型）
// 0x31	自动步枪	0x01	95式5.8mm自动步枪
// 0x31	自动步枪	0x02	AK47自动步枪
// 0x31	自动步枪	0x03	95-1式5.8mm自动步枪
// 0x31	自动步枪	0x04	03式5.8mm自动步枪
// 0x31	自动步枪	0x05	5.8mm精准步枪
// 0x31	自动步枪	0x06	95B式5.8mm短步枪
// 0x31	自动步枪	0x07	95-1式5.8mm短步枪
// 0x31	自动步枪	0x08	95式5.8mm自动步枪（特战型）
// 0x31	自动步枪	0x09	95-1式5.8mm自动步枪（特战型）
// 0x31	自动步枪	0x0a	95B式5.8mm短步枪（特战型）
// 0x31	自动步枪	0x0b	95-1式5.8mm短步枪（特战型）
// 0x31	自动步枪	0x0c	95式5.8mm自动步枪（两栖型）
// 0x31	自动步枪	0x0d	95-1式5.8mm自动步枪（两栖型）
// 0x31	自动步枪	0x0e	95B式5.8mm短步枪（两栖型）
// 0x31	自动步枪	0x0f	95-1式5.8mm短步枪（两栖型）
// 0x32	班用机枪	0x01	95式5.8mm班用机枪
// 0x32	班用机枪	0x02	95-1式5.8mm班用机枪
// 0x32	班用机枪	0x03	95-1式5.8mm班用机枪（特战型）
// 0x32	班用机枪	0x04	95式5.8mm班用机枪（两栖型）
// 0x32	班用机枪	0x05	95-1式5.8mm班用机枪（两栖型）
// 0x33	狙击步枪	0x01	88式5.8mm狙击枪
// 0x33	狙击步枪	0x02	09狙击步枪
// 0x33	狙击步枪	0x03	7.62mm高精度狙击枪
// 0x33	狙击步枪	0x04	10式12.7mm狙击枪
// 0x33	狙击步枪	0x05	5.8mm狙击枪（特战型）
// 0x33	狙击步枪	0x06	8.6mm狙击枪（特战型）
// 0x33	狙击步枪	0x07	12.7mm狙击枪（特战型）
// 0x33	狙击步枪	0x08	5.8mm狙击枪（两栖型）
// 0x33	狙击步枪	0x09	7.62mm狙击枪（两栖型）
// 0x33	狙击步枪	0x0a	10式12.7mm狙击枪（两栖型）
// 0x34	微声冲锋枪	0x01	05式5.8mm微声冲锋枪
// 0x34	微声冲锋枪	0x02	05式5.8mm微声冲锋枪（特战型）
// 0x34	微声冲锋枪	0x03	05式5.8mm微声冲锋枪（两栖型）
// 0x35	霰弹枪	0x01	09式18.4mm霰弹枪
// 0x35	霰弹枪	0x02	09式18.4mm霰弹枪（特战型）
// 0x35	霰弹枪	0x03	09式18.4mm霰弹枪（两栖型）
// 0x36	手枪	0x01	手枪
// 0x36	手枪	0x02	手枪发射机（特战型）
// 0x37	单兵榴弹发射器	0x01	87式35mm自动榴弹发射器
// 0x37	单兵榴弹发射器	0x02	04式35mm自动榴弹发射器
// 0x37	单兵榴弹发射器	0x03	131型35mm狙击榴弹发射器
// 0x37	单兵榴弹发射器	0x04	10式35mm枪挂榴弹发射器
// 0x37	单兵榴弹发射器	0x05	87式35mm自动榴弹发射器（特战型）
// 0x37	单兵榴弹发射器	0x06	04式35mm自动榴弹发射器（特战型）
// 0x37	单兵榴弹发射器	0x07	131型35mm狙击榴弹发射器（特战型）
// 0x37	单兵榴弹发射器	0x08	87式35mm自动榴弹发射器（两栖型）
// 0x37	单兵榴弹发射器	0x09	04式35mm自动榴弹发射器（两栖型）
// 0x37	单兵榴弹发射器	0x0a	131型35mm狙击榴弹发射器（两栖型）
// 0x37	单兵榴弹发射器	0x0b	10式35mm枪挂榴弹发射器（两栖型）
// 0x38	重机枪	0x01	89式12.7mm重机枪
// 0x38	重机枪	0x02	QBZ171山地型12.7mm重机枪
// 0x38	重机枪	0x03	89式12.7mm重机枪（特战型）
// 0x38	重机枪	0x04	89式12.7mm重机枪（两栖型）
// 0x39	高射机枪	0x01	85式12.7mm高射机枪
// 0x39	高射机枪	0x02	85式12.7mm高射机枪（两栖型）
// 0x3A	光学侦察设备	0x01	Baz-308战场侦察电视
// 0x3A	光学侦察设备	0x02	Bad-902C远程数字照相
// 0x3B-0x3F	保留	/	/
// 0x40	单兵火箭	0x01	80单
// 0x40	单兵火箭	0x02	11式93mm单兵火箭筒
// 0x40	单兵火箭	0x03	PF89式80mm单兵火箭筒
// 0x40	单兵火箭	0x04	11式93mm单兵火箭筒
// 0x40	单兵火箭	0x05	PF98式93mm单兵火箭筒
// 0x41	单兵反坦克火箭	0x01	PF98式营用120mm反坦克火箭筒
// 0x41	单兵反坦克火箭	0x02	PF98式连用120mm反坦克火箭筒
// 0x41	单兵反坦克火箭	0x03	PF98式营用120mm反坦克火箭筒（两栖型）
// 0x41	单兵反坦克火箭	0x04	PF98式连用120mm反坦克火箭筒（两栖型）
// 0x42	单兵反坦克导弹	0x01	红箭73改反坦克导弹
// 0x42	单兵反坦克导弹	0x02	红箭8反坦克导弹
// 0x42	单兵反坦克导弹	0x03	红箭12反坦克导弹
// 0x42	单兵反坦克导弹	0x04	红箭8反坦克导弹
// 0x43	地雷	0x01	压发式防步兵地雷
// 0x43	地雷	0x02	防坦克地雷
// 0x43	地雷	0x03	绊发式防步兵地雷
// 0x43	地雷	0x04	定向雷
// 0x44	单兵排雷器	0x01	单兵排雷器
// 0x44	单兵排雷器	0x02	工兵模拟器
// 0x45	手雷	0x01	82-2式手榴弹
// 0x45	手雷	0x02	77-1式手榴弹
// 0x46	简易爆炸物	0x01	爆炸物
// 0x47	卫勤救护装备	0x01	卫勤救护
// 0x48	调理设备	0x01	调理枪
// 0x48	调理设备	0x02	模拟装弹器
// 0x48	调理设备	0x03	调理终端
// 0x49-0x4F	保留	/	/
// 0x50	通用车辆	0x01	通用车辆
// 0x50	通用车辆	0x02	两栖通用非火力车辆
// 0x51	指挥车辆	0x01	指挥车
// 0x51	指挥车辆	0x02	炮兵指挥车
// 0x51	指挥车辆	0x03	PZK091A35毫米高炮指挥车
// 0x51	指挥车辆	0x04	PGZ04型弹炮结合武器系统指挥车
// 0x51	指挥车辆	0x05	PLB625弹炮结合武器指挥车
// 0x52	通信车辆	0x01	通信车
// 0x52	通信车辆	0x02	炮兵通信节点车
// 0x53	弹药输送车	0x01	弹药输送车
// 0x54	油料运输车	0x01	油料运输车
// 0x55	火箭布雷车	0x01	布雷车
// 0x56	工程侦察车	0x01	工程侦察车
// 0x56	工程侦察车	0x02	侦察车
// 0x57	轻型破障车	0x01	破障车
// 0x57	轻型破障车	0x02	CSL132型两栖装甲破障车
// 0x58	综合扫雷车	0x01	综合扫雷车
// 0x59	重型机械化桥	0x01	84A式重型机械化桥
// 0x5A	抢修车辆	0x01	装甲抢修车
// 0x5B	工程作业车辆	0x01	CCZ111型两栖工程作业车
// 0x5C-0x5F	保留	/	/
// 0x60	直升机	0x01	直10武装直升机
// 0x60	直升机	0x02	直19武装直升机
// 0x60	直升机	0x03	直20系列直升机
// 0x60	直升机	0x04	米17系列直升机
// 0x60	直升机	0x05	直8系列直升机
// 0x60	直升机	0x06	直9武装直升机
// 0x60	直升机	0x07	武装直升机
// 0x60	直升机	0x08	运输直升机
// 0x61	无人机	0x01	彩虹-3
// 0x61	无人机	0x02	彩虹-4
// 0x61	无人机	0x03	翼龙-1
// 0x61	无人机	0x04	MQ-9
// 0x61	无人机	0x05	RQ-1
// 0x61	无人机	0x06	RQ-4
// 0x62	战斗机/轰炸机	0x01	轰6
// 0x62	战斗机/轰炸机	0x02	歼轰7
// 0x62	战斗机/轰炸机	0x03	歼10
// 0x62	战斗机/轰炸机	0x04	歼11
// 0x62	战斗机/轰炸机	0x05	歼15
// 0x62	战斗机/轰炸机	0x06	歼16
// 0x62	战斗机/轰炸机	0x07	歼20
// 0x62	战斗机/轰炸机	0x08	苏27
// 0x62	战斗机/轰炸机	0x09	苏30
// 0x62	战斗机/轰炸机	0x0a	苏35
// 0x62	战斗机/轰炸机	0x0b	F15
// 0x62	战斗机/轰炸机	0x0c	F16
// 0x62	战斗机/轰炸机	0x0d	F18
// 0x62	战斗机/轰炸机	0x0e	F22
// 0x62	战斗机/轰炸机	0x0f	F35
// 0x62	战斗机/轰炸机	0x10	B52
// 0x62	战斗机/轰炸机	0x11	B1B
// 0x62	战斗机/轰炸机	0x12	B2
// 0x63	电子对抗	0x01	战场电磁环境数据采集设备
// 0x64	工事设施	0x01	火力点
// 0x64	工事设施	0x02	地堡
// 0x64	工事设施	0x03	简易工事
// 0x64	工事设施	0x04	坚固工事
// 0x64	工事设施	0x05	建筑物
// 0x64	工事设施	0x06	指挥所
// 0x64	工事设施	0x07	弹药库
// 0x64	工事设施	0x08	油料库
// 0x64	工事设施	0x09	物资库
// 0x64	工事设施	0x0a	雷达站
// 0x64	工事设施	0x0b	桥梁
// 0x64	工事设施	0x0c	火车站
// 0x64	工事设施	0x0d	跑道
// 0x64	工事设施	0x0e	机库
// 0x64	工事设施	0x0f	间瞄落点
// 0x64	工事设施	0x10	遥控烟雾发生器
// 0x65	战场障碍	0x01	铁丝网
// 0x65	战场障碍	0x02	三角锥
// 0x65	战场障碍	0x03	壕沟
// 0x65	战场障碍	0x04	反坦克堑壕
// 0x65	战场障碍	0x05	虚拟防步兵雷场
// 0x65	战场障碍	0x06	虚拟反坦克雷场
// 0x65	战场障碍	0x07	虚拟混合雷场
// 0x65	战场障碍	0x08	实体防步兵雷场
// 0x65	战场障碍	0x09	实体防步兵雷场
// 0x65	战场障碍	0x0a	实体防步兵雷场
// 0x65	战场障碍	0x0b	虚拟核化生沾染区
// 0x66-0xFE	保留	/	/
// 0xFF	主控台	/	/
typedef uint8_t T_Subtype;
T_Subtype read_T_Subtype(uint8_t *buf);
void write_T_Subtype(uint8_t *buf, T_Subtype *val);

// 5.66　温度（Temperature）
// a)	描述：表示温度。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表39
// 表39　温度说明表
// 取值	说明	备注
// -80-+80	温度	单位：摄氏度
// 其余值	保留
typedef uint8_t Temperature;
Temperature read_Temperature(uint8_t *buf);
void write_Temperature(uint8_t *buf, Temperature *val);

// 5.67　实体状态字1（TS_Character1）
// a)	描述：表示实体的实体状态字1。
// b)	长度：1BYTE
// c)	格式：HEX（补码）
// d)	取值：见表40
// 表40　实体状态字1说明表
// 位段	取值	说明	备注
// bit0	保留
// Bit1	0	终端各部件连接正常
// 	1	终端部件连接发生异常
// bit2	0	无故障
// 	1	有故障
// bit3	0	训练模式
// 	1	演习模式
// bit4	0	电量正常
// 	1	欠电
// bit6-bit5	0	模拟蓝军	蓝方
// 	1	受训部队	红方
// 	2	群众	黄方
// 	3	调理人员或红十字医务人员	白方
// bit7	保留
typedef struct {
  bool isPartsDisconnected; //
  bool isInError;
  bool isYanxi;
  bool isPowerLow;
  uint8_t side;
} TS_Character1;
TS_Character1 read_TS_Character1(uint8_t *buf);
void write_TS_Character1(uint8_t *buf, TS_Character1 *val);

// 5.68　实体状态字2（TS_Character2）
// a)	描述：描述终端设备当前的实体模式和密钥。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：见表41
// 表41　实体状态字2说明表
// 位段	取值	说明	备注
// bit7	0	训练模式
//   1	演习模式
// bit6-bit0	0-127	密钥值
typedef struct {
  bool isYanxi;
  uint8_t key;
} TS_Character2;

TS_Character2 read_TS_Character2(uint8_t *buf);
void write_TS_Character2(uint8_t *buf, TS_Character2 *val);

// 5.69　速度1（Velocity1）
// a)	描述：表示速度（单位：米/秒）。
// b)	长度：1BYTE
// c)	格式：HEX（补码）
// d)	取值：-128-127
typedef uint8_t Velocity1;
Velocity1 read_Velocity1(uint8_t *buf);
void write_Velocity1(uint8_t *buf, Velocity1 *val);

// 5.70　速度2（Velocity2）
// a)	描述：表示速度（单位：0.1米/秒）。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：0-255
typedef uint8_t Velocity2;
Velocity2 read_Velocity2(uint8_t *buf);
void write_Velocity2(uint8_t *buf, Velocity2 *val);

// 5.71　速度3（Velocity3）
// a)	描述：表示速度（单位：10米/秒）。
// b)	长度：1BYTE
// c)	格式：HEX
// d)	取值：0-255
typedef uint8_t Velocity3;
Velocity3 read_Velocity3(uint8_t *buf);
void write_Velocity3(uint8_t *buf, Velocity3 *val);

// 保留 5字节（Reserve5）
  // b)	长度：5BYTE
  // c)	格式：HEX
typedef uint40_t Reserve5;
Reserve5 read_Reserve5(uint8_t *buf);
void write_Reserve5(uint8_t *buf, Reserve5 *val);

// 保留 2字节（Reserve2）
  // b)	长度：2BYTE
  // c)	格式：HEX
typedef uint16_t Reserve2;
Reserve2 read_Reserve2(uint8_t *buf);
void write_Reserve2(uint8_t *buf, Reserve2 *val);

typedef  struct {
  T_Type tType;
  T_Subtype tSubtype;
  RID rID;
  PID pID;
} UPid;

static inline UPid combineUPid(T_Type type, T_Subtype subType, RID rid, PID pid) {
  UPid upid;
  upid.tType = type;
  upid.tSubtype = subType;
  upid.rID = rid;
  upid.pID = pid;
  return upid;
}

static inline bool isUPidEqual(UPid a, UPid b) {
  return
  a.tType == b.tType &&
  a.tSubtype == b.tSubtype &&
  a.rID == b.rID &&
  a.pID == b.pID;
}

void printUpid(UPid u);

uint8_t computeCheckSum(uint8_t *buf, uint16_t dataLen);

void handleIncommingCheckSumMismatch(uint8_t *buf, uint16_t dataLen, const char* name, uint8_t computed, uint8_t provided);
void handleUpidMismatch(uint8_t *buf, uint16_t dataLen, const char* name, UPid received, UPid mine);

#endif
