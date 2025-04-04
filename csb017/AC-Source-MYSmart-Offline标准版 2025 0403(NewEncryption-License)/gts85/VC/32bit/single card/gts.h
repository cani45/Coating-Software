#pragma once

#define GT_API extern "C" short __stdcall

#define DLL_VERSION_0                   2
#define DLL_VERSION_1                   1
#define DLL_VERSION_2                   0

#define DLL_VERSION_3                   1
#define DLL_VERSION_4                   5
#define DLL_VERSION_5                   0
#define DLL_VERSION_6                   6
#define DLL_VERSION_7                   0
#define DLL_VERSION_8                   7

#define MC_NONE                         -1

#define MC_LIMIT_POSITIVE               0
#define MC_LIMIT_NEGATIVE               1
#define MC_ALARM                        2
#define MC_HOME                         3
#define MC_GPI                          4
#define MC_ARRIVE                       5
#define MC_MPG                          6
#define MC_MPG_ENCODER				    9

#define MC_ENABLE                       10
#define MC_CLEAR                        11
#define MC_GPO                          12

#define MC_DAC                          20
#define MC_STEP                         21
#define MC_PULSE                        22
#define MC_ENCODER                      23
#define MC_ADC                          24
#define MC_AU_ENCODER                   26

#define MC_AXIS                         30
#define MC_PROFILE                      31
#define MC_CONTROL                      32

#define MC_SMART_CUTTER                 400

#define CAPTURE_SCALE_TRANSFORM_ON      0
#define CAPTURE_SCALE_TRANSFORM_OFF     1

#define CAPTURE_HOME                    1
#define CAPTURE_INDEX                   2
#define CAPTURE_PROBE                   3
#define CAPTURE_HSIO0                   6
#define CAPTURE_HSIO1                   7
#define CAPTURE_HOME_GPI                8

#define PT_MODE_STATIC                  0
#define PT_MODE_DYNAMIC                 1

#define PT_SEGMENT_NORMAL               0
#define PT_SEGMENT_EVEN                 1
#define PT_SEGMENT_STOP                 2

#define GEAR_MASTER_ENCODER             1
#define GEAR_MASTER_PROFILE             2
#define GEAR_MASTER_AXIS                3

#define FOLLOW_MASTER_ENCODER           1
#define FOLLOW_MASTER_PROFILE           2
#define FOLLOW_MASTER_AXIS              3

#define FOLLOW_EVENT_START              1
#define FOLLOW_EVENT_PASS               2

#define GEAR_EVENT_START                1
#define GEAR_EVENT_PASS                 2
#define GEAR_EVENT_AREA                 5

#define FOLLOW_SEGMENT_NORMAL           0
#define FOLLOW_SEGMENT_EVEN             1
#define FOLLOW_SEGMENT_STOP             2
#define FOLLOW_SEGMENT_CONTINUE         3

#define INTERPOLATION_AXIS_MAX          8
#define CRD_FIFO_MAX                    4096
#define FIFO_MAX                        2
#define CRD_MAX                         2
#define CRD_OPERATION_DATA_EXT_MAX      2

#define CRD_OPERATION_TYPE_NONE                            (0)
#define CRD_OPERATION_TYPE_BUF_IO_DELAY                    (1)
#define CRD_OPERATION_TYPE_LASER_ON                        (2)
#define CRD_OPERATION_TYPE_LASER_OFF                       (3)
#define CRD_OPERATION_TYPE_BUF_DA                          (4)
#define CRD_OPERATION_TYPE_LASER_CMD                       (5)
#define CRD_OPERATION_TYPE_LASER_FOLLOW_RATIO              (6)
#define CRD_OPERATION_TYPE_LMTS_ON                         (7)
#define CRD_OPERATION_TYPE_LMTS_OFF                        (8)
#define CRD_OPERATION_TYPE_SET_STOP_IO                     (9)
#define CRD_OPERATION_TYPE_BUF_MOVE                        (10)
#define CRD_OPERATION_TYPE_BUF_GEAR                        (11)
#define CRD_OPERATION_TYPE_SET_SEG_NUM                     (12)
#define CRD_OPERATION_TYPE_STOP_MOTION                     (13)
#define CRD_OPERATION_TYPE_SET_VAR_VALUE                   (14)
#define CRD_OPERATION_TYPE_JUMP_NEXT_SEG                   (15)
#define CRD_OPERATION_TYPE_SYNCH_PRF_POS                   (16)
#define CRD_OPERATION_TYPE_VIRTUAL_TO_ACTUAL               (17)
#define CRD_OPERATION_TYPE_SET_USER_VAR                    (18)
#define CRD_OPERATION_TYPE_SET_DO_BIT_PULSE                (19)
#define CRD_OPERATION_TYPE_BUF_COMPAREPULSE                (20)
#define CRD_OPERATION_TYPE_LASER_ON_EX                     (21)
#define CRD_OPERATION_TYPE_LASER_OFF_EX                    (22)
#define CRD_OPERATION_TYPE_LASER_CMD_EX                    (23)
#define CRD_OPERATION_TYPE_LASER_FOLLOW_RATIO_EX           (24)
#define CRD_OPERATION_TYPE_LASER_FOLLOW_MODE               (25)
#define CRD_OPERATION_TYPE_LASER_FOLLOW_OFF                (26)
#define CRD_OPERATION_TYPE_LASER_FOLLOW_OFF_EX             (27)
#define CRD_OPERATION_TYPE_LASER_FOLLOW_SPLINE             (28)
#define CRD_OPERATION_TYPE_MOTION_DATA                     (29)
#define CRD_OPERATION_TYPE_SET_LASER_DIS_ENABLE            (30)
#define CRD_OPERATION_TYPE_SELECT_LASER_DIS_TABLE          (31)

#define CRD_OPERATION_TYPE_WAIT_WATCH_VAR                  (33)
#define CRD_OPERATION_TYPE_BUF_STOP_POS                    (34)

#define CRD_OPERATION_TYPE_BUF_STOP                        (36)
#define CRD_OPERATION_TYPE_BUF_MOVE_JOG                    (37)

#define CRD_OPERATION_TYPE_BUF_TREND                       (50)

#define CRD_OPERATION_TYPE_BUF_FOLLOW_MASTER               (60)
#define CRD_OPERATION_TYPE_BUF_FOLLOW_EVENT                (61)
#define CRD_OPERATION_TYPE_BUF_FOLLOW_EVENT_TRIGGER        (62) //��ǰհָ����Ҫͨ����Щ��������֣�GT_BufFollowEventCross��GT_BufFollowEventTrigger����CRD_OPERATION_TYPE_BUF_FOLLOW_EVENT��������Ӵ˺��������
#define CRD_OPERATION_TYPE_BUF_FOLLOW_START                (63)
#define CRD_OPERATION_TYPE_BUF_FOLLOW_NEXT                 (66)
#define CRD_OPERATION_TYPE_BUF_FOLLOW_RETURN               (68)

#define CRD_OPERATION_TYPE_BUF_EVENT_ON                    (70)
#define CRD_OPERATION_TYPE_BUF_EVENT_OFF                   (71)
#define CRD_OPERATION_TYPE_WORK_LASER_FOLLOW_RATIO         (72)

#define CRD_OPERATION_TYPE_BUF_SMART_CUTTER_ENABLE         (80)

#define CRD_OPERATION_TYPE_BUF_POS_COMPARE_START           (90)
#define CRD_OPERATION_TYPE_BUF_POS_COMPARE_STOP            (91)
#define CRD_OPERATION_TYPE_BUF_POS_COMPARE_PSO_PRM         (97)
#define CRD_OPERATION_TYPE_BUF_SET_COMPARE_PORT            (98)

#define CRD_OPERATION_TYPE_BUF_2D_COMPARE_DATA             (100)
#define CRD_OPERATION_TYPE_BUF_2D_COMPARE_PULSE            (101)

#define CRD_OPERATION_TYPE_WAIT_VAR_LONG                   (131) // GSN��Ϊ31��GTS�г�ͻ������131
#define CRD_OPERATION_TYPE_WAIT_DI                         (132) // GSN��Ϊ32��GTS�г�ͻ������132

#define CRD_OPERATION_TYPE_BUF_MOVE_JOG_EX                 (150) // ͬ��GSN����

#define CRD_OPERATION_TYPE_SET_CRD_WORK_UNIT_TAG           (180) // ���ò岹�ӹ���Ԫ��ǩ�û���ָ����

#define CRD_OPERATION_TYPE_LASER_FOLLOW_TABLE              (200)

#define INTERPOLATION_MOTION_TYPE_LINE                     (0)
#define INTERPOLATION_MOTION_TYPE_CIRCLE                   (1)
#define INTERPOLATION_MOTION_TYPE_HELIX                    (2)
#define INTERPOLATION_MOTION_TYPE_CIRCLE_3D                (3)
#define INTERPOLATION_MOTION_TYPE_ELLIPSE                  (4)
#define INTERPOLATION_MOTION_TYPE_ELLIPSE_DATA             (5)
#define INTERPOLATION_MOTION_TYPE_HELIX_AU                 (50)
#define INTERPOLATION_MOTION_TYPE_CIRCLE_VARIABLE          (60)

#define INTERPOLATION_CIRCLE_PLAT_XY    0
#define INTERPOLATION_CIRCLE_PLAT_YZ    1
#define INTERPOLATION_CIRCLE_PLAT_ZX    2

#define INTERPOLATION_HELIX_CIRCLE_XY_LINE_Z    0
#define INTERPOLATION_HELIX_CIRCLE_YZ_LINE_X    1
#define INTERPOLATION_HELIX_CIRCLE_ZX_LINE_Y    2

#define INTERPOLATION_CIRCLE_DIR_CW     0
#define INTERPOLATION_CIRCLE_DIR_CCW    1

#define COMPARE_PORT_HSIO                 (0)             //
#define COMPARE_PORT_GPO                  (1)             //

#define  COMPARE2D_MODE_2D            1
#define  COMPARE2D_MODE_1D            0

#define  INTERFACEBOARD20                2
#define  INTERFACEBOARD30                3


#define AXIS_LASER                       7
#define AXIS_LASER_EX                    8

#define LASER_CTRL_MODE_PWM1            (0)                 //PWM1
#define LASER_CTRL_FREQUENCY            (1)                 //
#define LASER_CTRL_VOLTAGE              (2)                 //
#define LASER_CTRL_MODE_PWM2            (3)                 //

#define CRD_BUFFER_MODE_DYNAMIC_DEFAULT  (0)
#define CRD_BUFFER_MODE_DYNAMIC_KEEP     (1)
#define CRD_BUFFER_MODE_STATIC_INPUT     (11)
#define CRD_BUFFER_MODE_STATIC_READY     (12)
#define CRD_BUFFER_MODE_STATIC_START     (13)

#define CRD_SMOOTH_MODE_NONE                   (0)
#define CRD_SMOOTH_MODE_PERCENT                (1)
#define CRD_SMOOTH_MODE_JERK                   (2)

typedef struct TrapPrm
{
    double acc;
    double dec;
    double velStart;
    short  smoothTime;
} TTrapPrm;

typedef struct TTrapTime
{
	double totalTime;
	double remainderTime;
	double pad[2];
} TTrapTime;

typedef struct JogPrm
{
    double acc;
    double dec;
    double smooth;
} TJogPrm;

typedef struct Pid
{
    double kp;
    double ki;
    double kd;
    double kvff;
    double kaff;
    long   integralLimit;
    long   derivativeLimit;
    short  limit;
} TPid;

typedef struct ThreadSts
{
    short  run;
    short  error;
    double result;
    short  line;
} TThreadSts;

typedef struct VarInfo
{
    short id;
    short dataType;
    char  name[32];
} TVarInfo;

typedef struct CompileInfo
{
    char  *pFileName;
    short *pLineNo;
    char  *pMessage;
} TCompileInfo;

//�ٶ���̬����
const long TYPE_ACC = 1;
const long TYPE_EVEN = 2;
const long TYPE_DCC = 4;

//�ٶ���̬��Ϣ
typedef struct
{
	long segVelType;             //�ٶ���̬����
	long endVelType;             //���һ���ٶ���̬
	double segTime;              //���ε��˶�ʱ��
	double segAccTime;           //���ٶ�ʱ��
	double segEvenTime;          //���ٶ�ʱ��
	double segDccTime;           //���ٶ�ʱ��
	double segAccLength;         //���ٶξ���
	double segEvenLength;        //���ٶξ���
	double segDccLength;         //���ٶξ���
	double segMaxVel;            //����ٶ�
	double segStartVel;          //����ٶ�
	double segEndVel;            //�յ��ٶ�
}TVelInfo;

typedef struct CrdPrm
{
    short dimension;                              // ����ϵά��
    short profile[INTERPOLATION_AXIS_MAX];                             // ����profile��������
    double synVelMax;                             // ���ϳ��ٶ�
    double synAccMax;                             // ���ϳɼ��ٶ�
    short evenTime;                               // ��С����ʱ��
    short setOriginFlag;                          // ����ԭ������ֵ��־,0:Ĭ�ϵ�ǰ�滮λ��Ϊԭ��λ��;1:�û�ָ��ԭ��λ��
    long originPos[INTERPOLATION_AXIS_MAX];                            // �û�ָ����ԭ��λ��
}TCrdPrm;

typedef struct CrdBufOperation
{
    short flag;                                   // ��־�ò岹���Ƿ���IO����ʱ
    unsigned short delay;                         // ��ʱʱ��
    short doType;                                 // ������IO������,0:�����IO
    unsigned short doMask;                        // ������IO�������������
    unsigned short doValue;                       // ������IO�����ֵ
    unsigned short dataExt[CRD_OPERATION_DATA_EXT_MAX];     // ����������չ����
}TCrdBufOperation;

typedef struct CrdData
{
    short motionType;                             // �˶�����,0:ֱ�߲岹,1:Բ���岹
    short circlePlat;                             // Բ���岹��ƽ��
    long pos[8];                                  // ��ǰ�θ����յ�λ��
    double radius;                                // Բ���岹�İ뾶
    short circleDir;                              // Բ����ת����,0:˳ʱ��;1:��ʱ��
    double center[3];                             // Բ���岹��Բ������
    double vel;                                   // ��ǰ�κϳ�Ŀ���ٶ�
    double acc;                                   // ��ǰ�κϳɼ��ٶ�
    short velEndZero;                             // ��־��ǰ�ε��յ��ٶ��Ƿ�ǿ��Ϊ0,0:��ǿ��Ϊ0;1:ǿ��Ϊ0
    TCrdBufOperation operation;                   // ��������ʱ��IO�ṹ��

    double cos[8];                                // ��ǰ�θ����Ӧ������ֵ
    double velEnd;                                // ��ǰ�κϳ��յ��ٶ�
    double velEndAdjust;                          // �����յ��ٶ�ʱ�õ��ı���(ǰհģ��)
    double r;                                     // ��ǰ�κϳ�λ����
}TCrdData;

typedef struct Trigger
{
    short encoder;
    short probeType;
    short probeIndex;
	short sense;
    short offset;
	unsigned long loop;
    short windowOnly;
    long firstPosition;
    long lastPosition;
}TTrigger;

typedef struct TriggerEx
{
	short latchType;
	short latchIndex;
	short probeType;
	short probeIndex;
	short sense;
	long  offset;
	unsigned long loop;
	short windowOnly;
	long firstPosition;
	long lastPosition;
}TTriggerEx;

typedef struct TriggerStatus
{
    short execute;
    short done;
    long position;
}TTriggerStatus;

typedef struct TriggerStatusEx
{
	short execute;
	short done;
	long position;
	unsigned long clock;
	unsigned long loopCount;
}TTriggerStatusEx;

typedef struct
{
	short fifoFull;
	short pad1[3];
	double pad2[2];
}TLatchValueInfo;

typedef struct
{
    long px;
    long py;
} T2DCompareData;

typedef struct
{
    short encx;
    short ency;
    short source;
    short outputType;
    short startLevel;
    short time;
    short maxerr;
    short threshold;
} T2DComparePrm;

typedef struct
{
	short mode;
	short encoderX;
	short encoderY;
	short source;
	short outputType;
	short startLevel;
	long pulseTime;
	short maxerr;
	long pulseCount;
	long pulseCycle;
	long interval;
	unsigned short pad1[2];
	long pad2[2];
}T2DComparePrmEx;
typedef struct
{
	long px;
	long py;
	long intervalX;
	long intervalY;
	long count;
}T2DCompareDataGroup;

