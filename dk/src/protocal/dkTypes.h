#ifndef DK_TYPES_H_
#define DK_TYPES_H_
#include"dk_system.h"

typedef uint16_t buffer_size_t;

// ���弸���Ǳ�׼���ݴ�С
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

// 5.1����ҩ���ͣ�A_Type��
// a)	��������ʾ��ҩ�����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
typedef uint8_t A_Type;
A_Type read_A_Type(uint8_t *buf);
void write_A_Type(uint8_t *buf, A_Type *val);

// 5.2����ҩ�����ͣ�A_Subtype��
// a)	��������A_Type���ʹ�ã������������൯ҩ�������
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������1
// ��1����ҩ����˵����
// A_Typeȡֵ	��ҩ����	Sub-A_Typeȡֵ	��ҩ������	��ע
// 0x01	��ͨ�ӵ�	1	5.8mm�ӵ�	ǹ����
//     2	7.62mm�ӵ�
//     3	12.7mm�ӵ�
// 0x02	���׵���ǹ����	1	5.8mm���׵�
//     2	12.7mm���׵�
// 0x03	����ȼ�յ���ǹ����	1	5.8mm����ȼ�յ�
//     2	12.7mm����ȼ�յ�
// 0x04	ȼ�յ���ǹ����	1	5.8mmȼ�յ�
//     2	12.7mmȼ�յ�
// 0x05	���ױ�ըȼ�յ���ǹ����	1	12.7mm���ױ�ըȼ�յ�
// 0x06	˲������ǹ����	1	12.7mm˲����
// 0x07	����	1	����
// 0x08-0x1F	����
// 0x10	ɱ����	1	85mm̹��ɱ����	��������ڵ���
//     2	125mm̹��ɱ����
//     3	120mm̹��ɱ����
//     4	105̹��ɱ����
//     5	100̹��ɱ����
//     6	73������ɱ����
//     7	35mmɱ����
//     8	40mmɱ����
// 0x11	�Ƽ�ɱ�˵�	1	73mm�Ƽ�ɱ�˵�
// 0x12	ȼ�յ�/ɱ��ȼ�յ�	����
// 0x13	��ըɱ�˵�	����
// 0x14	�Ƽ׵�	1	85mm̹���Ƽ׵�
//     2	125mm̹���Ƽ׵�
//     3	120mm̹���Ƽ׵�
//     4	105̹���Ƽ׵�
//     5	100̹���Ƽ׵�
//     6	120mm�Ƽ׵�
//     7	82mm�Ƽ׵�
//     8	40mm�Ƽ׵�
// 0x15	���ᵯ	1	80mm���ᵯ
// 0x16	�Ʊ���	1	93mm�Ʊ���
//     2	80mm�Ʊ���
// 0x17	ɱ�˱���ȼ�յ�	1	80mmɱ�˱���ȼ�յ�
// 0x18	ɱ�˱�����	1	73mmɱ�˱�����
// 0x19	�Ƽ�ȼ�յ�	����
// 0x1A	���׵�	1	85mm̹�˴��׵�
//     2	125mm̹�˴��׵�
//     3	120mm̹�˴��׵�
//     4	105̹�˴��׵�
//     5	100̹�˴��׵�
//     6	30mm���׵�
// 0x1B	��׵�	����
// 0x1C	����;��	1	120mm����;��
// 0x1D-0x1F	����
// 0x30	���ڴ��׵�	1	25mm���ڴ��׵�	�ڵ��������ࣩ
//     2	35mm���ڴ��׵�
//     3	37mm���ڴ��׵�
//     4	57mm���ڴ��׵�
//     5	100mm���ڴ��׵�
// 0x31	���ڱ�����	����
// 0x32	���ڴ��ױ���ȼ�յ�	����
// 0x33	���ڶ�������Ԥ����Ƭ��	����
// 0x34-0x3f	����
// 0x40	���ڻ�·����	1	���73����	������
//     2	���8����
//     3	���9����
//     4	���10����
//     5	ǰ��һ����
//     6	125mm̹�����䵼��
// 0x41	����󲻹ܵ���	1	��ӧ5���յ���
//     2	��ӧ6���յ���
// 0x42-0x4f	����
// 0x50	�������Ե�ҩ	1	���ᵯ
// 0x51-0x6f	����
// 0x70	�����ڵ�	1	82mmɱ����	�ڵ���������ڣ�
//     2	100mmɱ����
//     3	105mmɱ����
//     4	120mmɱ����
//     5	122mmɱ����
//     6	130mmɱ����
//     7	152mmɱ����
//     8	155mmɱ����
//     9	203mmɱ����
//     10	240mmɱ����
//     11	152mmĩ�Ƶ��ڵ�
// 0x71	�����	1	122mm�����
//     2	107mm�����
//     3	����2000�����
//     4	����-6�����
//     5	300mmɱ����
//     6	300mm��ĸ��
//     7	300mmĩ����
//     8	300mm�Ʊ���
// 0x72	������׵�	1	������׵�����̹���ף�
//     2	������׵����������ף�
// 0x73	������Ƶ�	1	������Ƶ�
// 0x74	����	1	����������
//     2	��̹�˵���
//     3	����׳�
// 0x75	����
// 0x76	��ѧ��	1	ɳ��
//     2	����
//     3	ά����˹
//     4	������
//     5	������
//     6	��·���
//     7	��״������
//     8	��״��·
// 0x77	����	1	����
// 0x78	���Ե�	0
// 0x79	���	0
// 0x7A	�þ�	0
// 0x7B-0xFF	����
// e)	����Ҫ�󣺵����ڼ������ʱ����ҩ���ͣ�A_Type�����λ��bit7��������Ϊ0��
typedef uint8_t A_Subtype;
A_Subtype read_A_Subtype(uint8_t *buf);
void write_A_Subtype(uint8_t *buf, A_Subtype *val);

// 5.3���þ������֣�AC_Character��
// a)	���������ػ�����ն˶�ʵ��Ĳþ����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������2
typedef uint8_t AC_Character;
AC_Character read_AC_Character(uint8_t *buf);
void write_AC_Character(uint8_t *buf, AC_Character *val);

// 5.4���Ƕ�1��Angle1��
// a)	��������ʾ�Ƕȣ���λ����λ����
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��0-6000
typedef uint16_t Angle1;
Angle1 read_Angle1(uint8_t *buf);
void write_Angle1(uint8_t *buf, Angle1 *val);

// 5.5���Ƕ�2��Angle2��
// a)	��������ʾ�Ƕȣ���λ���ȣ���
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX�����룩
// d)	ȡֵ��-360�C360
typedef uint16_t Angle2;
Angle2 read_Angle2(uint8_t *buf);
void write_Angle2(uint8_t *buf, Angle2 *val);

// 5.6���Ƕ�3��Angle3��
// a)	��������ʾ�Ƕȣ���λ���ȣ���
// b)	���ȣ�BYTE
// c)	��ʽ��HEX�����룩
// d)	ȡֵ��-90�C90
typedef uint8_t Angle3;
Angle3 read_Angle3(uint8_t *buf);
void write_Angle3(uint8_t *buf, Angle3 *val);

// 5.7����Ա��̬״̬�֣�BP_Character��
// a)	��������λ��ʾ��������̬��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������3
// ��3����Ա��̬״̬��˵����
// ȡֵ	˵  ��	��ע
// 0	����
// 1	����
// 2	����
// 3	����
// 3-255	����
typedef uint8_t BP_Character;
BP_Character read_BP_Character(uint8_t *buf);
void write_BP_Character(uint8_t *buf, BP_Character *val);

