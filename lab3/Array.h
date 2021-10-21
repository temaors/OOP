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
	float** floatArr;
	Array(int, int);
	~Array();
	void printMatrix();
private:
	void CreateArray(int, int);
	void CreateArrayManually(int, int);
	void CreateFloatArray(int, int);
	void CreateFloatArrayManually(int, int);
};

int menu();
int inputInt();
float inputFloat();
float randFloatNumber();
ostream& tableOut(ostream&);