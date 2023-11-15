#include <iostream>
using namespace std;
int main()
{
  int k(0);
  int i = k + 1;
  cout << i++ << endl;
  i = 1;
  cout << i++ << endl;
  cout << "Welcome to C++" << endl;
  system("pause");
  return 0;
  // 1.k没有定义
  // 2.i被重复定义
}