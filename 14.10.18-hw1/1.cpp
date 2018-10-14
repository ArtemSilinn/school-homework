/*
Напишите программу проверяющую является ли число составным. В
программе гарантируется, что число - натуральное
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned int N, sqrtN;
    cin >> N;
    sqrtN = sqrt(N);
    if (N == 1)
    {
        cout << "Unit\n"; 
        return 0;
    };
     for (unsigned int i = 2; i <= sqrtN; i++)
    {
        if (N % i == 0) 
        {
            cout << "Composite\n";
            return 0;
        };
    }
}
