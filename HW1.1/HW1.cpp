#include "cls_Triangle.h"
#include <iostream>
#include <clocale>

const int NotUsed = system("color F0");

void menu()
{
	std::cout << "1.Сторона AB" << std::endl;
	std::cout << "2.Сторона BC" << std::endl;
	std::cout << "3.Сторона AC" << std::endl;
	std::cout << "4.Угол A" << std::endl;
	std::cout << "5.Угол B" << std::endl;
	std::cout << "6.Угол C" << std::endl;
	std::cout << "7.Периметр" << std::endl;
	std::cout << "8.Площадь" << std::endl;
	std::cout << "9.Высота, опущенная на BC" << std::endl;
	std::cout << "10.Высота, опущенная на AC" << std::endl;
	std::cout << "11.Высота, опущенная на AB" << std::endl;
	std::cout << "12.Равносторонний ли треугольник?" << std::endl;
	std::cout << "13.Равнобедренный ли треугольник?" << std::endl;
	std::cout << "14.Прямоугольный ли треугольник?" << std::endl;
	std::cout << "15.Переместить точку A" << std::endl;
	std::cout << "16.Переместить точку B" << std::endl;
	std::cout << "17.Переместить точку C" << std::endl;
	std::cout << "0.Выход" << std::endl;
}
int main()
{
	setlocale(0, "RUSSIAN");
	int choose = 1;
	double x_A, y_A, x_B, y_B, x_C, y_C;
	std::cout << "Введите координаты точки A(x,y)";
	std::cout << std::endl << "Ax = ";
	std::cin >> x_A;
	std::cout << "Ay = ";
	std::cin >> y_A;
	std::cout << "Введите координаты точки B(x,y)";
	std::cout << std::endl << "Bx = ";
	std::cin >> x_B;
	std::cout << "By = ";
	std::cin >> y_B;
	std::cout << "Введите координаты точки C(x,y)";
	std::cout << std::endl << "Cx = ";
	std::cin >> x_C;
	std::cout << "Cy = ";
	std::cin >> y_C;
	cls_Triangle ABC(cls_Point(x_A, y_A), cls_Point(x_B, y_B), cls_Point(x_C, y_C));
	while (choose != 0)
	{
		system("cls");
		menu();
		std::cout << "Выберите пункт меню " << std::endl;
		std::cin >> choose;
		switch (choose)
		{
		case(1):
			system("cls");
			std::cout << "AB = " << ABC.getAB() << std::endl;
			system("pause");
			break;
		case(2):
			system("cls");
			std::cout << "BC = " << ABC.getBC() << std::endl;
			system("pause");
			break;
		case(3):
			system("cls");
			std::cout << "AC = " << ABC.getAC() << std::endl;
			system("pause");
			break;
		case(4):
			system("cls");
			std::cout << "Угол A = " << ABC.getAngleA() << " радиан" << std::endl;
			std::cout << "Угол A = " << ABC.getAngleA() * 180/M_PI << " градусов" << std::endl;
			system("pause");
			break;
		case(5):
			system("cls");
			std::cout << "Угол B = " << ABC.getAngleB() << " радиан" << std::endl;
			std::cout << "Угол B = " << ABC.getAngleB() * 180 / M_PI << " градусов" << std::endl;
			system("pause");
			break;
		case(6):
			system("cls");
			std::cout << "Угол C = " << ABC.getAngleC() << " радиан" << std::endl;
			std::cout << "Угол C = " << ABC.getAngleC() * 180 / M_PI << " градусов" << std::endl;
			system("pause");
			break;
		case(7):
			system("cls");
			std::cout << "Периметр ABC = " << ABC.perimeter() << std::endl;
			system("pause");
			break;
		case(8):
			system("cls");
			std::cout << "Площадь ABC = " << ABC.square() << std::endl;
			system("pause");
			break;
		case(9):
			system("cls");
			std::cout << "Высота, опущенная на BC = " << ABC.heightFromA() << std::endl;
			system("pause");
			break;
		case(10):
			system("cls");
			std::cout << "Высота, опущенная на AB = " << ABC.heightFromB() << std::endl;
			system("pause");
			break;
		case(11):
			system("cls");
			std::cout << "Высота, опущенная на AC = " << ABC.heightFromC() << std::endl;
			system("pause");
			break;
		case(12):
			system("cls");
			if(ABC.equilateral())
				std::cout << "ABC - равносторонний" << std::endl;
			else
				std::cout << "ABC - не равносторонний" << std::endl;
			system("pause");
			break;
		case(13):
			system("cls");
			if (ABC.isosceles())
				std::cout << "ABC - равнобедренный" << std::endl;
			else
				std::cout << "ABC - не равнобедренный" << std::endl;
			system("pause");
			break;
		case(14):
			system("cls");
			if (ABC.rectangular())
				std::cout << "ABC - прямоугольный" << std::endl;
			else
				std::cout << "ABC - не прямоугольный" << std::endl;
			system("pause");
			break;
		case(15):
			system("cls");
			std::cout << "Введите координаты точки A(x,y)";
			std::cout << std::endl << "Ax = ";
			std::cin >> x_A;
			std::cout << "Ay = ";
			std::cin >> y_A;
			ABC.moveA(x_A, y_A);
			system("pause");
			break;
		case(16):
			system("cls");
			std::cout << "Введите координаты точки B(x,y)";
			std::cout << std::endl << "Bx = ";
			std::cin >> x_B;
			std::cout << "By = ";
			std::cin >> y_B;
			ABC.moveB(x_B, y_B);
			system("pause");
			break;
		case(17):
			system("cls");
			std::cout << "Введите координаты точки C(x,y)";
			std::cout << std::endl << "Cx = ";
			std::cin >> x_C;
			std::cout << "Cy = ";
			std::cin >> y_C;
			ABC.moveC(x_C, y_C);
			system("pause");
			break;
		default:
			break;
		}
	}
	return 0;
}