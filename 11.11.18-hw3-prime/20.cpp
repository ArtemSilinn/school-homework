/*
Напишите процедуру, удаляющую из динамически выделенной строки лишние пробелы.
Не лишними считаются одиночные пробелы, разделяющие пару слов.
По окончании работы процедуры количество выделенной памяти должно увеличиться.
*/

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int lp(char* a, int b)
{
    int p = 0;

    for (int i = 0; i < b; i++)
    {
        if (*(a + i) == ' ')
        {
            if (i == 0)
            {
                p++;
            }
            else
            {
                if (i == (b - 1))
                {
                    p++;
                }
                else
                {
                    if (*(a + i + 1) == ' ')
                    {
                        p++;
                    };
                };
            };
        };
    };
    return p;
}

int Length(char* a)
{
    int b = 0;
    while(*a++)
    {
        b++;
    };
    return b;
}

 void delett (char* &a, int b)
{
    int r = lp(a, b);
    int k = (b - r);
    char*e = new char [k];

    int i = 0, j = 0;;
    while (j < b)
    {
        if (i == k) break;
        if ((*(a + j)) != ' ')
        {
            *(e + i) = *(a + j);
            i++;
        }
        else
        {
            if (j != 0)
            {
                if (*(a + j - 1) != ' ')
                {
                    *(e + i) = *(a + j);
                    i++;
                };
            };
        };
        j++;
    };

    a = e;
}

int main()
{
    int n;

    char* ppp= new char [256];
    gets(ppp);
    n = Length(ppp);
    int y = lp(ppp, n);

    delett(ppp, n);

    int i = 0;
    while (i < (n - y))
    {
        if (*(ppp + i) != ' ') {cout << *(ppp + i);};
        if (*(ppp + i) == ' ') {cout << " ";};
        i++;
    };
}
