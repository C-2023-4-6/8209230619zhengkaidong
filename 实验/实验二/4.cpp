#include <iostream>
using namespace std;
int main()
{
  char s;
  int a, sum, b, i = 0;
  do
  {
    cin >> a;
    s = getchar();
    cin >> b;
    if ((s == '/') && (b == 0))
    {
      cout << "Divider cannot be 0" << endl;
      continue;
    }
    switch (s)
    {
    case '+':
      sum = a + b;
      i++;
      break;
    case '-':
      sum = a - b;
      i++;
      break;
    case '*':
      sum = a * b;
      i++;
      break;
    case '/':
      sum = a / b;
      i++;
      break;
    default:
      cout << "Couldn't find this operator,please whrite again." << endl;
      break;
    }
  } while (!i);
  cout << "the answer is " << sum;
  system("pause");
  return 0;
}