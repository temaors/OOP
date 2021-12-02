#include <Windows.h>
#include <iostream>
#include <iomanip>
#include <list>
#include <string>

using namespace std;

class Department {
private:
	string type;
protected:
	string GetType();
	void SetType();
};

class Product : public Department {
private:
	string name;
	string manufacturer;
	double cost;
	int count;
public:

};

class Shop {
private:
	string name;
	string type;
	double boxOffice;
public:
};

class Cart {
private:
	list <Product> products;
	double totalCost;
public:
};

class BankAccount {
protected:
	virtual bool checkPIN() = 0;
	virtual bool pay(double) = 0;
	virtual void checkBankAccount() = 0;
	virtual void replenishmentOfTheBalance(double) = 0;
};

class Buyer : public BankAccount {
private:
	string firstName;
	string surname;
	string patronomic;
	string PIN;
	int misses;
	double balance;
	bool discountCard;
public:
	void setFirstName();
	void setSurname();
	void setPatronomic();
	void setPIN();
	void setBalance();
	void setdiscountCard();
	string GetFirstName();
	string GetSurname();
	string GetPatronomic();
	string GetPIN();
	double GetBalance();
	bool GetDiscountCard();
	Buyer();
	~Buyer();
	Buyer(double, bool, string);
	Buyer(const Buyer&);
	void checkBankAccount();
	void replenishmentOfTheBalance(double);
	bool pay(double);
	bool checkPIN();
}; 

int InputInt();
double InputDouble();
int BuyerMenu();
int ShopMenu();

void FileInput();