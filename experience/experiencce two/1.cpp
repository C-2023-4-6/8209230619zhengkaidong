#include <iostream>
#include <map>
using namespace std;
int main()
{
  int a[10];
  map<int, bool> mp; // 设置int为key值，若出现则value为1，表明已访问。
  mp.clear();
  for (int i = 0; i < 10; i++)
  {
    cin >> a[i];
    if (!mp[a[i]])
    {
      mp[a[i]] = 1;
      cout << a[i] << ' ';
    }
  }
  system("pause");
  return 0;
}