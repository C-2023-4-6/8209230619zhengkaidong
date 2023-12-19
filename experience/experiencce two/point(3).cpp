#include <iostream>
using namespace std;

void bubble(int *nums, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (nums[i] > nums[j])
        swap(nums[i], nums[j]);
    }
  }
}

int main()
{
  int n;
  cin >> n;
  int *p = new int[n];
  for (int i = 0; i < n; i++)
    cin >> p[i];
  bubble(p, n);
  for (int i = 0; i < n; i++)
    cout << p[i] << ' ';
  delete[] p;
  system("pause");
  return 0;
}