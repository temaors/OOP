#include "lab2.h"

int inputInt() {
	cout << "������� ����� �����" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		cout << "������� ����� �����" << endl;
	}
	return num;
}

int menu() {
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	return inputInt();
}