#include <iostream>
using namespace std;

class Time // 定义Time类
{
public: // 数据成员为公用的
  void setTime();
  void showTime();

private:
  int hour;
  int minute;
  int sec;
} t1;

void Time ::setTime()
{
  cin >> this->hour; // 输入设定的时间
  cin >> this->minute;
  cin >> this->sec;
}

void Time ::showTime()
{
  cout << this->hour << ':' << this->minute << ':' << this->sec << endl; // 输出时间
}

int main()
{
  Time tl; // 定义this为Time类对象
  t1.setTime();
  t1.showTime();
  system("pause");
  return 0;
}
