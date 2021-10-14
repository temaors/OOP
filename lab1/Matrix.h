#include <iostream>
#include <Windows.h>
#include <limits>
#include <iomanip>
#include <fstream>
using namespace std;

class Matrix
{
	int x;
	int y;
	float floatX;
	float floatY;
	float** floatMatrix;
	int** matrix;
public:
	Matrix();
	Matrix(int, int);
	//Matrix(const Matrix&);
	~Matrix();
	void Print();
	void MinNumber();
	void MaxNumber();
	void newMatrix();
	void CreateMatrix(int, int);
	void CreateFloatMatrix(int, int);
	void CreateMatrixManually(int, int);
	void CreateFloatMatrixManually(int, int);
};

int inputInt();
float inputFloat();
void FileInput(int**);
int menu();
float randFloatNumber();