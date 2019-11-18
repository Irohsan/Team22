// Program Information //////////////////////////////////////////////
/**
  * @file Util.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief Utility classes/functions go here
  *
  * @details This file will contain utility functions or classes that dont necessarily have
  *          another location to be.
  *
  * @version 0.01
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include "Util.h"


std::string TranslateDictionary::getTranslation( NTerminal nTToGet )
{
    return toTranslate.find( nTToGet )->second;
}

void TranslateDictionary::generateTranslateMapFromConfig()
{
    std::string line, key, value;

    auto iterator = toTranslate.begin();

    while( getline( translateFile, line ) )
    {
        key = line.substr( 0, line.find( "=" ) );

        value = line.substr( line.find( "=" ) + 1, line.length() );

        //really dirty way to populate toTranslate map
        toTranslate.insert( iterator, std::pair< NTerminal, std::string >
                ( needTranslateString.find(key)->second, value ) );
    }
}

void TranslateDictionary::openTranslateFile( const std::string& fileName )
{
    translateFile.open( fileName );

    //error handling for invalid file
    if( translateFile.fail() )
    {
        throw FileException(fileName, translateFile.fail() );
    }

}

