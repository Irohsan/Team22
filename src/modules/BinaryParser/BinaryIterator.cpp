#include "BinaryIterator.h"
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
