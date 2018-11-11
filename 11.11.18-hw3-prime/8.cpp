/*
Напишите две функции, находящие приближенное значение квадратного и кубического корня.
В программе не должны использоваться математические библиотеки.
*/

#include <iostream>
using namespace std;

float sqrt(float a)
{
 float k;
 float c = 0.000001;
 for (float i = 0; 0 == 0; i += c)
 {
  if (((i * i) <= a) && (((i + c) * (i + c)) >= a))
  {
   k = i;
   break;
  };
 };
 k *= (1 / c);
 int s = (int)k + 1;
 int e = (s % 10);
 if (e >= 5)
 {
  s -= e;
  s += 10;
 }
 else
 {
  s -= e;
 };
 k = (s / 10);
 k *= (c * 10);
 return k;
}

float cbt(float a)
{
 float k;
 float c = 0.000001;
 for (float i = 0; 0 == 0; i += c)
 {
  if ((i * i * i <= a) && ((i + c) * (i + c) * (i + c) >= a))
  {
   k = i;
   break;
  };
 };
 k *= (1 / c);
 int s = (int)k + 1;
 int e = (s % 10);
 if (e >= 5)
 {
  s -= e;
  s += 10;
 }
 else
 {
  s -= e;
 };
 k = (s / 10);
 k *= (c * 10);
 return k;
}

int main()
{
 int f;
 cin >> f;
 cout << sqrt(f) << '\n';
 cout << cbt(f) << '\n';
}
