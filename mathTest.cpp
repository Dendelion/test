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

int factor(int n)
{
   int res = 1;
   for ( int i = 2; i <= n; i++ ) {
       res *= i;
   }
   return res;
}
