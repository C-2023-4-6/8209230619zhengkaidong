#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
double a;
int main()
{
  int a[] = {1, 2, 3};
  int *p, i;
  p = a;
  for (i = 0; i < 3; i++)
  {
    printf("%d,%d,%d,%d,\n", a[i], p[i], *(p + i), *(a + i));
  }
  system("pause");
  return 0;
}