#include <iostream>
#include <math.h>

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
        if (cin >> a)
        {
            cout << "Введите операцию (+, -, *, /, p, r, %, !): "; //'r' - квадратный корень, '%' - 1% от числа, 'p' - возведение в степень
            cin >> oper;
            switch (oper)
            {
            case '+':
                cout << "Введите второе число: ";
                if (cin >> b)
                {
                    cout << "\nРезультат: " << a + b << endl;
                }
                else
                {
                    cout << "Э?" << endl;
                    exit(b);
                }
                break;
            case '-':
                cout << "Введите второе число: ";
                if (cin >> b)
                {
                    cout << "\nРезультат: " << a - b << endl;
                }
                else
                {
                    cout << "Э?" << endl;
                    exit(b);
                }
                break;
            case '*':
                cout << "Введите второе число: ";
                if (cin >> b)
                {
                    cout << "\nРезультат: " << a * b << endl;
                }
                else
                {
                    cout << "Э?" << endl;
                    exit(b);
                }
                break;
            case '/':
                cout << "Введите второе число: ";
                if (cin >> b)
                {
                    if (b == 0)
                    {
                        cout << "\nДелить на 0 нельзя!\n";
                    }
                    else
                    {
                        cout << "\nРезультат: " << a / b << endl;
                    }
                }
                else
                {
                    cout << "Э?" << endl;
                    exit(b);
                }
                break;
            case 'p':
                cout << "Введите второе число: ";
                if (cin >> b)
                {
                    cout << "\nРезультат: " << pow(a, b) << endl;
                }
                else
                {
                    cout << "Э?" << endl;
                    exit(b);
                }
                break;
            case 'r':
                if (a < 0)
                {
                    cout << "\nКорень такого числа найти невозможно.\n";
                }
                else
                {
                    cout << "\nРезультат: " << sqrt(a) << endl;
                }
                break;
            case '%':
                cout << "\nРезультат: " << a * 0.01 << endl;
                break;
            case '!':
                cout << "\nРезультат: " << fact(a) << endl;
                break;
            default:
                cout << "\nТакой операции не предусмотрено.\n";
                break;
            }
        }
        else
        {
            cout << "\nЭ, я так не играю..." << endl;
            exit(a);
        }
        
        cout << "Продолжить работу калькулятора? 1. да \t2. нет \n";
        cin >> opt;
        cout << endl;
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
            cout << "Звиняйте, я устал, поэтому решил, что работать не буду :)" << endl;
            break;
        }
    }
}


