#include <iostream>
using namespace std;

class Point
{
private:
  int x;
  int y;

public:
  Point(int x, int y)
  {
    this->x = x;
    this->y = y;
    cout << "The original point is " << '(' << this->x << ", " << this->y << ')' << endl;
  }
  void setPoint(int i, int j);
  void display();
};

void Point::setPoint(int i, int j)
{
  this->x += i;
  this->y += j;
}

void Point::display()
{
  cout << "The changed point is " << '(' << this->x << ", " << this->y << ')' << endl;
}

int main()
{
  Point p(5, 6);
  p.setPoint(1, 1);
  p.display();
  system("pause");
  return 0;
}