#include "cls_Triangle.h"
#include <iostream>
#include <clocale>

const int NotUsed = system("color F0");

void menu()
{
	std::cout << "1.������� AB" << std::endl;
	std::cout << "2.������� BC" << std::endl;
	std::cout << "3.������� AC" << std::endl;
	std::cout << "4.���� A" << std::endl;
	std::cout << "5.���� B" << std::endl;
	std::cout << "6.���� C" << std::endl;
	std::cout << "7.��������" << std::endl;
	std::cout << "8.�������" << std::endl;
	std::cout << "9.������, ��������� �� BC" << std::endl;
	std::cout << "10.������, ��������� �� AC" << std::endl;
	std::cout << "11.������, ��������� �� AB" << std::endl;
	std::cout << "12.�������������� �� �����������?" << std::endl;
	std::cout << "13.�������������� �� �����������?" << std::endl;
	std::cout << "14.������������� �� �����������?" << std::endl;
	std::cout << "15.����������� ����� A" << std::endl;
	std::cout << "16.����������� ����� B" << std::endl;
	std::cout << "17.����������� ����� C" << std::endl;
	std::cout << "0.�����" << std::endl;
}
int main()
{
	setlocale(0, "RUSSIAN");
	int choose = 1;
	double x_A, y_A, x_B, y_B, x_C, y_C;
	std::cout << "������� ���������� ����� A(x,y)";
	std::cout << std::endl << "Ax = ";
	std::cin >> x_A;
	std::cout << "Ay = ";
	std::cin >> y_A;
	std::cout << "������� ���������� ����� B(x,y)";
	std::cout << std::endl << "Bx = ";
	std::cin >> x_B;
	std::cout << "By = ";
	std::cin >> y_B;
	std::cout << "������� ���������� ����� C(x,y)";
	std::cout << std::endl << "Cx = ";
	std::cin >> x_C;
	std::cout << "Cy = ";
	std::cin >> y_C;
	cls_Triangle ABC(cls_Point(x_A, y_A), cls_Point(x_B, y_B), cls_Point(x_C, y_C));
	while (choose != 0)
	{
		system("cls");
		menu();
		std::cout << "�������� ����� ���� " << std::endl;
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
			std::cout << "���� A = " << ABC.getAngleA() << " ������" << std::endl;
			std::cout << "���� A = " << ABC.getAngleA() * 180/M_PI << " ��������" << std::endl;
			system("pause");
			break;
		case(5):
			system("cls");
			std::cout << "���� B = " << ABC.getAngleB() << " ������" << std::endl;
			std::cout << "���� B = " << ABC.getAngleB() * 180 / M_PI << " ��������" << std::endl;
			system("pause");
			break;
		case(6):
			system("cls");
			std::cout << "���� C = " << ABC.getAngleC() << " ������" << std::endl;
			std::cout << "���� C = " << ABC.getAngleC() * 180 / M_PI << " ��������" << std::endl;
			system("pause");
			break;
		case(7):
			system("cls");
			std::cout << "�������� ABC = " << ABC.perimeter() << std::endl;
			system("pause");
			break;
		case(8):
			system("cls");
			std::cout << "������� ABC = " << ABC.square() << std::endl;
			system("pause");
			break;
		case(9):
			system("cls");
			std::cout << "������, ��������� �� BC = " << ABC.heightFromA() << std::endl;
			system("pause");
			break;
		case(10):
			system("cls");
			std::cout << "������, ��������� �� AB = " << ABC.heightFromB() << std::endl;
			system("pause");
			break;
		case(11):
			system("cls");
			std::cout << "������, ��������� �� AC = " << ABC.heightFromC() << std::endl;
			system("pause");
			break;
		case(12):
			system("cls");
			if(ABC.equilateral())
				std::cout << "ABC - ��������������" << std::endl;
			else
				std::cout << "ABC - �� ��������������" << std::endl;
			system("pause");
			break;
		case(13):
			system("cls");
			if (ABC.isosceles())
				std::cout << "ABC - ��������������" << std::endl;
			else
				std::cout << "ABC - �� ��������������" << std::endl;
			system("pause");
			break;
		case(14):
			system("cls");
			if (ABC.rectangular())
				std::cout << "ABC - �������������" << std::endl;
			else
				std::cout << "ABC - �� �������������" << std::endl;
			system("pause");
			break;
		case(15):
			system("cls");
			std::cout << "������� ���������� ����� A(x,y)";
			std::cout << std::endl << "Ax = ";
			std::cin >> x_A;
			std::cout << "Ay = ";
			std::cin >> y_A;
			ABC.moveA(x_A, y_A);
			system("pause");
			break;
		case(16):
			system("cls");
			std::cout << "������� ���������� ����� B(x,y)";
			std::cout << std::endl << "Bx = ";
			std::cin >> x_B;
			std::cout << "By = ";
			std::cin >> y_B;
			ABC.moveB(x_B, y_B);
			system("pause");
			break;
		case(17):
			system("cls");
			std::cout << "������� ���������� ����� C(x,y)";
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