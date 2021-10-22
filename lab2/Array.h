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
	Array(int, int);
	~Array();
	void newArray();
	void maxElement();
	void minElement();
	void maxElementMultiplyOfTwo();
	void printMatrix();
private:
	void CreateArray();
	void CreateArrayManually();
};

class FloatArray {
public:
	int x, y;
	float** floatArr;
	FloatArray(int, int);
	~FloatArray();
	void newFloatArray();
	void maxElement();
	void minElement();
	void printMatrix();
private:
	void CreateFloatArray();
	void CreateFloatArrayManually();
};

int menu();
int floatmenu();
int inputInt();
float inputFloat();
float randFloatNumber();
ostream& space(ostream&);