#pragma once
#include <cmath>
#include <utility>
# define M_PI           3.14159265358979323846  /* Число PI */

class cls_Point
{
	double m_X;
	double m_Y;
public:
	cls_Point();
	cls_Point(double p_X, double p_Y);
	const double getX(); //Получить координату X
	const double getY(); //Получить координату Y
	void moveX(double& p_X); //Переместить координату X
	void moveY(double& p_Y); //Переместить координату Y
	const double distanceFromTheOrigin(); //Расстояние до центра
	const double distanceBetweenPoints(const cls_Point& p_Point); //Расстояние до заданной точки
	const std::pair<double,double> transformToPolar(); //Перевод в полярную систему координат
	const bool compare(const cls_Point& p_Point);    //Сравнить с заданной точкой
	const bool operator==(const cls_Point& p_Point); //Сравнить с заданной точкой
	~cls_Point();
};

