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
