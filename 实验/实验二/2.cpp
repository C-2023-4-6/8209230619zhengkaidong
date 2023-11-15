#include <iostream>
using namespace std;
int main()
{
  float x, y = -2;
  cout << "input the numb of x:";
  cin >> x;
  if ((x > 0) && (x < 1)) // 判断区间
    y = 3 - 2 * x;
  else if ((x >= 1) && (x < 5))
    y = 2 / (4 * x) + 1;
  else if ((x >= 5) && (x < 10))
    y = x * x;
  if (y == -2)
    cout << "out of range";
  else
    cout << y;
  system("pause");
  return 0;
}