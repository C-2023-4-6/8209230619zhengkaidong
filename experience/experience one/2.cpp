#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int a) // 判断是否为素数
{
  for (int i = 2; i <= sqrt(a); i++)
    if (a % i == 0) // 整除则返回
      return 0;
  return 1;
}

int main()
{
  int t(1);
  int val(2);
  while (t <= 200)
  {
    if (is_prime(val))
    {
      t++;
      cout << val << '\t';
      if ((t - 1) % 10 == 0)
        cout << endl;
    }
    val++;
  }
  system("pause");
  return 0;
}