// 5.8����ݱ�ʶ�֣�BR_Attribute��
// a)	�������������뽻ս��ʵ����ݡ�
// b)	���ȣ�2BIT
// c)	��ʽ��HEX
// d)	ȡֵ������4
// ��4����ݱ�ʶ��˵����
// ȡֵ	˵��	��ע
// 00	ģ������	��
// 01	��ѵ����	��
// 10	Ⱥ��	��
// 11	������Ա���ʮ��ҽ����Ա	��
typedef uint8_t BR_Attribute;
BR_Attribute read_BR_Attribute(uint8_t *buf);
void write_BR_Attribute(uint8_t *buf, BR_Attribute *val);

// 5.9���ۺ����ƣ�C_Idegree��
// a)	��������ʵ������T_Type���ʹ�ã��������������豸�ĵ�ǰ�ۺϻ��˵ȼ���
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������5
// ��5���ۺ�����˵����
// ʵ������	C_Idegree	���Ƶȼ�	��ע
// װ���ࣨ0x01-0x12��	0	����	K��
// 	1	�����ͻ���������ɥʧ	M_F��
// 	2	ɥʧ��������	M��
// 	3	ɥʧ��������	F��
// 	4	����װ���ض�����
// 	5	����װ���ж�����
// 	6	����װ���������
// 	7	����
// �����ࣨ0x13��	0	����
// 	1-5	Σ����
// 	6-9	�ض���
// 	10-11	�ж���
// 	12	����
// 	13	����
// ������	0	����
// 	1	����
// 	2	����
typedef uint8_t C_Idegree;
C_Idegree read_C_Idegree(uint8_t *buf);
void write_C_Idegree(uint8_t *buf, C_Idegree *val);

// 5.10����Ա���ν����ʶ�֣�CE_Character��
// a)	��������ʾ��Ա�����κ��Ч����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������6
// ��6����Ա���ν����ʶ��˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	���εõ����ָ�ս��
// 2	���γɹ������ٶ�
// 3	����ʧ�ܣ������
// 4	����ʧ�ܣ�����
// 5-255	����
typedef uint8_t CE_Character;
CE_Character read_CE_Character(uint8_t *buf);
void write_CE_Character(uint8_t *buf, CE_Character *val);

// 5.11�����η�ʽ��ʶ�֣�CM_Character��
// a)	������ҽ����Ա���η�ʽ��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������7
// ��7�����η�ʽ��ʶ��˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	�Ծ�
// 2	����
// 3	�Ȼ���Ա�ֳ�����
// 4	�Ȼ���Ա���Ⱥ���
// 5-255	����
typedef uint8_t CM_Character;
CM_Character read_CM_Character(uint8_t *buf);
void write_CM_Character(uint8_t *buf, CM_Character *val);

// 5.12������֡���ȣ�D_Len��
// a)	��������ʾ����֡�ĳ��ȡ�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
typedef uint8_t D_Len;
D_Len read_D_Len(uint8_t *buf);
void write_D_Len(uint8_t *buf, D_Len *val);

// 5.13������֡ͷ��Data_Frame��
// a)	��������ʾ����֡��ͷ����ͬ����ʹ�ò�ͬ֡ͷ��
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX
// 9.1 ��ϰ��������ָ��ǵ�������0xC1��0xF1��
// 9.2 ��ϰ��������ָ���������0xC1��0xF2��
// 9.3 �ϴ���������ָ�0xC1��0xF3��
// 9.4 ��ҩ/���ʲ���ָ�0xC1��0xF4��
// 9.5 ����ϵͳ�þ�ָ�0xC1��0xF5��
// 9.6 ����ģ����ָ�0xC1��0xF6��
// 9.7 ����/�뿪�˻���մȾ��ͨ��ָ�0xC1��0xF7��
// 9.8 ը����ʾ����������ָ�0xC1��0xF8��
// 9.9 ���/У����Ϣ�·�ָ���λ����״���ڱ���죩��0xC1��0xF9��
// 9.10 �������������ָ�0xC1��0xFA��
// 9.11 �����Ϣ�·�ָ�������죩��0xC1��0xFB��
// 9.12 ��������ָ�0xC1��0xFC��
// 9.13 �¼�����Ӧ��ָ�0xC1��0xFD��
// 10 ����ָ�����ʵ��->����ϵͳ��
// 10.1 ��������ָ�0xA8��0x91��
// 10.2 ״̬�ϴ�ָ�0xA8��0x92��
// 10.3 ����Ա��װ������״̬�ϴ�ָ����أ���0xA8��0x94��
// 10.4 �¼��ϴ�ָ�0xA8��0x93��
// 10.5 ����Ա��װ�������¼��ϴ�ָ����أ���0xA8��0x95��
typedef uint16_t Data_Frame;
Data_Frame read_Data_Frame(uint8_t *buf);
void write_Data_Frame(uint8_t *buf, Data_Frame *val);

// 5.14����λ��Direction��
// a)	��������ʾǰ�������ҡ��ϡ���6����λ��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������8
// ��8����λ˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	ǰ
// 2	��
// 3	��
// 4	��
// 5	��
// 6	��
// 7-255	����
typedef uint8_t Direction;
Direction read_Direction(uint8_t *buf);
void write_Direction(uint8_t *buf, Direction *val);

// 5.15��״̬���ͣ�D_Type��
// a)	��������ʾ״̬�������͡�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������9
// ��9��״̬����˵����
// ȡֵ	˵��	��ע
// 01 ͨ��״̬���ݣ��ǵ�����
// 02 ����״̬����
// 03 ը����ʾ��״̬����
// 04 ����Ա��װ������������
// F0 �Զ���״̬��JSON��ʽ��
// ��	��
typedef uint8_t D_Type;
D_Type read_D_Type(uint8_t *buf);
void write_D_Type(uint8_t *buf, D_Type *val);

// 5.16���¼����ͣ�E_Type��
// | 0x01 // ��ϰ�������óɹ��¼����ǵ�����
// | 0x02 // ��ϰ�������óɹ��¼���������
// | 0x03 // �ϴ��������óɹ��¼�
// | 0x04 // ��ҩ�����ʣ��ַ�/�����¼�
// | 0x05 // ���������¼�
// | 0x06 // �˻��������¼�
// | 0x07 // ���زþ��¼�
// | 0x08 // ����/�뿪�˻���մȾ���¼�
// | 0x09 // �˻��������¼�
// | 0x0A // �����в�¼�
// | 0x0B // ����/�յ������¼�
// | 0x0C // ���ֻ����ڷ����¼�
// | 0x0D // �����ֻ����ڷ����¼�
// | 0x0E // ��λ���У���״����/У���¼�
// | 0x0F // ֱ�������������¼�
// | 0x10 // ���������¼�
// | 0x11 // ���������¼�
// | 0x12 // ��������¼�
// | 0x13 // ɨ�׳�ɨ���¼�
// | 0x14 // ���ɨ���¼�
// | 0x15 // ��Ա���ƶ��¼�
// | 0x16 // �����Ȼ��¼�
// | 0x17 // ս���ϰ������¼�
// | 0x18 // �����������¼�
// | 0x19 // ״̬�Զ��ָ��¼�
// | 0x1A // ��������¼�
// | 0x1B // װ�������¼�
// | 0x1C // ��ϰģʽת���¼�
// | 0x1D // �����������¼�
// | 0x1E // ���ػ��¼�
// | 0x1F // Υ�濪ʼ�¼�
// | 0x20 // ������Υ������¼�
typedef uint8_t E_Type;
E_Type read_E_Type(uint8_t *buf);
void write_E_Type(uint8_t *buf, E_Type *val);

// 5.17��������ţ�EP_Num��
// a)	��������ʾ���÷����ı�š�
// b)	���ȣ�3BYTE
// c)	��ʽ��HEX
typedef uint24_t EP_Num;
EP_Num read_EP_Num(uint8_t *buf);
void write_EP_Num(uint8_t *buf, EP_Num *val);

