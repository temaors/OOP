#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

class Shape {
	int sideLength;
	int sides;
	Shape(int);
};

class Triangle : public Shape {
	Triangle();
	~Triangle();
};

class Square : public Shape {
	  
};

class Circle : public Shape {

}; 

int menu();
int inputInt();
void intersect(const Shape&, const Shape&);