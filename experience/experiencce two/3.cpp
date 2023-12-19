#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  int n;
  cin >> n;
  bool *stu = new bool[n + 1];
  memset(stu, 1, sizeof(stu)); // 初始化
  for (int i = 2; i <= n; i++) // 打开的关上，关上的打开（前50个）
  {
    int t(2);
    if (stu[i]) // 自己的
      stu[i] = 0;
    else
      stu[i] = 1;
    while (t * (i + 1) < n && i < n / 2) // 别人的每i + 1 操作一次
    {
      if (stu[t * (i + 1)])
        stu[t * (i + 1)] = 0;
      else
        stu[t * (i + 1)] = 1;
      t++;
    }
  }
  for (int i = 1; i <= n; i++)
    if (stu[i])
      cout << i << ' ';
  system("pause");
  return 0;
}