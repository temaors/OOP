#include "Matrix.h"

int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите размеры матрицы" << endl;
	cout << "При вводе (0,0) будет использоваться конструктор без параметров" << endl;
	int x, y;
	x = abs(inputInt());
	y = abs(inputInt());
	if (x == 0 && y == 0) {
		Matrix matrix; 
		while (true) {
			cout << "Выберите пункт" << endl;
			switch (menu()) {
			case 1:
				matrix.Print();
				break;
			case 2:
				matrix.MaxNumber();
				break;
			case 3:
				matrix.MinNumber();
				break;
			case 4: {
				Matrix copyMatrix(matrix);
				FileInput(copyMatrix);
				break; }
			case 5:
				cout << "Hello" << endl;
				break;
			case 6:
				return 0;
			default:
				cout << "Ошибка ввода" << endl;
				break;
			}
		}
	}
	else {
		Matrix matrix(x, y);
		while (true) {
			cout << "Выберите пункт" << endl;
			switch (menu()) {
			case 1:
				matrix.Print();
				break;
			case 2:
				matrix.MaxNumber();
				break;
			case 3:
				matrix.MinNumber();
				break;
			case 4: {
				Matrix copyMatrix(matrix);
				FileInput(copyMatrix);
				break; }
			case 5:
				cout << "Hello" << endl;
				break;
			case 6:
				return 0;
			default:
				cout << "Ошибка ввода" << endl;
				break;
			}
		}
	}
}