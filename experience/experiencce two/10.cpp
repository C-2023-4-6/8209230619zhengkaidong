#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  string c;
  int a(0);
  getline(cin, c);
  reverse(c.begin(), c.end());
  for (int i = 0; i < c.size(); i++)
  {
    if (c[i] >= '0' && c[i] <= '9')
      a += (c[i] - '0') * pow(16, i);
    else
      switch (c[i])
      {
      case 'A':
        a += 10 * pow(16, i);
        break;
      case 'B':
        a += 11 * pow(16, i);
        break;
      case 'C':
        a += 12 * pow(16, i);
        break;
      case 'D':
        a += 13 * pow(16, i);
        break;
      case 'E':
        a += 14 * pow(16, i);
        break;
      case 'F':
        a += 15 * pow(16, i);
        break;
      }
  }
  cout << a;
  system("pause");
  return 0;
}