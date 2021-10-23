#include "Array.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	while (true) {
		bool cycle = true;
		Array array1;
		cout << "¬ведите размеры второй матрицы" << endl;
		int x = inputInt();
		int y = inputInt();
		Array array2(x, y);
		while (cycle) {
			switch (menu())
			{
			case 1:
				print(array1);
				cout << "+" << endl;
				print(array2);
				cout << "=" << endl;
				array1 + array2;
				system("pause");
				system("cls");
				break;
			case 2:
				print(array1);
				cout << "*" << endl;
				print(array2);
				cout << "=" << endl;
				array1 & array2;
				system("pause");
				system("cls");
				break;
			case 3:
				cycle = false;
				break;
			case 5:
				return 0;
			default:
				cout << "ќшибка" << endl;
				break;
			}
		}
	}
}