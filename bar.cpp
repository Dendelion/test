#define CATCH_CONFIG_MAIN  
#include "catch.hpp"

int factor(int n)
{
   int res = 1;
   for ( int i = 2; i <= n; i++ ) {
       res *= i;
   }
   return res;
}

TEST_CASE( "factorial are computed", "[factor]" ) {
    REQUIRE( binpow(1) == 1 );
    REQUIRE( binpow(2) == 2 );
    REQUIRE( binpow(3) == 6 );
    REQUIRE( binpow(10) == 3628800 );
}


