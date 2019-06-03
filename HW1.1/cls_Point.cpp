#include "cls_Point.h"



cls_Point::cls_Point() : m_X(0), m_Y(0) {}

cls_Point::cls_Point(double p_X, double p_Y) : m_X(p_X), m_Y(p_Y) {}

const double cls_Point::getX()
{
	return m_X;
}

const double cls_Point::getY()
{
	return m_Y;
}

void cls_Point::moveX(double& p_X)
{
	m_X = p_X;
}

void cls_Point::moveY(double& p_Y)
{
	m_Y = p_Y;
}

const double cls_Point::distanceFromTheOrigin()
{
	return sqrt(m_X * m_X + m_Y * m_Y);
}

const double cls_Point::distanceBetweenPoints(const cls_Point& p_Point)
{
	return sqrt(pow(m_X- p_Point.m_X, 2) + pow(m_Y - p_Point.m_Y, 2));
}

const std::pair<double, double> cls_Point::transformToPolar()
{
	double r = distanceFromTheOrigin();
	double phi;
	if ((m_X > 0) && (m_Y >= 0))
		phi = atan(m_Y / m_X);
	if ((m_X > 0) && (m_Y < 0))
		phi = atan(m_Y / m_X) + 2*M_PI;
	if (m_X < 0)
		phi = atan(m_Y / m_X) + M_PI;
	if ((m_X == 0) && (m_Y > 0))
		phi = M_PI/2;
	if ((m_X == 0) && (m_Y < 0))
		phi = 3 * M_PI / 2;
	return std::pair<double, double>(r,phi);
}

const bool cls_Point::compare(const cls_Point& p_Point)
{
	return ((m_X == p_Point.m_X) && (m_Y == p_Point.m_Y));
}

//Сравнить с заданной точкой
const bool cls_Point::operator==(const cls_Point& p_Point)
{
	return compare(p_Point);
}

cls_Point::~cls_Point()
{
}
