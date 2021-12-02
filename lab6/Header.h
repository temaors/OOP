#include <iostream>
#include <windows.h>

using namespace std;

class Point {
private:
	double x,y;
	string color;
public:
	int GetX();
	int GetY();
	string GetColor();
	void SetX();
	void SetY();
	void SetColor();
};

class Segment {
private:
	double x1, y1, x2, y2;
	string color;
public:
	void SetFPoint();
	void SetLPoint();
	string GetColor();
	int GetX1();
	int GetY1();
	int GetX2();
	int GetY2();
};

class Square : public Segment, public Point {
	
};