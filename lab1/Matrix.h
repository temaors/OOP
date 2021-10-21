#include <iostream>
#include <Windows.h>
#include <limits>
#include <iomanip>
#include <fstream>
using namespace std;

class Matrix
{
public:
	int x;
	int y;
	float** floatMatrix;
	int** matrix;
	Matrix();
	Matrix(int, int);
	Matrix(const Matrix&);
	~Matrix();
	void Print();
	void MinNumber();
	void MaxNumber();
	void newMatrix();
private:
	void CreateMatrix(int, int);
	void CreateFloatMatrix(int, int);
	void CreateMatrixManually(int, int);
	void CreateFloatMatrixManually(int, int);
};

int inputInt();
float inputFloat();
void FileInput(Matrix);
int menu();
float randFloatNumber();