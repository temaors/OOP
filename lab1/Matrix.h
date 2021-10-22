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
	void CreateMatrix();
	void CreateMatrixManually();
};

int inputInt();
void FileInput(Matrix);
int menu();