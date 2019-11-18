#include "catch.hpp"
#include <string>

TEST_CASE( "File Load", "[BinaryParser]" )
{
    std::string a( "String 1" );
    std::string b( "String 2" );
    REQUIRE( a.compare( b ) );
}