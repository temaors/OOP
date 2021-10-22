#include "Array.h"

Array::Array(int x, int y)
{
	this->x = x;
	this->y = y;
	system("cls");
	newArray();
}

Array::~Array() {
	for (int i = 0; i < x; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

ostream& space(ostream& stream)
{
	cout << setprecision(5) << setw(10);
	return stream;
}

int inputInt() {
	cout << "������� ����� int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		rewind(stdin);
		system("cls");
		cout << "������� ����� �����" << endl;
	}
	return num;
}

void Array::CreateArray()
{
	srand(time(0));
	arr = new int* [x];
	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = rand() % 100 + 1;
		}
	}
}

void Array::CreateArrayManually()
{
	arr = new int* [x];
	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j]=inputInt();
		}
	}
}

void Array::newArray() 
{
		cout << "������� ������ � ���������� �������?(1-��||2-���)" << endl;
		int choice = 0;
		while (choice != 1 && choice != 2) {
			choice = inputInt();
		}
		if (choice == 1) {
			CreateArray();
		}
		else {
			CreateArrayManually();
		}
}

void Array::minElement()
{
	int max = INT_MAX;
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] < max) {
				max = arr[i][j];
				sum = i + j;
			}
		}
	}
	cout << "����� ������� ������������ �������� ������� �����:" << sum << endl;
}

void Array::maxElement() {
	int min = INT_MIN;
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] > min) {
				min = arr[i][j];
				sum = i + j;
			}
		}
	}
	cout << "����� ������� ������������� �������� ������� �����:" << sum << endl;
}

void Array::maxElementMultiplyOfTwo() 
{
	int max = -3;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] % 2 == 0 && arr[i][j]>max)
			{
				max = arr[i][j];
			}
		}
	}
	if (max == -3) 
	{
		cout << "����� ������� 2 ����������� � �������" << endl;
	}
	else {
		cout << "������������ ������� ������� ������ ���� �����: " << max << endl;
	}
}

void Array::printMatrix() {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << space << arr[i][j];
		}
		cout << endl;
	}
}

int menu() 
{
	system("pause");
	system("cls");
	cout << "1)����� ������� � �������" << endl;
	cout << "2)����� ������� ������������ �������� �������" << endl;
	cout << "3)����� ������� ������������� �������� �������" << endl;
	cout << "4)����� ������������� �������� ������� �������� ����" << endl;
	cout << "5)������� ����� �������" << endl;
	cout << "6)����� �� ���������" << endl;
	int choice;
	return choice = inputInt();
}