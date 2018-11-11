/*
Напишите логическую функцию,
проверяющую, является строка палиндромом. 
Можно считать, что строка состоит только из букв латиницы.
*/

#include <iostream>
using namespace std;

bool pal (char* A, int b)
{
    b--;
    int k = 0;
    for (int i = 0; i <= ((b - 1)/2); i++)
    {
        if (A[i] != A[b - i])
        {
            k++;
        };
    };
    return (k == 0);;
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

int main()
{
    int n;

    char* m = new char [256];
    cin.getline(m, 256, '\n');
    n = Length(m);

    cout << '\n';

    if (pal(m, n) == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "Yesn’t”; //заставляет задумоца
    };
}
