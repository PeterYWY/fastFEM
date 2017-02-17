#pragma once
#include "datatype.h"
#include "plot.h"

class CFastFEMcore
{
public:
	int num_pts;//�ڵ���Ŀ
	int num_ele;//��Ԫ��Ŀ
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
	int LoadMesh();
	double HB(double B);
	bool StaticAxisymmetric();
	double CalcForce();
	int openProject();
	int preCalculation();
	int solve();
};

