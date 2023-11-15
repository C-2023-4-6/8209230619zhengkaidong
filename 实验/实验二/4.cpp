#include <iostream>
using namespace std;
int main()
{
  char s;
  int a, sum, b, i = 0;
  cin >> a;
  sum = a;
  s = getchar();
  while (s != '\n') // 设计一个可以计算多个数据运算的计算器，回车即返回答案跳出循环（懒惰不想考虑优先级嘿嘿，下次一定）
  {
    do
    {
      cin >> b;
      if ((s == '/') && (b == 0)) // 判断除法除数是否非法，非法则重新输入
      {
        cout << "Divider cannot be 0,repeat to read the numb" << endl;
        continue;
      }
      switch (s) // 判断加减乘除
      {
      case '+':
        sum += b;
        i++;
        break;
      case '-':
        sum -= b;
        i++;
        break;
      case '*':
        sum *= b;
        i++;
        break;
      case '/':
        sum /= b;
        i++;
        break;
      default:
        cout << "Couldn't find this operator,please write again." << endl;
        break;
      }
    } while (!i);
    s = getchar();
  }
  cout << "the answer is " << sum; // 输出答案
  system("pause");
  return 0;
}