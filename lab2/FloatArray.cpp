#include "Array.h"

FloatArray::FloatArray(int x, int y) {
	this->x = x;
	this->y = y;
	system("cls");
	newFloatArray();
}

FloatArray::~FloatArray() {
	for (int i = 0; i < x; i++)
	{
		delete[] floatArr[i];
	}
	delete[] floatArr;
}

void FloatArray::CreateFloatArray()
{
	floatArr = new float* [x];
	for (int i = 0; i < x; i++) {
		floatArr[i] = new float[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			floatArr[i][j] = randFloatNumber();
		}
	}
}

void FloatArray::CreateFloatArrayManually()
{
	floatArr = new float* [x];
	for (int i = 0; i < x; i++) {
		floatArr[i] = new float[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			floatArr[i][j] = inputFloat();
		}
	}
}

void FloatArray::newFloatArray()
{
	cout << "Создать массив с рандомными числами?(1-ДА||2-НЕТ)" << endl;
	int choice = 0;
	while (choice != 1 && choice != 2) {
		choice = inputInt();
	}
	if (choice == 1) {
		CreateFloatArray();
	}
	else {
		CreateFloatArrayManually();
	}
}

void FloatArray::minElement()
{
	float min = FLT_MAX;
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (floatArr[i][j] < min) {
				min = floatArr[i][j];
				sum = i + j;
			}
		}
	}
	cout << "Сумма номеров минимального элемента матрицы равна:" << sum << endl;
}

void FloatArray::maxElement() {
	float max = FLT_MIN;
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (floatArr[i][j] > max) {
				max = floatArr[i][j];
				sum = i + j;
			}
		}
	}
	cout << "Сумма номеров максимального элемента матрицы равна:" << sum << endl;
}

void FloatArray::printMatrix() {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << space << floatArr[i][j];
		}
		cout << endl;
	}
}

float randFloatNumber() {
	float num;
	float a = 100;
	num = (float)(rand() % 100+1) / (float)(rand() % 100+1);
	return num;
}

float inputFloat() {
	cout << "Введите число float" << endl;
	float num;
	while (!scanf_s("%f", &num))
	{
		system("cls");
		cout << "Введите ЧИСЛО" << endl;
	}
	return num;
}

int floatmenu()
{
	system("pause");
	system("cls");
	cout << "1)Вывод массива в консоль" << endl;
	cout << "2)Сумма номеров минимального элемента массива" << endl;
	cout << "3)Сумма номеров максимального элемента массива" << endl;
	cout << "4)Содание новой матрицы" << endl;
	cout << "5)Выход из программы" << endl;
	int choice;
	return choice = inputInt();
}