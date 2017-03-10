#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include "mathTest.h"


TEST_CASE( "factorial are computed", "[factor]" ) {
    REQUIRE( binpow(1) == 1 );
    REQUIRE( binpow(2) == 2 );
    REQUIRE( binpow(3) == 6 );
    REQUIRE( binpow(10) == 3628800 );
}


