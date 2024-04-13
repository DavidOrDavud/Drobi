#include <iostream>
#include <string>
#include "Drobi.h"
using namespace std;

int main() 
{
    setlocale(LC_ALL, "rus"); // подключение русского языка

    cout << "Введите Вашу дробь:" << endl;
    int a, b, m;
    char c = 'y';
    cout << "Введите числитель:" << endl;
    cin >> a;
    cout << "Введите знаменатель:" << endl;
    cin >> b;
    Drob obj;
    obj.input(a, b);
    do {
        obj.reduct(obj.peredacha());
        obj.show();
        cout << "1:Прибавить к дроби число" << endl;
        cout << "2:Отнять от дроби число" << endl;
        cout << "3:Умножить дробь на число" << endl;
        cout << "4:Разделить дробь на число" << endl;
        cout << "Выберите действие" << '\n';
        cin >> m;
        switch (m)
        {
        case 1:
            cout << "Введите слагаемое" << endl;
            cin >> a;
            obj.sum(a);
            break;
        case 2:
            cout << "Введите вычитаемое" << endl;
            cin >> a;
            obj.sub(a);
            break;
        case 3:
            cout << "Введите множитель" << endl;
            cin >> a;
            obj.mult(a);
            break;
        case 4:
            cout << "Введите делитель" << endl;
            cin >> a;
            obj.div(a);
            break;
        default:
            cout << "Выберите правильно" << endl;
        }
        cout << "Продолжить?(y/n)" << endl;
        cin >> c;
    } while (c != 'n');
    return 0;
}