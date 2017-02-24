#pragma once

class CNode
{
public:

	double x, y;//the co
	double A;//the solution
	double bdr;//boundary type 0:constant;
	double I;//current source
	double pm;
private:

};
class CElement
{
public:

	int n[3];// ni, nj, nk;//
	double P[3];// Pi, Pj, Pk;
	double Q[3];// Qi, Qj, Qk;
	double AREA;//��Ԫ���������
	double Bx,By,B;//��Ԫ�ĴŸ�Ӧǿ��B����ˮƽ����ֱ�����ϵķ���
	double miu,miut;//���ڷ����Ե�Ԫ������ʱ��miu�ͳ�ʼʱ��miu��
	int domain;//�ӹ����ļ����ȡһ�������б����ǵ�ǰ��Ԫ�ı�ţ�
    double rc,zc;
	bool LinearFlag;//�����߼�����LinearFlag�������жϾ��嵥Ԫ�Ƿ�����������

private:
};
class CMaterial{
public:
	double miu;		// permeabilities, relative
	int BHpoints;
	double   *Bdata;
	double *Hdata;
	//double *slope;
	double H_c;				// magnetization, A/m
	double Theta_m;			// orientation of magnetization, degrees
	double Jr;			// applied current density, MA/m^2
	
	CMaterial();
	~CMaterial();
	double getMiu(double B);
	double getdvdB(double B);//��Դ����ʶ�B��ƫ΢��
};
class CBlock{
public:
	int BlockNum;
	
};
class ResistMarix{
public:
	double Y11;
	double Y12;
	double Y13;
	double Y22;
	double Y23;
	double Y33;
};

class Voltage{
public:
	double V12, V13, V23;
};