// 5.18���¼����кţ�ES_Num��
// a)	��������ʾ�¼����кš�
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX
typedef uint16_t ES_Num;
ES_Num read_ES_Num(uint8_t *buf);
void write_ES_Num(uint8_t *buf, ES_Num *val);

// 5.19������/�뿪Σ�յ����ʶ�֣�ELR_Character��
// a)	������ʶ�������뿪ĳһΣ�յ����׳����˻���մȾ���ȣ���
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������11
// ��11������/�뿪Σ�յ���ʶ����˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	����
// 2	�뿪
// 3-255	����
typedef uint8_t ELR_Character;
ELR_Character read_ELR_Character(uint8_t *buf);
void write_ELR_Character(uint8_t *buf, ELR_Character *val);

// 5.20���������ͣ�Fuse_Type��
// a)	��������ʾ��ҩ���������͡�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������12
// ��12����������˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	����������
// 2	��������
// 3	˲������
// 4	ʱ������
// 5	��ը����
// 6-255	����
typedef uint8_t Fuse_Type;
Fuse_Type read_Fuse_Type(uint8_t *buf);
void write_Fuse_Type(uint8_t *buf, Fuse_Type *val);

// 5.21��װҩ�ţ�G_Num��
// a)	��������ʾ���鵯ҩ��װҩ�š�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������13
// ��13��װҩ��˵����
// ȡֵ	˵��	��ע
// 0	0��װҩ
// 1	1��װҩ
// 2	2��װҩ
// 3	3��װҩ
// 4	4��װҩ
// 5	5��װҩ
// 6	6��װҩ
// 7-255	����
typedef uint8_t G_Num;
G_Num read_G_Num(uint8_t *buf);
void write_G_Num(uint8_t *buf, G_Num *val);

// 5.22����˹���꣨G_Position��
// a)	�������豸��˹����X����˹����Y�͸�˹����̡߳�
// b)	���ȣ�9BYTE
// c)	��ʽ��HEX�����룩
// d)	ȡֵ������14
// ��14����˹����˵����
// �ֽ����	����	��ע
// 1-3	��˹����X
// 4-7	��˹����Y
// 8-9	����߳�
typedef uint72_t G_Position;
G_Position read_G_Position(uint8_t *buf);
void write_G_Position(uint8_t *buf, G_Position *val);

// 5.23���������ƣ�H_Idegree��
// a)	��������ʵ������T_Type���ʹ�ã�����ʵ�屻���к��µľ�����˵ȼ���
// b)	���ȣ�1BYTE
// c)	���룺HEX
// d)	ȡֵ������15
typedef uint8_t H_Idegree;
H_Idegree read_H_Idegree(uint8_t *buf);
void write_H_Idegree(uint8_t *buf, H_Idegree *val);

// 5.24�����д�����H_Num��
// a)	��������ʾʵ�屻���е��ܴ�����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��0-255
typedef uint8_t H_Num;
H_Num read_H_Num(uint8_t *buf);
void write_H_Num(uint8_t *buf, H_Num *val);

// 5.25�����в�λ��H_Part��
// a)	��������ʵ������T_Type���ʹ�ã�����ʵ�屻���еĲ�λ����λ�ֵ�һ��λ�Ͷಿλ��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������15
typedef uint8_t H_Part;
H_Part read_H_Part(uint8_t *buf);
void write_H_Part(uint8_t *buf, H_Part *val);

// 5.26�����ࣨH_Type��
// a)	��������ʵ������T_Type���ʹ�ã�����ʵ�屻���к��µ��������͡�
// b)	���ȣ�1BYTE
// c)	���룺HEX
// d)	ȡֵ������15
typedef uint8_t H_Type;
H_Type read_H_Type(uint8_t *buf);
void write_H_Type(uint8_t *buf, H_Type *val);

// 5.27��Υ���¼������ͣ�IE_Type��
// a)	��������ʾΥ����������͡�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������16
// ��16��Υ���¼�������˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	�ڵ�̽ͷ����
// 2	̽ͷδ����
// 3	����δ����
// 4	���λ���װ��δ����
// 5	���̹�δ��װ
// 6	���ⵯδ��װ
// 7	����/�������˶�
// 8	ɥʧ�����������˶�
// 9	����ͷ��δ����
// 10	Υ��ػ�
// 11	�������ƶ�
// 12-255	����
typedef uint8_t IE_Type;
IE_Type read_IE_Type(uint8_t *buf);
void write_IE_Type(uint8_t *buf, IE_Type *val);

// 5.28����ҩ (����)������ʶ�֣�IO_Character��
// a)	��������ʶ����(��ҩ)������ȡ��������
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������17
// ��17������(��ҩ)������ʶ��˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	��ҩ/���ʱ�ȡ�����������٣�
// 2	��ҩ/���ʵõ��������������ӣ�
// 3-255	����
typedef uint8_t IO_Character;
IO_Character read_IO_Character(uint8_t *buf);
void write_IO_Character(uint8_t *buf, IO_Character *val);

// 5.29��IP��ַ��IP_Address��
// a)	��������ʾIP��ַ��
// b)	���ȣ�4BYTE
// c)	��ʽ��HEX
typedef uint32_t IP_Address;
IP_Address read_IP_Address(uint8_t *buf);
void write_IP_Address(uint8_t *buf, IP_Address *val);

// 5.30����Կ��Key��
// a)	�����������б��豸�Ƿ�Ϊϵͳ�Ϸ��û�����Ȩ�롣
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������18
// ��18����Կ˵����
// ȡֵ	˵��	��ע
// 0	����Կ
// 1-127	Key
// 128-255	����
typedef uint8_t Key;
Key read_Key(uint8_t *buf);
void write_Key(uint8_t *buf, Key *val);

// 5.31����γ�����꣨L_Position��
// a)	�������豸���ȡ�γ�ȡ��߶��Լ���λ״̬��
// b)	���ȣ�12BYTE
// c)	��ʽ��BCD
// d)	ȡֵ������19
// ��19����γ������˵����
// �ֽ����	����	λ��	��ע
// 1	����	bit7	1���Ѷ�λ��0��δ��λ
//   bit6-bit4	����
//   bit3-bit0	�ȵİ�λ
// 2		bit7-bit4	�ȵ�ʮλ
//   bit3-bit0	�ȵĸ�λ
// 3		bit7-bit4	�ֵ�ʮλ
//   bit3-bit0	�ֵĸ�λ
// 4		bit7-bit4	�ֵ�ʮ��λ
//   bit3-bit0	�ֵİٷ�λ
// 5		bit7-bit4	�ֵ�ǧ��λ
//   bit3-bit0	�ֵ����λ
// 6	γ��	bit7-bit4	�ȵ�ʮλ
//   bit3-bit0	�ȵĸ�λ
// 7		bit7-bit4	�ֵ�ʮλ
//   bit3-bit0	�ֵĸ�λ
// 8		bit7-bit4	�ֵ�ʮ��λ
//   bit3-bit0	�ֵİٷ�λ
// 9		bit7-bit4	�ֵ�ǧ��λ
//   bit3-bit0	�ֵ����λ
// 10	�߶ȣ���λ���ף�	bit7	0��+��1��-
//   bit3-bit0	ǧλ
// 11		bit7-bit4	��λ
//   bit3-bit0	ʮλ
// 12		bit7-bit4	��λ
//   bit3-bit0	ʮ��λ
typedef uint96_t L_Position;
L_Position read_L_Position(uint8_t *buf);
void write_L_Position(uint8_t *buf, L_Position *val);

