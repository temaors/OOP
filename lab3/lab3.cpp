#include "Array.h"

int main() {
	/*SetConsoleOutputCP(1251);
	SetConsoleCP(1251);*/
	setlocale(LC_ALL, "");
	while (true) {
		bool cycle = true;
		Array array1;
		cout << "¬ведите размеры второй матрицы" << endl;
		int x = inputInt();
		int y = inputInt();
		int **resultMatrix = new int*[x];
		for (int i = 0; i < x; i++)
		{
			resultMatrix[i] = new int[y];
		}
		Array array2(x, y);
		while (cycle) {
			switch (menu())
			{
			case 1:
				print(array1);
				cout << "+" << endl;
				print(array2);
				cout << "=" << endl;
				resultMatrix = array1 + array2;
				printResult(resultMatrix, x);
				system("pause");
				system("cls");
				break;
			case 2:
				print(array1);
				cout << "*" << endl;
				print(array2);
				cout << "=" << endl;
				resultMatrix = array1 & array2;
				printResult(resultMatrix, x);
				system("pause");
				system("cls");
				break;
			case 3:
				cycle = false;
				for (int i = 0; i < x; i++)
				{
					delete[] resultMatrix[i];
				}
				delete[] resultMatrix;
				break;
			case 4:
				for (int i = 0; i < x; i++)
				{
					delete[] resultMatrix[i];
				}
				delete[] resultMatrix;
				return 0;
			default:
				cout << "ќшибка" << endl;
				break;
			}
		}
	}
}