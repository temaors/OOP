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
	cout << "������� ������ � ���������� �������?(1-��||2-���)" << endl;
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
	cout << "����� ������� ������������ �������� ������� �����:" << sum << endl;
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
	cout << "����� ������� ������������� �������� ������� �����:" << sum << endl;
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
	cout << "������� ����� float" << endl;
	float num;
	while (!scanf_s("%f", &num))
	{
		system("cls");
		cout << "������� �����" << endl;
	}
	return num;
}

int floatmenu()
{
	system("pause");
	system("cls");
	cout << "1)����� ������� � �������" << endl;
	cout << "2)����� ������� ������������ �������� �������" << endl;
	cout << "3)����� ������� ������������� �������� �������" << endl;
	cout << "4)������� ����� �������" << endl;
	cout << "5)����� �� ���������" << endl;
	int choice;
	return choice = inputInt();
}