#define CATCH_CONFIG_MAIN // DO NOT define this anywhere else
#include "catch.hpp"
#include "BinaryParser.h"
#include "TranslationEngine.h"
#include "Util.h"
#include "DataStructures.h"

// BinaryParser Tests
TEST_CASE( "Test Parser and Iterator", "[binary_parser]" )

{
    BinaryParser bp;

    REQUIRE_THROWS( bp.getIterator() );
    REQUIRE_THROWS( bp.parse( "invalid_file_name" ) );

    bp.parse( "../test/test_data/binary_test_20b.test" );

    auto iter = bp.getIterator();

    SECTION( "Binary Iterator UChar" )
        {
            for( int index = 0; index < 20; ++index )
                {
                    // i know the layout of the file
                    unsigned char a = iter.nextUChar();
                    REQUIRE( a == (unsigned char) index  );

                }

            // end of the road, error should be thrown
            REQUIRE_THROWS( iter.nextUChar() );
        }

    SECTION( "Rewinding more positions than the size of the buffer "
             "resets index to zero."
             )
        {

            iter.rewind( 2000000 );
            REQUIRE( iter.nextUChar() == 0x00 );

            iter.rewind();
            iter.nextInt();
            REQUIRE( iter.nextUChar() == 0x04 );
        }

    iter.rewind();

    SECTION( "Binary Iterator Int" )
        {
            int a = iter.nextInt();

            // reverse order of bytes because x86 is little-endian
            REQUIRE( a == 0x03020100 );
        }

    iter.rewind( 200 );


}

    TEST_CASE( "Test Parser and Iterator with deepstate values", "[binary_parser]" ) {
    BinaryParser bp;

    bp.parse("../test/test_data/test.new");

    auto iter = bp.getIterator();

    SECTION("Binary Iterator Get Value")
    {
        while (true) {
            auto test = iter.nextInt();

            std::cout << test << std::endl;

            REQUIRE(test != -1406192183);
        }

        // end of the road, error should be thrown
    }
}

// FileAssembler Tests

// TranslationEngine Tests

// Util Tests

// Data Structures Tests
TEST_CASE( "TranslationDictionary Tests", "[translation_dictionary]")
{
    TranslationDictionary td;

    std::string testFileCorrect = "../test/test_data/catchTranslation.cfg";

    SECTION( "Test Loading of a correct file" )
    {
        td.setFile( testFileCorrect );

        REQUIRE( td.loadFile() == true );
    }

    SECTION( "Test Loading of an incorrect file" )
    {
        std::string testFileMissing = "../test/test_data/catchTranslationMissingVital.cfg";

        td.setFile( testFileMissing );

        REQUIRE( td.loadFile() == false );
    }

    td.setFile( testFileCorrect );

    td.loadFile();

    SECTION( "Test Searching of TranslationDictionary" )
    {
        REQUIRE( td.findTranslationFromNTerminal( ASSERT_EQ )->translateTo == "ASSERT_EQ" );
    }

}