// 5.32�����ӱ�ʶ�֣�L_Character��
// a)	��������ʾ����״̬��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������20
// ��20�����ӱ�ʶ��˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	���ӣ�Ƿ��
// 2	���ӣ���Ƿ��
// 3	����
// 4-255	����
typedef uint8_t L_Character;
L_Character read_L_Character(uint8_t *buf);
void write_L_Character(uint8_t *buf, L_Character *val);

// 5.33�������в���ͣ�LT_Type��
// a)	��������ʾʵ���ܵ��Ĺ����в���͡�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������21
// ��21�������в����˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	��༤����в
// 2	���伤����в
// 3-255	����
typedef uint8_t LT_Type;
LT_Type read_LT_Type(uint8_t *buf);
void write_LT_Type(uint8_t *buf, LT_Type *val);

// 5.34���������ͣ�M_Type��
// a)	��������ʾ���ʵ����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
typedef uint8_t M_Type;
M_Type read_M_Type(uint8_t *buf);
void write_M_Type(uint8_t *buf, M_Type *val);

// 5.35�����������ͣ�M_Subtype��
// a)	��������ʾ���ʵ����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������22
// ��22����������˵����
// M_Typeȡֵ	��������	M_Subtypeȡֵ	����������	��ע
// 1	ȼ��	1	����
//     2	����
//     3	����ȼ��
// 2	��������	1	����
//     2	����
//     3	ɴ��
typedef uint8_t M_Subtype;
M_Subtype read_M_Subtype(uint8_t *buf);
void write_M_Subtype(uint8_t *buf, M_Subtype *val);

// 5.36��ɨ�׷�ʽ��ʶ�֣�MCM_Character��
// a)	��������ʾɨ�׳�ɨ�׷�ʽ��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������23
// ��23��ɨ�׷�ʽ��ʶ��˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	��ɨ
// 2	��ɨ
// 3	ѹ��ɨ��
// 4-255	����
typedef uint8_t MCM_Character;
MCM_Character read_MCM_Character(uint8_t *buf);
void write_MCM_Character(uint8_t *buf, MCM_Character *val);

// 5.37���˻��������¼������ͣ�NCBP_Type��
// a)	��������ʾʵ��ʵʩ�ĺ˻����������͡�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������24
// ��24���˻��������¼�������˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	������װ��
// 2	�ر�����װ��
// 3	����������
// 4	ժ�·������
// 5-255	����
typedef uint8_t NCBP_Type;
NCBP_Type read_NCBP_Type(uint8_t *buf);
void write_NCBP_Type(uint8_t *buf, NCBP_Type *val);

// 5.38���˻�����ʶ�֣�NCBT_Type��
// a)	��������ʾ�˻�����в�������ľ�������
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������25
// ��25���˻�����ʶ�����ͱ�
// ȡֵ	˵��	��ע
// 0	����
// 1	��
// 2	��
// 3	��
// 4-255	����	`
typedef uint8_t NCBT_Type;
NCBT_Type read_NCBT_Type(uint8_t *buf);
void write_NCBT_Type(uint8_t *buf, NCBT_Type *val);

// 5.39����ֵ1��Num1��
// a)	��������ʾ������
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��Χ��0 �C255
typedef uint8_t Num1;
Num1 read_Num1(uint8_t *buf);
void write_Num1(uint8_t *buf, Num1 *val);

// 5.40����ֵ2��Num2��
// a)	��������ʾ������
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��Χ��0 �C65535
typedef uint16_t Num2;
Num2 read_Num2(uint8_t *buf);
void write_Num2(uint8_t *buf, Num2 *val);

// 5.41����ֵ3��Num3��
// a)	��������ʾ������
// b)	���ȣ�3BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��Χ��0�C16777215
typedef uint32_t Num3;
Num3 read_Num3(uint8_t *buf);
void write_Num3(uint8_t *buf, Num3 *val);

// 5.42����/�ػ�������ʶ�֣�PO_Character��
// a)	��������ʾ������ػ�������
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������26
// ��26������/�ػ�����
// ȡֵ	˵��	��ע
// 0	����
// 1	��Ƿ��ػ�
// 2	Ƿ��ػ�
// 3	����
// 4-255	����
typedef uint8_t PO_Character;
PO_Character read_PO_Character(uint8_t *buf);
void write_PO_Character(uint8_t *buf, PO_Character *val);

// 5.43���˿ںţ�Port_Num��
// a)	��������ʾ�˿ںš�
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��0-65535
typedef uint16_t Port_Num;
Port_Num read_Port_Num(uint8_t *buf);
void write_Port_Num(uint8_t *buf, Port_Num *val);

// 5.44��ѹǿ��Pressure��
// a)	��������ʾѹǿ����λ�����׹����ߣ���
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��0-65535
typedef uint16_t Pressure;
Pressure read_Pressure(uint8_t *buf);
void write_Pressure(uint8_t *buf, Pressure *val);

// 5.45���豸��ţ�PID��
// a)	��������ʵ�����ͣ�T_Type����ʵ�������ͣ�T_Subtype���͵�λ���֣�RID�����ʹ�ã���ʾĳ��ʵ����豸��š�
// b)	���ȣ�2BYTE
// c)	��ʽ��HEX
typedef uint16_t PID;
PID read_PID(uint8_t *buf);
void write_PID(uint8_t *buf, PID *val);

// 5.46����̣�Range��
// a)	��������ʾ��ҩ����̣���λ��50�ף���
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ�� 0-255
typedef uint8_t Range;
Range read_Range(uint8_t *buf);
void write_Range(uint8_t *buf, Range *val);

// 5.47����λ���֣�RID��
// a)	�������ն��豸ʹ�õ�λ��š�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������27
// ��27����λ����˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	���պͻ���
// 2	�������
// 3	XXX��λ
// 4	XXX��λ
// 5	XXX��λ
// 6	XXX��λ
// ��	��
// 128-255	����
typedef uint8_t RID;
RID read_RID(uint8_t *buf);
void write_RID(uint8_t *buf, RID *val);

// 5.48���������ģʽ��ʶ�֣�RM_Character��
// a)	��������ʾ���ڵ����ģʽ��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������28
// ��28�����ģʽ˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	��������
// 2	��������
// 3-255	����
typedef uint8_t RM_Character;
RM_Character read_RM_Character(uint8_t *buf);
void write_RM_Character(uint8_t *buf, RM_Character *val);

// 5.49�����/У��ģʽ��ʶ�֣�SAM_Character��
// a)	����������ʶ�����/У���״�ĵ�ǰʵ��״̬��1��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������29
// ��29�����/У��ģʽ˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	���
// 2	У��
// 3-255	����
typedef uint8_t SAM_Character;
SAM_Character read_SAM_Character(uint8_t *buf);
void write_SAM_Character(uint8_t *buf, SAM_Character *val);

// 5.50���������¼������ͣ�SIP_Type��
// a)	��������ʾʵ��ʵʩ����/�յ������¼��ľ������͡�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������30
// ��30���������¼�������˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	��������
// 2	������ƫ����
// 3-255	����
typedef uint8_t SIP_Type;
SIP_Type read_SIP_Type(uint8_t *buf);
void write_SIP_Type(uint8_t *buf, SIP_Type *val);

// 5.51����/ͣ������ʶ�֣�SS_Character��
// a)	����������ʶ��ʵ�忪ʼ������ֹͣ��������������
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������31
// ��31����/ͣ������ʶ��˵����
// ȡֵ	˵��	��ע
// 0	����
// 1	��ʼ
// 2	ֹͣ
// 3-255	����
typedef uint8_t SS_Character;
SS_Character read_SS_Character(uint8_t *buf);
void write_SS_Character(uint8_t *buf, SS_Character *val);

