#include <iostream>
#include <stdlib>
using namespace std;

int binpow (int a, int n) {
	int res = 1;
	while (n) {
		if (n & 1)
			res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}

int main()
{
  int a, n;
  cout << "Input a and n: "
  cin >> a >> n;
  cout << "pow(" + a + ", " + n + ") = " + binpow(a,n);
  return 0;
}
