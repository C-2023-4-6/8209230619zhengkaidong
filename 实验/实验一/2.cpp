#include <iostream>
using namespace std;
const float pi = 3.14; // 定义常量pi
int main()
{
  float r, h, V = 0;
  cout << "input R:"; // 输入半径
  cin >> r;
  cout << endl;
  cout << "input H:"; // 输入锥高
  cin >> h;
  cout << endl;
  V = pi * r * r * h / 3; // 输出答案
  cout << "The V is " << V << endl;
  system("pause");
  return 0;
}