#include <iostream>
using namespace std;
int main()
{
  char i;
  i = getchar();
  if ((i <= 'z') && (i >= 'a'))
    cout << (char)(i - 32);
  else
    cout << (int)(i + 1);
  system("pause");
  return 0;
}