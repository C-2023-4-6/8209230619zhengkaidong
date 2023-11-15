#include <iostream>
using namespace std;
int main()
{
  char i;
  i = getchar();
  if ((i <= 'z') && (i >= 'a')) // 判断是否落在小写字母范围
    cout << (char)(i - 32);     // 转大写
  else
    cout << (int)(i + 1); // 输出后继字符ASCLL码
  system("pause");
  return 0;
}