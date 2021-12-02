#include "Header.h"

void Shape::getLenghtofSides() 
{
	int x = inputInt();
	sideLength = x;
}

Circle::Circle() 
{
	sides = 1;
	cout << "������� ����� ������� ����������" << endl;
	getLenghtofSides();
}

Square::Square() 
{
	sides = 4;
	cout << "������� ����� ������� ��������" << endl;
	getLenghtofSides();
}

Triangle::Triangle() 
{
	sides = 3;
	cout << "������� ����� ������� ������������" << endl;
	getLenghtofSides();
}

int inputInt() 
{
	cout << "������� ����� int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		cout << "������� ����� �����" << endl;
	}
	return num;
}

void intersect(const Shape& obj1, const Shape& obj2) 
{
	if (obj1.sides == 1 && obj2.sides == 3) {
		if (obj1.sideLength<obj2.sideLength / sqrt(3) && obj1.sideLength>obj2.sideLength / (2 * sqrt(3))) {
			cout << "����������� ������������ � �����������" << endl;
		}
		else {
			cout << "����������� �� ������������ � �����������" << endl;
		}
	}
	else {
		if (obj1.sides == 1 && obj2.sides == 4) {
			if (obj1.sideLength > obj2.sideLength / 2 && obj1.sideLength < (sqrt(2)*obj2.sideLength) / 2) {
				cout << "������� ������������ � �����������" << endl;
			}
			else {
				cout << "������� �� ������������ � �����������" << endl;
			}
		}
		else {
			if (obj1.sides == 3 && obj2.sides == 4) 
			{
				if ((obj1.sideLength * sqrt(3)) / 2 > obj2.sideLength * sqrt(2) && obj2.sideLength > ((2 * obj1.sideLength / sqrt(3)) + obj1.sideLength))
					cout << "������� ������������ � �������������" << endl;
				else
					cout << "������� �� ����������� � �������������" << endl;
			}
		}
	}
	
}

void inputFile(const Shape& obj1, const Shape& obj2, const Shape& obj3) 
{
	ofstream fout("lab2.txt");
	fout << "����� ������� ������������" << endl;
	fout << obj1.sideLength << endl;
	fout << "����� ������� ��������" << endl;
	fout << obj2.sideLength << endl;
	fout << "����� ������� ����������" << endl;
	fout << obj3.sideLength << endl;
	cout << "������ � ������� �������� � ����" << endl;
	system("pause");
	fout.close();
}