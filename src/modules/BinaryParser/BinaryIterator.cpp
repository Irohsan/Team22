// Program Information //////////////////////////////////////////////
/**
  * @file BinaryIterator.cpp
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
  *          Zane Fink
  *          Created skeleton for class layout

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include "BinaryIterator.h"

int BinaryIterator::nextInt()
{
    return next<int>();
}

unsigned int BinaryIterator::nextUInt()
{
    return next <unsigned int>();
}

unsigned char BinaryIterator::nextUChar()
{
    return next<unsigned char>();
}

char BinaryIterator::nextChar()
{
    return next<char>();
}

std::size_t BinaryIterator::nextSize_t()
{
    return static_cast<std::size_t>( 0 );
}

short BinaryIterator::nextShort()
{
    return static_cast<short>( 0 );
}

void BinaryIterator::rewind()
{
    rewind( 1 );
}

void BinaryIterator::rewind( std::size_t step )
{
    if( step > index )
        {
            index = 0;
        }
    else
        {
            index -= step;
        }
}

std::uint64_t BinaryIterator::nextUInt64()
{

    return static_cast<std::uint64_t>( 0 );
}

std::int64_t BinaryIterator::nextInt64()
{
    return static_cast<std::int64_t>( nextUInt64() );
}

std::uint16_t BinaryIterator::nextUInt16()
{

    return static_cast<std::uint16_t>( 0 );
}

std::int16_t BinaryIterator::nextInt16()
{
    return static_cast<std::int16_t>( nextUInt16() );
}

long BinaryIterator::nextLong()
{
    return static_cast<long>( 0 );
}

float BinaryIterator::nextFloat()
{
    return static_cast<float>( 0 );
}

double BinaryIterator::nextDouble()
{
    return static_cast<double>( 0 );
}

int BinaryIterator::nextRandInt()
{
    return static_cast<int>( 0 );
}

bool BinaryIterator::nextBool()
{
    return false;
}

std::string BinaryIterator::nextString( std::size_t len, const std::string *allowed )
{

    return "";
}

void BinaryIterator::reset()
{
    index = 0;
}
