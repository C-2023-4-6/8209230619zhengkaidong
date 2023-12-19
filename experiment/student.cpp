#include <iostream>
#include <cstring>
#include "student.h" // 不要漏写此行，否则编译通不过
using namespace std;

void Student ::display() // 在类外定义display类函数
{
  cout << "num: " << num << endl;
  cout << "name: " << name << endl;
  cout << "sex: " << sex << endl;
}

void Student ::set_value(int Num, string Name, char Sex)
{
  this->num = Num;
  this->name = Name;
  this->sex = Sex;
}