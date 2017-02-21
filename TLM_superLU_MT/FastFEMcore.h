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

	double  Precision;
	double  Relax;
	int		LengthUnits;
	CMaterial* materialList;

	Plot * thePlot;
	CFastFEMcore();
	~CFastFEMcore();	
	// load mesh
	int LoadMeshCOMSOL(char*fn);
	bool StaticAxisymmetricTLM();
	double CalcForce();
	int openProject(QString proFile);
	int preCalculation();
	int solve();
	void readProjectElement(QXmlStreamReader &reader);
	void readDomainElement(QXmlStreamReader &reader, int i);
	void readBHElement(QXmlStreamReader &reader,int i);
	int staticAxisymmetricNR();
};

