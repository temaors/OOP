#include "Array.h"

Array::Array(int x, int y) {
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

Array::Array() {
	x = 5;
	y = 5;
	newArray();
}

Array::Array(const Array& obj) {
	this->x = obj.x;
	this->y = obj.y;
	this->arr = new int* [obj.x];
	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}
	this->arr = obj.arr;
}

void Array::CreateArray(){
	srand(time(0));
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = rand()%100+1;
		}
	}
}

void Array::CreateArrayManually() {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = inputInt();
		}
	}
}

void Array::newArray() {
	arr = new int* [x];
	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}
	int choice = -1;
	while (choice != 1 && choice != 2) {
		cout << "Создать матрицу с рандомными числами?(1-ДА||2-НЕТ)" << endl;
		choice = inputInt();
		system("cls");
	}
	if (choice == 1)
		CreateArray();
	else
		CreateArrayManually();
}

void Array::operator+(const Array &obj) {
	int sum = 0;
	for (int i = 0; i < obj.x; i++)
	{
		for (int j = 0; j < obj.y; j++)
		{
			sum = this->arr[i][j] + obj.arr[i][j];
			cout << setw(5) << sum;
		}
		cout << endl;
	}
}

void Array::operator&(const Array &obj) {
	int sum = 0;
	for (int i = 0; i < obj.x; i++)
	{
		for (int j = 0; j < obj.y; j++)
		{
			sum = this->arr[i][j] * obj.arr[i][j];
			cout << setw(7) << sum;
		}
		cout << endl;
	}
}

int menu() {
	cout << "1)Cложение матриц" << endl;
	cout << "2)Перемножение матриц" << endl;
	cout << "3)Создание новых исходных матриц" << endl;
	cout << "4)Выход из программы" << endl;
	int choice = inputInt();
	return choice;
}

int inputInt() {
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		rewind(stdin);
		cout << "Введите целое число" << endl;
	}
	return num;
}

void print(const Array &obj)
{
	for (int i = 0; i < obj.x; i++)
		{
			for (int j = 0; j < obj.y; j++)
			{
				cout << setw(5) << obj.arr[i][j];
			}
			cout << endl;
		}
}