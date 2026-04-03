/*построить таблицу значений функции y=f(x) для x∈[a,b] с шагом h. Если в некоторой точке x функция не определена, вывести на экран сообщение об этом (незнаю на счет правильности но вроде что то выводит без ошибок)*/
#include <iostream>
#include <cmath>
using namespace std;

void f(float x)
{
    if (x == 2 || (x >= 0 && x <= 2))
    {
        cout << "ф-ция не определена";
    }
    else
    {
        cout << log(x/(x-2));
    }
}

int main() 
{
    float a, b, h, x;
    cout << "Введите a, b, h: ";
    cin >> a >> b >> h;
    
    cout << "x \t f(x)" << endl;
    
    for(x = a; x <= b; x += h)
    {
        cout << x << "\t";
        f(x);
        cout << endl;
    }
    
    return 0;
}
