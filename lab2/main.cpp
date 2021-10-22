#include "Array.h"

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    bool cycle;
    while (true) {
        cout << "Введите размер двумерного массива(при вводе отрицательного числа, размером будет являться модуль данного числа)" << endl;
        cycle = true;
        int x, y;
        x = abs(inputInt());
        y = abs(inputInt());
        int choice = -1;
        while (choice != 1 && choice != 2) {
            cout << "Создать массив для работы с числами int || float(1-INT||2-FLOAT)" << endl;
            choice = inputInt();
            system("cls");
        }
        if (choice == 1) {
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
                    cout << "Ошибка." << endl;
                    break;
                }
            }
        }
        else {
            FloatArray array(x,y);
            while (cycle) {
                switch (floatmenu())
                {
                case 1:
                    array.printMatrix();
                    break;
                case 2:
                    array.minElement();
                    break;
                case 3:
                    array.maxElement();
                    break;
                case 4:
                    cycle = false;
                    system("pause");
                    break;
                case 5:
                    return 0;
                default:
                    cout << "Ошибка." << endl;
                    break;
                }
            }
        }
    }
}