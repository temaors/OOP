#include "Header.h"

Buyer::Buyer(double x, bool y, string name) {
	this->balance;
	this->discountCard = y;
	//this->name = name;
	misses = 0;
}
Buyer::Buyer() {
	balance = 0;
	PIN = "0000";
	discountCard = false;
	surname = "Unknown";
	firstName = "Unknown";
	patronomic = "Unknown";
	misses = 0;
}
Buyer::Buyer(const Buyer& obj) {
	balance = obj.balance;
	discountCard = obj.discountCard;
	firstName = obj.firstName;
	surname = obj.surname;
	patronomic = obj.patronomic;
	PIN = obj.PIN;
	misses = obj.misses;
}
void Buyer::setSurname()
{
	cout << "������� �������" << endl;
	getline(cin, surname);
	system("cls");
}
void Buyer::setFirstName()
{
	cout << "������� ���" << endl;
	getline(cin, firstName);
	system("cls");
}
void Buyer::setPatronomic()
{
	cout << "������� ��������" << endl;
	getline(cin, patronomic);
	system("cls");
}
void Buyer::setPIN() {
	while (PIN.length() != 4) {
		cout << "������� PIN-���" << endl;
		getline(cin, PIN);
		for (int i = 0; i < 4; i++)
		{
			if (PIN[i] >= 48 && PIN[i] <= 57)
				continue;
			else {
				cout << "PIN-��� ������ �������� ������������� �� ����(0-9)" << endl;
				system("pause");
				system("cls");
				cout << "��������� ����" << endl;
				PIN = "x";
			}
		}
	}
}
void Buyer::setBalance() {
	cout << "������� ������" << endl;
	balance = InputDouble();
}
void Buyer::setdiscountCard() {

}
bool Buyer::checkPIN() {
	cout << "������� PIN-���" << endl;
}
void Buyer::checkBankAccount() {
	cout << "��� ��������� �����" << endl;
	cout << surname << " " << firstName << " " << patronomic << endl;
	cout << "������� �� �������" << endl;
	cout << setprecision(5) << balance << "$" << endl;
	cout << "��������� ������� ����� PIN-����: " << misses << endl;
	system("pause");
	system("cls");
}

void Buyer::replenishmentOfTheBalance(double number) {
	this->balance += number;
}
