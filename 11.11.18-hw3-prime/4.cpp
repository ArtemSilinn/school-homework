/*
Напишите программу, находящую сумму простых элементов массива.
*/

#include <iostream>
using namespace std;

bool f(int a)
{
 int k = 0;
 if (a == 1)
 {
  return (0==1);
 }
 else
 {
  for (int i = 2; i <= (a / 2); i++)
  {
   if ((a % i) == 0)
   {
    return (0 == 1);
    break;
    k++;
   };
  };
  if (k == 0)
  {
   return (1 == 1);
  };
 };
}

int main()
{
 int n, p = 0;
 cin >> n;
 int *m = new int[n];

 for (int i = 0; i < n; i++)
 {
  cin >> *(m+ i);
  if (f(*(m+ i)) == f(3))
  {
   p += *(m + i);
  };
 };
 cout << '\n';
 cout << p;
 }
