#include <iostream>
using namespace std;

int PN(int a, int b) // 最大公约数，辗转相除法
{
  if (b > a)
    swap(a, b);
  return b == 0 ? a : PN(b, a % b);
}

int main()
{
  int a, b, c, d;
  cin >> a >> b; // c为最大公约胡，d为最小公约数
  c = PN(a, b);
  d = a * b / c; // 最大公约数为两数乘积除以最大公约数
  cout << "最大公约数：" << c << endl
       << "最小公倍数: " << d << endl;
  system("pause");
  return 0;
}