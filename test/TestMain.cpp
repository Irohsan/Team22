#define CATCH_CONFIG_MAIN // DO NOT define this anywhere else
#include "catch.hpp"
#include "BinaryParser.h"
#include "TranslationEngine.h"
#include "FileAssembler.h"
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

TEST_CASE( "Test TranslationDictionary and correct operations", "[file_assembler]")
{
    std::string correctFile = "../test/test_data/gtestTranslation.cfg";

    std::string incorrectFile = "../test/test_data/gtestTranslationMissingVital.cfg";

    SECTION( "Test correct loading of a file" )
    {
        TranslationDictionary translate;

        assert( translate.loadFile( correctFile ) );
    }

    SECTION( "Identify incorrect load of a file" )
    {
        TranslationDictionary translate;

        assert( !translate.loadFile( incorrectFile ) );
    }

    TranslationDictionary translate;

    translate.loadFile(correctFile);

    SECTION( "Test that values can be pulled from the translation dictionary")
    {
        auto entry = translate.findTranslationFromNTerminal(ASSUME);

        assert( entry.nTerminal == ASSUME );

        assert( entry.nTerminalVal == "ASSUME");

        //not invalid translation
        assert( !entry.newEntry );

        //translation has been added
        assert( entry.translationAdded );

        assert( entry.translateTo == "ASSUME" );
    }

    SECTION( "Test that invalid translations are identified" )
    {
        //invalid translation
        auto entry = translate.findTranslationFromNTerminal(ASSERT_GT);

        //assert that this entry doesn't exist
        assert( entry.newEntry );
    }
}

TEST_CASE( "Build File Helper Functions", "[file_assembler]")
{
    TranslationDictionary td;

    std::string correctCFGFile = "../test/test_data/gtestTranslation.cfg";

    td.loadFile(correctCFGFile);

    BinaryParser bp;

    std::string binaryFile = "../test/test_data/test.fail";

    bp.parse( binaryFile );

    SECTION("symbolicLine tests")
    {
        auto it = bp.getIterator();

        std::string types[] = {"int", "char", "long", "double", "float", "short", "unsigned", "bool"};

        for( auto &&type : types )
        {
            auto itCopy = it;

            std::string expected = type + " name = ";

            auto output = symbolicLine( "name", &it, type );

            if( type == "int" )
            {
                 expected += std::to_string( itCopy.nextInt() );
            }
            else if( type == "char" )
            {
                expected += std::to_string( itCopy.nextChar() );
            }
            else if( type == "long" )
            {
                expected += std::to_string( itCopy.nextLong() );
            }
            else if( type == "double" )
            {
                expected += std::to_string( itCopy.nextDouble() );
            }
            else if( type == "float" )
            {
                expected += std::to_string( itCopy.nextFloat() );
            }
            else if( type == "short" )
            {
                expected += std::to_string( itCopy.nextShort() );
            }
            else if( type == "unsigned" )
            {
                expected += std::to_string( itCopy.nextUInt() );
            }
            else if( type == "bool" )
            {
                expected += std::to_string( itCopy.nextBool() );
            }

            expected += ";";

            assert( expected == output );

        }
    }




}

// TranslationEngine Tests

// Util Tests

// Data Structures Tests