typedef struct
{
	long startPosX;
	long startPosY;
	long intervalX;
	long intervalY;
	unsigned long count;
}T2DCompareLinear;

typedef struct
{
	double time;
	long segmentUsed;
	long segmentHead;
	long segmentTail;
} TCrdTime;

typedef struct
{
	short percent;
	short accStartPercent;
	short decEndPercent;
	double reserve;
} TCrdSmooth;

typedef struct
{
	short          mdlType;                       // ��չģ�������

	short          mdlAddressBegin;               // ��ģ�����ʼ��ַƫ��

	short          adChannels;                    // ���ΪADʱ��ͨ��������
	double         adMaxVoltage;                  // ���ΪADʱ�����ת��λ��Ӧ�ĵ�ѹֵ
	double         adMinVoltage;                  // ���ΪADʱ����Сת��λ��Ӧ�ĵ�ѹֵ

	short          daChannels;                    // ���ΪDAʱ��ͨ��������
	double         daMaxVoltage;                  // ���ΪDAʱ�����ת��λ��Ӧ�ĵ�ѹֵ
	double         daMinVoltage;                  // ���ΪDAʱ����Сת��λ��Ӧ�ĵ�ѹֵ

	unsigned short outSave;                       // ������ǰIO�����ֵ
}TExtMdlCfgInfo;

typedef struct
{
	unsigned short type;
	short id;
	long status;
	unsigned long synchCount;
	unsigned long ringNetType;
	unsigned long portStatus;//��ȫģʽ״̬
	unsigned long sportDropCount;//ģ��SPORT����ʧ����
	unsigned long reserve[7];
} TTerminalStatus;

/***************************************************************/
/*���������ͻض��ֶ�˵��
δ֪�豸��    0
���忨��      [1,1000)
�������������[1000,2000)
���翨��      [2000,3000)
�����������  [3000,4000)
*/
/***************************************************************/

/***************************************************************/
/*δ֪�豸                                                     */
/***************************************************************/
#define CARD_TYPE_NONE                                     (0)

/***************************************************************/
/*GTS�Ͽ�   [100,200)                                          */
/***************************************************************/
#define CARD_TYPE_GTS_400_PG_PCI                           (100)
#define CARD_TYPE_GTS_400_PV_PCI                           (101)
#define CARD_TYPE_GTS_800_PG_PCI                           (102)
#define CARD_TYPE_GTS_800_PV_PCI                           (103)

/***************************************************************/
/*GTS_VB    [200,300)                                          */
/***************************************************************/
#define CARD_TYPE_GTS_400_PG_PCI_VB_STANDARD               (200)
#define CARD_TYPE_GTS_400_PV_PCI_VB_STANDARD               (201)
#define CARD_TYPE_GTS_800_PG_PCI_VB_STANDARD               (202)
#define CARD_TYPE_GTS_800_PV_PCI_VB_STANDARD               (203)

#define CARD_TYPE_GTS_400_PG_PCI_VB_LASER                  (210)
#define CARD_TYPE_GTS_400_PV_PCI_VB_LASER                  (211)
#define CARD_TYPE_GTS_800_PG_PCI_VB_LASER                  (212)
#define CARD_TYPE_GTS_800_PV_PCI_VB_LASER                  (213)

#define CARD_TYPE_GTS_400_PV_PCI_VB_GANTRY                 (221)
#define CARD_TYPE_GTS_800_PV_PCI_VB_GANTRY                 (223)

#define CARD_TYPE_GTS_800_PG_PCI_VB_5A                     (232)
#define CARD_TYPE_GTS_800_PV_PCI_VB_5A                     (233)

//���ư汾
//����ͨ������·����
#define CARD_TYPE_GTS_400_PG_PCI_VB_CUSTOM_01              (250)
#define CARD_TYPE_GTS_400_PV_PCI_VB_CUSTOM_01              (251)
#define CARD_TYPE_GTS_800_PG_PCI_VB_CUSTOM_01              (252)
#define CARD_TYPE_GTS_800_PV_PCI_VB_CUSTOM_01              (253)
//�����
#define CARD_TYPE_GTS_400_PG_PCI_VB_CUSTOM_02              (254)
#define CARD_TYPE_GTS_800_PG_PCI_VB_CUSTOM_02              (255)

/***************************************************************/
/*GTS_PCIe  [300,400)                                          */
/***************************************************************/
#define CARD_TYPE_GTS_400_PG_PCIE                          (300)
#define CARD_TYPE_GTS_400_PV_PCIE                          (301)
#define CARD_TYPE_GTS_800_PG_PCIE                          (302)
#define CARD_TYPE_GTS_800_PV_PCIE                          (303)
#define CARD_TYPE_GTS_1400_PG_PCIE                         (304)

#define CARD_TYPE_GTS_400_GT_PCIE                          (310)
#define CARD_TYPE_GTS_800_GT_PCIE                          (311)

#define CARD_TYPE_GTS_400_PG_PCIE_HCB5                     (320)

#define CARD_TYPE_GTS_400_PG_PCIE_NC                       (350)//���ذ汾���ƣ��ֶ�[350,360)
#define CARD_TYPE_GTS_400_PG_PCIE_CUSTOM_01                (360)//�׷ᶨ��

/***************************************************************/
/*GSN     [2000,3000)                                          */
/***************************************************************/
#define CARD_TYPE_GSN_008_G_00                             (2000)
#define CARD_TYPE_GSN_008_V_00                             (2001)
#define CARD_TYPE_GSN_008_GT_00                            (2002)
#define CARD_TYPE_GSN_008_VT_00                            (2003)
#define CARD_TYPE_GSN_008_LT_00                            (2004)
#define CARD_TYPE_GSN_008_LT_01                            (2005)

#define CARD_TYPE_GSN_016_LT_01                            (2010)

#define CARD_TYPE_GSN_024_G_00                             (2020)
#define CARD_TYPE_GSN_024_V_00                             (2021)
#define CARD_TYPE_GSN_024_GT_00                            (2022)
#define CARD_TYPE_GSN_024_VT_00                            (2023)

#define CARD_TYPE_GSN_024_VT_01                            (2024)
#define CARD_TYPE_GSN_024_LT_01                            (2025)

#define CARD_TYPE_GSN_032_G_00                             (2030)
#define CARD_TYPE_GSN_032_G_01                             (2031)

#define CARD_TYPE_GSN_048_G_00                             (2040)
#define CARD_TYPE_GSN_048_GT_00                            (2041)
#define CARD_TYPE_GSN_048_G_01                             (2042)

#define CARD_TYPE_GSN_064_G_02                             (2050)
#define CARD_TYPE_GSN_064_VT_02                            (2051)
GT_API GT_GetCardType(unsigned long *pCardTypeArray,short cardTypeArraySize,short *pCardTypeCount);

GT_API GT_GetDllVersion(char **pDllVersion);

GT_API GT_SetCardNo(short index);
GT_API GT_GetCardNo(short *pIndex);

GT_API GT_GetVersion(char **pVersion);
GT_API GT_GetInterfaceBoardSts(short *pStatus);
GT_API GT_SetInterfaceBoardSts(short type);
GT_API GT_Open(short channel=0,short param=1);
GT_API GT_Close(void);
GT_API GT_OpenDevice(short channel = 0,short param = 1);

GT_API GT_LoadConfig(char *pFile);

GT_API GT_AlarmOff(short axis);
GT_API GT_AlarmOn(short axis);
GT_API GT_LmtsOn(short axis,short limitType=-1);
GT_API GT_LmtsOff(short axis,short limitType=-1);
GT_API GT_LmtsOnEx(short axis,short limitType=-1,short limitMode=-1);
GT_API GT_LmtsOffEx(short axis,short limitType=-1,short limitMode=-1);
GT_API GT_ProfileScale(short axis,short alpha,short beta);
GT_API GT_EncScale(short axis,short alpha,short beta);
GT_API GT_StepDir(short step);
GT_API GT_StepPulse(short step);
GT_API GT_StepOrthogonal(short step);
GT_API GT_SetMtrBias(short dac,short bias);
GT_API GT_GetMtrBias(short dac,short *pBias);
GT_API GT_SetMtrLmt(short dac,short limit);
GT_API GT_GetMtrLmt(short dac,short *pLimit);
GT_API GT_EncSns(unsigned short sense);
GT_API GT_EncOn(short encoder);
GT_API GT_EncOff(short encoder);
GT_API GT_SetPosErr(short control,long error);
GT_API GT_GetPosErr(short control,long *pError);
GT_API GT_SetAxisPosErrLimit(short axis,long error);
GT_API GT_GetAxisPosErrLimit(short axis,long *pError);
GT_API GT_SetStopDec(short profile,double decSmoothStop,double decAbruptStop);
GT_API GT_GetStopDec(short profile,double *pDecSmoothStop,double *pDecAbruptStop);
GT_API GT_SetStopSmoothTime(short profile,short smoothTime);
GT_API GT_GetStopSmoothTime(short profile,short *pSmoothTime);
GT_API GT_LmtSns(unsigned short sense);
GT_API GT_SetSense(short dataType,short dataIndex,short value);
GT_API GT_GetSense(short dataType,short dataIndex,short *pValue);
GT_API GT_CtrlMode(short axis,short mode);
GT_API GT_SetStopIo(short axis,short stopType,short inputType,short inputIndex);
GT_API GT_GpiSns(unsigned short sense);
GT_API GT_SetAdcFilter(short adc,short filterTime);
GT_API GT_SetAxisInputShaping(short axis,short enable,short count,double k);

GT_API GT_SetDo(short doType,long value);
GT_API GT_SetDoBit(short doType,short doIndex,short value);
GT_API GT_GetDo(short doType,long *pValue);
GT_API GT_SetDoBitReverse(short doType,short doIndex,short value,short reverseTime);
GT_API GT_SetDoMask(short doType,unsigned short doMask,long value);
GT_API GT_EnableDoBitPulse(short doType,short doIndex,unsigned short highLevelTime,unsigned short lowLevelTime,long pulseNum,short firstLevel);
GT_API GT_DisableDoBitPulse(short doType,short doIndex);

GT_API GT_GetDi(short diType,long *pValue);
GT_API GT_GetDiReverseCount(short diType,short diIndex,unsigned long *pReverseCount,short count=1);
GT_API GT_SetDiReverseCount(short diType,short diIndex,unsigned long *pReverseCount,short count=1);
GT_API GT_GetDiRaw(short diType,long *pValue);

