#include <iostream>
using namespace std;

void bubble(double *a, int n)
{
  for (int x = 0; x < n; x++)
    for (int y = x + 1; y < n; y++) // 冒泡，从前往后
      if (a[y] > a[x])              // 从大往下排列
        swap(a[y], a[x]);
}

int main()
{
  int n;
  cin >> n; // 输入个数
  double *a = new double[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  bubble(a, n);
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
  delete[] a;
  system("pause");
  return 0;
}