#pragma once
#include "cls_Point.h"
#include <iostream>

class cls_Triangle
{
	cls_Point m_A;    //Вершина A
	cls_Point m_B;    //Вершина B
	cls_Point m_C;    //Вершина C
	double m_AB;      //Сторона AB
	double m_BC;      //Сторона BC
	double m_AC;      //Сторона AC
	double m_AngleA;  //Угол A
	double m_AngleB;  //Угол B
	double m_AngleC;  //Угол C
	static void incCount() { ++m_count; } // Увеличение количества созданных объектов на 1
public:
	static int m_count; // Количество созданных объектов
	cls_Triangle(cls_Point p_A, cls_Point p_B, cls_Point p_C);
	const double getAB();        //Получить сторону AB
	const double getBC();        //Получить сторону BC
	const double getAC();        //Получить сторону AC
	const double getAngleA();    //Получить угол A
	const double getAngleB();    //Получить угол B
	const double getAngleC();    //Получить угол C
	void moveA(double& p_X, double& p_Y);     //Переместить вершину A
	void moveB(double& p_X, double& p_Y);     //Переместить вершину A
	void moveC(double& p_X, double& p_Y);     //Переместить вершину A
	const double perimeter();   //Периметр
	const double square();      //Площадь
	const double heightFromA(); //Высота из точки A
	const double heightFromB(); //Высота из точки B
	const double heightFromC(); //Высота из точки C

	const bool equilateral(); //Равносторонний
	const bool isosceles();   //Равнобедренный
	const bool rectangular(); //Прямоугольный
	~cls_Triangle();
};

