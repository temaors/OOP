#include "Matrix.h"

int inputInt() {
	cout << "Введите число int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		cout << "Введите ЦЕЛОЕ число" << endl;
	}
	return num;
}


Matrix::Matrix() {
	x = 4;
	y = 4;
	CreateMatrix();
}

Matrix::Matrix(int x, int y) {
	this->x = x;
	this->y = y;
	system("cls");
	newMatrix();
}

void Matrix::newMatrix() {
		cout << "Создать матрицу с рандомными числами?(1-ДА||2-НЕТ)" << endl;
		int choice = 0;
		while (choice != 1 && choice != 2) {
			choice = inputInt();
		}
		if (choice == 1) {
			CreateMatrix();
		}
		else {
			CreateMatrixManually();
		}
}

Matrix::~Matrix() {
	for (int i = 0; i < x; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

Matrix::Matrix(const Matrix& obj) {
	x = obj.x;
	y = obj.y;
	matrix = new int* [obj.x];
	for (int i = 0; i < obj.x; i++)
	{
		matrix[i] = new int[obj.y];
	}
	matrix = obj.matrix;
}

void Matrix::CreateMatrix() {
	srand(time(0));
	matrix = new int* [x];
	for (int i = 0; i < x; i++) {
		matrix[i] = new int[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			matrix[i][j] = rand()%100-1;
		}
	}
}

void Matrix::CreateMatrixManually() {
	matrix = new int* [x];
	for (int i = 0; i < x; i++) {
		matrix[i] = new int[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			matrix[i][j] = inputInt();
		}
	}
}

void Matrix::Print() {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Matrix::MinNumber() {
	int minNum = INT_MAX;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (i < j) {
				if (matrix[i][j] < minNum) {
					minNum = matrix[i][j];
				}
			}
		}
	}
	//system("cls");
	cout << "Минимальное число " << minNum << endl;
}

void Matrix::MaxNumber() {
	int maxNum = INT_MIN;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (i > j) {
				if (matrix[i][j] > maxNum) {
					maxNum = matrix[i][j];
				}
			}
		}
	}
	//system("cls");
	cout << "Максимальное число " << maxNum << endl;
}


int menu() {
	cout << "1)Вывод матрицы" << endl;
	cout << "2)Вывод максимального числа ниже главной диагонали" << endl;
	cout << "3)Вывод миниимального числа выше главной диагонали" << endl;
	cout << "4)Ввод данных в файл" << endl;
	cout << "5)Выход из программы" << endl;
	return inputInt();
}

void FileInput(const Matrix &ob) {
	ofstream fout("test1.txt");
	for (int i = 0; i < ob.x; i++)
	{
		for (int j = 0; j < ob.y; j++)
		{
			fout << " " << ob.matrix[i][j];
		}
		fout << endl;
	}
	fout.close();
	system("pause");
}