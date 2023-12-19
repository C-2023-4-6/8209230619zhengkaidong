#include <iostream>
using namespace std;

int *f(int n)
{
  int *list = new int[n];
  for (int i = 0; i < n; i++)
    list[i] = i + 1;
  return list;
}

int main()
{
  int n;
  int *p = f(n);
  cout << p[0] << endl;
  cout << p[1] << endl;
  delete[] p;
  system("pause");
  return 0;
}