#include <iostream>
using namespace std;

class Cuboid
{
private:
  int length;
  int width;
  int heigh;
  int volume;
  static int sumVolume;

public:
  Cuboid()
  {
    cin >> this->length >> this->width >> this->heigh;
  }
  void countVolume();
  static void showSumVolume()
  {
    cout << "the summary of all the cuboids is " << sumVolume << endl;
  }
};

void Cuboid::countVolume()
{
  this->volume = this->heigh * this->width * this->length;
  sumVolume += this->volume;
}

int Cuboid::sumVolume = 0;

int main()
{
  Cuboid c1, c2, c3;
  c1.countVolume();
  c2.countVolume();
  c3.countVolume();
  Cuboid::showSumVolume();
  system("pause");
  return 0;
}