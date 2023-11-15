#include <iostream>
using namespace std;
const float a = 0.8;
int main()
{
  int i = 1;
  int sum(0);
  int t(0);
  do
  {
    i *= 2;
    sum += i * a;
    t++;
  } while (i < 100);
  cout << "One day costs:" << sum / t;
  system("pause");
  return 0;
}