#include "Header.h"

void Shape::getLenghtofSides() 
{
	int x = inputInt();
	sideLength = x;
}

Circle::Circle() 
{
	sides = 1;
	cout << "Введите длину радиуса окружности" << endl;
	getLenghtofSides();
}

Square::Square() 
{
	sides = 4;
	cout << "Введите длину стороны квадрата" << endl;
	getLenghtofSides();
}

Triangle::Triangle() 
{
	sides = 3;
	cout << "Введите длину стороны треугольника" << endl;
	getLenghtofSides();
}

int inputInt() 
{
	cout << "Введите число int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		cout << "Введите ЦЕЛОЕ число" << endl;
	}
	return num;
}

void intersect(const Shape& obj1, const Shape& obj2) 
{
	if (obj1.sides == 1 && obj2.sides == 3) {
		if (obj1.sideLength<obj2.sideLength / sqrt(3) && obj1.sideLength>obj2.sideLength / (2 * sqrt(3))) {
			cout << "Треугольник пересекается с окружностью" << endl;
		}
		else {
			cout << "Треугольник не пересекается с окружностью" << endl;
		}
	}
	else {
		if (obj1.sides == 1 && obj2.sides == 4) {
			if (obj1.sideLength > obj2.sideLength / 2 && obj1.sideLength < (sqrt(2)*obj2.sideLength) / 2) {
				cout << "Квадрат пересекается с окружностью" << endl;
			}
			else {
				cout << "Квадрат не пересекается с окружностью" << endl;
			}
		}
		else {
			if (obj1.sides == 3 && obj2.sides == 4) 
			{
				if ((obj1.sideLength * sqrt(3)) / 2 > obj2.sideLength * sqrt(2) && obj2.sideLength > ((2 * obj1.sideLength / sqrt(3)) + obj1.sideLength))
					cout << "Квадрат пересекается с треугольником" << endl;
				else
					cout << "Квадрат не пересекатся с треугольником" << endl;
			}
		}
	}
	
}

void inputFile(const Shape& obj1, const Shape& obj2, const Shape& obj3) 
{
	ofstream fout("lab2.txt");
	fout << "Длина стороны треугольника" << endl;
	fout << obj1.sideLength << endl;
	fout << "Длина стороны квадрата" << endl;
	fout << obj2.sideLength << endl;
	fout << "Длина радиуса окружности" << endl;
	fout << obj3.sideLength << endl;
	cout << "Данные о фигурах записаны в файл" << endl;
	system("pause");
	fout.close();
}