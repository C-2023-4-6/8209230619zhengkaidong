#include <iostream>
using namespace std;
int main()
{
  char c;
  int a[4] = {0, 0, 0, 0};
  while (c != '\n') // 控制跳出循环条件：回车
  {
    c = getchar();
    if (c == ' ') // 记录不同类型符号出现次数
      a[0]++;
    else if (('0' <= c) && (c <= '9'))
      a[1]++;
    else if ((c >= 'A') && (c <= 'Z'))
      a[2]++;
    else if ((c >= 'a') && (c <= 'z'))
      a[2]++;
    else
      a[3]++;
  }
  cout << "空格出现次数：" << a[0] << endl // 输出
       << "数字出现次数：" << a[1] << endl
       << "字母出现次数：" << a[2] << endl
       << "其他字符出现次数：" << a[3] << endl;
  system("pause");
  return 0;
}
