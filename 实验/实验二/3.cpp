#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter three sides of a triangle:";
  do
  {
    cin >> a >> b >> c;
  } while (!(a + b > c) && (a + c > b) && (b + c > a));
  cout << "perimeter is " << a + b + c << endl;
  if ((a == b) || (a == c) || (b == c))
    cout << "This is an isosceles triangle";
  else
    cout << "This isn't an isosceles triangle ";
  system("pause");
  return 0;
}