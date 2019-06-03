#pragma once
#include <cmath>
#include <utility>
# define M_PI           3.14159265358979323846  /* ����� PI */

class cls_Point
{
	double m_X;
	double m_Y;
public:
	cls_Point();
	cls_Point(double p_X, double p_Y);
	const double getX(); //�������� ���������� X
	const double getY(); //�������� ���������� Y
	void moveX(double& p_X); //����������� ���������� X
	void moveY(double& p_Y); //����������� ���������� Y
	const double distanceFromTheOrigin(); //���������� �� ������
	const double distanceBetweenPoints(const cls_Point& p_Point); //���������� �� �������� �����
	const std::pair<double,double> transformToPolar(); //������� � �������� ������� ���������
	const bool compare(const cls_Point& p_Point);    //�������� � �������� ������
	const bool operator==(const cls_Point& p_Point); //�������� � �������� ������
	~cls_Point();
};

