#include "lab2.h"

int inputInt() {
	cout << "Введите целое число" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		cout << "Введите ЦЕЛОЕ число" << endl;
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

ostream& manip(ostream& stream) {
	//
	return stream;
}