// 5.52�����ý����ʶ�֣�SR_Character��
// a)	��������ʾ���ý����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������32
// ��32�����ý��˵����
// ȡֵ	˵��	��ע
// 0	ʧ��
// 1	�ɹ�
// 2-255	����
typedef uint8_t SR_Character;
SR_Character read_SR_Character(uint8_t *buf);
void write_SR_Character(uint8_t *buf, SR_Character *val);

// 5.53��ǿ�ȵȼ���Strength��
// a)	��������ʾ�˷��䡢��ѧ��������Ⱦ�ȵ�ǿ�ȵȼ�ֵ��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��0-100
typedef uint8_t Strength;
Strength read_Strength(uint8_t *buf);
void write_Strength(uint8_t *buf, Strength *val);

// 5.54����ȣ�Thickness��
// e)	��������ʾ����ĺ�ȡ�
// f)	���ȣ�1BYTE
// g)	��ʽ��HEX
// h)	ȡֵ������33
// ��33�����˵����
// ȡֵ	˵��	��ע
// 0-19	ȡֵ*1mm	��Χ��0-19mm
// 20-255	��ȡֵ-19��*10mm	��Χ��20mm-2360mm
typedef uint8_t Thickness;
Thickness read_Thickness(uint8_t *buf);
void write_Thickness(uint8_t *buf, Thickness *val);

// 5.55��ʱ��ѡ��(TSpan_Select)
// a)	��������T_Span1��T_Span2��T_Span3��T_Span4��T_Span5���ʹ�ã���ʾѡ���ʱ����
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������34
typedef uint8_t TSpan_Select;
TSpan_Select read_TSpan_Select(uint8_t *buf);
void write_TSpan_Select(uint8_t *buf, TSpan_Select *val);

typedef struct {
  float valueInSecond;
} T_SpanSeconds;

// 5.56��ʱ��1��T_Span1��
// a)	��������ʾһ��ʱ�䣨��λ��10���룩�� (����ֵΪ����)
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX�����룩
typedef T_SpanSeconds T_Span1;
T_Span1 read_T_Span1(uint8_t *buf);
void write_T_Span1(uint8_t *buf, T_Span1 *val);

// 5.57��ʱ��2��T_Span2��
// a)	��������ʾһ��ʱ�䡣 (����ֵΪ����)
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������35
// ��35��ʱ��2˵����
// ȡֵ	˵��	��ע
// 0-9	ȡֵ*0.1��	��Χ��0.1��-0.9��
// 10-69	��ȡֵ-9��*1��	��Χ��1��-60��
// 70-255	����
typedef T_SpanSeconds T_Span2;
T_Span2 read_T_Span2(uint8_t *buf);
void write_T_Span2(uint8_t *buf, T_Span2 *val);

// 5.58��ʱ��3��T_Span3��
// a)	��������ʾһ��ʱ�䣨��λ�����ӣ���(����ֵΪ����)
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
typedef T_SpanSeconds T_Span3;
T_Span3 read_T_Span3(uint8_t *buf);
void write_T_Span3(uint8_t *buf, T_Span3 *val);

// 5.59��ʱ��4��T_Span4��
// a)	��������ʾһ��ʱ�䣨��λ�����ӣ���(����ֵΪ����)
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
typedef T_SpanSeconds T_Span4;
T_Span4 read_T_Span4(uint8_t *buf);
void write_T_Span4(uint8_t *buf, T_Span4 *val);

// 5.60��ʱ��5��T_Span5��
// a)	��������ʾһ��ʱ�䣨��λ��Сʱ����(����ֵΪ����)
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
typedef T_SpanSeconds T_Span5;
T_Span5 read_T_Span5(uint8_t *buf);
void write_T_Span5(uint8_t *buf, T_Span5 *val);

// ���T_SpanSelectʹ��
typedef T_SpanSeconds T_Span12345;
T_Span12345 read_T_Span12345(uint8_t *buf);
void write_T_Span12345(uint8_t *buf, T_Span12345 *val);

// 5.61�����кţ�T_SN��
// a)	��������ʾ����֡����š�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
typedef uint8_t T_SN;
T_SN read_T_SN(uint8_t *buf);
void write_T_SN(uint8_t *buf, T_SN *val);

// 5.62��ʱ��1��Time1��
// a)	�����������ݱ�ʾĳһʱ�̡�
// b)	���ȣ�6BYTE
// c)	���룺HEX
// d)	ȡֵ������36
// ��36��ʱ��1˵����
// �ֽ����	����	��ע
// 1	��
// 2	��
// 3	��
// 4	ʱ
// 5	��
// 6	��
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

// 5.63��ʱ��2��Time2��
// a)	�����������ݱ�ʾĳһʱ�̡�
// b)	���ȣ�3BYTE
// c)	���룺HEX
// d)	ȡֵ������37
// ��37��ʱ��2˵����
// �ֽ����	����	��ע
// 1	ʱ
// 2	��
// 3	��
typedef uint24_t Time2;
Time2 read_Time2(uint8_t *buf);
void write_Time2(uint8_t *buf, Time2 *val);

// 5.64��ʵ�����ͣ�T_Type��
// a)	��������ʾϵͳʵ���������ģ���豸�������ڱ�ʾ���豸��ģ�������װ����ս��Ŀ�����
// b)	��ʽ��HEX
// c)	���ȣ�1BYTE

// T_Typeȡֵ	��������
// 0x01	̹�ˣ��ǻ��ģ�⣩
// 0x02	̹�ˣ�Ƕ��ʽģ�⣩
// 0x03	��ս��
// 0x04	װ�����ͳ�
// 0x05	ͻ����
// 0x06	ͻ����
// 0x07	��̹�˵���ϵͳ
// 0x08-0x0F	����
// 0x10	ǣ������
// 0x11	���л��ڣ������ֻ���
// 0x12	���л��ڣ����ֻ���
// 0x13	�����
// 0x14	�Ȼ���
// 0x15	�ڱ����
// 0x16-0x1F	����
// 0x20	���ڣ��л�أ�
// 0x21	���ڣ��޻�أ�
// 0x22	���յ���ϵͳ
// 0x23	�����״�ϵͳ
// 0x24	����ָ��ϵͳ
// 0x25	�������յ���
// 0x26-0x2F	����
// 0x30	��Ա
// 0x31	�Զ���ǹ
// 0x32	���û�ǹ
// 0x33	�ѻ���ǹ
// 0x34	΢�����ǹ
// 0x35	����ǹ
// 0x36	��ǹ
// 0x37	�����񵯷�����
// 0x38	�ػ�ǹ
// 0x39	�����ǹ
// 0x3A	��ѧ����豸
// 0x3B-0x3F	����
// 0x40	�������
// 0x41	������̹�˻��
// 0x42	������̹�˵���
// 0x43	����
// 0x44	����������
// 0x45	����
// 0x46	���ױ�ը��
// 0x47	���ھȻ�װ��
// 0x48	�����豸
// 0x49-0x4F	����
// 0x50	ͨ�ó���
// 0x51	ָ�ӳ���
// 0x52	ͨ�ų���
// 0x53	��ҩ���ͳ�
// 0x54	�������䳵
// 0x55	������׳�
// 0x56	������쳵
// 0x57	�������ϳ�
// 0x58	�ۺ�ɨ�׳�
// 0x59	���ͻ�е����
// 0x5A	���޳���
// 0x5B	������ҵ����
// 0x5C-0x5F	����
// 0x60	ֱ����
// 0x61	���˻�
// 0x62	ս����/��ը��
// 0x63	���ӶԿ�
// 0x64	������ʩ
// 0x65	ս���ϰ�
// 0x66-0xFE	����
// 0xFF	����̨
typedef uint8_t T_Type;
T_Type read_T_Type(uint8_t *buf);
void write_T_Type(uint8_t *buf, T_Type *val);

