#include <iostream>
#include <cmath>
using namespace std;
double a;
int main()
{
  int i;
  cin >> a;
  double x[2];
  if (a >= 0)
    i = 1;
  else
    i = 0;
  a = abs(a);
  x[1] = a;
  while (abs(x[1] - x[0]) > 1e-5) // 不能更小，c++默认输出6位小数，除非更改精度
  {
    x[0] = x[1];
    x[1] = (x[0] + a / x[0]) / 2;
  }
  if (i)
    cout << x[1];
  else
    cout << x[1] << 'i';
  system("pause");
  return 0;
}