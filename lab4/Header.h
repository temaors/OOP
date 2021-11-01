#include <iostream>
#include <Windows.h>
#include <math.h>
#include <fstream>

using namespace std;

class Shape {
public:
	int sideLength;
	int sides;
protected:
	void getLenghtofSides();
};

class Triangle : public Shape {
public:
	Triangle();
};

class Square : public Shape {
public:
	Square();
};

class Circle : public Shape {
public:
	Circle();
}; 

int inputInt();
void intersect(const Shape&, const Shape&);
void inputFile(const Shape&, const Shape&, const Shape&);