#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter three sides of a triangle:"; // 输入三角形三边
  do
  {
    cin >> a >> b >> c;
  } while (!(a + b > c) && (a + c > b) && (b + c > a)); // 判断是否满足三角形三边要求
  cout << "perimeter is " << a + b + c << endl;
  if ((a == b) || (a == c) || (b == c)) // 判断是否为等腰三角形
    cout << "This is an isosceles triangle";
  else
    cout << "This isn't an isosceles triangle ";
  system("pause");
  return 0;
}