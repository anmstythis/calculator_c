#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int fact(int num)
{
    int f = 1;
    for (int i = 1; i <= num; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    float a;
    float b;
    char oper;
    int opt;


    while (true)
    {
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите операцию (+, -, *, /, p, r, %, !): "; //'r' - квадратный корень, '%' - 1% от числа, 'p' - возведение в степень
        cin >> oper;
        switch (oper)
        {
        case '+':
            cout << "Введите второе число: ";
            cin >> b;
            cout << "\nРезультат: " << a + b << "\n";
            break;
        case '-':
            cout << "Введите второе число: ";
            cin >> b;
            cout << "\nРезультат: " << a - b << "\n";
            break;
        case '*':
            cout << "Введите второе число: ";
            cin >> b;
            cout << "\nРезультат: " << a * b << "\n";
            break;
        case '/':
            cout << "Введите второе число: ";
            cin >> b;
            if (b == 0)
            {
                cout << "\nДелить на 0 нельзя!\n";
            }
            else
            {
                cout << "\nРезультат: " << a / b << "\n";
            }
            break;
        case 'p':
            cout << "Введите второе число: ";
            cin >> b;
            cout << "\nРезультат: " << pow(a, b) << "\n";
            break;
        case 'r':
            if (a < 0)
            {
                cout << "\nКорень такого числа найти невозможно.\n";
            }
            else
            {
                cout << "\nРезультат: " << sqrt(a) << "\n";
            }
            break;
        case '%':
            cout << "\nРезультат: " << a * 0.01 << "\n";
            break;
        case '!':
            cout << "\nРезультат: " << fact(a) << "\n";
            break;
        default:
            cout << "\nТакой операции не предусмотрено.\n";
            break;
        }
        
        cout << "Продолжить работу калькулятора? 1. да \t2. нет \n";
        cin >> opt;
        cout << "\n";
        if (opt == 1)
        {
            continue;
        }
        else if (opt == 2)
        {
            break;
        }
        else
        {
            cout << "Звиняйте, я устал, поэтому решил, что работать не буду :)";
            break;
        }
    }
}


