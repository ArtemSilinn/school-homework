/*
Напишите программу, выписывающую все элементы последовательности, имеющие ровно семь делителей
*/

#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;
 int *m = new int[n];

 for (int i = 0; i < n; i++)
 {
  int k = 0;
  cin >> *(m + i);

  int q = *(m + i);
  for (int j = 1; j <= *(m + i);  j++)
  {
   if ((q % j) == 0)
   {
    k++;
   };
  };
  if (k == 7)
  {
   cout << *(m + i) << " ";
  };
 };
}
