#include "Header.h"

int InputInt() {
	cout << "������� ����� int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		rewind(stdin);
		system("cls");
		cout << "������� ����� �����" << endl;
	}
	return num;
}
double InputDouble() {
	double a;
	do
	{
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n');
			cout << "�������� ����" << endl;
		}
		cin >> a;
	} while (!cin);
	return a;
}

bool Buyer::pay(double amount) {
	if (amount > this->balance) {
		this->balance -= amount;
		return true;
	}
	else {
		cout << "������������ ������� �� �������" << endl;
		system("pause");
		system("cls");
		return false;
	}
}
int BuyerMenu() {
	cout << "1)���������� �������" << endl;
	cout << "2)�������� ������� �������" << endl;
	cout << "3)��������� PIN-����" << endl;
	cout << "4)����� � �������" << endl;
	cout << "5)����� �� ���������" << endl;
	int choice = InputInt();
	return choice;
}