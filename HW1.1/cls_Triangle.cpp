#include "cls_Triangle.h"



cls_Triangle::cls_Triangle(cls_Point p_A, cls_Point p_B, cls_Point p_C) : m_A(p_A), m_B(p_B), m_C(p_C)
{
	m_AB = m_A.distanceBetweenPoints(m_B);
	m_BC = m_B.distanceBetweenPoints(m_C);
	m_AC = m_A.distanceBetweenPoints(m_C);
	double cosAngleA = ((m_C.getX() - m_A.getX()) * (m_B.getX() - m_A.getX()) + (m_C.getY() - m_A.getY()) * (m_B.getY() - m_A.getY())) / (m_AC * m_AB);
	m_AngleA = acos(cosAngleA);
	double cosAngleB = ((m_A.getX() - m_B.getX()) * (m_C.getX() - m_B.getX()) + (m_A.getY() - m_B.getY()) * (m_C.getY() - m_B.getY())) / (m_AB * m_BC);
	m_AngleB = acos(cosAngleB);
	double cosAngleC = ((m_A.getX() - m_C.getX()) * (m_B.getX() - m_C.getX()) + (m_A.getY() - m_C.getY()) * (m_B.getY() - m_C.getY())) / (m_AC * m_BC);
	m_AngleC = acos(cosAngleC);
}

const double cls_Triangle::getAB()
{
	return m_AB;
}

const double cls_Triangle::getBC()
{
	return m_BC;
}

const double cls_Triangle::getAC()
{
	return m_AC;
}

const double cls_Triangle::getAngleA()
{
	return m_AngleA;
}

const double cls_Triangle::getAngleB()
{
	return m_AngleB;
}

const double cls_Triangle::getAngleC()
{
	return m_AngleC;
}

void cls_Triangle::moveA(double& p_X, double& p_Y)
{
	m_A.moveX(p_X);
	m_A.moveY(p_Y);
	m_AB = m_A.distanceBetweenPoints(m_B);
	m_AC = m_A.distanceBetweenPoints(m_C);
	double cosAngleA = ((m_C.getX() - m_A.getX()) * (m_B.getX() - m_A.getX()) + (m_C.getY() - m_A.getY()) * (m_B.getY() - m_A.getY())) / (m_AC * m_AB);
	m_AngleA = acos(cosAngleA);
	double cosAngleB = ((m_A.getX() - m_B.getX()) * (m_C.getX() - m_B.getX()) + (m_A.getY() - m_B.getY()) * (m_C.getY() - m_B.getY())) / (m_AB * m_BC);
	m_AngleB = acos(cosAngleB);
	double cosAngleC = ((m_A.getX() - m_C.getX()) * (m_B.getX() - m_C.getX()) + (m_A.getY() - m_C.getY()) * (m_B.getY() - m_C.getY())) / (m_AC * m_BC);
	m_AngleC = acos(cosAngleC);
}

void cls_Triangle::moveB(double& p_X, double& p_Y)
{
	m_B.moveX(p_X);
	m_B.moveY(p_Y);
	m_AB = m_A.distanceBetweenPoints(m_B);
	m_BC = m_B.distanceBetweenPoints(m_C);
	double cosAngleA = ((m_C.getX() - m_A.getX()) * (m_B.getX() - m_A.getX()) + (m_C.getY() - m_A.getY()) * (m_B.getY() - m_A.getY())) / (m_AC * m_AB);
	m_AngleA = acos(cosAngleA);
	double cosAngleB = ((m_A.getX() - m_B.getX()) * (m_C.getX() - m_B.getX()) + (m_A.getY() - m_B.getY()) * (m_C.getY() - m_B.getY())) / (m_AB * m_BC);
	m_AngleB = acos(cosAngleB);
	double cosAngleC = ((m_A.getX() - m_C.getX()) * (m_B.getX() - m_C.getX()) + (m_A.getY() - m_C.getY()) * (m_B.getY() - m_C.getY())) / (m_AC * m_BC);
	m_AngleC = acos(cosAngleC);
}

void cls_Triangle::moveC(double& p_X, double& p_Y)
{
	m_C.moveX(p_X);
	m_C.moveY(p_Y);
	m_BC = m_B.distanceBetweenPoints(m_C);
	m_AC = m_A.distanceBetweenPoints(m_C);
	double cosAngleA = ((m_C.getX() - m_A.getX()) * (m_B.getX() - m_A.getX()) + (m_C.getY() - m_A.getY()) * (m_B.getY() - m_A.getY())) / (m_AC * m_AB);
	m_AngleA = acos(cosAngleA);
	double cosAngleB = ((m_A.getX() - m_B.getX()) * (m_C.getX() - m_B.getX()) + (m_A.getY() - m_B.getY()) * (m_C.getY() - m_B.getY())) / (m_AB * m_BC);
	m_AngleB = acos(cosAngleB);
	double cosAngleC = ((m_A.getX() - m_C.getX()) * (m_B.getX() - m_C.getX()) + (m_A.getY() - m_C.getY()) * (m_B.getY() - m_C.getY())) / (m_AC * m_BC);
	m_AngleC = acos(cosAngleC);
}

const double cls_Triangle::perimeter()
{
	return m_AB + m_BC + m_AC;
}

const double cls_Triangle::square()
{
	return 0.5 * m_AB * m_AC * sin(m_AngleA);
}

const double cls_Triangle::heightFromA()
{
	return 2 * square() / m_BC;
}

const double cls_Triangle::heightFromB()
{
	return 2 * square() / m_AC;
}

const double cls_Triangle::heightFromC()
{
	return 2 * square() / m_AB;
}

const bool cls_Triangle::equilateral()
{
	return ((m_AB == m_BC) && (m_AB == m_AC) && (m_BC == m_AC));
}

const bool cls_Triangle::isosceles()
{
	return ((m_AB == m_BC) || (m_AB == m_AC) || (m_BC == m_AC));
}

const bool cls_Triangle::rectangular()
{
	return ((m_AngleA == M_PI / 2) || (m_AngleB == M_PI / 2) || (m_AngleC == M_PI / 2));
}

cls_Triangle::~cls_Triangle()
{
}
