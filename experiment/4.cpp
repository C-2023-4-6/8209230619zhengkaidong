#include <iostream>
using namespace std;

class Student
{
private:
  long long numb;
  int score;
  static int bestNumb;
  static int bestScore;

public:
  Student(int N, int S)
  {
    this->numb = N;
    this->score = S;
    if (this->score > bestScore)
    {
      bestNumb = this->numb;
      bestScore = this->score;
    }
  }
  static void showTheBestOne();
};

void Student ::showTheBestOne()
{
  cout << "The best one's numb is " << bestNumb << " , and his(her) score is " << bestScore << endl;
}

int Student::bestScore = 0;
int Student::bestNumb = 0;

int main()
{
  Student s1(230619, 100), s2(230719, 10), s3(230819, 0);
  Student::showTheBestOne();
  system("pause");
  return 0;
}