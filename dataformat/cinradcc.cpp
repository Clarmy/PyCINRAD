//tagWEATHERRADAR�״���Ϣ�Ľṹ
typedef struct tagWEATHERRADAR
{
	char cFileType[16];						//3830���ݱ�ʶ(��CINRADC��)
											//973�����ʶ(��973��)
	char cCountry[30];						//������
	char cProvince[20];						//ʡ��
	char cStation[40];						//վ��	
	char cStationNumber[10];				//��վ��
	char cRadarType[20];					//�״��ͺ�
	char cLongitude[16];					//�������ھ���
	char cLatitude[16];						//��������γ��
	long lLongitudeValue;					//���徭��
	long lLatitudeValue;					//����γ��
	long lHeight;							//���ߺ��θ߶�
	short sMaxAngle;						//�����赲�������
	short sOptAngle;						//��ѹ۲�����
	unsigned char ucSYear1;					//�۲⿪ʼʱ�����ǧ��λ(19-20)
	unsigned char ucSYear2;					//�۲⿪ʼʱ�����ʮ��λ(00-99)
	unsigned char ucSMonth;				//�۲⿪ʼʱ�����(1-12)
	unsigned char ucSDay;					//�۲⿪ʼʱ�����(1-31)
	unsigned char ucSHour;					//�۲⿪ʼʱ���ʱ(0-23)
	unsigned char ucSMinute;				//�۲⿪ʼʱ��ķ�(0-59)
	unsigned char ucSSecond;				//�۲⿪ʼʱ�����(0-59)
	unsigned char ucTimeFrom;				//ʱ����Դ 0-�����ʱ��(1����δ��ʱ)
											//		   1-�����ʱ��(1�����Ѷ�ʱ)
											//		   2-GPS
											//		   3-����
	unsigned char ucEYear1;					//�۲����ʱ�����ǧ��λ(19-20)
	unsigned char ucEYear2;					//�۲����ʱ�����ʮ��λ(00-99)
	unsigned char ucEMonth;				//�۲����ʱ�����(1-12)
	unsigned char ucEDay;					//�۲����ʱ�����(1-31)
	unsigned char ucEHour;					//�۲����ʱ���ʱ(0-23)
	unsigned char ucEMinute;				//�۲����ʱ��ķ�(0-59)
	unsigned char ucESecond;				//�۲����ʱ�����(0-59)
	unsigned char ucScanMode;				//ɨ�跽ʽ  1-RHI  10-PPI��ZPPI  
											//		   1XX=VPPI(XXΪɨ��Ȧ��)
	unsigned long ulSmilliSecond;			//��΢��Ϊ��λ��ʾ�����С��λ
	unsigned short usRHIA;					//RHI���ڵķ�λ��(0.01��Ϊ��λ) PPI��
											//VPPIʱΪFFFF
	short sRHIL;			//RHI���ڵ��������(0.01��Ϊ��λ) PPI��
							//VPPIʱΪFFFF
	short sRHIH;							//RHI���ڵ��������(0.01��Ϊ��λ) PPI��
											//VPPIʱΪFFFF
	unsigned short usEchoType;				//�ز�����  0x405a-Z  0x406a-V 
											// 0x407a-W  0x408a-ZVW��Ҫ��
	unsigned short usProdCode;				//��������  0x8001-PPI���� 
											// 		   0x8002-RHI���� 
											// 		   0x8003-VPPI����  
											//		   0x8004-��ǿ��PPI����  
											//		   0x8005-CAPPI����
	unsigned char ucCalibration;				//��У״̬  0-��  1-�Զ�
												//  2-1�������˹�  3-1�����˹�
	unsigned char remain1[3];				//������
	unsigned char remain2[660];				//������,��VPPISCANPARAMETER����
											//��PPI��RHI�ļ�:ֻ��1��ṹ����
											//��VPPI�ļ�:��N��ṹ����
	long lAntennaG;						//��������(0.001dB)
	long lPower;							//��ֵ����(��)
	long lWavelength;						//����(΢��)
	unsigned short usBeamH;				//��ֱ�������(��)
	unsigned short usBeamL;				//ˮƽ�������(��)
	unsigned short usPolarization;				//����״̬ 0-ˮƽ 1-��ֱ 2-˫ƫ��
												// 3-Բƫ�� 4-����
	unsigned short usLogA;					//������̬��Χ(0.01dB)
	unsigned short usLineA;					//���Զ�̬��Χ(0.01dB)
	unsigned short usAGCP;					//AGC�ӳ���(΢��)
	unsigned short usFreqMode;				//Ƶ�ʷ�ʽ	1-���ظ�Ƶ��
											//  2-˫�ظ�Ƶ��3:2  3-˫�ظ�Ƶ��4:3
	unsigned short usFreqRepeat;				//�ظ�Ƶ��
	unsigned short usPPPPulse;				//PPP������
	unsigned short usFFTPoint;				//FFT�������
	unsigned short usProcessType;			//�źŴ���ʽ	1-PPP
											//	2-ȫ��FFT	3-����FFT
	unsigned char ucClutterT;				//�Ӳ�������ֵ(��STC)
	char cSidelobe;						//��һ�԰�(dB)
	unsigned char ucVelocityT;				//�ٶ�����
	unsigned char ucFilderP;					//����������ʽ	0-��	
												//	1-IIR�˲���1	2-IIR�˲���2
												//	3-IIR�˲���3	4-IIR�˲���4
	unsigned char ucNoiseT;					//����������ֵ(��ǿ������)
	unsigned char ucSQIT;					//SQI����
	unsigned char ucIntensityC;				//DVIPǿ��ֵ������õ�ͨ��
											// 1-����ͨ�� 2-����ͨ��
	unsigned char ucIntensityR;				//ǿ��ֵ�����Ƿ���붩��
											// 0-��(dB) 1-�Ѷ���(dBZ)
	unsigned char ucCalNoise;				//����ϵ���궨ֵ
	unsigned char ucCalPower;				//���书�ʱ궨ֵ
	unsigned char ucCalPulseWidth;			//�����ȱ궨ֵ
	unsigned char ucCalWorkFreq;			//����Ƶ�ʱ궨ֵ
	unsigned char ucCalLog;					//����б�ʱ궨ֵ
	char remain3[92];						//������
	unsigned long int liDataOffset;			//����ƫ�Ƶ�ַ
}WEATHERRADAR;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//tagVPPISCANPARAMETER���ǲ�Ľṹ
typedef struct tagVPPISCANPARAMETER
{
	unsigned short usMaxV;			//���ɲ��ٶ�(����/��)
	unsigned short usMaxL;			//���ɲ����(10��)
	unsigned short usBindWidth;		//�ⳤ(��)
	unsigned short usBinNumber;		//ÿ�������
	unsigned short usRecordNumber;	//��Ȧ������
	unsigned short usArotate;		//��Ȧת��(0.01��/��)
	unsigned short usPrf1;			//��Ȧ��һ���ظ�Ƶ��(0.1Hz)
	unsigned short usPrf2;			//��Ȧ�ڶ����ظ�Ƶ��(0.1Hz)
	unsigned short usSpulseW;		//��Ȧ����(΢��)
	short		   usAngle;			//����(0.01��)
	unsigned char cSweepStatus;		//1=��Ҫ��	2=��Ҫ��(����Ƶ)	3=��Ҫ��(˫��Ƶ)
	unsigned char cAmbiguousp;		//0=�������ģ��	1=�����ģ��
}VPPISCANPARAMETER;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
