#define CATCH_CONFIG_MAIN // DO NOT define this anywhere else

#include "catch.hpp"
#include "BinaryParser.h"
#include "TranslationEngine.h"
#include "Util.h"


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
            REQUIRE( iter.nextUChar() == 0x01 );
        }

    iter.rewind();

    SECTION( "Binary Iterator Int" )
        {
            int a = iter.nextInt();

            // reverse order of bytes because x86 is little-endian
            REQUIRE( a == 0x03020100 );

            a = iter.nextInt();
            REQUIRE( a == 0x04030201 );

            a = iter.nextInt();
            REQUIRE( a == 0x05040302 );

            a = iter.nextInt();
            REQUIRE( a == 0x06050403 );
        }

    iter.rewind( 200 );

}








// FileAssembler Tests







// TranslationEngine Tests
TEST_CASE( "Test File Parser", "[file_parser]")
{
    SECTION( "Initialize FileParser" )
    {
        //initialize fp
        FileParser fp;
    }

    SECTION( "Valid FileParser Load File" )
    {
        //initialize fp
        FileParser fp;

        REQUIRE_NOTHROW( fp.openHarnessFile( "../test/test_data/IntegerOverflow.cpp" ) );
    }

    SECTION( "Invalid FileParser Load File" )
    {
        FileParser fp;

        REQUIRE_THROWS_AS( fp.openHarnessFile( "../test/test_data/NoneExistentFile.cpp" ), FileException );
    }

    //needs translateDictionary to be implemented for use in getString
    SECTION( "Test for correct output" )
    {
        FileParser fp;

        //output from this test file
        std::string translated = "int ident1(int x) {\n"
                      "    return x;\n"
                      "}\n"
                      "int ident2(int x) {\n"
                      "    return x;\n"
                      "}\n"
                      "TEST(SignedInteger, AdditionOverflow) {\n"
                      "  int x = 5323232323232323;\n"
                      "    int y = ident1(x) + ident2(x);  // Can overflow!\n"
                      "  ASSERT_GE(y, 0);\n"
                      "            << \"Found y=\" << y << \" was not always positive.\";\n"
                      "}\n"
                      "TEST(SignedInteger, MultiplicationOverflow) {\n"
                      "  int x = 5323232323232323;\n"
                      "    int y = ident1(x) * ident2(x);  // Can overflow!\n"
                      "  ASSERT_GE(y, 0);\n"
                      "            << x << \" squared overflowed.\";\n"
                      "}";


        fp.openHarnessFile( "../test/test_data/IntegerOverflow.cpp");

        std::cout<<fp.translatedToString();
    }


}


// Util Tests

TEST_CASE("TranslateDictionary tests", "[translate_dictionary]")
{
    TranslateDictionary translateDictionary;

    translateDictionary.openTranslateFile( "../test/test_data/catchTranslation.cfg" );

    SECTION( "Test for TranslateDictionary Build" )
    {
        TranslateDictionary td;
    }

    SECTION( "Test for valid file open" )
    {
        TranslateDictionary td;

        REQUIRE_NOTHROW( td.openTranslateFile( "../test/test_data/catchTranslation.cfg" ) );
    }

    SECTION( "Test for invalid file open" )
    {
        TranslateDictionary td;

        REQUIRE_THROWS_AS( td.openTranslateFile( "../test/test_data/nonexistentTranslation.cfg" ), FileException );
    }


    SECTION( "Test for default translation population")
    {
        translateDictionary.buildDefaultTranslations();

        assert( translateDictionary.getSize() == 12 );
    }

    SECTION( "Test for config translation load" )
    {
        translateDictionary.generateTranslateMapFromConfig();

        assert( translateDictionary.getSize() == 21 );
    }

    SECTION( "Build full translation engine" )
    {
        translateDictionary.buildFullTranslationDictionary();

        assert( translateDictionary.getSize() == 33 );
    }

    SECTION( "Find string for NTerminal Value (default translations)" )
    {
        translateDictionary.buildFullTranslationDictionary();

        assert(translateDictionary.findNTerminal( X_INT ) == "int");
    }

    SECTION( "Find NTerminal for string (default translations)" )
    {
        translateDictionary.buildFullTranslationDictionary();

        assert( translateDictionary.findTranslateTo( "int" ) == X_INT );
    }

    //TODO: Fix these two tests
    SECTION( "Find string for NTerminal Value (generated translations)" )
    {
        translateDictionary.buildFullTranslationDictionary();

        assert(translateDictionary.findNTerminal( TEST_FUNC ) == "TEST");
    }

    SECTION( "Find NTerminal for string (generated translations)" )
    {
        translateDictionary.buildFullTranslationDictionary();

        assert( translateDictionary.findTranslateTo( "TEST" ) == TEST_FUNC );
    }

}