// 5.65��ʵ�������ͣ�T_Subtype��
// a)	������
// ��ʾϵͳʵ�����������ģ���豸��������T_Type���ʹ�ã��������������豸��ģ������װ����ս��Ŀ��������
// b)	��ʽ��HEX
// c)	���ȣ�1BYTE
// d)	ȡֵ������38
// T_Typeȡֵ	��������	T_Subtypeȡֵ	����������
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x01	96ʽ̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x02	88Bʽ̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x03	62ʽ̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x04	59ʽ̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x05	M60A3̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x06	63Aʽ̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x07	59��ʽ̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x08	M1A1̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x09	99ʽ̹��
// 0x01	̹�ˣ��ǻ��ģ�⣩	0x0a	96Aʽ̹��
// 0x02	̹�ˣ�Ƕ��ʽģ�⣩	0x01	96AǶ��ʽ̹��
// 0x03	��ս��	0x01	86ʽ��ս��
// 0x03	��ս��	0x02	92��ʽ��ս��
// 0x03	��ս��	0x03	04ʽ��ս��
// 0x03	��ս��	0x04	05ʽ��ս��
// 0x03	��ս��	0x05	05ʽ����װ�ײ���ս��
// 0x03	��ս��	0x06	08ʽ��ʽ��ս��
// 0x04	װ�����ͳ�	0x01	63Cʽװ�����ͳ�
// 0x04	װ�����ͳ�	0x02	001������װ�����ͳ�
// 0x04	װ�����ͳ�	0x03	89ʽװ�����ͳ�
// 0x04	װ�����ͳ�	0x04	10ʽװ�����ͳ�
// 0x05	ͻ����	0x01	05ʽͻ����
// 0x05	ͻ����	0x02	11ʽͻ����
// 0x05	ͻ����	0x03	03ʽͻ����
// 0x05	ͻ����	0x04	05ʽ����װ��ͻ����
// 0x06	ͻ����	0x01	100mm��ʽͻ����
// 0x06	ͻ����	0x02	120mm��̹�˻�����
// 0x07	��̹�˵���ϵͳ	0x01	���9��̹�˵���ϵͳ
// 0x07	��̹�˵���ϵͳ	0x02	���10��̹�˵���ϵͳ
// 0x08-0x0F	����	/	/
// 0x10	ǣ������	0x01	PL83/96ʽ122����
// 0x10	ǣ������	0x02	PL59-1ʽ130��ũ��
// 0x10	ǣ������	0x03	PL66ʽ152������
// 0x11	���л��ڣ������ֻ���	0x01	PLZ89ʽ122����
// 0x11	���л��ڣ������ֻ���	0x02	PLZ83ʽ152������
// 0x12	���л��ڣ����ֻ���	0x01	PLZ05ʽ155������
// 0x12	���л��ڣ����ֻ���	0x02	PLZ07ʽ122����
// 0x12	���л��ڣ����ֻ���	0x03	PLC09ʽ122����
// 0x12	���л��ڣ����ֻ���	0x04	PLL05ʽ120mm����������
// 0x12	���л��ڣ����ֻ���	0x05	������������
// 0x13	�����	0x01	PHL81ʽ122�����
// 0x13	�����	0x02	PHZ89ʽ122�����
// 0x13	�����	0x03	PHZ05ʽ300mmԶ�̻����
// 0x14	�Ȼ���	0x01	89ʽ82mm�Ȼ���
// 0x14	�Ȼ���	0x02	89ʽ100mm�Ȼ���
// 0x14	�Ȼ���	0x03	120mm�Ȼ���
// 0x14	�Ȼ���	0x04	89ʽ60mm�Ȼ���
// 0x14	�Ȼ���	0x05	82mm�����Ȼ���
// 0x15	�ڱ����	0x01	��λ����״�
// 0x15	�ڱ����	0x02	�ڱ���쳵
// 0x15	�ڱ����	0x03	�ڱ��Ŀ������״�
// 0x15	�ڱ����	0x04	�ڱ������ģ��ը��ָʾ��
// 0x16-0x1F	����	/	/
// 0x20	���ڣ��л�أ�	0x01	PZK091A35���׸���ս��
// 0x20	���ڣ��л�أ�	0x02	PG99ʽ35���׸������ݲɼ��豸
// 0x20	���ڣ��л�أ�	0x03	PGZ04�͵��ڽ������ϵͳս��
// 0x20	���ڣ��л�أ�	0x04	PLB625���ڽ������ս��
// 0x21	���ڣ��޻�أ�	0x01	˫37����
// 0x21	���ڣ��޻�أ�	0x02	˫25����
// 0x21	���ڣ��޻�أ�	0x03	�ģ�25����
// 0x21	���ڣ��޻�أ�	0x04	57mm����
// 0x22	���յ���ϵͳ	0x01	����17��������ϵͳS��
// 0x22	���յ���ϵͳ	0x02	����17��������ϵͳF��
// 0x22	���յ���ϵͳ	0x03	����16A/D��������ϵͳ���ݲɼ��豸
// 0x22	���յ���ϵͳ	0x04	����7B��������S��ϵͳ���ݲɼ��豸
// 0x22	���յ���ϵͳ	0x05	����7B��������F��ϵͳ���ݲɼ��豸
// 0x23	�����״�ϵͳ	0x01	LLP12A����״����ݲɼ��豸
// 0x23	�����״�ϵͳ	0x02	�鱨�״����ݲɼ��豸����׼�ͣ�
// 0x24	����ָ��ϵͳ	0x01	ָ����Ϣϵͳ�ã�Ӫ��վ���ݲɼ��豸
// 0x24	����ָ��ϵͳ	0x02	ָ����Ϣϵͳ������վ���ݲɼ��豸
// 0x25	�������յ���	0x01	��ӧ5
// 0x25	�������յ���	0x02	��ӧ6��Яʽ���յ���
// 0x25	�������յ���	0x03	ǰ��2��Яʽ���յ���
// 0x25	�������յ���	0x04	��ӧ6��Яʽ����
// 0x25	�������յ���	0x05	ǰ��2��Яʽ���յ���
// 0x26-0x2F	����	/	/
// 0x30	��Ա	0x01	����װ��
// 0x30	��Ա	0x02	����װ�ߣ���ս�ͣ�
// 0x30	��Ա	0x03	����װ�ߣ������ͣ�
// 0x31	�Զ���ǹ	0x01	95ʽ5.8mm�Զ���ǹ
// 0x31	�Զ���ǹ	0x02	AK47�Զ���ǹ
// 0x31	�Զ���ǹ	0x03	95-1ʽ5.8mm�Զ���ǹ
// 0x31	�Զ���ǹ	0x04	03ʽ5.8mm�Զ���ǹ
// 0x31	�Զ���ǹ	0x05	5.8mm��׼��ǹ
// 0x31	�Զ���ǹ	0x06	95Bʽ5.8mm�̲�ǹ
// 0x31	�Զ���ǹ	0x07	95-1ʽ5.8mm�̲�ǹ
// 0x31	�Զ���ǹ	0x08	95ʽ5.8mm�Զ���ǹ����ս�ͣ�
// 0x31	�Զ���ǹ	0x09	95-1ʽ5.8mm�Զ���ǹ����ս�ͣ�
// 0x31	�Զ���ǹ	0x0a	95Bʽ5.8mm�̲�ǹ����ս�ͣ�
// 0x31	�Զ���ǹ	0x0b	95-1ʽ5.8mm�̲�ǹ����ս�ͣ�
// 0x31	�Զ���ǹ	0x0c	95ʽ5.8mm�Զ���ǹ�������ͣ�
// 0x31	�Զ���ǹ	0x0d	95-1ʽ5.8mm�Զ���ǹ�������ͣ�
// 0x31	�Զ���ǹ	0x0e	95Bʽ5.8mm�̲�ǹ�������ͣ�
// 0x31	�Զ���ǹ	0x0f	95-1ʽ5.8mm�̲�ǹ�������ͣ�
// 0x32	���û�ǹ	0x01	95ʽ5.8mm���û�ǹ
// 0x32	���û�ǹ	0x02	95-1ʽ5.8mm���û�ǹ
// 0x32	���û�ǹ	0x03	95-1ʽ5.8mm���û�ǹ����ս�ͣ�
// 0x32	���û�ǹ	0x04	95ʽ5.8mm���û�ǹ�������ͣ�
// 0x32	���û�ǹ	0x05	95-1ʽ5.8mm���û�ǹ�������ͣ�
// 0x33	�ѻ���ǹ	0x01	88ʽ5.8mm�ѻ�ǹ
// 0x33	�ѻ���ǹ	0x02	09�ѻ���ǹ
// 0x33	�ѻ���ǹ	0x03	7.62mm�߾��Ⱦѻ�ǹ
// 0x33	�ѻ���ǹ	0x04	10ʽ12.7mm�ѻ�ǹ
// 0x33	�ѻ���ǹ	0x05	5.8mm�ѻ�ǹ����ս�ͣ�
// 0x33	�ѻ���ǹ	0x06	8.6mm�ѻ�ǹ����ս�ͣ�
// 0x33	�ѻ���ǹ	0x07	12.7mm�ѻ�ǹ����ս�ͣ�
// 0x33	�ѻ���ǹ	0x08	5.8mm�ѻ�ǹ�������ͣ�
// 0x33	�ѻ���ǹ	0x09	7.62mm�ѻ�ǹ�������ͣ�
// 0x33	�ѻ���ǹ	0x0a	10ʽ12.7mm�ѻ�ǹ�������ͣ�
// 0x34	΢�����ǹ	0x01	05ʽ5.8mm΢�����ǹ
// 0x34	΢�����ǹ	0x02	05ʽ5.8mm΢�����ǹ����ս�ͣ�
// 0x34	΢�����ǹ	0x03	05ʽ5.8mm΢�����ǹ�������ͣ�
// 0x35	����ǹ	0x01	09ʽ18.4mm����ǹ
// 0x35	����ǹ	0x02	09ʽ18.4mm����ǹ����ս�ͣ�
// 0x35	����ǹ	0x03	09ʽ18.4mm����ǹ�������ͣ�
// 0x36	��ǹ	0x01	��ǹ
// 0x36	��ǹ	0x02	��ǹ���������ս�ͣ�
// 0x37	�����񵯷�����	0x01	87ʽ35mm�Զ��񵯷�����
// 0x37	�����񵯷�����	0x02	04ʽ35mm�Զ��񵯷�����
// 0x37	�����񵯷�����	0x03	131��35mm�ѻ��񵯷�����
// 0x37	�����񵯷�����	0x04	10ʽ35mmǹ���񵯷�����
// 0x37	�����񵯷�����	0x05	87ʽ35mm�Զ��񵯷���������ս�ͣ�
// 0x37	�����񵯷�����	0x06	04ʽ35mm�Զ��񵯷���������ս�ͣ�
// 0x37	�����񵯷�����	0x07	131��35mm�ѻ��񵯷���������ս�ͣ�
// 0x37	�����񵯷�����	0x08	87ʽ35mm�Զ��񵯷������������ͣ�
// 0x37	�����񵯷�����	0x09	04ʽ35mm�Զ��񵯷������������ͣ�
// 0x37	�����񵯷�����	0x0a	131��35mm�ѻ��񵯷������������ͣ�
// 0x37	�����񵯷�����	0x0b	10ʽ35mmǹ���񵯷������������ͣ�
// 0x38	�ػ�ǹ	0x01	89ʽ12.7mm�ػ�ǹ
// 0x38	�ػ�ǹ	0x02	QBZ171ɽ����12.7mm�ػ�ǹ
// 0x38	�ػ�ǹ	0x03	89ʽ12.7mm�ػ�ǹ����ս�ͣ�
// 0x38	�ػ�ǹ	0x04	89ʽ12.7mm�ػ�ǹ�������ͣ�
// 0x39	�����ǹ	0x01	85ʽ12.7mm�����ǹ
// 0x39	�����ǹ	0x02	85ʽ12.7mm�����ǹ�������ͣ�
// 0x3A	��ѧ����豸	0x01	Baz-308ս��������
// 0x3A	��ѧ����豸	0x02	Bad-902CԶ����������
// 0x3B-0x3F	����	/	/
// 0x40	�������	0x01	80��
// 0x40	�������	0x02	11ʽ93mm�������Ͳ
// 0x40	�������	0x03	PF89ʽ80mm�������Ͳ
// 0x40	�������	0x04	11ʽ93mm�������Ͳ
// 0x40	�������	0x05	PF98ʽ93mm�������Ͳ
// 0x41	������̹�˻��	0x01	PF98ʽӪ��120mm��̹�˻��Ͳ
// 0x41	������̹�˻��	0x02	PF98ʽ����120mm��̹�˻��Ͳ
// 0x41	������̹�˻��	0x03	PF98ʽӪ��120mm��̹�˻��Ͳ�������ͣ�
// 0x41	������̹�˻��	0x04	PF98ʽ����120mm��̹�˻��Ͳ�������ͣ�
// 0x42	������̹�˵���	0x01	���73�ķ�̹�˵���
// 0x42	������̹�˵���	0x02	���8��̹�˵���
// 0x42	������̹�˵���	0x03	���12��̹�˵���
// 0x42	������̹�˵���	0x04	���8��̹�˵���
// 0x43	����	0x01	ѹ��ʽ����������
// 0x43	����	0x02	��̹�˵���
// 0x43	����	0x03	��ʽ����������
// 0x43	����	0x04	������
// 0x44	����������	0x01	����������
// 0x44	����������	0x02	����ģ����
// 0x45	����	0x01	82-2ʽ����
// 0x45	����	0x02	77-1ʽ����
// 0x46	���ױ�ը��	0x01	��ը��
// 0x47	���ھȻ�װ��	0x01	���ھȻ�
// 0x48	�����豸	0x01	����ǹ
// 0x48	�����豸	0x02	ģ��װ����
// 0x48	�����豸	0x03	�����ն�
// 0x49-0x4F	����	/	/
// 0x50	ͨ�ó���	0x01	ͨ�ó���
// 0x50	ͨ�ó���	0x02	����ͨ�÷ǻ�������
// 0x51	ָ�ӳ���	0x01	ָ�ӳ�
// 0x51	ָ�ӳ���	0x02	�ڱ�ָ�ӳ�
// 0x51	ָ�ӳ���	0x03	PZK091A35���׸���ָ�ӳ�
// 0x51	ָ�ӳ���	0x04	PGZ04�͵��ڽ������ϵͳָ�ӳ�
// 0x51	ָ�ӳ���	0x05	PLB625���ڽ������ָ�ӳ�
// 0x52	ͨ�ų���	0x01	ͨ�ų�
// 0x52	ͨ�ų���	0x02	�ڱ�ͨ�Žڵ㳵
// 0x53	��ҩ���ͳ�	0x01	��ҩ���ͳ�
// 0x54	�������䳵	0x01	�������䳵
// 0x55	������׳�	0x01	���׳�
// 0x56	������쳵	0x01	������쳵
// 0x56	������쳵	0x02	��쳵
// 0x57	�������ϳ�	0x01	���ϳ�
// 0x57	�������ϳ�	0x02	CSL132������װ�����ϳ�
// 0x58	�ۺ�ɨ�׳�	0x01	�ۺ�ɨ�׳�
// 0x59	���ͻ�е����	0x01	84Aʽ���ͻ�е����
// 0x5A	���޳���	0x01	װ�����޳�
// 0x5B	������ҵ����	0x01	CCZ111�����ܹ�����ҵ��
// 0x5C-0x5F	����	/	/
// 0x60	ֱ����	0x01	ֱ10��װֱ����
// 0x60	ֱ����	0x02	ֱ19��װֱ����
// 0x60	ֱ����	0x03	ֱ20ϵ��ֱ����
// 0x60	ֱ����	0x04	��17ϵ��ֱ����
// 0x60	ֱ����	0x05	ֱ8ϵ��ֱ����
// 0x60	ֱ����	0x06	ֱ9��װֱ����
// 0x60	ֱ����	0x07	��װֱ����
// 0x60	ֱ����	0x08	����ֱ����
// 0x61	���˻�	0x01	�ʺ�-3
// 0x61	���˻�	0x02	�ʺ�-4
// 0x61	���˻�	0x03	����-1
// 0x61	���˻�	0x04	MQ-9
// 0x61	���˻�	0x05	RQ-1
// 0x61	���˻�	0x06	RQ-4
// 0x62	ս����/��ը��	0x01	��6
// 0x62	ս����/��ը��	0x02	�ߺ�7
// 0x62	ս����/��ը��	0x03	��10
// 0x62	ս����/��ը��	0x04	��11
// 0x62	ս����/��ը��	0x05	��15
// 0x62	ս����/��ը��	0x06	��16
// 0x62	ս����/��ը��	0x07	��20
// 0x62	ս����/��ը��	0x08	��27
// 0x62	ս����/��ը��	0x09	��30
// 0x62	ս����/��ը��	0x0a	��35
// 0x62	ս����/��ը��	0x0b	F15
// 0x62	ս����/��ը��	0x0c	F16
// 0x62	ս����/��ը��	0x0d	F18
// 0x62	ս����/��ը��	0x0e	F22
// 0x62	ս����/��ը��	0x0f	F35
// 0x62	ս����/��ը��	0x10	B52
// 0x62	ս����/��ը��	0x11	B1B
// 0x62	ս����/��ը��	0x12	B2
// 0x63	���ӶԿ�	0x01	ս����Ż������ݲɼ��豸
// 0x64	������ʩ	0x01	������
// 0x64	������ʩ	0x02	�ر�
// 0x64	������ʩ	0x03	���׹���
// 0x64	������ʩ	0x04	��̹���
// 0x64	������ʩ	0x05	������
// 0x64	������ʩ	0x06	ָ����
// 0x64	������ʩ	0x07	��ҩ��
// 0x64	������ʩ	0x08	���Ͽ�
// 0x64	������ʩ	0x09	���ʿ�
// 0x64	������ʩ	0x0a	�״�վ
// 0x64	������ʩ	0x0b	����
// 0x64	������ʩ	0x0c	��վ
// 0x64	������ʩ	0x0d	�ܵ�
// 0x64	������ʩ	0x0e	����
// 0x64	������ʩ	0x0f	�������
// 0x64	������ʩ	0x10	ң����������
// 0x65	ս���ϰ�	0x01	��˿��
// 0x65	ս���ϰ�	0x02	����׶
// 0x65	ս���ϰ�	0x03	����
// 0x65	ս���ϰ�	0x04	��̹��ǵ��
// 0x65	ս���ϰ�	0x05	����������׳�
// 0x65	ս���ϰ�	0x06	���̹ⷴ���׳�
// 0x65	ս���ϰ�	0x07	�������׳�
// 0x65	ս���ϰ�	0x08	ʵ��������׳�
// 0x65	ս���ϰ�	0x09	ʵ��������׳�
// 0x65	ս���ϰ�	0x0a	ʵ��������׳�
// 0x65	ս���ϰ�	0x0b	����˻���մȾ��
// 0x66-0xFE	����	/	/
// 0xFF	����̨	/	/
typedef uint8_t T_Subtype;
T_Subtype read_T_Subtype(uint8_t *buf);
void write_T_Subtype(uint8_t *buf, T_Subtype *val);

