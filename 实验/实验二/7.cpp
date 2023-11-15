#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;                    // 根据观察可知长宽相同
  for (int i = 1; i <= a; i++) // for嵌套输出图形
  {
    for (int g = 0; g < i; g++)
    {
      cout << '*';
    }
    cout << endl;
  }
  system("pause");
  return 0;
}