struct RADARSITE {
	char   country[30];			//���������ı���ʽ����
	char   province[20];			//ʡ�����ı���ʽ����
	char   station[40];			//վ�����ı���ʽ����
	char   stationnumber[10];	//��վ�ţ��ı���ʽ����
	char   radartype[20];		//�״��ͺţ��ı���ʽ����
	char   longitude[16];		//�������ھ��ȣ��ı���ʽ����.��д��ʽ����E 115��32��12��
	char   latitude[16];			//��������γ�ȣ��ı���ʽ����.��д��ʽ����N 35��30��15��
	long int  longitudevalue;	    //�������ھ��ȵ���ֵ����1 / 100��Ϊ������λ��ʮ���ƣ�������E��Ϊ����������W��Ϊ��
	long int  lantitudevalue;		//��������γ�ȵ���ֵ����1 / 100��Ϊ������λ��ʮ���ƣ���γ��N��Ϊ������γ��S��Ϊ��
	long int  height;			//���ߵĺ��θ߶��Ժ���Ϊ������λ
	short   Maxangle;		//��վ���ܵ����赲��������ǣ���1 / 100��Ϊ������λ��
	short   Opangle;		//��վ����ѹ۲����ǣ�����ز�ǿ��<10dBz����1 / 100	��Ϊ������λ��
	short   MangFreq;		//�ٵ���Ƶ�ʣ�ͨ����Ƶ�ʿɼ����״ﲨ����
};

struct RADARPERFORMANCEPARAM {
	long int	 AntennaG;	//�������棬��0.001dBΪ������λ
	unsigned short  BeamH;		//��ֱ������ȣ���1 / 100��Ϊ������λ
	unsigned short  BeamL;		//ˮƽ������ȣ���1 / 100��Ϊ������λ
	unsigned char  polarizations;	//����״��
	char   sidelobe;	//��һ�԰������λ��dB��ע�⣺���븺�ţ�
	long int  Power;		//�״������ֵ���ʣ�����Ϊ������λ
	long int  wavelength;	//��������΢��Ϊ������λ
	unsigned short  logA;	//�������ջ���̬��Χ, ��0.01dBΪ������λ
	unsigned short  LineA;	//���Խ��ջ���̬��Χ, ��0.01Ϊ������λ
	unsigned short  AGCP;	//AGC�ӳ�������΢��Ϊ������λ
	unsigned char 	 clutterT;		//�Ӳ�������ֵ��������λ0.01dB
	unsigned char 	 VelocityP;	//�ٶȴ���ʽ
	unsigned char 	 filderP;		//����������ʽ
	unsigned char	 noiseT;	//����������ֵ	��0 - 255��
	unsigned char 	 SQIT;	//SQI��ֵ�������� / ��Ϊ������λ
	unsigned char 	 intensityC;//rvpǿ��ֵ������õ�ͨ��
	unsigned char	intensityR;//ǿ�ȹ����Ƿ�����˾��붩��
};

struct LAYERPARAM {
	unsigned char  ambiguousp; 	//������ģ��״̬
	unsigned short	 Arotate;		//��������ת��, ������λ:0.01�� / ��
	unsigned short	 Prf1;	//����ĵ�һ�������ظ�Ƶ��, ������λ : 1 / 10 Hz
	unsigned short	 Prf2;	//����ĵڶ��������ظ�Ƶ��, ������λ : 1 / 10 Hz
	unsigned short	 spulseW;		//�����������, ������λ:	΢��
	unsigned short	 MaxV;	//��������ɲ��ٶ�, ������λ : ���� / ��
	unsigned short	 MaxL;		//��������ɲ���룬��10��Ϊ������λ
	unsigned short	 binWidth;	//�������ݵĿⳤ���Է���Ϊ������λ
	unsigned short	 binnumber;	//����ÿ������Ŀ���
	unsigned short	 recordnumber;	//���㾶����(��¼����)
	short	 Swangles;			//��������ǣ�������λ	��1 / 100��
};

struct RADAROBSERVATIONPARAM {
	unsigned char 	 stype;		//ɨ�跽ʽ
	unsigned short 	 syear;		//�۲��¼��ʼʱ�����
	unsigned char 	 smonth;		//�۲��¼��ʼʱ����£�1 - 12��
	unsigned char 	 sday;		//�۲��¼��ʼʱ����գ�1 - 31��
	unsigned char 	 shour;		//�۲��¼��ʼʱ���ʱ��00 - 23��
	unsigned char 	 sminute;		//�۲��¼��ʼʱ��ķ֣�00 - 59��
	unsigned char 	 ssecond;		//�۲��¼��ʼʱ����루00 - 59��
	unsigned char 	 Timep;	//ʱ����Դ
	unsigned long int smillisecond; 		//���С��λ��������λ΢�룩
	unsigned char 	 calibration;	//��У״̬
	unsigned char 	 intensityI;	//ǿ�Ȼ��ִ�����32 - 128��
	unsigned char 	 VelocityP;	//�ٶȴ�����������31 - 255��(������ - 1��
	struct LAYERPARAM LayerParam[30]; //��Ȧɨ��״̬����
	unsigned short	 RHIA;		//��RHIʱ�����ڷ�λ�ǣ�������λΪ1 / 100��
	short	 RHIL;				//��RHIʱ��������ǣ�������λΪ1 / 100��
	short	 RHIH;				//��RHIʱ��������ǣ�������λΪ1 / 100��
	unsigned short 	 Eyear;		//�۲����ʱ�����
	unsigned char 	 Emonth;		//�۲����ʱ����£�1 - 12��
	unsigned char 	 Eday;		//�۲����ʱ����գ�1 - 31��
	unsigned char 	 Ehour;		//�۲����ʱ���ʱ��00 - 23��
	unsigned char 	 Eminute;		//�۲����ʱ��ķ֣�00 - 59��
	unsigned char 	 Esecond;		//�۲����ʱ����루00 - 59��
	unsigned char 	 Etenth;		//�۲����ʱ���1 / 100�루00 - 59��
};

struct DATA {
	unsigned char m_dbz;	//ǿ��ֵ��ʵ��dBZ = (m_dbz - 64) / 2;
	char	  m_vel;		//�ٶ�ֵ,ʵ��Velocity = ���ɲ��ٶ� * (m_Vel - 128) / 128��
	unsigned char  m_undbz;  //�޶���ǿ��ֵ��ʵ��dBZ = (m_undbz - 64) / 2;
	unsigned char  m_sw;		//�׿�ֵ��������λΪ���ɲ��ٶȵ�256��֮һ���޻ز�ʱΪ�㡣
};

struct DATARECORD {
	unsigned short	 startaz, startel, endaz, endel; //�Ƕ��㷨Ϊ�� ʵ�ʽǶ� = �Ƕ�ֵ * 360.0 / pow(2, 16);
	struct	 DATA	RawData[1024];
};

struct RADARDATAFILEHEADER {
	struct RADARSITE  RadarSiteInfo;
	struct RADARPERFORMANCEPARAM  RadarPerformanceInfo;
	struct RADAROBSERVATIONPARAM  RadarObservationInfo;
	char Reserved[163];
};
