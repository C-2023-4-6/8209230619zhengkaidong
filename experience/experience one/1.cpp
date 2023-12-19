#include <iostream>
#include <stdio.h>
using namespace std;

int PN(int &a, int &b) //最大公约数
{
  if (b > a)
    swap(a, b);
  int t;
  if (b != 0)
    t = a % b;
  return b == 0 ? a : PN(b, t);
}

void GN(int &a, int &b)  //最小公倍数
{
  int t = a > b ? a : b;
  a = PN(a, b);
  b = t * b / a;
}

int main()
{
  int n, m;
  cin >> n >> m;
  GN(n, m);
  printf("%d %d", n, m);
  system("pause");
  return 0;
}