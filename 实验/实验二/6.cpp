#include <iostream>
using namespace std;
int PN(int a, int b)
{
  if (b > a)
    swap(a, b);
  return b == 0 ? a : PN(b, a % b);
}
int main()
{
  int a, b, c, d;
  cin >> a >> b;
  c = PN(a, b);
  d = a * b / c;
  cout << "最大公约数：" << c << endl
       << "最小公倍数: " << d << endl;
  system("pause");
  return 0;
}