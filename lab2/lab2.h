#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

class Array
{
	int x, y;
public:
	void createArray();
	void fillInTheArray();
	void printArray();
	Array();
	Array(int, int);
	~Array();
};

int menu();
int inputInt();