// 5.66���¶ȣ�Temperature��
// a)	��������ʾ�¶ȡ�
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������39
// ��39���¶�˵����
// ȡֵ	˵��	��ע
// -80-+80	�¶�	��λ�����϶�
// ����ֵ	����
typedef uint8_t Temperature;
Temperature read_Temperature(uint8_t *buf);
void write_Temperature(uint8_t *buf, Temperature *val);

// 5.67��ʵ��״̬��1��TS_Character1��
// a)	��������ʾʵ���ʵ��״̬��1��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX�����룩
// d)	ȡֵ������40
// ��40��ʵ��״̬��1˵����
// λ��	ȡֵ	˵��	��ע
// bit0	����
// Bit1	0	�ն˸�������������
// 	1	�ն˲������ӷ����쳣
// bit2	0	�޹���
// 	1	�й���
// bit3	0	ѵ��ģʽ
// 	1	��ϰģʽ
// bit4	0	��������
// 	1	Ƿ��
// bit6-bit5	0	ģ������	����
// 	1	��ѵ����	�췽
// 	2	Ⱥ��	�Ʒ�
// 	3	������Ա���ʮ��ҽ����Ա	�׷�
// bit7	����
typedef struct {
  bool isPartsDisconnected; //
  bool isInError;
  bool isYanxi;
  bool isPowerLow;
  uint8_t side;
} TS_Character1;
TS_Character1 read_TS_Character1(uint8_t *buf);
void write_TS_Character1(uint8_t *buf, TS_Character1 *val);

