#include <iostream>
using namespace std;
const float a = 0.8;
int main()
{
  int i = 1;
  int sum(0);
  int day(0);
  do
  {
    i *= 2;
    sum += i * a;
    day++;                               // 记录天数
  } while (i < 100);                     // i大于100时跳出循环
  cout << "One day costs:" << sum / day; // 计算平均一天开销
  system("pause");
  return 0;
}