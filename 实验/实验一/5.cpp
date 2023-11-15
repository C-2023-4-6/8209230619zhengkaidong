#include <iostream>
using namespace std;
const int binary = 32;
int main()
{
  float temperture;
  cout << "输入摄氏温度:";
  cin >> temperture;
  float F;
  F = temperture * 1.8 + binary;
  cout << "华氏温度为：" << F << endl;
  system("pause");
  return 0;
}