#include <iostream>
using namespace std;
const int binary = 32;             // 转换进制常数
double celsius_to_fah(double cell) // 摄氏转华氏
{
  float fah;
  fah = cell * 1.8 + binary;
  return fah;
}
double fahrenheit_to_cels(double fah) // 华氏转摄氏
{
  float cell;
  cell = (fah - binary) / 1.8;
  return cell;
}
