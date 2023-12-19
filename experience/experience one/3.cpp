#include <iostream>
#include "mytemperature.h"
using namespace std;
int main()
{
  double cel, fah;
  while (1)
  {
    cin >> cel >> fah;
    cout << cel << "\t" << celsius_to_fah(cel) << '\t' << "\t" << '|' << '\t' << fah << "\t" << fahrenheit_to_cels(fah) << endl;
  }
  system("pause");
  return 0;
}