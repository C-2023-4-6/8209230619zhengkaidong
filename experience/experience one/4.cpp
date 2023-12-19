#include <iostream>
using namespace std;

int monkey(int n, long long sum)
{
  if (n == 1)
    return sum;
  else
  {
    sum = monkey(--n, (sum + 1) * 2); // 从后往前递归
  }
  return sum;
}

int main()
{
  int n;
  long long sum;
  cin >> n >> sum;
  cout << monkey(n, sum);
  system("pause");
  return 0;
}