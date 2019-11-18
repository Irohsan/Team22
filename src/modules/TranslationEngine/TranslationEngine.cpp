// Program Information //////////////////////////////////////////////
/**
  * @file DataStructures.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief For deconstructing of DeepState tests into a context free grammar
  *
  * @details This class will be deconstruct DeepStates behaviours into a context-free grammar
  *          and store these values into a vector class. This vector class will then be sent
  *          to the File assembler for reconstruction into a standalone test
  *
  * @version 0.01
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout

 (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include "TranslationEngine.h"
#include <fstream>
#include <iostream>


const std::string SAMPLE_VALUE1 = "5323232323232323";
const std::string SAMPLE_VALUE2 = "531111332";



//CFG Functions
void CFG::add( NTerminal nonTerminal, std::string data )
{
    // Declare local variables.
    Line newLine;

    newLine.nonTerminalCode = nonTerminal;
    newLine.data = data;

    // Add newLine to vector.

    heldLine = newLine;
}

void CFG::toString()
{
    if( heldLine.nonTerminalCode == X_INT )
    {
        std::cout << "  int " << heldLine.data << " = " << SAMPLE_VALUE1 << ";\n";
    }
    else if( heldLine.nonTerminalCode == ASSERT_GE )
    {
        std::cout << "  ASSERT_GE" << heldLine.data << ";\n";
    }
    else
    {
        std::cout << heldLine.data << "\n";
    }
}

std::string CFG::getString()
{
    if( heldLine.nonTerminalCode == X_INT )
    {
        return "   int " + heldLine.data + " = " + SAMPLE_VALUE1 + ";\n";
    }
    else
    {
        return heldLine.data + "\n";
    }
}


//FileParser Functions
void FileParser::openHarnessFile( char * harnessFilePath )
{
    harnessFile.open( harnessFilePath );
}

void FileParser::scanFile()
{
    // Declare local variables.
    int recordFlag = 0;
    std::string line;

    while( getline( harnessFile, line ) )
    {
        if( line.find( "{" ) != std::string::npos
            && line.find( "(" ) != std::string::npos )
        {
            recordFlag = 1;
        }

        if( recordFlag )
        {
            scanLine( line );
        }

        if( line.find( "}" ) != std::string::npos )
        {
            recordFlag = 0;
        }

    }

}

void FileParser::scanLine( std::string line )
{
    // Declare local variables.
    std::string tempString;
    CFG newLine;

    if( line.find( "Symbolic" ) != std::string::npos
        || line.find( "symbolic" ) != std::string::npos )
    {
        // Strip whitespace
        line = removeWhitespace( line );

        // Find type
        if( line.find( "int" ) != std::string::npos )
        {
            // Set subset of untranslated line into tempString
            tempString = line.substr( line.find( "int" ) + 4, line.length() );
            tempString = tempString.substr( 0, tempString.find( ";" ));

            newLine.add( X_INT, tempString );
        }
        else if( line.find( "uint_8" ) != std::string::npos )
        {
            // Set subset of untranslated line into tempString
            tempString = line.substr( line.find( "uint_8" ) + 6, line.length() );
            tempString = tempString.substr( 0, tempString.find( ";" ));

            newLine.add( X_UINT8, tempString );
        }
        else if( line.find( "uint_16" ) != std::string::npos )
        {
            // Set subset of untranslated line into tempString
            tempString = line.substr( line.find( "uint_16" ) + 7, line.length() );
            tempString = tempString.substr( 0, tempString.find( ";" ));

            newLine.add( X_UINT16, tempString );
        }
        else if( line.find( "uint_32" ) != std::string::npos )
        {
            // Set subset of untranslated line into tempString
            tempString = line.substr( line.find( "uint_32" ) + 7, line.length() );
            tempString = tempString.substr( 0, tempString.find( ";" ));

            newLine.add( X_UINT32, tempString );
        }
        else if( line.find( "uint_64" ) != std::string::npos )
        {
            // Set subset of untranslated line into tempString
            tempString = line.substr( line.find( "uint_64" ) + 7, line.length() );

            newLine.add( X_UINT32, tempString );
        }
        else if( line.find( "short" ) != std::string::npos )
        {
            // Set subset of untranslated line into tempString
            tempString = line.substr( line.find( "short" ) + 4, line.length() );
            tempString = tempString.substr( 0, tempString.find( ";" ));

            newLine.add( X_SHORT, tempString );
        }
        else if( line.find( "long" ) != std::string::npos )
        {
            // Set subset of untranslated line into tempString
            tempString = line.substr( line.find( "long" ) + 4, line.length() );
            tempString = tempString.substr( 0, tempString.find( ";" ));

            newLine.add( X_LONG, tempString );
        }
    }
    else if( line.find( "DEEPSTATE_NOINLINE" ) != std::string::npos )
    {
        line = line.substr( line.find( "DEEPSTATE_NOINLINE" ) + 19,
                            line.length() );

        newLine.add( NO_TRANSLATE, line );
    }
    else if( line.find( "ASSERT" ) != std::string::npos )
    {
        if( line.find( "ASSERT_GE" ) != std::string::npos )
        {
            line = line.substr( line.find( "(" ), line.length() );

            newLine.add( ASSERT_GE, line );
        }
    }
    else
    {
        newLine.add( NO_TRANSLATE, line );
    }

    // Add to file vector.
    fileVector.push_back( newLine );
}

std::string FileParser::removeWhitespace( std::string line )
{
    // Declare local variables.
    int index = 0, newLineIndex = 0;
    std::string newLine;
    char charAtPos;

    while( index < (int)line.length() )
    {
        charAtPos = line.at( index );

        if( charAtPos != ' ' )
        {
            newLine.insert( newLineIndex, 1, charAtPos );

            newLineIndex++;
        }

        index++;
    }

    return newLine;
}

void FileParser::displayTranslatedFile()
{
    // Local variables.
    int index = 0;

    while( index < (int)fileVector.size() )
    {
        fileVector[ index ].toString();

        index++;
    }
}

void FileParser::writeToFile()
{
    std::ofstream outputFile;

    outputFile.open( "translated_test1.cpp" );

    // Local variables.
    int index = 0;

    while( index < (int)fileVector.size() )
    {
        outputFile << fileVector[ index ].getString();

        index++;
    }

    outputFile.close();

}


void runTranslator( char * harnessFilePath )
{
    //initialization of moduleParser
    FileParser moduleParser;

    //opens harness file (might want to add error handling)
    moduleParser.openHarnessFile( harnessFilePath );

    moduleParser.scanFile();

    moduleParser.displayTranslatedFile();
}
