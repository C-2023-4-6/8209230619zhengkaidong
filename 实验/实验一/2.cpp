#include <iostream>
using namespace std;
const float pi = 3.14;
int main()
{
  float r, h, V = 0;
  cout << "input R:";
  cin >> r;
  cout << endl;
  cout << "input H:";
  cin >> h;
  cout << endl;
  V = pi * r * r * h / 3;
  cout << "The V is " << V << endl;
  system("pause");
  return 0;
}