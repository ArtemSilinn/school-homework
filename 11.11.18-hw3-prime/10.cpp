/*
Напишите процедуру, удаляющую из динамически выделенного массива все четные значения
(функция принимает в качестве аргументов – указатель на массив и его размер). 
По окончании работы процедуры количество выделенной памяти должно уменьшиться.
*/

#include <iostream>
using namespace std;

int q(int* a, int b)
{
    int m = 0;
    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) % 2) == 0)
        {
            m++;
        };
    };
    return m;
}

void w(int* &c, int d)
{
    int r = q(c, d);

    int* e = new int[d - r];
    int k = 0;
    for (int i = 0; i < d; i++)
    {
        if (((*(c + i)) % 2) != 0)
        {
            *(e + k) = *(c + i);
            k++;
        };
    };

    c = e;
}

int main()
{
    int n;
    cin >> n;
    int* t = new int[n];
    for (int i = 0; i < n; i++)
    {
       cin >> *(t+ i);
    };

    int f = q(t, n);
    W(t, n);
    cout << '\n';

    for (int i = 0; i < (n - f); i++)
    {
        cout << *(t + i) << " ";
    };
    delete[] t;
}
