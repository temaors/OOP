#include "Header.h"
Shape::Shape(int n) {
	sideLength = n;
}
Triangle::Triangle(){
	//sides = 3;
}
int menu() {
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	int choice = inputInt();
	return choice;
}

int inputInt() {
	cout << "������� ����� int" << endl;
	int num;
	while (!scanf_s("%d", &num)) {
		system("cls");
		cout << "������� ����� �����" << endl;
	}
	return num;
}

void intersect(const Shape& obj1, const Shape& obj2) {

}