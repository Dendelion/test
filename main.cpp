#include <iostream>
#include <stdlib>
#include "binpow.h"
using namespace std;

int main()
{
  int a, n;
  cout << "Input a and n: "
  cin >> a >> n;
  cout << "pow(" + a + ", " + n + ") = " + binpow(a,n);
  return 0;
}
