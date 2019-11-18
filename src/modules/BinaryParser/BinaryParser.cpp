// Program Information //////////////////////////////////////////////
/**
  * @file BinaryParser.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief Creation of binary values using DeepState
  *
  * @details This class will be deconstruct binary files (foo.test) and create values
  *          for insertion into the vector class. This could potentially be added into
  *          the TranslationEngine ( or the TranslationEngine calls this )
  *
  * @version 1.00
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/
#include "BinaryParser.h"

#include <cstdint>
#include <cstring>
#include <stdexcept>

void BinaryParser::parse( const std::string& fileName )
{
    std::ifstream file( fileName,
                        std::ios::in | std::ios::binary
                      );

    // make sure an exception is thrown if the file
    // is not opened successfully
    file.exceptions( std::ifstream::badbit );
    fromStream( file );
}

void BinaryParser::parse( std::istream& inputStream )
{
    fromStream( inputStream ); 
}

BinaryIterator BinaryParser::getIterator()
{
    if( !data.size() )
        {
            throw std::runtime_error( "Iterator cannot be "
                                      "returned for empty binary "
                                      "data"
                                    );
        }
    return BinaryIterator( &data );
}

void BinaryParser::fromStream( std::istream& inputStream )
{
    std::string contents;
    inputStream.seekg( 0, std::ios::end );
    contents.resize( inputStream.tellg() );
    inputStream.seekg( 0, std::ios::beg );
    inputStream.read( &contents[ 0 ], contents.size() );

    data.resize( contents.size() );
    stringToData( contents );
}

void BinaryParser::stringToData( const std::string& string )
{
    const byte *dataPtr = ( const byte *) string.c_str();

    std::memcpy( &data[ 0 ],
                 dataPtr,
                 sizeof( byte ) * string.size()
               );
}
