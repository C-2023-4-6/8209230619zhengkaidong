#include <iostream>
#include <cstring>
using namespace std;

void count(string c, int *counts)
{
  for (int i = 0; i < c.size(); i++) // 记录个数
  {
    if (c[i] >= 'a' && c[i] <= 'z')
      counts[c[i] - 'a']++;
    else if (c[i] >= 'A' && c[i] <= 'Z')
      counts[c[i] - 'A']++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (counts[i] != 0)
      cout << (char)('a' + i) << ':' << counts[i] << "times." << endl;
  }
}

int main()
{
  string c;
  int m(0);
  int counts[26];
  memset(counts, 0, 26 * 4); // 初始化
  getline(cin, c, '\n');
  count(c, counts);
  system("pause");
  return 0;
}