#include "Header.h"

int InputInt() {
	cout << "Введите число int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		rewind(stdin);
		system("cls");
		cout << "Введите ЦЕЛОЕ число" << endl;
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
			cout << "Неверный ввод" << endl;
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
		cout << "Недостаточно средств на балансе" << endl;
		system("pause");
		system("cls");
		return false;
	}
}
int BuyerMenu() {
	cout << "1)Пополнение баланса" << endl;
	cout << "2)Просмотр остатка баланса" << endl;
	cout << "3)Изменение PIN-кода" << endl;
	cout << "4)Зайти в магазин" << endl;
	cout << "5)Выход из программы" << endl;
	int choice = InputInt();
	return choice;
}