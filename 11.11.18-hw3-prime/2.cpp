/*
Напишите программу, вычисляющую произведение цифр целого числа, 
чётность которых совпадает с чётностью последней цифры.
*/

#include <iostream>
using namespace std;

bool ch(int a)
{
 return ((a % 2) == 0);
}

int main()
{
 int n, b, c, d = 1;
 cin >> n;

 b = (n % 10);
 c = b;

 while (n >= 1)
 {
  if (ch(c) == ch(b))
  {
   d*= c;
  };
  n /= 10;
  c = (n % 10);
 };
 cout << d;
}
