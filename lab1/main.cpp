// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//header ||| prototypеs dll const
// cpp |||| main
// cpp2 |||| realization
#include "Matrix.h"

int main()
{ 
	Matrix matrix(5,5);
	SetConsoleOutputCP(1251);
	cout << "Введите размеры матрицы" << endl;
	cout << "При вводе (0,0) будет использоваться конструктор по умолчанию" << endl;
	int x, y;
	x = abs(inputInt());
	y = abs(inputInt());
	if (x == 0 && y == 0) {
		//matrix = new Matrix();
	}
	else {
		//matrix = new Matrix(x, y);
	}
	while (true) {
		cout << "Выберите пункт" << endl;
		switch (menu()){
		case 1:
			matrix.Print();
			break;
		case 2:
			matrix.MaxNumber();
			break;
		case 3:
			matrix.MinNumber();
			break;
		case 4:
			
			break;
		case 5:
			return 0;
		default:
			cout << "Ошибка ввода" << endl;
			break;
		}
	}
}