// 5.68��ʵ��״̬��2��TS_Character2��
// a)	�����������ն��豸��ǰ��ʵ��ģʽ����Կ��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ������41
// ��41��ʵ��״̬��2˵����
// λ��	ȡֵ	˵��	��ע
// bit7	0	ѵ��ģʽ
//   1	��ϰģʽ
// bit6-bit0	0-127	��Կֵ
typedef struct {
  bool isYanxi;
  uint8_t key;
} TS_Character2;

TS_Character2 read_TS_Character2(uint8_t *buf);
void write_TS_Character2(uint8_t *buf, TS_Character2 *val);

// 5.69���ٶ�1��Velocity1��
// a)	��������ʾ�ٶȣ���λ����/�룩��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX�����룩
// d)	ȡֵ��-128-127
typedef uint8_t Velocity1;
Velocity1 read_Velocity1(uint8_t *buf);
void write_Velocity1(uint8_t *buf, Velocity1 *val);

// 5.70���ٶ�2��Velocity2��
// a)	��������ʾ�ٶȣ���λ��0.1��/�룩��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��0-255
typedef uint8_t Velocity2;
Velocity2 read_Velocity2(uint8_t *buf);
void write_Velocity2(uint8_t *buf, Velocity2 *val);

// 5.71���ٶ�3��Velocity3��
// a)	��������ʾ�ٶȣ���λ��10��/�룩��
// b)	���ȣ�1BYTE
// c)	��ʽ��HEX
// d)	ȡֵ��0-255
typedef uint8_t Velocity3;
Velocity3 read_Velocity3(uint8_t *buf);
void write_Velocity3(uint8_t *buf, Velocity3 *val);

// ���� 5�ֽڣ�Reserve5��
  // b)	���ȣ�5BYTE
  // c)	��ʽ��HEX
typedef uint40_t Reserve5;
Reserve5 read_Reserve5(uint8_t *buf);
void write_Reserve5(uint8_t *buf, Reserve5 *val);

// ���� 2�ֽڣ�Reserve2��
  // b)	���ȣ�2BYTE
  // c)	��ʽ��HEX
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
