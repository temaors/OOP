#include "Header.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите имя покупателя" << endl;
	string name;
	getline(cin, name);
	system("cls");
	cout << "Введите баланс покупателя" << endl;
	double balance = InputDouble();
	Buyer b1(balance, true, name);
	while (true) {
		switch (BuyerMenu())
		{
		case 1:
			b1.replenishmentOfTheBalance(200);
			break;
		case 2:
			b1.checkBankAccount();
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return 0;
			break;
		default:
			cout << "Ошибка ввода" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	return 0;
}