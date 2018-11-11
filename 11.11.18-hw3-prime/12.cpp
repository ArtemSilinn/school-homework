/*
Напишите процедуру, дописывающую к каждому элементу динамически выделенного массива справа его квадрат.
({1,2,3,4}->{1,1,2,4,3,9,4,16}).
По окончании работы процедуры количество выделенной памяти должно увеличиться.
*/

#include <iostream>
using namespace std;

int sqr (int o)
{
    return o*o;
}

void q (int* &a, int b)
{
    int* w = new int [b];
    for (int i = 0; i < b; i++)
    {
        *(w + i) = sqr(*(a + i));
    };

    int c = 2*b;
    int* e = new int[c];
    for (int i = 0; i < c; i++)
    {
        if ((i % 2) == 0)
        {
            *(e + i) = *(a + (i/2));
        }
        else
        {
            *(e+ i) = *(w + ((i-1)/2));
        };
    };

    delete[]w;

    a = e;
}

int main()
{
    int n;
    cin >> n;
    int* r = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(r + i);
    };

    q(r, n);
    n += n;

    for (int i = 0; i < n; i++)
    {
        cout << *(r + i) << " ";
    };
}
