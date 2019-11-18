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

unsigned char BinaryIterator::nextUChar()
{
    return next<unsigned char>();
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
