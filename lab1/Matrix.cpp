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

float inputFloat() {
	cout << "Введите число float" << endl;
	float num;
	while (!scanf_s("%f", &num)) {
		system("cls");
		cout << "Введите ЧИСЛО" << endl;
	}
	return num;
}

Matrix::Matrix() {
	x = 4;
	y = 4;
	CreateMatrix(x, y);
}

Matrix::Matrix(int x, int y) {
	this->x = x;
	this->y = y;
	system("cls");
	newMatrix();
}

void Matrix::newMatrix() {
	cout << "Создать матрицу с с дробными или целыми числами(1-FLOAT||2-INT)" << endl;
	int c1=-1;
	while (c1 != 1 && c1 != 2) {
		c1 = inputInt();
	}
	if (c1 == 1) {
		system("cls");
		cout << "Создать матрицу с рандомными числами?(1-ДА||2-НЕТ)" << endl;
		int ch1 = 0;
		while (ch1 != 1 && ch1 != 2) {
			ch1 = inputInt();
		}
		if (ch1 == 1) {
			CreateFloatMatrix(x, y);
		}
		else {
			CreateFloatMatrixManually(x, y);
		}
	}
	else {
		cout << "Создать матрицу с рандомными числами?(1-ДА||2-НЕТ)" << endl;
		int choice = 0;
		while (choice != 1 && choice != 2) {
			choice = inputInt();
		}
		if (choice == 1) {
			CreateMatrix(x, y);
		}
		else {
			CreateMatrixManually(x, y);
		}
	}
}

Matrix::~Matrix() {
	delete[] matrix;
}

//Matrix::Matrix(const Matrix& obj) {

//}

void Matrix::CreateMatrix(int x, int y) {
	srand(2);
	matrix = new int* [x];
	for (int i = 0; i < x; i++) {
		matrix[i] = new int[i + 1];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			matrix[i][j] = rand()%100-1;
		}
	}
}

void Matrix::CreateFloatMatrix(int x, int y) {
	floatMatrix = new float* [x];
	for (int i = 0; i < x; i++) {
		floatMatrix[i] = new float[i + 1];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			floatMatrix[i][j] = randFloatNumber();
		}
	}
}

float randFloatNumber() {
	srand(2);
	float num;
	int maxNum = 100;
	for (int i = 0; i < 50; i++)
	{
		num = static_cast <float>(rand()) / (static_cast <float>(RAND_MAX / maxNum));
		cout << setprecision(10) << num << endl;
	}
	return num;
}

void Matrix::CreateMatrixManually(int x, int y) {
	matrix = new int* [x];
	for (int i = 0; i < x; i++) {
		matrix[i] = new int[i + 1];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			matrix[i][j] = inputInt();
		}
	}
}

void Matrix::CreateFloatMatrixManually(int x, int y) {
	floatMatrix = new float* [x];
	for (int i = 0; i < x; i++) {
		floatMatrix[i] = new float[i + 1];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			floatMatrix[i][j] = inputFloat();
		}
	}
}


void Matrix::Print() {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << this->matrix[i][j] << " ";
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
	cout << "2)Вывод максимального числа выше главной диагонали" << endl;
	cout << "3)Вывод миниимального числа ниже главной диагонали" << endl;
	cout << "4)Ввод данных в файл" << endl;
	cout << "5)Выход из программы" << endl;
	return inputInt();
}

void FileInput(int** matrix) {
	ofstream fout("test1.txt");
	fout << "Работа с файлами в С++";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			fout << "Hello" << endl;
		}
	}
	fout.close();
	system("pause");
}