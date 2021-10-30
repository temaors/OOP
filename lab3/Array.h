#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <ctime>

using namespace std;

class Array {
public:
	int x;
	int y;
	int** arr;
	Array();
	Array(int, int);
	~Array();
	Array(const Array&);
	friend void print(const Array&);
	void newArray();
	int** operator+(const Array&);
	int** operator&(const Array&);
private:
	void CreateArray();
	void CreateArrayManually();
};

int menu();
int inputInt();
void printResult(int**, int);