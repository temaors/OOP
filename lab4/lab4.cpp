#include "Header.h"

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Triangle triangle1;
	Square square1;
	Circle circle1;
	intersect(circle1, triangle1);
	intersect(circle1, square1);
	intersect(triangle1, square1);
	inputFile(triangle1, square1, circle1);
	return 0;
}