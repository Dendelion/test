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
    REQUIRE( factor(1) == 1 );
    REQUIRE( factor(2) == 2 );
    REQUIRE( factor(3) == 6 );
    REQUIRE( factor(10) == 3628800 );
}


