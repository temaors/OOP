#include "Array.h"

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    bool cycle;
    while (true) {
        cout << "������� ������ ���������� �������(��� ����� �������������� �����, �������� ����� �������� ������ ������� �����)" << endl;
        cycle = true;
        int x, y;
        x = abs(inputInt());
        y = abs(inputInt());
        Array myarray(x, y);
            while (cycle) {
                switch (menu())
                {
                case 1:
                    myarray.printMatrix();
                    break;
                case 2:
                    myarray.minElement();
                    break;
                case 3:
                    myarray.maxElement();
                    break;
                case 4:
                    myarray.maxElementMultiplyOfTwo();
                    break;
                case 5:
                    cycle = false;
                    system("pause");
                    break;
                case 6:
                    return 0;
                default:
                    cout << "������." << endl;
                break;
            }
        }
    }
}