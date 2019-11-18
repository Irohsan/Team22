#include "catch.hpp"

#include <string>
#include <iostream>

TEST_CASE( "dummy_case", "[TranslationEngine" )
{
    std::string a( "String 1" );
    std::string b( "String 2" );
    REQUIRE( a.compare( b ) );
}
