#include <iostream>
#include <string>
using namespace std;

int flag;

int main()
{
  string s1, s2;
  flag = -1;
  cout << "the first string:";
  getline(cin, s1, '\n');
  cout << "the second string:";
  getline(cin, s2, '\n');
  int n = s1.size();
  int m = s2.size();
  for (int i = 0; i < m - n; i++) // BF算法
  {
    int t1 = 0;
    int t2 = i;
    while (s1[t1] == s2[t2])
    {
      t2++;
      t1++;
      if (t1 == n)
      {
        flag = i;
        cout << flag << endl;
      }
    }
  }
  if (flag == -1)
    cout << -1;
  system("pause");
  return 0;
}