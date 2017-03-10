#define CATCH_CONFIG_MAIN  
#include <iostream>
#include "catch.hpp"


TEST_CASE( "Pow are computed", "[binpow]" ) {
    REQUIRE( binpow(1,10) == 1 );
    REQUIRE( binpow(2,5) == 32 );
    REQUIRE( binpow(3,2) == 9 );
    REQUIRE( binpow(10,8) == 100000000 );
}


