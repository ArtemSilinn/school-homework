/*
Напишите процедуру, удаляющую из динамически 
выделенного массива максимальный и минимальный элементы 
(если таковых несколько – удалить нужно все).
По окончании работы процедуры количество выделенной памяти должно уменьшиться.
*/

#include <iostream>
using namespace std;

int Max_a (int* a, int b)
{
    int k = *a;
    for (int i = 0; i < b; i++)
    {
        if ((*(a + i)) > k)
        {
            k = *(a+i);
        };
    };
    return k;
}

int min_a (int* a, int b)
{
    int k = *a;
    for (int i = 0; i < b; i++)
    {
        if ((*(a + i)) < k)
        {
            k = *(a+i);
        };
    };
    return k;
}

int s (int* a, int b)
{
    int m = 0;
    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) == (Max_a(a,b))) || ((*(a+i)) == (min_a(a,b))))
        {
            m++;
        };
    };
    return m;
}

void o(int* &a, int b)
{
    int r = s(a, b);
    int* p= new int [b - r];
    int k = 0;

    for (int i = 0; i < b; i++)
    {
        if (((*(a + i)) != Max_a(a,b)) && ((*(a + i)) != min_a(a,b)))
        {
            *(p + k) = *(a + i);
            k++;
        };
    };

    a = p;
}

int main()
{
    int n;
    cin >> n;
    int* f = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(f + i);
    };

    int f = s(f, n);
    o(f, n);
    cout << '\n';

    for (int i = 0; i < (n - f); i++)
    {
        cout << *(f+i) << " ";
    };

    delete[]f;
}
