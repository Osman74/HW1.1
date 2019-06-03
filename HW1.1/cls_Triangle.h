#pragma once
#include "cls_Point.h"
#include <iostream>

class cls_Triangle
{
	cls_Point m_A;    //������� A
	cls_Point m_B;    //������� B
	cls_Point m_C;    //������� C
	double m_AB;      //������� AB
	double m_BC;      //������� BC
	double m_AC;      //������� AC
	double m_AngleA;  //���� A
	double m_AngleB;  //���� B
	double m_AngleC;  //���� C
	static void incCount() { ++m_count; } // ���������� ���������� ��������� �������� �� 1
public:
	static int m_count; // ���������� ��������� ��������
	cls_Triangle(cls_Point p_A, cls_Point p_B, cls_Point p_C);
	const double getAB();        //�������� ������� AB
	const double getBC();        //�������� ������� BC
	const double getAC();        //�������� ������� AC
	const double getAngleA();    //�������� ���� A
	const double getAngleB();    //�������� ���� B
	const double getAngleC();    //�������� ���� C
	void moveA(double& p_X, double& p_Y);     //����������� ������� A
	void moveB(double& p_X, double& p_Y);     //����������� ������� A
	void moveC(double& p_X, double& p_Y);     //����������� ������� A
	const double perimeter();   //��������
	const double square();      //�������
	const double heightFromA(); //������ �� ����� A
	const double heightFromB(); //������ �� ����� B
	const double heightFromC(); //������ �� ����� C

	const bool equilateral(); //��������������
	const bool isosceles();   //��������������
	const bool rectangular(); //�������������
	~cls_Triangle();
};

