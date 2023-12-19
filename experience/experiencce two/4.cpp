#include <iostream>
using namespace std;

void merge(int *a, int n, int *b, int m, int *c)
{
  int ta(0);
  int tb(0);
  int t(0);
  while (ta + tb <= n + m - 1) // 有序
  {
    if (ta == n) // 防止越界
    {
      c[t] = b[tb];
      tb++;
      t++;
      continue;
    }
    if (tb == m)
    {
      c[t] = a[ta];
      t++;
      ta++;
      continue;
    }
    if (a[ta] <= b[tb])
    {
      c[t] = a[ta];
      ta++;
      t++;
    }
    else
    {
      c[t] = b[tb];
      tb++;
      t++;
    }
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  int *a = new int[n];
  int *b = new int[m];
  int *c = new int[m + n];
  cout << "Enter list1:";
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << "Enter list2:";
  for (int i = 0; i < n; i++)
    cin >> b[i];
  cout << endl;
  merge(a, n, b, m, c);
  cout << "The merge list is ";
  for (int i = 0; i < n + m; i++)
    cout << c[i] << ' ';
  system("pause");
  return 0;
}