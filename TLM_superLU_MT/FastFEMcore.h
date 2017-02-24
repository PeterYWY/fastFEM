#pragma once
#include "datatype.h"
#include "plot.h"

class CFastFEMcore
{
public:
	int num_pts;//�ڵ���Ŀ
	int num_ele;//��Ԫ��Ŀ
	int numDomain;//����Ŀ
	CNode * pmeshnode;
	CElement * pmeshele;
	char filename[256];//

	double  Precision;//���㾫��
	double  Relax;
	int		LengthUnits;//���ȵ�λ����������
	CMaterial* materialList;//���������

	Plot * thePlot;
	CFastFEMcore();
	~CFastFEMcore();	
	// load mesh
	int LoadMeshCOMSOL(char*fn);//���������Ϣ����
	bool StaticAxisymmetricTLM();//ʹ��TLM��̬��Գƴų��ļ��㺯��
	double CalcForce();//��������㺯��
	int openProject(QString proFile);//�򿪹����ļ�����
	int preCalculation();//Ԥ���㺯��
	int solve();//��⺯��
	void readProjectElement(QXmlStreamReader &reader);//��ȡproject�ڵ�
	void readDomainElement(QXmlStreamReader &reader, int i);//��ȡDomain�ڵ�
	void readBHElement(QXmlStreamReader &reader,int i);//��ȡBH�ڵ�
	int StaticAxisymmetricNR();//ʹ��NR��̬��Գƴų��ļ��㺯��
};

