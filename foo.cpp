#define CATCH_CONFIG_MAIN  
#include <iostream>
#include "catch.hpp"

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

TEST_CASE( "Pow are computed", "[binpow]" ) {
    REQUIRE( binpow(1,10) == 1 );
    REQUIRE( binpow(2,5) == 32 );
    REQUIRE( binpow(3,2) == 9 );
    REQUIRE( binpow(10,8) == 100000000 );
}

