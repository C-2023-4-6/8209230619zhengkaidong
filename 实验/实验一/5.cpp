#include <iostream>
using namespace std;
const int binary = 32; // 转换进制常数
int main()
{
  float temperture;
  cout << "摄氏温度为"; // 输入摄氏温度
  cin >> temperture;
  float F;
  F = temperture * 1.8 + binary;     // 公式
  cout << "华氏温度为" << F << endl; // 输出
  system("pause");
  return 0;
}