GT_API GT_SetDac(short dac,short *pValue,short count=1);
GT_API GT_GetDac(short dac,short *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_SetAuDac(short dac,short *pValue,short count = 1);
GT_API GT_GetAuDac(short dac,short *pValue,short count=1,unsigned long *pClock=NULL);

GT_API GT_GetAdc(short adc,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetAdcValue(short adc,short *pValue,short count=1,unsigned long *pClock=NULL);

GT_API GT_SetEncPos(short encoder,long encPos);
GT_API GT_GetEncPos(short encoder,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetEncPosPre(short encoder,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetEncVel(short encoder,double *pValue,short count=1,unsigned long *pClock=NULL);

GT_API GT_WriteAuEncPos(short encoder,double *pPos,short count=1);
GT_API GT_ReadAuEncPos(short encoder,double *pPos,short count=1);
GT_API GT_ReadAuEncVel(short encoder,double *pVel,short count=1);

GT_API GT_WriteMpgPos(short mpg,double *pPos,short count=1);
typedef struct
{
	double pos;
	double vel;
	double reserve[2];
	long di;
	long reserve1[3];
}TMpgInfo;
GT_API GT_ReadMpgInfo(short mpg,TMpgInfo *pMpgInfo);

GT_API GT_SetCaptureMode(short encoder,short mode);
GT_API GT_GetCaptureMode(short encoder,short *pMode,short count=1);
GT_API GT_StopCapture(short encoder);
GT_API GT_GetCaptureStatus(short encoder,short *pStatus,long *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetCaptureStatusEx(short encoder,short *pStatus,long *pValue,double *pDoubleVar,unsigned long *pCaptureClock,short count=1,unsigned long *pClock=NULL);
GT_API GT_SetCaptureSense(short encoder,short mode,short sense);
GT_API GT_ClearCaptureStatus(short encoder);
GT_API GT_SetCaptureRepeat(short encoder,short count);
GT_API GT_GetCaptureRepeatStatus(short encoder,short *pCount);
GT_API GT_GetCaptureRepeatPos(short encoder,long *pValue,short startNum,short count);
GT_API GT_GetCaptureRepeatPosEx(short encoder,long *pValue,double *pDoubleVar,unsigned long *pCaptureClock,short startNum,short count);

GT_API GT_SetCaptureEncoder(short trigger,short encoder);
GT_API GT_GetCaptureWidth(short trigger,short *pWidth,short count=1);
GT_API GT_GetCaptureHomeGpi(short trigger,short *pHomeSts,short *pHomePos,short *pGpiSts,short *pGpiPos,short count=1);

GT_API GT_Reset();
GT_API GT_GetClock(unsigned long *pClock,unsigned long *pLoop=NULL);
GT_API GT_GetClockHighPrecision(unsigned long *pClock);

GT_API GT_GetSts(short axis,long *pSts,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetTerminalStatus(TTerminalStatus *pTerminalStatus,unsigned long *pClock=NULL);
GT_API GT_ClrSts(short axis,short count=1);
GT_API GT_AxisOn(short axis);
GT_API GT_AxisOff(short axis);
GT_API GT_Stop(long mask,long option);
GT_API GT_StopEx(long mask,long option);
GT_API GT_SetPrfPos(short profile,long prfPos);
GT_API GT_SynchAxisPos(long mask);
GT_API GT_ZeroPos(short axis,short count=1);

GT_API GT_SetSoftLimit(short axis,long positive,long negative);
GT_API GT_GetSoftLimit(short axis,long *pPositive,long *pNegative);
GT_API GT_SetAxisBand(short axis,long band,long time);
GT_API GT_GetAxisBand(short axis,long *pBand,long *pTime);
GT_API GT_SetBacklash(short axis,long compValue,double compChangeValue,long compDir);
GT_API GT_GetBacklash(short axis,long *pCompValue,double *pCompChangeValue,long *pCompDir);
GT_API GT_SetLeadScrewComp(short axis,short n,long startPos,long lenPos,long *pCompPos,long *pCompNeg);
GT_API GT_EnableLeadScrewComp(short axis,short mode);
GT_API GT_GetCompensate(short axis,double *pPitchError,double *pCrossError,double *pBacklashError,double *pEncPos,double *pPrfPos);

GT_API GT_EnableGantry(short gantryMaster,short gantrySlave,double masterKp,double slaveKp);
GT_API GT_DisableGantry();
GT_API GT_SetGantryErrLmt(long gantryErrLmt);
GT_API GT_GetGantryErrLmt(long *pGantryErrLmt);
GT_API GT_ZeroGantryPos(short gantryMaster,short gantrySlave);

GT_API GT_GetPrfPos(short profile,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetPrfVel(short profile,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetPrfAcc(short profile,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetPrfMode(short profile,long *pValue,short count=1,unsigned long *pClock=NULL);

GT_API GT_GetAxisPrfPos(short axis,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetAxisPrfVel(short axis,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetAxisPrfAcc(short axis,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetAxisEncPos(short axis,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetAxisEncVel(short axis,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetAxisEncAcc(short axis,double *pValue,short count=1,unsigned long *pClock=NULL);
GT_API GT_GetAxisError(short axis,double *pValue,short count=1,unsigned long *pClock=NULL);

GT_API GT_SetLongVar(short index,long value);
GT_API GT_GetLongVar(short index,long *pValue);
GT_API GT_SetDoubleVar(short index,double pValue);
GT_API GT_GetDoubleVar(short index,double *pValue);

GT_API GT_SetControlFilter(short control,short index);
GT_API GT_GetControlFilter(short control,short *pIndex);

GT_API GT_SetPid(short control,short index,TPid *pPid);
GT_API GT_GetPid(short control,short index,TPid *pPid);

GT_API GT_SetKvffFilter(short control,short index,short kvffFilterExp,double accMax);
GT_API GT_GetKvffFilter(short control,short index,short *pKvffFilterExp,double *pAccMax);

GT_API GT_Update(long mask);
GT_API GT_SetPos(short profile,long pos);
GT_API GT_GetPos(short profile,long *pPos);
GT_API GT_SetVel(short profile,double vel);
GT_API GT_GetVel(short profile,double *pVel);

GT_API GT_PrfTrap(short profile);
GT_API GT_SetTrapPrm(short profile,TTrapPrm *pPrm);
GT_API GT_GetTrapPrm(short profile,TTrapPrm *pPrm);
GT_API GT_GetTrapTime(short profile,TTrapTime *pTime);
GT_API GT_GetTimePos(short profile,double time,double *pPosNow,double *pPosNext);
GT_API GT_GetTrapSts(short profile,short *prfSts);
GT_API GT_ClearTrapSts(short profile);

GT_API GT_PrfJog(short profile);
GT_API GT_SetJogPrm(short profile,TJogPrm *pPrm);
GT_API GT_GetJogPrm(short profile,TJogPrm *pPrm);

GT_API GT_PrfPt(short profile,short mode=PT_MODE_STATIC);
GT_API GT_SetPtLoop(short profile,long loop);
GT_API GT_GetPtLoop(short profile,long *pLoop);
GT_API GT_PtSpace(short profile,short *pSpace,short fifo=0);
GT_API GT_PtData(short profile,double pos,long time,short type=PT_SEGMENT_NORMAL,short fifo=0);
GT_API GT_PtDataArray(short profile,double *pPos,long time,short *pType,short fifo,short count);
GT_API GT_PtDataWN(short profile,double pos,long time,short type=PT_SEGMENT_NORMAL,long segNum=0,short fifo=0);
GT_API GT_PtClear(short profile,short fifo=0);
GT_API GT_PtStart(long mask,long option=0);
GT_API GT_SetPtMemory(short profile,short memory);
GT_API GT_GetPtMemory(short profile,short *pMemory);
GT_API GT_PtGetSegNum(short profile,long *pSegNum);
GT_API GT_SetPtPrecisionMode(short profile,short precisionMode);
GT_API GT_GetPtPrecisionMode(short profile,short *pPrecisionMode);
GT_API GT_SetPtVel(short profile,double velLast,short fifo);
GT_API GT_SetPtLink(short profile,short fifo,short list);
GT_API GT_GetPtLink(short profile,short fifo,short *pList);
GT_API GT_PtDoBit(short profile,short doType,short index,short value,short fifo);
GT_API GT_PtAo(short profile,short aoType,short index,double value,short fifo);

GT_API GT_PrfGear(short profile,short dir=0);
GT_API GT_SetGearMaster(short profile,short masterIndex,short masterType=GEAR_MASTER_PROFILE,short masterItem=0);
GT_API GT_GetGearMaster(short profile,short *pMasterIndex,short *pMasterType=NULL,short *pMasterItem=NULL);
GT_API GT_SetGearRatio(short profile,long masterEven,long slaveEven,long masterSlope=0);
GT_API GT_GetGearRatio(short profile,long *pMasterEven,long *pSlaveEven,long *pMasterSlope=NULL);
GT_API GT_GearStart(long mask);
GT_API GT_SetGearEvent(short profile,short event,long startPara0,long startPara1);
GT_API GT_GetGearEvent(short profile,short *pEvent,long *pStartPara0,long *pStartPara1);

GT_API GT_PrfFollow(short profile,short dir=0);
GT_API GT_SetFollowMaster(short profile,short masterIndex,short masterType=FOLLOW_MASTER_PROFILE,short masterItem=0);
GT_API GT_GetFollowMaster(short profile,short *pMasterIndex,short *pMasterType=NULL,short *pMasterItem=NULL);
GT_API GT_SetFollowLoop(short profile,long loop);
GT_API GT_GetFollowLoop(short profile,long *pLoop);
GT_API GT_SetFollowEvent(short profile,short event,short masterDir,long pos=0);
GT_API GT_GetFollowEvent(short profile,short *pEvent,short *pMasterDir,long *pPos=NULL);
GT_API GT_FollowSpace(short profile,short *pSpace,short fifo=0);
GT_API GT_FollowData(short profile,long masterSegment,double slaveSegment,short type=FOLLOW_SEGMENT_NORMAL,short fifo=0);
GT_API GT_FollowClear(short profile,short fifo=0);
GT_API GT_FollowStart(long mask,long option=0);
GT_API GT_FollowSwitch(long mask);
GT_API GT_SetFollowMemory(short profile,short memory);
GT_API GT_GetFollowMemory(short profile,short *pMemory);
GT_API GT_GetFollowStatus(short profile,short *pFifoNum,short *pSwitchStatus);
GT_API GT_SetFollowPhasing(short profile,short profilePhasing);
GT_API GT_GetFollowPhasing(short profile,short *pProfilePhasing);

GT_API GT_Compile(char *pFileName,TCompileInfo *pWrongInfo);
GT_API GT_Download(char *pFileName);

GT_API GT_GetFunId(char *pFunName,short *pFunId);
GT_API GT_Bind(short thread,short funId,short page);

GT_API GT_RunThread(short thread);
GT_API GT_StopThread(short thread);
GT_API GT_PauseThread(short thread);

GT_API GT_GetThreadSts(short thread,TThreadSts *pThreadSts);

GT_API GT_GetVarId(char *pFunName,char *pVarName,TVarInfo *pVarInfo);
GT_API GT_SetVarValue(short page,TVarInfo *pVarInfo,double *pValue,short count=1);
GT_API GT_GetVarValue(short page,TVarInfo *pVarInfo,double *pValue,short count=1);
GT_API GT_SetVarValueEx(short page,TVarInfo *pVarInfo,double *pValue,short count=1);
GT_API GT_GetVarValueEx(short page,TVarInfo *pVarInfo,double *pValue,short count=1);

GT_API GT_SetCrdMapBase(short crd,short base);
GT_API GT_GetCrdMapBase(short crd,short *pBase);
GT_API GT_SetCrdSmooth(short crd,TCrdSmooth *pCrdSmooth);
GT_API GT_GetCrdSmooth(short crd,TCrdSmooth *pCrdSmooth);
GT_API GT_SetCrdJerk(short crd,double jerkMax);
GT_API GT_GetCrdJerk(short crd,double *pJerkMax);
GT_API GT_SetCrdPrm(short crd,TCrdPrm *pCrdPrm);
GT_API GT_GetCrdPrm(short crd,TCrdPrm *pCrdPrm);
GT_API GT_SetArcAllowError(short crd,double error);
GT_API GT_CrdSpace(short crd,long *pSpace,short fifo=0);
GT_API GT_CrdData(short crd,TCrdData *pCrdData,short fifo=0);
GT_API GT_CrdDataCircle(short crd,TCrdData *pCrdData,short fifo=0);
GT_API GT_LnXY(short crd,long x,long y,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYZ(short crd,long x,long y,long z,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYZA(short crd,long x,long y,long z,long a,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYG0(short crd,long x,long y,double synVel,double synAcc,short fifo=0);
GT_API GT_LnXYZG0(short crd,long x,long y,long z,double synVel,double synAcc,short fifo=0);
GT_API GT_LnXYZAG0(short crd,long x,long y,long z,long a,double synVel,double synAcc,short fifo=0);
GT_API GT_ArcXYR(short crd,long x,long y,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcXYC(short crd,long x,long y,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcYZR(short crd,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcYZC(short crd,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcZXR(short crd,long z,long x,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcZXC(short crd,long z,long x,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcXYZ(short crd,long x,long y,long z,double interX,double interY,double interZ,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYOverride2(short crd,long x,long y,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYZOverride2(short crd,long x,long y,long z,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYZAOverride2(short crd,long x,long y,long z,long a,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYG0Override2(short crd,long x,long y,double synVel,double synAcc,short fifo=0);
GT_API GT_LnXYZG0Override2(short crd,long x,long y,long z,double synVel,double synAcc,short fifo=0);
GT_API GT_LnXYZAG0Override2(short crd,long x,long y,long z,long a,double synVel,double synAcc,short fifo=0);
GT_API GT_ArcXYROverride2(short crd,long x,long y,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcXYCOverride2(short crd,long x,long y,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcYZROverride2(short crd,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcYZCOverride2(short crd,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcZXROverride2(short crd,long z,long x,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_ArcZXCOverride2(short crd,long z,long x,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixXYRZ(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd,short fifo=0);
GT_API GT_HelixXYCZ(short crd,long x,long y,long z,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixYZRX(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixYZCX(short crd,long x,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixZXRY(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixZXCY(short crd,long x,long y,long z,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixXYRZOverride2(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixXYCZOverride2(short crd,long x,long y,long z,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixYZRXOverride2(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixYZCXOverride2(short crd,long x,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixZXRYOverride2(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_HelixZXCYOverride2(short crd,long x,long y,long z,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYWN(short crd,long x,long y,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYZWN(short crd,long x,long y,long z,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYZAWN(short crd,long x,long y,long z,long a,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYG0WN(short crd,long x,long y,double synVel,double synAcc,long segNum=0,short fifo=0);
GT_API GT_LnXYZG0WN(short crd,long x,long y,long z,double synVel,double synAcc,long segNum=0,short fifo=0);
GT_API GT_LnXYZAG0WN(short crd,long x,long y,long z,long a,double synVel,double synAcc,long segNum=0,short fifo=0);
GT_API GT_ArcXYRWN(short crd,long x,long y,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcXYCWN(short crd,long x,long y,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcYZRWN(short crd,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcYZCWN(short crd,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcZXRWN(short crd,long z,long x,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcZXCWN(short crd,long z,long x,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcXYZWN(short crd,long x,long y,long z,double interX,double interY,double interZ,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYOverride2WN(short crd,long x,long y,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYZOverride2WN(short crd,long x,long y,long z,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYZAOverride2WN(short crd,long x,long y,long z,long a,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYG0Override2WN(short crd,long x,long y,double synVel,double synAcc,long segNum=0,short fifo=0);
GT_API GT_LnXYZG0Override2WN(short crd,long x,long y,long z,double synVel,double synAcc,long segNum=0,short fifo=0);
GT_API GT_LnXYZAG0Override2WN(short crd,long x,long y,long z,long a,double synVel,double synAcc,long segNum=0,short fifo=0);
GT_API GT_ArcXYROverride2WN(short crd,long x,long y,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcXYCOverride2WN(short crd,long x,long y,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcYZROverride2WN(short crd,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcYZCOverride2WN(short crd,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcZXROverride2WN(short crd,long z,long x,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcZXCOverride2WN(short crd,long z,long x,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_ArcXYZOverride2WN(short crd,long x,long y,long z,double interX,double interY,double interZ,double synVel,double synAcc,double velEnd,long segNum,short fifo=0);
GT_API GT_HelixXYRZWN(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixXYCZWN(short crd,long x,long y,long z,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixYZRXWN(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixYZCXWN(short crd,long x,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixZXRYWN(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixZXCYWN(short crd,long x,long y,long z,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixXYRZOverride2WN(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixXYCZOverride2WN(short crd,long x,long y,long z,double xCenter,double yCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixYZRXOverride2WN(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixYZCXOverride2WN(short crd,long x,long y,long z,double yCenter,double zCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixZXRYOverride2WN(short crd,long x,long y,long z,double radius,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_HelixZXCYOverride2WN(short crd,long x,long y,long z,double zCenter,double xCenter,short circleDir,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_BufTrend(short crd,unsigned long trendSegNum,double trendDistance,double trendVelEnd,short fifo=0);
GT_API GT_BufIO(short crd,unsigned short doType,unsigned short doMask,unsigned short doValue,short fifo=0);
GT_API GT_BufEnableDoBitPulse(short crd,short doType,short doIndex,unsigned short highLevelTime,unsigned short lowLevelTime,long pulseNum,short firstLevel,short fifo=0);
GT_API GT_BufDisableDoBitPulse(short crd,short doType,short doIndex,short fifo=0);
GT_API GT_BufDelay(short crd,unsigned short delayTime,short fifo=0);
GT_API GT_BufComparePulse(short crd,short level,short outputType,short time,short fifo=0);
GT_API GT_BufDA(short crd,short chn,short daValue,short fifo=0);
GT_API GT_BufLmtsOn(short crd,short axis,short limitType,short fifo=0);
GT_API GT_BufLmtsOff(short crd,short axis,short limitType,short fifo=0);
GT_API GT_BufSetStopIo(short crd,short axis,short stopType,short inputType,short inputIndex,short fifo=0);
GT_API GT_BufMove(short crd,short moveAxis,long pos,double vel,double acc,short modal,short fifo=0);
GT_API GT_BufGear(short crd,short gearAxis,long pos,short fifo=0);
GT_API GT_BufGearPercent(short crd,short gearAxis,long pos,short accPercent,short decPercent,short fifo=0);
GT_API GT_BufStopMotion(short crd,short fifo=0);
GT_API GT_BufSetVarValue(short crd,short pageId,TVarInfo *pVarInfo,double value,short fifo=0);
GT_API GT_BufJumpNextSeg(short crd,short axis,short limitType,short fifo=0);
GT_API GT_BufSynchPrfPos(short crd,short encoder,short profile,short fifo=0);
GT_API GT_BufVirtualToActual(short crd,short fifo=0);
GT_API GT_BufSetLongVar(short crd,short index,long value,short fifo=0);
GT_API GT_BufSetDoubleVar(short crd,short index,double value,short fifo=0);
GT_API GT_BufSetCrdWorkUnitTag(short crd,short workUnitTag,short fifo=0);
GT_API GT_CrdStart(short mask,short option);
GT_API GT_CrdStartStep(short mask,short option);
GT_API GT_CrdStepMode(short mask,short option);
GT_API GT_SetOverride(short crd,double synVelRatio);
GT_API GT_SetOverride2(short crd,double synVelRatio);
GT_API GT_SetMaxOverrideLA(double maxSynVelRatio);
GT_API GT_InitLookAhead(short crd,short fifo,double T,double accMax,short n,TCrdData *pLookAheadBuf);
GT_API GT_GetLookAheadSpace(short crd,long *pSpace,short fifo=0);
GT_API GT_GetLookAheadSegCount(short crd,long *pSegCount,short fifo=0);
GT_API GT_CrdClear(short crd,short fifo);
GT_API GT_CrdStatus(short crd,short *pRun,long *pSegment,short fifo=0);
GT_API GT_SetUserSegNum(short crd,long segNum,short fifo=0);
GT_API GT_GetUserSegNum(short crd,long *pSegment,short fifo=0);
GT_API GT_GetUserSegNumWN(short crd,long *pSegment,short fifo=0);
GT_API GT_GetRemainderSegNum(short crd,long *pSegment,short fifo=0);
GT_API GT_SetCrdStopDec(short crd,double decSmoothStop,double decAbruptStop);
GT_API GT_GetCrdStopDec(short crd,double *pDecSmoothStop,double *pDecAbruptStop);
GT_API GT_SetCrdLmtStopMode(short crd,short lmtStopMode);
GT_API GT_GetCrdLmtStopMode(short crd,short *pLmtStopMode);
GT_API GT_GetUserTargetVel(short crd,double *pTargetVel);
GT_API GT_GetSegTargetPos(short crd,long *pTargetPos);
GT_API GT_GetCrdPos(short crd,double *pPos);
GT_API GT_GetCrdVel(short crd,double *pSynVel);
GT_API GT_SetCrdSingleMaxVel(short crd,double *pMaxVel);
GT_API GT_GetCrdSingleMaxVel(short crd,double *pMaxVel);
GT_API GT_GetCmdCount(short crd,short *pResult,short fifo);
GT_API GT_BufLaserOn(short crd,short fifo=0,short channel=0);
GT_API GT_BufLaserOff(short crd,short fifo=0,short channel=0);
GT_API GT_BufLaserPrfCmd(short crd,double laserPower,short fifo=0,short channel=0);
GT_API GT_BufLaserFollowRatio(short crd,double ratio,double minPower,double maxPower,short fifo=0,short channel=0);
GT_API GT_BufLaserFollowMode(short crd,short source =0,short fifo=0,short channel=0,double startPower =0);
GT_API GT_BufLaserFollowOff(short crd,short fifo=0,short channel=0);
GT_API GT_BufLaserFollowSpline(short crd,short tableId,double minPower,double maxPower,short fifo=0,short channel=0);
GT_API GT_LnXYZACUVW(short crd,long *pPos,short posMask,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYZACUVWWN(short crd,long *pPos,short posMask,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_LnXYZACUVWOverride2(short crd,long *pPos,short posMask,double synVel,double synAcc,double velEnd=0,short fifo=0);
GT_API GT_LnXYZACUVWOverride2WN(short crd,long *pPos,short posMask,double synVel,double synAcc,double velEnd=0,long segNum=0,short fifo=0);
GT_API GT_BufWaitLongVar(short crd, short index, long value, long overTime, short flagMode, long segNum, short fifo);
GT_API GT_GetBufWaitLongVarStatus(short crd,short *pIndex,long *pValue,short *pFlagMode,long *pSegNum,short *pEnable,short *pStatus,short fifo);
GT_API GT_ClearBufWaitStatus(short crd,short fifo);

GT_API GT_PrfPvt(short profile);
GT_API GT_SetPvtLoop(short profile,long loop);
GT_API GT_GetPvtLoop(short profile,long *pLoopCount,long *pLoop);
GT_API GT_PvtStatus(short profile,short *pTableId,double *pTime,short count=1);
GT_API GT_PvtTableClear(short tableId);
GT_API GT_PvtStart(long mask);
GT_API GT_PvtTableSelect(short profile,short tableId);

GT_API GT_PvtTable(short tableId,long count,double *pTime,double *pPos,double *pVel);
GT_API GT_PvtTableEx(short tableId,long count,double *pTime,double *pPos,double *pVelBegin,double *pVelEnd);
GT_API GT_PvtTableComplete(short tableId,long count,double *pTime,double *pPos,double *pA,double *pB,double *pC,double velBegin=0,double velEnd=0);
GT_API GT_PvtTablePercent(short tableId,long count,double *pTime,double *pPos,double *pPercent,double velBegin=0);
GT_API GT_PvtPercentCalculate(long n,double *pTime,double *pPos,double *pPercent,double velBegin,double *pVel);
GT_API GT_PvtTableContinuous(short tableId,long count,double *pPos,double *pVel,double *pPercent,double *pVelMax,double *pAcc,double *pDec,double timeBegin);
GT_API GT_PvtContinuousCalculate(long n,double *pPos,double *pVel,double *pPercent,double *pVelMax,double *pAcc,double *pDec,double *pTime);
GT_API GT_PvtTableMovePercent(short tableId,long distance,double vm,double acc,double pa1,double pa2,double dec,double pd1,double pd2,double *pVel,double *pAcc,double *pDec,double *pTime);
GT_API GT_PvtTableMovePercentEx(short tableId,long distance,double vm,double acc,double pa1,double pa2,double ma,double dec,double pd1,double pd2,double md,double *pVel,double *pAcc,double *pDec,double *pTime);


/*-----------------------------------------------------------*/
/* PVTģʽ�������������                                      */
/*-----------------------------------------------------------*/
#define PVT_OPERATION_TYPE_LASER_ON              (2)
#define PVT_OPERATION_TYPE_BUF_DA                (4)
#define PVT_OPERATION_TYPE_LASER_CMD             (5)
#define PVT_OPERATION_TYPE_LASER_FOLLOW_RATIO    (6)
#define PVT_OPERATION_TYPE_LMTS_ON               (7)
#define PVT_OPERATION_TYPE_LMTS_OFF              (8)
#define PVT_OPERATION_TYPE_SET_STOP_IO           (9)
#define PVT_OPERATION_TYPE_LASER_FOLLOW_MODE     (25)
#define PVT_OPERATION_TYPE_LASER_FOLLOW_OFF		 (26)
#define PVT_OPERATION_TYPE_BUF_DO_BIT			(94)

typedef struct
{
	short doType;
	short index;
	short value;
}TPVTDoBit;

typedef struct
{
	short chn;
	short daValue;
}TPVTDA;

typedef struct
{
	short axis;
	short lmtType;
}TPVTLmtsSwtich;

typedef struct
{
	short axis;
	short stopType;
	short inputType;
	short inputIndex;
}TPVTStopIo;

typedef struct
{
	short chn;
	short enable;
}TPVTLaserSwitch;

typedef struct
{
	short chn;
	double power;
}TPVTLaserPrfCmd;

typedef struct
{
	short  chn;
	double ratio;
	double minPower;
	double maxPower;
}TPVTLaserFollowRatio;

typedef struct
{
	short  chn;
}TPVTLaserFollowOff;

typedef struct
{
	short  chn;
	short  source;
	double startPower;
}TPVTLaserFollowMode;
GT_API GT_PvtTableUserData(short tableId,short userDataType,double time,void *pData);

GT_API GT_SetMcOverride(short axis,short mode,double override,double smoothTime);
GT_API GT_GetMcOverride(short axis,short mode,double *pOverrideTarget,double *pSmoothTime,double *pOverride);
GT_API GT_HomeInit();
GT_API GT_Home(short axis,long pos,double vel,double acc,long offset);
GT_API GT_Index(short axis,long pos,long offset);
GT_API GT_HomeStop(short axis,long pos,double vel,double acc);
GT_API GT_HomeSts(short axis,unsigned short *pStatus);

GT_API GT_HandwheelInit();
GT_API GT_SetHandwheelStopDec(short slave,double decSmoothStop,double decAbruptStop);
GT_API GT_StartHandwheel(short slave,short master,short masterEven,short slaveEven,short intervalTime,double acc,double dec,double vel,short stopWaitTime);
GT_API GT_EndHandwheel(short slave);

GT_API GT_SetTrigger(short i,TTrigger *pTrigger);
GT_API GT_GetTrigger(short i,TTrigger *pTrigger);
GT_API GT_SetTriggerEx(short i,TTriggerEx *pTrigger);
GT_API GT_GetTriggerEx(short i,TTriggerEx *pTrigger);
GT_API GT_GetTriggerStatus(short i,TTriggerStatus *pTriggerStatus,short count=1);
GT_API GT_GetTriggerStatusEx(short i,TTriggerStatusEx *pTriggerStatusEx,short count=1);
GT_API GT_ClearTriggerStatus(short i);
GT_API GT_GetTriggerLatchValue(short i,long count,long *pValue,long *pCount,TLatchValueInfo *pInfo);

GT_API GT_SetComparePort(short channel,short hsio0,short hsio1);

GT_API GT_ComparePulse(short level,short outputType,short time);
GT_API GT_CompareStop();
GT_API GT_CompareStatus(short *pStatus,long *pCount);
GT_API GT_CompareTotalCount(long *pCompareTotalCount);
GT_API GT_CompareData(short encoder,short source,short pulseType,short startLevel,short time,long *pBuf1,short count1,long *pBuf2,short count2);
GT_API GT_CompareLinear(short encoder,short channel,long startPos,long repeatTimes,long interval,short time,short source);
GT_API GT_CompareContinuePulseMode(short mode,short count,short standTime);

GT_API GT_SetEncResponseCheck(short control,short dacThreshold,double minEncVel,long time);
GT_API GT_GetEncResponseCheck(short control,short *pDacThreshold,double *pMinEncVel,long *pTime);
GT_API GT_EnableEncResponseCheck(short control);
GT_API GT_DisableEncResponseCheck(short control);

GT_API GT_SetAxisFollowErrorMode(short axis,short followErrorMode);
GT_API GT_GetAxisFollowErrorMode(short axis,short *pFollowErrorMode);

GT_API GT_2DCompareMode(short chn,short mode);
GT_API GT_2DComparePulse(short chn,short level,short outputType,short time);
GT_API GT_2DCompareStop(short chn);
GT_API GT_2DCompareClear(short chn);
GT_API GT_2DCompareStatus(short chn,short *pStatus,long *pCount,short *pFifo,short *pFifoCount,short *pBufCount =NULL);
GT_API GT_2DCompareSetPrm(short chn,T2DComparePrm *pPrm);
GT_API GT_2DCompareData(short chn,short count,T2DCompareData *pBuf,short fifo);
GT_API GT_2DCompareStart(short chn);
GT_API GT_2DCompareClearData(short chn);
GT_API GT_2DCompareSetPreOutTime(short chn,double preOutputTime);
GT_API GT_2DCompareSetPrmEx(short chn,T2DComparePrmEx *pMode);
GT_API GT_2DCompareDataGroup(short chn,short count,T2DCompareDataGroup *pDataGroup,short fifo);
GT_API GT_2DCompareLinear(short chn,T2DCompareLinear *pPrm);

GT_API GT_SetAxisMode(short axis,short mode);
GT_API GT_GetAxisMode(short axis,short *pMode);
GT_API GT_SetHSIOOpt(unsigned short value,short channel=0);
GT_API GT_GetHSIOOpt(unsigned short *pValue,short channel=0);
GT_API GT_LaserPowerMode(short laserPowerMode,double maxValue,double minValue,short channel=0,short delaymode =0);
GT_API GT_LaserPrfCmd(double outputCmd,short channel=0);
GT_API GT_LaserOutFrq(double outFrq,short channel=0);
GT_API GT_SetPulseWidth(unsigned long width,short channel=0);
GT_API GT_SetWaitPulse(unsigned short mode,double waitPulseFrq,double waitPulseDuty,short channel=0);
GT_API GT_SetPreVltg(unsigned short mode,double voltageValue,short channel=0);
GT_API GT_SetLevelDelay(unsigned short offDelay,unsigned short onDelay,short channel=0);
GT_API GT_EnaFPK(unsigned short time1,unsigned short time2,unsigned short laserOffDelay,short channel=0);
GT_API GT_DisFPK(short channel=0);
GT_API GT_SetLaserDisMode(short mode,short source,long *pPos,double *pScale,short channel=0);
GT_API GT_SetLaserDisRatio(double *pRatio,double minPower,double maxPower,short channel=0);
GT_API GT_SetWaitPulseEx(unsigned short mode,double waitPulseFrq,double waitPulseDuty);
GT_API GT_SetLaserMode(short mode);
GT_API GT_SetLaserFollowSpline(short tableId,long n,double *pX,double *pY,double beginValue,double endValue,short channel=0);
GT_API GT_GetLaserFollowSpline(short tableId,long n,double *pX,double *pY,double *pA,double *pB,double *pC,long *pCount,short channel=0);

GT_API GT_OpenExtMdl(char *pDllName=NULL);
GT_API GT_CloseExtMdl();
GT_API GT_SwitchtoCardNoExtMdl(short card);

GT_API GT_ResetExtMdl();
GT_API GT_LoadExtConfig(char *pFileName);
GT_API GT_SetExtIoValue(short mdl,unsigned short value);
GT_API GT_GetExtIoValue(short mdl,unsigned short *pValue);
GT_API GT_SetExtIoBit(short mdl,short index,unsigned short value);
GT_API GT_GetExtIoBit(short mdl,short index,unsigned short *pValue);
GT_API GT_GetExtAdValue(short mdl,short chn,unsigned short *pValue);
GT_API GT_GetExtAdVoltage(short mdl,short chn,double *pValue);
GT_API GT_SetExtDaValue(short mdl,short chn,unsigned short value);
GT_API GT_SetExtDaVoltage(short mdl,short chn,double value);
GT_API GT_GetStsExtMdl(short mdl,short chn,unsigned short *pStatus);
GT_API GT_GetExtDoValue(short mdl,unsigned short *pValue);
GT_API GT_GetExtAdCurrent(short mdl,short chn,double *pValue);

GT_API GT_GetExtMdlMode(short *pMode);
GT_API GT_SetExtMdlMode(short mode);
GT_API GT_UploadConfig();
GT_API GT_DownloadConfig();
GT_API GT_GetConfig(short mdl,TExtMdlCfgInfo *pExtMdlCfgInfo);
GT_API GT_SetConfig(short mdl,TExtMdlCfgInfo *pExtMdlCfgInfo);
GT_API GT_GetDriverVersion(unsigned short *mainVer,unsigned short *slaveVer);
GT_API GT_SaveConfigToFile(char *pFile);
GT_API GT_GetChnStsExtMdl(unsigned short *pStatus);

GT_API GT_GetUuid(char *pCode,short count);
GT_API GT_SetUuid(char *pCode,short count);

//////////////////////////////////////////////////////////////////////////
//2D Compensate
//////////////////////////////////////////////////////////////////////////
typedef struct
{
	short count[2];                               // ��������������СֵΪ2
	long posBegin[2];                             // ���λ��
	long step[2];                                 // ����
} TCompensate2DTable;

typedef struct
{
	short enable;                                  // 2D����ʹ�ܱ�־
	short tableIndex;                              // ��ʹ�õ�2D������
	short axisType[2];	                           // ���������
	short axisIndex[2];	                           // ���������
} TCompensate2D;

GT_API GT_SetCompensate2DTable(short tableIndex,TCompensate2DTable *pTable,long *pData,short externComp=0);
GT_API GT_GetCompensate2DTable(short tableIndex,TCompensate2DTable *pTable,short *pExternComp=NULL);
GT_API GT_SetCompensate2D(short axis,TCompensate2D *pComp2d);
GT_API GT_GetCompensate2D(short axis,TCompensate2D *pComp2d);
GT_API GT_GetCompensate2DValue(short axis,double *pValue);

//////////////////////////////////////////////////////////////////////////
//Smart Home
//////////////////////////////////////////////////////////////////////////
#define HOME_STAGE_IDLE						(0)
#define HOME_STAGE_START					(1)
#define HOME_STAGE_ON_HOME_LIMIT_ESCAPE	    (2)
#define HOME_STAGE_ON_HOME_ESCAPE           (3)

#define HOME_STAGE_SEARCH_LIMIT				(10)
#define HOME_STAGE_SEARCH_LIMIT_STOP		(11)

#define HOME_STAGE_SEARCH_LIMIT_ESCAPE		(13)

#define HOME_STAGE_SEARCH_LIMIT_RETURN		(15)
#define HOME_STAGE_SEARCH_LIMIT_RETURN_STOP	(16)

#define HOME_STAGE_SEARCH_HOME				(20)

#define HOME_STAGE_SEARCH_HOME_STOP	    	(22)
#define HOME_STAGE_SEARCH_HOME_OPPOSITE     (23)
#define HOME_STAGE_SEARCH_HOME_AGAIN        (24)

#define HOME_STAGE_SEARCH_HOME_RETURN		(25)

#define HOME_STAGE_SEARCH_INDEX				(30)

#define HOME_STAGE_SEARCH_GPI				(40)

#define HOME_STAGE_SEARCH_GPI_RETURN		(45)

#define HOME_STAGE_GO_HOME					(80)

#define HOME_STAGE_END						(100)

#define HOME_ERROR_NONE						(0)
#define HOME_ERROR_NOT_TRAP_MODE			(1)
#define HOME_ERROR_DISABLE					(2)
#define HOME_ERROR_ALARM					(3)
#define HOME_ERROR_STOP						(4)
#define HOME_ERROR_STAGE					(5)
#define HOME_ERROR_HOME_MODE				(6)
#define HOME_ERROR_SET_CAPTURE_HOME			(7)
#define HOME_ERROR_NO_HOME					(8)
#define HOME_ERROR_SET_CAPTURE_INDEX		(9)
#define HOME_ERROR_NO_INDEX					(10)
#define HOME_ERROR_LIMIT					(11)
#define HOME_ERROR_ESCAPE                   (12)

#define HOME_MODE_LIMIT						(10)
#define HOME_MODE_LIMIT_HOME				(11)
#define HOME_MODE_LIMIT_INDEX				(12)
#define HOME_MODE_LIMIT_HOME_INDEX			(13)

#define HOME_MODE_HOME						(20)

#define HOME_MODE_HOME_INDEX				(22)

#define HOME_MODE_HOME_LEVEL                (24)                               // ʹ��HOME��ƽ����(������û��HOME����������)

#define HOME_MODE_INDEX						(30)

#define HOME_MODE_FORCED_HOME		    	(40)
#define HOME_MODE_FORCED_HOME_INDEX     	(41)

typedef struct
{
	short mode;						// ����ģʽ
	short moveDir;					// ������������ʱ���˶�����
	short indexDir;					// ����Index��������
	short edge;						// ���ò�����
	short triggerIndex;				// �������ô�������Ϊ-1��ʾ����Ŷ�Ӧ
	short pad1[3];					// ����1
	double velHigh;					// Home�����ٶ�
	double velLow;					// Index�����ٶ�
	double acc;
	double dec;
	short smoothTime;
	short escapeEnable;             //��ʼ����ʱ��ѹ���ź��ϣ��Ƿ����ʹ�ܿ���
	short pad2[2];					// ����2
	long homeOffset;				// ԭ��ƫ��
	long searchHomeDistance;		// Home����������룬Ϊ0��ʾ������
	long searchIndexDistance;		// Index����������룬Ϊ0��ʾ������
	long escapeStep;				// ���벽��
	long pad3[2];					// ����3
} THomePrm;

typedef struct
{
	short run;
	short stage;
	short error;
	short pad1;
	long capturePos;
	long targetPos;
} THomeStatus;

GT_API GT_GoHome(short axis,THomePrm *pHomePrm);
GT_API GT_GetHomePrm(short axis,THomePrm *pHomePrm);
GT_API GT_GetHomeStatus(short axis,THomeStatus *pHomeStatus);
//////////////////////////////////////////////////////////////////////////
//Extern Control
//////////////////////////////////////////////////////////////////////////
typedef struct ControlConfigEx
{
	short refType;			//����ο����ͣ�ֻ��ȡMC_AXIS
	short refIndex;			//������
	short feedbackType;		//�������ͣ�ΪMC_ENCODERʱ��ʾ��������Ϊ��������ΪMC_ADCʱ��ʾ��������Ϊ��ѹ
	short feedbackIndex;	//����ͨ����
	long errorLimit;		//���ޣ���ʱ��������
	short feedbackSmooth;	//����ƽ��ϵ������ʱ��������
	short controlSmooth;	//������ƽ��ϵ������ʱ��������

}TControlConfigEx;

GT_API GT_SetControlConfigEx(short control,TControlConfigEx *pControl);
GT_API GT_GetControlConfigEx(short control,TControlConfigEx *pControl);
//////////////////////////////////////////////////////////////////////////
//Adc filter
//////////////////////////////////////////////////////////////////////////
typedef struct AdcConfig
{
	short active;
	short reverse;
	double a;			//�����ѹ���Ա任aֵ��ȡֵΪ1
	double b;			//�����ѹ���Ա任bֵ��ȡֵΪ0
	short filterMode;	//�˲�ģʽ��0-FIR�˲�ģʽ��1-IIR�˲�ģʽ

} TAdcConfig;

GT_API GT_SetAdcConfig(short adc,TAdcConfig *pAdc);
GT_API GT_GetAdcConfig(short adc,TAdcConfig *pAdc);

GT_API GT_SetAdcFilterPrm(short adc,double k);
GT_API GT_GetAdcFilterPrm(short adc,double *pk);

//////////////////////////////////////////////////////////////////////////
//Superimposed
//////////////////////////////////////////////////////////////////////////
GT_API GT_SetControlSuperimposed(short control,short superimposedType,short superimposedIndex);
GT_API GT_GetControlSuperimposed(short control,short *pSuperimposedType,short *pSuperimposedIndex);

//////////////////////////////////////////////////////////////////////////
//Pci Interrupt
//////////////////////////////////////////////////////////////////////////
#define PCI_INTERRUPT_SOURCE_USER		(1)				//PCI�ж�ԴΪ�û��Զ���
#define PCI_INTERRUPT_SOURCE_2DCOMPARE	(2)				//PCI�ж�ԴΪ��άλ�ñȽ�
typedef struct
{
	short source;	//interrupt source of pci device
	short param;	//param coming with pci interrupt
	short reserve;
}TInterrupt;

typedef short (*TInterruptCallback)(TInterrupt);

GT_API GT_InterruptOn(TInterruptCallback pCallback);
GT_API GT_InterruptOff();
GT_API GT_SetInterruptMask(long mask);
GT_API GT_GetInterruptMask(long *pMask);
GT_API GT_InterruptTrigger(short param);

// test �����жϱ�־λ
GT_API GT_SetInterrupt(short option);

//////////////////////////////////////////////////////////////////////////
GT_API GT_ZeroLaserOnTime(short channel);
GT_API GT_GetLaserOnTime(short channel,unsigned long *pTime);

typedef struct
{
	short work;			//�Ƿ��Ѿ����ò���
	short n;			//��������
	long startPos;		//��ʼλ��
	long lenPos;		//�ܳ���
	long compPos[256];	//���򲹳�ֵ
	long compNeg[256];	//���򲹳�ֵ

}TLeadScrewPrm;

GT_API GT_GetLeadScrewCompInnerValue(short axis,short dir,long pos,long *pCompValue);

GT_API GT_SetProfileScale(short axis,long alpha,long beta);
GT_API GT_GetProfileScale(short axis,long *pAlpha,long *pBeta);
GT_API GT_SetEncoderScale(short encoder,long alpha,long beta);
GT_API GT_GetEncoderScale(short encoder,long *pAlpha,long *pBeta);
GT_API GT_SetProfilePpr(short profile,double ppr);
GT_API GT_GetProfilePpr(short profile,double *pPpr);

GT_API GT_MultiAxisOn(unsigned long mask);
GT_API GT_MultiAxisOff(unsigned long mask);
GT_API GT_SetAxisOnDelayTime(unsigned short ms);
GT_API GT_GetAxisOnDelayTime(unsigned short *pMs);

GT_API GT_SetLaserDisTable1D(short count,double *pRatio,long *pPos,double minPower,double maxPower,double *pLimitPower,short channel=0);
GT_API GT_SetLaserDisTable2D(short axisIndex[2],short count[2],double *pRatio,long *pXPos,long *pYPos,
							 double minPower,double maxPower,double *pLimitPower,short channel=0);
GT_API GT_SetLaserDisTable2DEx(short axisIndex[2],short count[2],double *pRatio,long posBegin[2],long posStep[2],
							   double minPower,double maxPower,double *pLimitPower,short channel=0);
GT_API GT_SetLaserCrdMap(short channel,short map);
GT_API GT_GetLaserCrdMap(short channel,short *pMap);

//////////////////////////////////////////////////////////////////////////
//AutoFocus
//////////////////////////////////////////////////////////////////////////
GT_API GT_AutoFocus(unsigned short mode,double kp,short reverse,short chanel);
GT_API GT_SetAutoFocusRefVol(double refVol,double maxVol,double minVol,short chanel);
GT_API GT_GetAutoFocusStatus(unsigned short *pStatus,short count);
GT_API GT_ConfigAutoFocus(short chnAdc,short chanel);
GT_API GT_SetAutoFocusAuxPrm(double kf,double kd,double limitKd,short chanel);
GT_API GT_SetAutoFocusDeadVoltage(double voltage,short chanel);

GT_API GT_Delay(unsigned short time);
GT_API GT_DelayHighPrecision(unsigned short time);

//////////////////////////////////////////////////////////////////////////
//Random Code
//////////////////////////////////////////////////////////////////////////
GT_API GT_SetRandCode(short addr,short *pData);
GT_API GT_GetRandCode(short addr,short *pData);

#define CRD_BUFFER_MODE_DYNAMIC_DEFAULT  (0)
#define CRD_BUFFER_MODE_DYNAMIC_KEEP     (1)

#define CRD_BUFFER_MODE_STATIC_INPUT     (11)
#define CRD_BUFFER_MODE_STATIC_READY     (12)
#define CRD_BUFFER_MODE_STATIC_START     (13)
GT_API GT_SetCrdBufferMode(short crd,short bufferMode,short fifo);
GT_API GT_GetCrdBufferMode(short crd,short *pBufferMode,short fifo);
GT_API GT_GetCrdSegmentTime(short crd,long segmentIndex,double *pSegmentTime,long *pSegmentNumber,short fifo);
GT_API GT_GetCrdTime(short crd,TCrdTime *pTime,short fifo);

GT_API GT_SetLeadScrewLink(short axis,short link);
GT_API GT_GetLeadScrewLink(short axis,short *pLink);


#define COMPENSATE_TYPE_COMPENSATE_2D            (0)
#define COMPENSATE_TYPE_LEADSCREW                (1)
#define COMPENSATE_TYPE_LEADSCREW_CROSS          (2)
#define COMPENSATE_TYPE_BACKLASH                 (3)

GT_API GT_SetCompensateLimit(short axis,short compensateType,double minLimit,double maxLimit);
GT_API GT_GetCompensateLimit(short axis,short compensateType,double *pMinLimit,double *pMaxLimit);


//////////////////////////////////////////////////////////////////////////
//Crd Follow
//////////////////////////////////////////////////////////////////////////
typedef struct
{
	short crdAxis;
	short masterIndex;
	short masterType;
} TBufFollowMaster;

typedef struct
{
	long masterPos;
	long pad;
} TBufFollowEventCross;

typedef struct
{
	short triggerIndex;
	long triggerOffset;
	long pad;
} TBufFollowEventTrigger;


typedef struct
{
	short stage;
	double slavePos;
	double slaveVel;
	unsigned long loopCount;
} TCrdFollowStatus;

typedef struct
{
	double velRatioMax;
	double accRatioMax;
	long masterLead;
	long masterEven;
	long slaveEven;
	short dir;
	short smoothPercent;
	short synchAlign;
} TCrdFollowPrm;

GT_API GT_BufFollowMaster(short crd,TBufFollowMaster *pBufFollowMaster,short fifo=0);
GT_API GT_BufFollowEventCross(short crd,TBufFollowEventCross *pEventCross,short fifo=0);
GT_API GT_BufFollowEventTrigger(short crd,TBufFollowEventTrigger *pEventTrigger,short fifo=0);
GT_API GT_BufFollowStart(short crd,long masterSegment,long slaveSegment,long masterFrameWidth,short fifo=0);
GT_API GT_BufFollowReturn(short crd,double vel,double acc,short smoothPercent,short fifo=0);
GT_API GT_BufFollowNext(short crd,long width,short fifo=0);
GT_API GT_GetCrdFollowStatus(short crd,TCrdFollowStatus *pStatus);

GT_API GT_SetCrdFollowLoop(short crd,unsigned long loop);
GT_API GT_GetCrdFollowLoop(short crd,unsigned long *pLoop);
GT_API GT_SetCrdFollowPrm(short crd,TCrdFollowPrm *pPrm);
GT_API GT_GetCrdFollowPrm(short crd,TCrdFollowPrm *pPrm);

typedef struct
{
	short source;
	short enable;
	short x;
	short y;
	double theta;		// degree
} TTransformOrthogonal;

GT_API GT_SetTransformOrthogonal(short index,TTransformOrthogonal *pOrthogonal);
GT_API GT_GetTransformOrthogonal(short index,TTransformOrthogonal *pOrthogonal);
GT_API GT_GetTransformOrthogonalPosition(short index,double *pPositionX,double *pPositionY);

typedef struct
{
	short source;
	short enable;
	short x;
	short y;
	short z;
	double alpha;		// Z���XYƽ��ļн�
	double beta;		// Z����XYƽ���ͶӰ��X��ļн�
	double gama;		// XY��֮��ļн�
} TTransformPerpendicularity;

GT_API GT_SetTransformPerpendicularity(short index,TTransformPerpendicularity *pPerpendicularity);
GT_API GT_GetTransformPerpendicularity(short index,TTransformPerpendicularity *pPerpendicularity);
GT_API GT_GetTransformPerpendicularityPosition(short index,double *pPositionX,double *pPositionY,double *pPositionZ);

GT_API GT_SetLaserPwmDac(double pwmWidth,double frq,short *pDacValue,long count,short channel);
GT_API GT_LaserPwmDacOn(short channel);
GT_API GT_LaserPwmDacOff(short channel);

typedef struct
{
	short mode;
	short prm1;
	short prm2;
	short prm3;
	short prm4;
	double reserve1;
	double reserve2;
	double reserve3;
	double reserve4;

}TMotionSmooth;

GT_API GT_SetMotionSmooth(short axis,TMotionSmooth *pSmooth);
GT_API GT_GetMotionSmooth(short axis,TMotionSmooth *pSmooth);

GT_API GT_SetAxisMotionSmooth(short axis,double time,double k);
GT_API GT_GetAxisMotionSmooth(short axis,double *pTime,double *pK);
GT_API GT_SetMotionSmoothWorkMode(short type,short index,short mode);
GT_API GT_GetMotionSmoothWorkMode(short type,short index,short *pMode);


typedef struct
{
	short master[2];
	short masterValueSource[2];
	long gearRatioNumerator[2];
	long gearRatioDenominator[2];
} TCombineAxes;

typedef struct
{
	short enable;
	double slavePos;
	double slaveVel;
} TCombineAxesStatus;

typedef struct
{
	short type;
	short index;
	short subIndex;
	short mode;
	long alpha;
	long beta;
}TAxisAdditionPro;

GT_API GT_SetCombineAxes(short index,TCombineAxes *pCombineAxes);
GT_API GT_GetCombineAxes(short index,TCombineAxes *pCombineAxes);
GT_API GT_CombineAxesOn(short index);
GT_API GT_CombineAxesOff(short index);
GT_API GT_GetCombineAxesStatus(short index,TCombineAxesStatus *pCombineAxesStatus);
GT_API GT_SetAxisAddition(short axis,short dataType,short additionIndex,short additionType);
GT_API GT_GetAxisAddition(short axis,short dataType,short *pAdditionIndex,short *pAdditionType);
GT_API GT_SetAxisAdditionPro(short axis,short dataType,TAxisAdditionPro *pPrm);
GT_API GT_GetAxisAdditionPro(short axis,short dataType,TAxisAdditionPro *pPrm);

GT_API GT_SetLeadScrewCrossComp(short axis,short n,long startPos,long lenPos,long *pCompPos,long *pCompNeg,short link);
GT_API GT_EnableLeadScrewCrossComp(short axis,short mode);

typedef enum
{
	MC_POSITIVE_DIRECTION,
	MC_NEGATIVE_DIRECTION,
	MC_CURRENT_DIRECTION,
	MC_SHORTEST_WAY,
} EMcDirection;

typedef struct
{
	long pos;
	double vel;
	double acc;
	double dec;
	short percent;
} TMoveAbsolutePrm;

typedef struct
{
	long pos;
	double vel;
	double acc;
	double dec;
	short percent;
	double velStart;
	double velEnd;
	short accStartPercent;
	short decEndPercent;
} TMoveAbsolutePrmEx;

GT_API GT_MoveAbsolute(short profile,TMoveAbsolutePrm *pPrm);
GT_API GT_GetMoveAbsolute(short profile,TMoveAbsolutePrm *pPrm);
GT_API GT_MoveAbsoluteEx(short profile,TMoveAbsolutePrmEx *pPrm);
GT_API GT_GetMoveAbsoluteEx(short profile,TMoveAbsolutePrmEx *pPrm);

typedef struct
{
	double pos;
	double vel;
	double acc;
	double dec;
	short percent;
	short pad1[3];
	double velStart;
	double velEnd;
	short accStartPercent;
	short decEndPercent;
	short dir;
	short pad2;
	short reserve[10];
} TMoveAbsoluteProPrm;
GT_API GT_MoveAbsolutePro(short profile,TMoveAbsoluteProPrm *pPrm);

typedef struct
{
	double vel;
	double acc;
	double dec;
	double jerkBegin;
	double jerkEnd;
	short direction;
} TMoveVelocityPrm;

GT_API GT_MoveVelocity(short profile,TMoveVelocityPrm *pPrm);
GT_API GT_GetMoveVelocity(short profile,TMoveVelocityPrm *pPrm);

//////////////////////////////////////////////////////////////////////////
//Smart Cutter
//////////////////////////////////////////////////////////////////////////
typedef struct
{
	short x;						// X���Ӧ�Ĺ滮��
	short y;						// Y���Ӧ�Ĺ滮��
	short c;						// C���Ӧ�Ĺ滮��

	short tableRadiusIndex;			// �뾶����������
	short tableAngleIndex;			// C�Ჹ��������

	short directionReverse;			// Ĭ�Ϲ滮λ������ʱ�Ƕ�Ҳ�������

	long offset;		            // C����ת�Ƕ�Ϊ0ʱ�Ĺ滮λ��
	long resolution;				// C��ÿת������

	short adcIndex;					// ADC����
	double adcThreshold;			// ADC������������ֵ
} TSmartCutterPrm;

typedef struct
{
	short enable;
	short execute;
	double radiusValue;
	double angleValue;
} TSmartCutterInfo;

GT_API GT_SetSmartCutterPrm(short index,TSmartCutterPrm *pPrm);
GT_API GT_GetSmartCutterPrm(short index,TSmartCutterPrm *pPrm);
GT_API GT_SmartCutterOn(short index);
GT_API GT_SmartCutterOff(short index);
GT_API GT_BufSmartCutterOn(short crd,short smartCutterIndex,short fifo=0);
GT_API GT_BufSmartCutterOff(short crd,short smartCutterIndex,short fifo=0);
GT_API GT_GetSmartCutterInfo(short index,TSmartCutterInfo *pInfo);

GT_API GT_SetSmartCutterValue(short index,double radiusValue,double angleValue);
GT_API GT_SmartCutterStart(short index);


//////////////////////////////////////////////////////////////////////////
//Gantry
//////////////////////////////////////////////////////////////////////////
#define GANTRY_MODE_NONE								(-1)
#define GANTRY_MODE_OPEN_LOOP_GANTRY					(1)
#define GANTRY_MODE_DECOUPLE_POSITION_LOOP				(2)

GT_API GT_SetGantryMode(short group,short master,short slave,short mode,long syncErrorLimit=1000);
GT_API GT_GetGantryMode(short group,short *pMaster,short *pSlave,short *pMode,long *pSyncErrorLimit);
GT_API GT_SetGantryPid(short group,TPid *pGantryPid,TPid *pYawPid);
GT_API GT_GetGantryPid(short group,TPid *pGantryPid,TPid *pYawPid);
GT_API GT_GantryAxisOn(short group);
GT_API GT_GantryAxisOff(short group);

GT_API GT_SetEncoderOutSelect(short mode);
GT_API GT_GetEncoderOutSelect(short *pMode);

//////////////////////////////////////////////////////////////////////////
//Standard Home
//////////////////////////////////////////////////////////////////////////

#define STANDARD_HOME_STAGE_IDLE  (0) //δ������ԭ��
#define STANDARD_HOME_STAGE_START (1) //������ԭ��
#define STANDARD_HOME_STAGE_SEARCH_HOME (20) //��������Home
#define STANDARD_HOME_STAGE_SEARCH_INDEX  (30) //��������Index
#define STANDARD_HOME_STAGE_GO_HOME       (80) //�����˶���ԭ��
#define STANDARD_HOME_STAGE_END           (100) //��ԭ�����
#define STANDARD_HOME_STAGE_START_CHECK (-1) //������ԭ��ǰ�Լ�
#define STANDARD_HOME_STAGE_CHECKING (-2) //�Լ���


#define STANDARD_HOME_ERROR_NONE		(0) //δ��������
#define STANDARD_HOME_ERROR_DISABLE	(10) //ִ�л�ԭ�����δʹ��
#define STANDARD_HOME_ERROR_ALARM		(20) //ִ�л�ԭ����ᱨ��
#define STANDARD_HOME_ERROR_STOP		(30) //δ��ɻ�ԭ�㣬��ֹͣ�˶�
#define STANDARD_HOME_ERROR_ON_LIMIT   (40) //��������λ�޷�����
#define STANDARD_HOME_ERROR_NO_HOME	(50) //δ�ҵ�Home
#define STANDARD_HOME_ERROR_NO_INDEX  (60) //δ�ҵ�Index
#define STANDARD_HOME_ERROR_NO_LIMIT (70) //δ�ҵ���λ
#define STANDARD_HOME_ERROR_ENCODER_DIR_SCALE (-1) //�滮����������������෴���ߵ�����һ��


typedef struct
{
	short mode;		 // ��ԭ��ģʽȡֵ��Χ1~36
	double highSpeed; // ����Home���ٶȣ���λpulse/ms
	double lowSpeed;	 // ����Index���ٶȣ���λpulse/ms
	double acc;		 // ������ٶȣ���λpulse/ms^2
	long offset;       // ����ƫ��������λpulse
	short check; // �Ƿ������Լ칦�ܣ�1-���ã�����ֵ-������
	short autoZeroPos; // ��������Ƿ��Զ����㣬1-�Զ����㣬����ֵ-������
	long motorStopDelay; //�����λ��ʱ����λ����������
	short pad1[3];	 // ����������Ҫ���ã�
} TStandardHomePrm;

typedef struct
{
	short run;     // �����ڽ��л�ԭ�㣬0����ֹͣ�˶���1-���ڻ�ԭ��
	short stage;   // ��ԭ���˶��Ľ׶�
	short error;    // ��ԭ����̵ķ����Ĵ���
	short pad1[3];       // �������޾��庬�壩
	long capturePos;  // ����Home��Indexʱ�̵ı�����λ��
	long targetPos;    // ��Ҫ�˶�����Ŀ��λ�ã�ԭ��λ�û���ԭ��λ��+ƫ��������������Limitʱ��������Home��Indexʱ�����õ���������Ϊ0����ô��ֵ��ʾΪ805306368
} TStandardHomeStatus;

GT_API GT_ExecuteStandardHome(short axis,TStandardHomePrm *pHomePrm);
GT_API GT_GetStandardHomePrm(short axis,TStandardHomePrm *pHomePrm);
GT_API GT_GetStandardHomeStatus(short axis,TStandardHomeStatus *pHomeStatus);

typedef struct
{
	short year;
	short month;
	short day;
	short version;
	short user;
	short reserve1;
	short reserve2;
	short chip;
} TVersion;

GT_API GT_GetVersionEx(short type,TVersion *pVersion);

GT_API GT_CrdHsOn(short crd,short fifo,short link=1,unsigned short threshold=200,short lookAheadInMc=0);
GT_API GT_CrdHsOff(short crd,short fifo);

#define AUTO_HOME_MODE_HOME (1)
#define AUTO_HOME_MODE_HOME_INDEX (2)
#define AUTO_HOME_MODE_HOME_STOP (3)

typedef struct
{
	short mode;
	double homeSearchVel;
	double acc;
	long homeSearchDis;
	long indexSearchDis;
	long homeReturnOffset;
	long indexReturnOffest;
}TAutoHomePrm;

typedef struct
{
	short run;
	short stage;
	short result;
	long capturePos;
	long targetPos;
}TAutoHomeStatus;

GT_API GT_CheckPciCommandFlag(short *pFlag);
GT_API GT_ResetPciCommandFlag();

GT_API GT_SetStepOutLevel(short axis,short type,short reverse);
GT_API GT_GetStepOutLevel(short axis,short type,short *pReverse);

//////////////////////////////////////////////////////////////////////////
//����GSNλ�ñȽ�ָ���λ�ñȽ����
//////////////////////////////////////////////////////////////////////////
#define POS_COMPARE_MODE_FIFO                       (0)
#define POS_COMPARE_MODE_LINEAR                     (1)
#define POS_COMPARE_MODE_EQUIDISTANT                (2)

#define POS_COMPARE_OUTPUT_PULSE                    (0)
#define POS_COMPARE_OUTPUT_LEVEL                    (1)
#define POS_COMPARE_OUTPUT_AUTO                     (2)

#define POS_COMPARE_SOURCE_ENCODER                  (0)
#define POS_COMPARE_SOURCE_PULSE                    (1)

typedef struct
{
	short mode;                       // FIFOģʽ��Linearģʽ
	short dimension;                  // 1D,2D
	short sourceMode;                 // �����������������
	short sourceX;                    // X��Ƚ�Դ
	short sourceY;                    // Y��Ƚ�Դ
	short outputMode;                 // ���ģʽ�����塢��ƽ
	short outputCounter;              // ����������Դ
	unsigned short outputPulseWidth;  // ��������ȣ���ƽģʽ��Ч
	unsigned short errorBand;         // ��άλ�ñȽ��������
} TPosCompareMode;


typedef struct
{
	short mode;                       // 0:ʱ��ģʽ��1������ģʽ
	unsigned short count;             // �������
	short highLevel;//����ģʽ�£���Ч��ƽ����ʱ�䣬��ƽģʽ��ָ�ߵ�ƽ����ʱ��
	short lowLevel;//��ƽģʽ�£��͵�ƽ����ʱ�䣬����ģʽ����Ч
	short resver[20];//����
} TPosCompareContinueMode;

typedef struct
{
	unsigned long count;
	unsigned short hso;
	unsigned short gpo;

	long startPos;
	long interval;
} TPosCompareLinear;

typedef struct
{
	unsigned long count;
	unsigned short hso;
	unsigned short gpo;

	long startPosX;
	long startPosY;
	long intervalX;
	long intervalY;
} TPosCompareLinear2D;

typedef struct
{
	unsigned long count;
	unsigned short hso;
	unsigned short gpo;
	long startPosX;
	long startPosY;
	long syncPos;
	long time;
	short reserve[20];
} TPosComparePsoPrm;

typedef struct
{
	long pos;
	unsigned short hso;
	unsigned short gpo;
	unsigned long segmentNumber;
} TPosCompareData;

typedef struct
{
	long posX;
	long posY;
	unsigned short hso;
	unsigned short gpo;
	unsigned long segmentNumber;
} TPosCompareData2D;

typedef struct
{
	unsigned short mode;      // 0:FIFOģʽ��1��Linearģʽ
	unsigned short run;
	unsigned short space;
	unsigned long pulseCount;
	unsigned short hso;
	unsigned short gpo;
	unsigned long segmentNumber;
} TPosCompareStatus;

typedef struct
{
	unsigned short config;
	unsigned short fifoEmpty;
	unsigned short head;
	unsigned short tail;
	unsigned long commandReceive;
	unsigned long commandSend;
	long posX;
	long posY;
} TPosCompareInfo;


typedef struct
{
	unsigned short config;
	unsigned short fifoEmpty;
	unsigned short head;
	unsigned short tail;
	unsigned long commandReceive;
	unsigned long commandSend;
	long posX;
	long posY;
	short sourceReverseX;
	short sourceReverseY;
	short reserve[12];
} TPosCompareInfoEx;
typedef struct
{
	unsigned long count;
	unsigned short hso;
	unsigned short gpo;
	long startPosX;
	long startPosY;
	long time;
	short multiNumber;
	short pad1;
	long syncPosArray[256];
} TPosCompareMultiPsoPrm;

GT_API GT_SetPosCompareMode(short index,TPosCompareMode *pMode);
GT_API GT_GetPosCompareMode(short index,TPosCompareMode *pMode);
GT_API GT_PosCompareStart(short index);
GT_API GT_PosCompareStop(short index);
GT_API GT_PosCompareClear(short index);
GT_API GT_PosCompareStatus(short index,TPosCompareStatus *pStatus);
GT_API GT_PosCompareData(short index,TPosCompareData *pData);
GT_API GT_PosCompareData2D(short index,TPosCompareData2D *pData);
GT_API GT_SetPosCompareLinear(short index,TPosCompareLinear *pLinear);
GT_API GT_GetPosCompareLinear(short index,TPosCompareLinear *pLinear);
GT_API GT_SetPosCompareLinear2D(short index,TPosCompareLinear2D *pLinear);
GT_API GT_GetPosCompareLinear2D(short index,TPosCompareLinear2D *pLinear);
GT_API GT_SetPosComparePsoPrm(short index,TPosComparePsoPrm *pPrm);
GT_API GT_GetPosComparePsoPrm(short index,TPosComparePsoPrm *pPrm);
GT_API GT_SetPosCompareContinueMode(short index,TPosCompareContinueMode *pMode);
GT_API GT_GetPosCompareContinueMode(short index,TPosCompareContinueMode *pMode);
GT_API GT_PosCompareInfo(short index,TPosCompareInfo *pInfo);
GT_API GT_PosCompareInfoEx(short index,TPosCompareInfoEx *pInfo);
GT_API GT_PosCompareSpace(short index,unsigned short *pSpace);
GT_API GT_SetPosCompareStartLevel(short index,short type,short startLevel);
GT_API GT_PosComparePulse(short index,short outputMode,short level,unsigned short outputPulseWidth);
GT_API GT_PosComapreContinuePusleMode(short index,short mode,short count,unsigned short pulseLowerWidth);
GT_API GT_BufPosCompareStart(short crd,short fifo,short index);
GT_API GT_BufPosCompareStop(short crd,short fifo,short index);
GT_API GT_BufPosComparePsoPrm(short crd,short index,TPosComparePsoPrm *pPrm,short fifo);
GT_API GT_BufSetComparePort(short crd,short fifo,short channel,short hsio0,short hsio1);
GT_API GT_SetPosCompareMultiPsoPrm(short index,TPosCompareMultiPsoPrm *pPrm);
GT_API GT_GetPosCompareMultiPsoPrm(short index,TPosCompareMultiPsoPrm *pPrm);

GT_API GT_SelectLaserDisTable(short channel,short index);
GT_API GT_GetCurrentLaserDisTable(short channel,short *pIndex);
GT_API GT_BufSetLaserDisEnable(short crd,short fifo,short channel,short enable);
GT_API GT_BufSelectLaserDisTable(short crd,short fifo,short channel,short index);

GT_API GT_SetFlagVar(short index,short mode,short value);
GT_API GT_GetFlagVar(short index,short *pMode,short *pValue);


//////////////////////////////////////////////////////////////////////////
//��ҡ�ˡ����׷�
//////////////////////////////////////////////////////////////////////////
#define  MC_JOYSTICK_AXIS_COUNT_MAX 3//ҡ���������
#define  MC_JOYSTICK_VEL_COUNT_MAX 3//�ٶ�������

typedef struct
{
	long scale[MC_JOYSTICK_AXIS_COUNT_MAX];//���嵱����pulse/mm
	double motionAcc[MC_JOYSTICK_AXIS_COUNT_MAX];//���ٶȣ� mm/s^2
	double motionDec[MC_JOYSTICK_AXIS_COUNT_MAX];//���ٶȣ� mm/s^2
	double motionSmooth[MC_JOYSTICK_AXIS_COUNT_MAX];//ƽ��ϵ���� 0����1
}TJoystickMoitonPrm;

typedef struct
{
	double xMotionVel[MC_JOYSTICK_VEL_COUNT_MAX];//X�ٶȣ�mm/s
	double yMotionVel[MC_JOYSTICK_VEL_COUNT_MAX];//Y�ٶȣ�mm/s
	double zMotionVel[MC_JOYSTICK_VEL_COUNT_MAX];//Z�ٶȣ�mm/s
}TJoystickMoitonVel;


typedef struct
{
	long thresholdValue[MC_JOYSTICK_AXIS_COUNT_MAX];//ҡ����ֵ
	long joystickMaxValue[MC_JOYSTICK_AXIS_COUNT_MAX];//���ֵ
	long joystickMedianValue[MC_JOYSTICK_AXIS_COUNT_MAX];//�м�ֵ
	long joystickMinValue[MC_JOYSTICK_AXIS_COUNT_MAX];//��Сֵ
}TJoystickCriticalValue;

typedef struct
{
	long baudRate;
	short byteSize;
	short parity;
	short stopBits;
	short reserve;
}TSericalPortPrm;

GT_API GT_SetJoystickMapAxis(short joystickIndex,short *axis);
GT_API GT_GetJoystickMapAxis(short joystickIndex,short *pAxis);

GT_API GT_JoystickEnable(short joystickIndex,short enable);//mode  0:���ã�1������

GT_API GT_SetJoystickSericalPortPrm(short joystickIndex,TSericalPortPrm *sericalPortPrm);
GT_API GT_GetJoystickSericalPortPrm(short joystickIndex,TSericalPortPrm *pSericalPortPrm);

GT_API GT_SetJoystickSendDataPacket(short joystickIndex,short *dataPacket,short dataCount);
GT_API GT_GetJoystickSendDataPacket(short joystickIndex,short *pDataPacket,short *pDataCount);

GT_API GT_JoystickCheckEnable(short joystickIndex,short checkEnable);//checkEnable  0:ʹ��У�飬1��У��ر�
GT_API GT_GetJoystickSts(short joystickIndex,long *pSts);//pSts  bit0:ҡ��״̬��0:���ã�1�����ã���bit1��ҡ��У��״̬�� 0:ʹ��У�飬1��У��رգ�
GT_API GT_GetJoystickValue(short joystickIndex,long *pValue);
GT_API GT_SetJoystickMotionPrm(short joystickIndex,TJoystickMoitonPrm *joystickMotionPrm);
GT_API GT_GetJoystickMotionPrm(short joystickIndex,TJoystickMoitonPrm *pJoystickMotionPrm);
GT_API GT_SetJoystickMotionVel(short joystickIndex,TJoystickMoitonVel *joystickMotionVel);
GT_API GT_GetJoystickMotionVel(short joystickIndex,TJoystickMoitonVel *joystickMotionVel);
GT_API GT_SetJoystickCriticalValue(short joystickIndex,TJoystickCriticalValue *joystickCriticalValue);
GT_API GT_GetJoystickCriticalValue(short joystickIndex,TJoystickCriticalValue *pJoystickCriticalValue);

GT_API GT_JoystickReset(short joystickIndex);


GT_API GT_SetDisplayDip(short mode);
GT_API GT_GetDisplayDip(short *pMode);

GT_API GT_Buf2DCompareData(short crd,short fifo,short chn,T2DCompareData data,short compareFifo);
GT_API GT_2DCompareSetHoldTime(short chn,short time);
GT_API GT_2DCompareGetHoldTimeStatus(short chn,short *pTime,short *pSts);

GT_API GT_SetLaserFollowTable(short tableId,long n,double *pVel,double *pPower,short channel);
GT_API GT_GetLaserFollowTable(short tableId,long n,double *pVel,double *pPower,long *pCount,short channel);
GT_API GT_BufLaserFollowTable(short crd,short tableId,double minPower,double maxPower,short fifo=0,short channel=0);

GT_API GT_BufStop(short crd,long mask,long option,short fifo=0);
GT_API GT_BufMoveJog(short crd,short moveAxis,double vel,double acc,short modal,short fifo=0);
GT_API GT_BufLaserPrfFollow(short crd,double ratio,long minPower,long maxPower,short fifo,short channel);

GT_API GT_GetCardInfo(short *pCardNum,short *pCardType);

GT_API GT_SetDeviceShareMax(short count);

GT_API GT_Buf2DComparePulse(short crd,short fifo,short chn,short level,short outputType,short time);

GT_API GT_CrdEnableVariableCircle(short crd,short fifo);
GT_API GT_CrdDisableVariableCircle(short crd,short fifo);

typedef struct
{
	unsigned short type;
	unsigned short index;
	unsigned short id;
} TWatchVar;

typedef struct
{
	TWatchVar var;
	unsigned short condition;
	double value;
} TWatchCondition;

typedef struct
{
	long time;
	short mode;
	short reserve1;
	double reserve2[4];
} TWaitTimeout;

GT_API GT_BufWaitWatchVar(short crd,TWatchCondition *pWatchCondition,TWaitTimeout *pWaitTimeout,long segNum,short fifo);
typedef struct
{
	double stopPos;
	short mode;
	short pad[3];
}TStopPos;

GT_API GT_BufStopPos(short crd,short profile,TStopPos *pStopPos,short modal,short fifo);
GT_API GT_BufSetSoftLimit(short crd,short axis,long positive,long negative,short fifo);
//////////////////////////////////////////////////////////////////////////
//MovePosPlc
//////////////////////////////////////////////////////////////////////////
typedef struct
{
	long pos1;
	long pos2;
	double vel1;
	double vel2;
	double acc;
	double dec;
	short direction;
	short overrideSelect;
	short mode;
	short percent;
}TMovePosTwoSegmentParameterPlc;

//////////////////////////////////////////////////////////////////////////
//��Բ�岹
//////////////////////////////////////////////////////////////////////////
#define ELLIPSE_AUX_POINT_COUNT                 (5)

#define ELLIPSE_MODE_AUX_POINT                  (0)
#define ELLIPSE_MODE_STANDARD                   (1)

typedef struct
{
	double pos[ELLIPSE_AUX_POINT_COUNT][8];    // ��Բ�ϸ���������
} TEllipseAuxPoint;

typedef struct
{
	double centerPoint[8];                     // ��ԲԲ������
	double theta;                              // ��Բ��ת�Ƕ�
	double a;                                  // ��Բ����
	double b;                                  // ��Բ����
}TEllipseStandard;

typedef union
{
	TEllipseAuxPoint auxPoint;                 // ������ģʽ����
	TEllipseStandard standard;                 // ��׼ģʽ����
	double reserve[60];
} TEllipseParameterUnion;

typedef struct
{
	double endPoint[8];                        // �յ�����
	short plane;		                       // ��Բƽ��ѡ��0��XY��1��YZ��2��ZX
	short dir;			                       // ��Բ����0��˳ʱ�룻1����ʱ��
	short overrideSelect;	                   // �ٶȱ���ѡ��0����1�鱶�ʣ�1����2�鱶��
	short mode;			                       // ��Բģʽ��Ŀǰ֧�֣�0-������ģʽ��1-��׼ģʽ

	TEllipseParameterUnion data;	           // ��������
} TEllipseParameter;

GT_API GT_Ellipse(short crd,TEllipseParameter *pEllipse,double synVel,double synAcc,double velEnd,long segNum,short fifo);
GT_API GT_EllipseEx(short crd,TEllipseParameter *pEllipse,double synVel,double synAcc,double velEnd,long segNum,short fifo);

#define ELLIPSE_MODE_AUX_POINT_2D               (0)
#define ELLIPSE_MODE_STANDARD_2D                (1)
//-------------------------------------------------------
//����˵������Բ�岹��������,ģʽ��ELLIPSE_MODE_AU_POINT_2D
//plane--------------��Բƽ��ѡ��INTERPOLATION_CIRCLE_PLAT_XY(0)��XY��INTERPOLATION_CIRCLE_PLAT_YZ(1)��YZ��INTERPOLATION_CIRCLE_PLAT_ZX(2)��ZX
//dir----------------��Բ����0��˳ʱ�룻1����ʱ��
//overrideSelect-----�ٶȱ���ѡ��0����1�鱶�ʣ�1����2�鱶��
//pad----------------ռλ����������Ҫ����
//endPoint1----------�յ�����1,�������plane���������palneΪXYƽ�棬��endPoint1��pos1ΪX���꣬endPoint2��pos2ΪY����
//endPoint2----------�յ�����2
//pos1---------------��Բ�ϸ���������1
//pos2---------------��Բ�ϸ���������2
//-------------------------------------------------------
typedef struct
{
	short plane;
	short dir;
	short overrideSelect;
	short pad;

	double endPoint1;
	double endPoint2;

	double pos1[ELLIPSE_AUX_POINT_COUNT];
	double pos2[ELLIPSE_AUX_POINT_COUNT];
} TEllipseAuxPoint2D;

//-------------------------------------------------------
//����˵������Բ�岹��������,ģʽ��ELLIPSE_MODE_STANDARD_2D
//plane--------------��Բƽ��ѡ��INTERPOLATION_CIRCLE_PLAT_XY(0)��XY��INTERPOLATION_CIRCLE_PLAT_YZ(1)��YZ��INTERPOLATION_CIRCLE_PLAT_ZX(2)��ZX
//dir----------------��Բ����0��˳ʱ�룻1����ʱ��
//overrideSelect-----�ٶȱ���ѡ��0����1�鱶�ʣ�1����2�鱶��
//pad----------------ռλ����������Ҫ����
//endPoint1----------�յ�����1,�������plane���������palneΪXYƽ�棬��endPoint1ΪX���꣬endPoint2ΪY����
//endPoint2----------�յ�����2
//centerPoint1-------��ԲԲ������1���������plane���������palneΪXYƽ�棬��centerPoint1ΪX���꣬centerPoint2ΪY����
//centerPoint2-------��ԲԲ������2
//theta--------------��Բ��ת�Ƕȣ���λ����
//a------------------��Բ����
//b------------------��Բ���ᣬ�������ȳ����
//-------------------------------------------------------
typedef struct
{
	short plane;
	short dir;
	short overrideSelect;
	short pad;

	double endPoint1;
	double endPoint2;

	double centerPoint1;
	double centerPoint2;

	double theta;
	double a;
	double b;
}TEllipseStandard2D;

GT_API GT_EllipsePro(short crd,short mode,void *pData,double synVel,double synAcc,double velEnd,long segNum,short fifo);
GT_API GT_EllipseProEx(short crd,short mode,void *pData,double synVel,double synAcc,double velEnd,long segNum,short fifo);

//////////////////////////////////////////////////////////////////////////
//���岹ʱ��
//////////////////////////////////////////////////////////////////////////

GT_API GT_CheckCrdLineTime(short crd,double x,double y,double z,double *pVelMax,double *pAcc,double *pVelEnd,double *pTime,long *pErrorCode);


//////////////////////////////////////////////////////////////////////////
//����ģ������
//////////////////////////////////////////////////////////////////////////
GT_API GT_GetMachineWorkPos(short crd, short mode,double *pMachinePos, double *pWorkPos);

typedef struct
{
	short			mode;							// 0��FIFOģʽ��1��Linearģʽ 2���ȼ�����ģʽ
	short			dimension;					//1��1D��2��2D
	short			sourceMode;					// 0���������� 1�����������
	short			source[8];					//�������Ƚ�Դ
	short			outputMode;					/*���ģʽ��0:���� 1:��ƽ2����ƽ��
										����ת(��ƽģʽ���������ƽ�Զ���ת������posCompareData��ƽӰ��)*/
	short			outputCounter;				// ����
	unsigned short	outputPulseWidth;	/*���������,��λΪ1us����ƽģʽ�ò�����Ч*/
	unsigned short	errorBand;			// ��άλ�ñȽ��������
	short			reserve1[2];
	double			reserve2[16];
} TPosCompareModeEx;

GT_API GT_SetPosCompareModeEx(short index,TPosCompareModeEx *pMode);
GT_API GT_GetPosCompareModeEx(short index,TPosCompareModeEx *pMode);

typedef struct
{
	short probeType;			// ��������
	short probeIndex;			// ��������
	short latchType;			// ��������
	short latchIndex;			// ��������

	short sense;				// �����ƽ
	short pad[3];
	double filterWidth;			// ������С���
}TSignalDetect;

typedef struct
{
	short status;				// ��ɱ�־,0��δ������1�����У�2�������
	short pad[3];
	double latchWidth;			// ��������ֵ
}TSignalDetectStatus;

GT_API GT_SetSignalTimeFilter(short type,short index,double filterWidth);
GT_API GT_GetSignalTimeFilter(short type,short index,double *pFilterWidth);

GT_API GT_ClearSignalDetect(short index);
GT_API GT_SetSignalDetect(short index,short enable,TSignalDetect *pPrm);
GT_API GT_GetSignalDetect(short index,short *pEnable,TSignalDetect *pPrm);
GT_API GT_GetSignalDetectStatus(short index,TSignalDetectStatus *pPrm);

//-------------------------------------------------------------------------------------------------
// �̼���������ƹ���(GT_SetMcMode)��غ궨��
//-------------------------------------------------------------------------------------------------
// λ���������
#define MC_MODE_POSITION_OVERFLOW_ENABLE              (1)            // λ���������
#define OVERFLOW_ENABLE                               (0)            // ���������Ч��Ĭ��״̬
#define OVERFLOW_DISABLE                              (1)            // ���������Ч
GT_API GT_SetMcMode(short mode,short value);
GT_API GT_GetMcMode(short mode,short *pValue);

GT_API GT_PrintLogInfo(const char *pFileName,long start=0,long count=0);


typedef struct
{
	short list;
	short reserve1[2];
	short modal;
	long segNum;
	long reserve2[3];
	double reserve3[4];
}TListInfo;

GT_API GT_SetAxisPrediction(short axis,short mode,short enable,double *pCoef,short count1,short count2);
GT_API GT_GetAxisPrediction(short axis,short *pMode,short *pEnable,double *pCoef,short *pCount1,short *pCount2);

typedef struct
{
    short crd[2];                                // ������ײ��������ϵ���,��1��ʼ
	short crdAxis[2];                            // ������ײ��������ϵ����,��1��ʼ,�ֱ��ʾX,Y,Z...��
	short dirInfo;                               // ����ϵ����˶�������Ϣ,0: ������ײ�����������˶�������ͬ,1: ������ײ�����������˶������෴
	short pad[3];
	double originDistance;                       // ������ײ�������������ԭ��ļ��,��ֵ����2����1�������˶��ķ���,��ֵ��֮,��λ: ����
	double safeDistance;                         // ��ײ���İ�ȫ����,�ñ�������Ϊ��ֵ,��λ: ����
	double collisionDistance;                    // ��ײ���ļ�����ײ����(�ڶ���ȫ����),�ñ�������Ϊ��ֵ,��ֵһ��С�ڵ���safeDistance,��λ: ����
	double escapeTime;                           // ���밲ȫ����ʱ��,ȡֵ��Χ: ���ڵ���0,��λ: ����,��Ϊ0ʱ,��ʾ��������
}TCrdCollisionDetectParameter;

typedef struct
{
	short enable;                                // ��ײ���ģ��ʹ�ܱ�־
	short mode;                                  // ��ײ���ģ��ģʽ
	short stage;                                 // ��ײ���ģ�鵱ǰ��״̬
	short pad;
}TCrdCollisionDetectStatus;

//-------------------------------------------------------------------------------------------------
// ������ײ������ָ��
// index: ��ײ���ģ������,��1��ʼ
// mode: ��ײ���ģ��ģʽ
// pPrm: ��Ҫ���õ���ײ���ģ��Ĳ���
//-------------------------------------------------------------------------------------------------
GT_API GT_SetCrdCollisionDetectParameter(short index,short mode,TCrdCollisionDetectParameter *pPrm);

//-------------------------------------------------------------------------------------------------
// ��ȡ��ײ������ָ��
// index: ��ײ���ģ������,��1��ʼ
// pMode: ��ײ���ģ��ģʽ
// pPrm: ��ȡ������ײ���ģ��Ĳ���
//-------------------------------------------------------------------------------------------------
GT_API GT_GetCrdCollisionDetectParameter(short index,short *pMode,TCrdCollisionDetectParameter *pPrm);

//-------------------------------------------------------------------------------------------------
// ʹ����ײ��⹦��(ֻ���ڹ�������ϵ��ֹʱ���ܵ��ø�ָ��)
// index: ��ײ���ģ������,��1��ʼ
// enable: ʹ�ܻ��߽�����ײ���ģ��,0: ����,1: ʹ��
//-------------------------------------------------------------------------------------------------
GT_API GT_SetCrdCollisionDetectEnable(short index,short enable);

//-------------------------------------------------------------------------------------------------
// �����ײ��ⱨ��״̬
// index: ��ײ���ģ������,��1��ʼ
//-------------------------------------------------------------------------------------------------
GT_API GT_ClearCrdCollisionDetectStatus(short index);

//-------------------------------------------------------------------------------------------------
// ��ȡ��ײ���״̬
// index: ��ײ���ģ������,��1��ʼ
// pStatus: ��ȡ������ײ����״̬
//-------------------------------------------------------------------------------------------------
GT_API GT_GetCrdCollisionDetectStatus(short index,TCrdCollisionDetectStatus *pStatus);

//-------------------------------------------------------------------------------------------------
// ���мӹ�����ָ��
//-------------------------------------------------------------------------------------------------

#define CRD_FLY_OPERATION_TYPE_ALL                         (0) // �������мӹ��������˶��������岹����ϵ��������
#define CRD_FLY_OPERATION_TYPE_CRD                         (1) // �������мӹ��в岹����ϵ�˶�
#define CRD_FLY_OPERATION_TYPE_FEEDER                      (2) // �������мӹ����������˶�

typedef struct
{
	short crdIndex;                                        // ���мӹ�������ϵ��
	short crdX;                                            // ���мӹ�������ϵx���Ӧ�Ĺ滮����
	short crdY;                                            // ���мӹ�������ϵy���Ӧ�Ĺ滮���ţ�x��y���Ӧ�Ĺ滮�����������ڰ˸�������
	short crdLaLevel;                                      // ���мӹ�������ϵǰհ�ȼ���Ŀǰֻ֧��Ϊ0
	double crdXScale;                                      // ���мӹ�������ϵx�ᵱ������λ��pulse/mm
	double crdYScale;                                      // ���мӹ�������ϵy�ᵱ������λ��pulse/mm
	double crdFlyWorkPos[2];                               // ���мӹ��Ĺ���λ�ã���λ��mm
	short crdFlyAxis;                                      // ���мӹ���Ҫ���ӵ�����ϵ�ᣬ1-��ʾx�ᣬ2-��ʾy��
	short pad1;

	short measureType;                                     // ���������ͣ�������-MC_ENCODE������������-MC_AU_ENCODER
	short measureIndex;                                    // �����ֶ�Ӧ�ı�����/��������������
	double measureScale;                                   // �����ֵ�������λ��pulse/mm

	short feederAxis;                                      // ����ש�����
	short pad2[3];
	double feederPpr;                                      // ����ש��ppr����λ��pulse/ת
	double feederVel;                                      // ����ש���ٶȣ���λ��rad/s
	double feederAcc;                                      // ����ש����ٶȣ���λ��rad/s^2
	double feederSmooth;                                   // ����ש��ƽ��ϵ����ȡֵ��Χ��[0,1]
	double feederRadius;                                   // ������뾶����λ��mm������������Ŀǰ������0

	double pieceTotalLength;                               // �����ܳ��ȣ���λ��mm������������Ŀǰ������0
	double pieceThickness;                                 // ������ȣ���λ��mm������������Ŀǰ������0
}TCrdFlyPrm;

GT_API GT_TM_SetCrdFlyPrm(short crdFlyIndex,TCrdFlyPrm *pPrm);
GT_API GT_TM_GetCrdFlyPrm(short crdFlyIndex,TCrdFlyPrm *pPrm);
GT_API GT_TM_StartCrdFly(short crdFlyIndex,short startType);
GT_API GT_TM_StopCrdFly(short crdFlyIndex,short stopType);
GT_API GT_TM_GetCrdFlyMeasureVelLimit(short crdFlyIndex,double *pMeasureVelLimit);

typedef void (*UserInterruptCallback)(void* user);
GT_API GT_StartUserInterruptCallback(UserInterruptCallback callback, void* user);
GT_API GT_StopUserInterruptCallback();


//-------------------------------------------------------------------------------------------------
// ���ʹ����ٹ���ָ��
//-------------------------------------------------------------------------------------------------

#define CATCH_UP_STATE_IDLE                                          (0)   // ����״̬
#define CATCH_UP_STATE_WAIT                                          (100) // �ȴ�����׷��
#define CATCH_UP_STATE_CATCH_UP                                      (200) // ׷�����ᣬ��δ�ﵽͬ��
#define CATCH_UP_STATE_SYNCH                                         (300) // ����͹���ͬ��
#define CATCH_UP_STATE_STOP_SYNCH                                    (400) // �������ֹͣ
#define CATCH_UP_STATE_STOP_SYNCH_DONE                               (500) // �������ֹͣ���

#define CATCH_UP_RETURN_MODE_FOLLOW                                  (0)
#define CATCH_UP_RETURN_MODE_TRAP                                    (1)

#define CATCH_UP_FIFO_EMPTY_ACTION_TO_PARKING                        (0)
#define CATCH_UP_FIFO_EMPTY_ACTION_IDLE                              (1)

#define CATCH_UP_MASTER_MODE_CONTINUOUS                              (0)
#define CATCH_UP_MASTER_MODE_INTERMITTENT                            (1)

#define CATCH_UP_SLAVE_MODE_DEFAULT                                  (0)
#define CATCH_UP_SLAVE_MODE_SYNCH_ONLY                               (1)

#define CATCH_UP_OUT_OF_RANGE_ACTION_STOP_MASTER                     (0)
#define CATCH_UP_OUT_OF_RANGE_ACTION_STOP_SLAVE                      (1)
#define CATCH_UP_OUT_OF_RANGE_ACTION_STOP_ALL                        (2)

#define CATCH_UP_STOP_INFO_NONE                                      (0)
#define CATCH_UP_STOP_INFO_STOP_SYNCH                                (1)	// ֹͣ�ӹ���ͬ��
#define CATCH_UP_STOP_INFO_USER_STOP                                 (2)	// �û�����ָֹͣ��
#define CATCH_UP_STOP_INFO_OUT_OF_RANGE_STOP                         (3)	// ���󣺴��ᳬ����������
#define CATCH_UP_STOP_INFO_MASTER_VEL_ZERO_STOP						 (4)	// ���������ٶȵ���0
#define CATCH_UP_STOP_INFO_MASTER_VEL_ERROR_VALUE_STOP				 (5)	// ���������ٶȴ��ڵ��ڴ�������ٶ�
#define CATCH_UP_STOP_INFO_FOLLOW_MOTION_ERROR						 (6)	// �����������follow�˶����ݴ���
#define CATCH_UP_STOP_INFO_TRAP_MOTION_ERROR						 (7)	// ���󣺷��ؽ׶�trap�˶����ݴ���
#define CATCH_UP_STOP_INFO_PIECE_POS_DELTA_OVERFLOW					 (8)	// ���󣺹���λ�����
#define CATCH_UP_STOP_INFO_MASTER_MOVE_DIR_ERROR					 (9)	// ���������˶����򲻺���


typedef struct  
{
	short masterMode;                  // �����˶�ģʽ��0�������˶���
	// 1����Ъ�˶�,������Ҫ2��������
	short masterType;                  // �������ͣ�MC_ENCODER��MC_AU_ENCODER
	short masterIndex;                 // ��������

	short slaveMode;                   // ����ģʽ��0����ȫ���ƴ����˶���1������ֻ���������ﵽ�ٶ�ͬ����λ��ͬ��
	short slaveType;                   // �������ͣ�����ʽ������/��Ŀǰֻ֧�ִ�������Ϊ��MC_PROFILE(31)
	short slaveIndex;                  // ��������
	short slaveAdditionType;           // masterMode=1ʱ���˲�����Ч��������������ͣ�����ʽ������/��Ŀǰֻ֧�ִ������������Ϊ��MC_PROFILE(31)
	short slaveAdditionIndex;          // masterMode=1ʱ���˲�����Ч���������������
	short slaveLink;                   // ������ӵ�������������0��ʾ�����ӣ�������һ�������ᣩ

	short outOfRangeAction;            // ���ᳬ���ӹ���Χ����Ϊ��0��ֹͣ���ᣬ1��ֹͣ���ᣬ2��ֹͣ����ʹ���

	short trapSmoothTime;			   // ����ʱ��λ�˶���ƽ��ʱ��		
	short followSmoothPercent;		   // ����׷�ٴ��ʹ�ʱ��follow�˶���S������ռ����ʱ��İٷֱȣ�Ŀǰ��֧�֣�������0

	short reserve1[4];				   // ����ֵ��������0

	double synchOffset;                // ͬ��λ��ƫ�ƣ�mm
	double detectPos;                  // �������λ�ã�mm
	double parkPos;                    // ����λ��mm
	double stopPos;                    // ֹͣλ��mm

	double slaveVelMax;                // ��������ٶȣ�mm/s
	double slaveAcc;                   // ������ٶȣ�mm/s^2

	double sampleTime;                 // �ٶȲ���ʱ�䣬ms

	double reserve2[5];				   // ����ֵ��������0
} TCatchUpPrm;

typedef struct  
{
	short mode;                        // ����ģʽ��0��Followģʽ���أ�1�õ�λģʽ����
	short fifoEmptyAction;             // ����������Ϊ��ʱ������Ϊ��0�����᷵�ز���λ
	                                   // 1���ȴ�ѹ�빤��λ���Ժ��پ�������Ķ���
	short reserve1[2];
	long reserve2[4];
	double reserve3[4];
} TStartCatchUpPrm;

typedef struct  
{
	short mode;                        // ֹͣģʽ
	short reserve1[3];
	long reserve2[4];
	double reserve3[4];
} TStopCatchUpPrm;

typedef struct  
{
	short mode;                        // ����ģʽ��0ÿ���������û�ѹ��岹���ݣ�����ģ��ֻ���������岹
	short crdIndex;                    // ����ϵ����
	short reserve1[2];
	long reserve2[4];
	double reserve3[4];
} TStartCatchUpProcessPrm;

typedef struct  
{
	short mode;                        // ֹͣģʽ��0����slaveACC��ͣ
	short reserve1[3];
	long reserve2[4];
	double reserve3[4];
} TStopCatchUpSynchPrm;

typedef struct  
{
	unsigned long id;                  // ����ID
	long reserve1[3];
	double pos;                        // ������Ӧ�����������λ��
	double reserve2[3];
} TCatchUpPieceFifo;

typedef struct  
{
	short state;                       // ��ǰ״̬���򻯵�״̬
	short stopInfo;                    // ֹͣԭ��
	short reserve1[6];
	unsigned long id;                  // ��ǰ����ID
	unsigned long pieceCount;          // �ӹ���������
	long reserve2[6];
	double synchDistance;              // ����ͬ������λ��
	double synchTime;                  // ����ͬ������ʱ��
	double reserve3[6];
} TCatchUpStatus;

typedef struct  
{
	short state;						// ��ǰ״̬����ϸ���ڲ�״̬
	short reserve1[7];
	long reserve2[8];
	double pieceStartPos;
	double slaveStartPos;
	double pieceSynchPos;
	double slaveSynchPos;
	double pieceDistanceMin;           // ����ͬ���㲻��Ĺ�����С���	
	double reserve3[8];
} TCatchUpInfo;

GT_API GT_SetCatchUpPrm(short catchUpIndex,TCatchUpPrm *pPrm);
GT_API GT_GetCatchUpPrm(short catchUpIndex,TCatchUpPrm *pPrm);
GT_API GT_StartCatchUp(short catchUpIndex,TStartCatchUpPrm *pPrm);
GT_API GT_StopCatchUp(short catchUpIndex,TStopCatchUpPrm *pPrm);
GT_API GT_StartCatchUpProcess(short catchUpIndex,TStartCatchUpProcessPrm *pPrm);
GT_API GT_StopCatchUpSynch(short catchUpIndex,TStopCatchUpSynchPrm *pPrm);
GT_API GT_PushCatchUpPieceFifo(short catchUpIndex,TCatchUpPieceFifo *pFifo);
GT_API GT_GetCatchUpStatus(short catchUpIndex,TCatchUpStatus *pStatus);
GT_API GT_GetCatchUpInfo(short catchUpIndex,TCatchUpInfo *pInfo);
GT_API GT_ClearCatchUpStatus(short catchUpIndex);

typedef struct
{
	short  count;
	short  reserve[3];
	double alpha[4];
	double beta[4];
}TScaleParameter;

GT_API GT_SetScaleParameter(short type,short index,TScaleParameter *pScalePrm);
GT_API GT_GetScaleParameter(short type,short index,TScaleParameter *pScalePrm);


//-----------------------------------------------------------------------------
// ָ�������־����¼���һ�η���ֵ�����ָ�
// LogError
//-----------------------------------------------------------------------------
typedef struct
{
	short commandCode;		// ָ����
	short subCmd;			// ��ָ����
	short rtn;				// ָ����󷵻�ֵ
	short errorIndex;		// ��ָ����CommandReturn����������1��ʼ����Ǵ����ﷵ��
	double parameter;	// ����ǲ�������7���򷵻ش���Ĳ���
	double reserve1;
	short PLCThreadId;		// �˶������߳�ID
	short PLCLineNum;		// �˶�����ֹͣ�к�
	short reserve2;
	short reserve3;
}TCommandLogError;

GT_API GT_PrintCommandLogError(short mode, char *pLogErrorFile);
GT_API GT_GetCommandLogError(short mode, TCommandLogError *pCommandLogError);

#define RESET_TYPE_NONE			(-1)
#define RESET_TYPE_IO			(0)

typedef struct  
{
	short mode;		// modeΪ1��ʾ���֣�Ϊ0��ʾ��λ����ʼ״̬
}TResetIo;

typedef union  
{
	TResetIo resetIo;
	double data[7];
}TResetModePrmUnion;
GT_API GT_SetResetMode(short type,TResetModePrmUnion *pResetPrm);

typedef struct
{
	short enable;
	short pulseCount;
	short highTime;
	short lowTime;
	double reserve[2];
}THsoContinueOutputPulse;
GT_API GT_EnableHsoContinueOutputPulse(short hsoIndex,THsoContinueOutputPulse *pHsoContinueOutputPulse,short hsoCount);

typedef struct
{
	short mode;
	short timeScale;
	short count;
	short pad1;
	double pulseWidth;
	double duty;
	double frequency;
	double pad2;
}THsoPulsePrm;

GT_API GT_GetHsoPulsePrm(short station,short hsoIndex,THsoPulsePrm *pPrm,short hsoCount);
GT_API GT_SetHsoPulsePrm(short station,short hsoIndex,THsoPulsePrm *pPrm,short hsoCount);


//-----------------------------------------------------------------------------
// ��ѡ�����ƹ��ܣ�16·λ�ñȽ����
//-----------------------------------------------------------------------------
typedef struct  
{
	short latchType;
	short latchIndex;
	short probeType;
	short probeIndex;
	short sense;         // 0:�½��أ�1�������أ�Ĭ���½���
	short reserve[3];
}TSignlaLatch;

typedef struct  
{
	long position;
	long count;
}TSignalLatchStatus;

typedef struct  
{
	short sourceType;
	short sourcrIndex;
	long outputPulseWidth;
	short reserve[4];
}TSignalOutputPrm;

GT_API GT_StartSignalLatch(short latchIndex,TSignlaLatch *pSignlaLatch,short latchCount);
GT_API GT_GetSignalLatchStatus(short latchIndex,TSignalLatchStatus *pSignalLatchStatus,short latchCount);
GT_API GT_ClearSignalLatchStatus(short latchIndex,short latchCount);
GT_API GT_SetSignalOutputPrm(short signalIndex,TSignalOutputPrm *pSignalOutputPrm,short signalCount);
GT_API GT_SetSignalOutputData(short mask,const long posData[32]);
GT_API GT_GetSignalOutputDataSpace(short signalIndex,long *pSpace,short signalCount);

//-----------------------------------------------------------------------------
// �û����ܹ���
//----------------------------------------------------------------------------- 
typedef struct  
{	
	char oldKey[32];		// ԭʼ��Կ
	char newKey[32];		// ����Կ
}TEncryptKey;
typedef struct  
{	
	char keyValue[32];		// ��Կ
	char data[32];			// ��ȡ���Ļ���д��ȥ���µ�����
}TEncryptData;
GT_API GT_UpdateEncryptKey(short keyIndex,TEncryptKey *pKeyInf,short *pSts);
GT_API GT_SetEncryptData(TEncryptData *pWritePrm);
GT_API GT_GetEncryptData(TEncryptData *pWritePrm);

typedef struct  
{	
	char uuid[32];		// ԭʼ��Կ
	char mcInf[32];		// 
}TEncryptConfigPrm;
GT_API GT_SetEncryptConfig(TEncryptConfigPrm *pConfigPrm,short *pSts);

GT_API GT_UserLockCommand(short keyIndex,char keyValue[32],short *pSts);
GT_API GT_UserUnlockCommand(short keyIndex,char keyValue[32],short *pSts);

typedef struct
{
	short enable;
	short reserve1[3];
	double reserve2[4];
} TAxisSimulationParameter;
GT_API GT_SetAxisSimulationParameter(short profile,TAxisSimulationParameter *pPrm,short count);
GT_API GT_GetAxisSimulationParameter(short profile,TAxisSimulationParameter *pPrm,short count);
GT_API GT_GetAxisSimulationBeginPos(short profile,double *pBeginPos,short count);

typedef enum
{
	MC_POSITIVE_DIRECTION,
	MC_NEGATIVE_DIRECTION,
	MC_CURRENT_DIRECTION,
	MC_SHORTEST_WAY,
	MC_BY_POS,
	MC_RELATIVE_POS,
} EMcDirection;

typedef struct  
{
	short rotary;
	short pad[3];
	double start;
	double length;
	double reserve;
	double pulse;
} TRotaryConfig;
GT_API GT_SetAxisRotaryConfig(short axis,TRotaryConfig *pConfig);
GT_API GT_GetAxisRotaryConfig(short axis,TRotaryConfig *pConfig);
GT_API GT_GetAxisPrfPosRotary(short axis,double *pTheta,double *pRound,short count=1);
GT_API GT_ZeroAxisRotaryRound(short axis,short count=1);
GT_API GT_GetProfileRotaryConfig(short profile,TRotaryConfig *pConfig);
GT_API GT_GetPrfPosRotary(short profile,double *pTheta,double *pRound,short count=1);
GT_API GT_GetEncPosRotary(short encoder,double *pTheta,double *pRound,short count=1);


typedef struct  
{	
	char keyValue[32];		// ��Կ
	char data[32];			// ��ȡ���Ļ���д��ȥ���µ�����
}TEncryptData;
//  ���ܶ�д����
GT_API GT_GetEncryptData(TEncryptData *pReadPrm);
GT_API GT_SetEncryptData(TEncryptData *pWritePrm);

typedef struct  
{	
	char oldKey[32];		// ԭʼ��Կ
	char newKey[32];		// ����Կ
}TEncryptKey;
GT_API GT_UpdateUserEncryptKey(TEncryptKey *pKeyInf,short *pSts);