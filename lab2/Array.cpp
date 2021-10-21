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
	delete[] floatArr;
}

ostream& spacefornumber(ostream& stream) {
	cout << setprecision(5) << setw(8);
	return stream;
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

int inputInt() {
	cout << "Введите число int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		rewind(stdin);
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

void Array::CreateArray(int x, int y) {//
	srand(time(0));
	arr = new int* [x];
	for (int i = 0; i < x; i++) {
		arr[i] = new int[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = rand() % 100 - 1;
		}
	}
}

void Array::CreateArrayManually(int x, int y) {
	arr = new int* [x];
	for (int i = 0; i < x; i++) {
		arr[i] = new int[y];
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			arr[i][j] = inputInt();
		}
	}
}

void Array::CreateFloatArray(int x, int y) {
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

void Array::CreateFloatArrayManually(int x, int y) {
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

void Array::newArray() {
	cout << "Создать массив с с дробными или целыми числами(1-FLOAT||2-INT)" << endl;
	int c1 = -1;
	while (c1 != 1 && c1 != 2) {
		c1 = inputInt();
	}
	if (c1 == 1) {
		system("cls");
		cout << "Создать массив с рандомными числами?(1-ДА||2-НЕТ)" << endl;
		int ch1 = 0;
		while (ch1 != 1 && ch1 != 2) {
			ch1 = inputInt();
		}
		if (ch1 == 1) {
			CreateFloatArray(x, y);
		}
		else {
			CreateFloatArrayManually(x, y);
		}
	}
	else {
		cout << "Создать массив с рандомными числами?(1-ДА||2-НЕТ)" << endl;
		int choice = 0;
		while (choice != 1 && choice != 2) {
			choice = inputInt();
		}
		if (choice == 1) {
			CreateArray(x, y);
		}
		else {
			CreateArrayManually(x, y);
		}
	}
}

void Array::minElement() {
	float max = FLT_MAX;
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
	cout << "Сумма номеров минимального элемента матрицы равна:" << sum << endl;
}

void Array::maxElement() {
	float min = FLT_MIN;
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
	cout << "Сумма номеров максимального элемента матрицы равна:" << sum << endl;
}

void Array::maxElementMultiplyOfTwo() {
	float min = FLT_MIN;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (arr[i][j] % 2 == 0 && arr[i][j]>min) {
				min = arr[i][j];
			}
		}
	}
	if (min == FLT_MIN) {
		cout << "Числа кратные 2 остутствуют в матрице" << endl;
	}
	else {
		cout << "Максимальный элемент матрицы кратый двум равен: " << min << endl;
	}
}

void Array::printMatrix() {
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << spacefornumber << arr[i][j];
		}
		cout << endl;
	}
}

int menu() {
	cout << "1)Вывод массива в консоль" << endl;
	cout << "2)Сумма номеров минимального элемента массива" << endl;
	cout << "3)Сумма номеров максимального элемента массива" << endl;
	cout << "4)Вывод максимального элемента массива кратного двум" << endl;
	cout << "5)Содание новой матрицы" << endl;
	cout << "6)Выход из программы" << endl;
	int choice;
	return choice = inputInt();
}