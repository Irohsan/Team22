#include "catch.hpp"

#include <string>
#include <iostream>

TEST_CASE( "dummy_case", "[BinaryParser]" )
{
    std::string a( "String 1" );
    std::string b( "String 2" );
    REQUIRE( a.compare( b ) );
}
