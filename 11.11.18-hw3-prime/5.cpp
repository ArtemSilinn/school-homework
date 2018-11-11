/*
Напишите программу, заменяющую составные числа на их самые большие простые делители.
*/

#include <iostream>
using namespace std;
bool f(int a)
{
 int k = 0;
 if (a == 1)
 {
  return 0;
 }
 else
 {
  for (int i = 2; i <= (a / 2); i++)
  {
   if ((a % i) == 0)
   {
    return 0;
    break;
    k++;
   };
  };
  if (k == 0)
  {
   return 1;
  };
 };
}

int main()
{
 int n;
 cin >> n;

    for (int i = n; i >= 2; i--)
    {
        if (((n % i) == 0) && (f(i) == f(2)))
        {
            n = i;
            break;
        };
    };
    cout << n;

}
