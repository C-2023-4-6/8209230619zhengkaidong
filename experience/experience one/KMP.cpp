#include <iostream>
#include <string>
using namespace std;

int n;
int m;

void GetNext(string str, int *next) // KMP算法
{
  next[0] = -1;
  next[1] = 0;
  int i = 1;
  int k = 0;
  while (i < n)
  {
    if (k == -1 || str[k] == str[i])
    {
      i++;
      k++;
      next[i] = k;
    }
    else
    {
      k = next[k];
    }
  }
}

int KMP(string str, string sub)
{
  if (str.empty() || sub.empty())
    return -1;
  int *next = new int[m];
  GetNext(str, next);
  int i = 0;
  int j = 0;
  while (i < m && j < n)
  {
    if (i == -1 || str[i] == sub[j])
    {
      i++;
      j++;
    }
    else
    {
      i = next[i];
    }
  }
  if (i == m)
  {
    return j - i;
  }
  return -1;
}

int main()
{
  cout << "The first string:";
  string sub, str;
  getline(cin, str);
  cout << "The second string:";
  getline(cin, sub);
  n = sub.size();
  m = str.size();
  int flag = KMP(str, sub);
  if (flag == -1)
    cout << "Sorry, the sub doesn't include str :" << -1 << endl;
  else
    cout << "We have found str in " << flag << endl;
  system("pause");
  return 0;
}