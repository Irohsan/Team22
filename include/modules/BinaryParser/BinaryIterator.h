#ifndef BINARY_ITERATOR_HH_INCLUDED
#define BINARY_ITERATOR_HH_INCLUDED
#include <vector>
#include <cstddef>

using byte = unsigned char;

/**
 * A BinaryIterator enables the retrieval of 
 * concrete data from unstructured binary data. 
 **/
class BinaryIterator
{
 public:
    /**
     * Create a BinaryIterator with a pointer to 
     * data.
     * @param data A pointer to the data vector 
     *        this object will iterate over.
     **/
    BinaryIterator( std::vector<byte> *data )
        : dataPtr( data ), index( 0 ) {}

    /**
     * Get the next item from the binary data.
     * Template type allows for the retrieval of 
     * different types from the same data.     
     * @note this method advances the iterator
     * @returns T initialized from the unstructured 
     *          binary data
     **/
    template <typename T>
        T next()
        {
            // ensure we have at least one more T in our
            // data
            if( index < dataPtr->size()
                && ( dataPtr->size() - index ) >= sizeof( T ) 
              )
                {
                    // TODO: endianness?
                    return T( (T*) &( dataPtr->at( index++ ) ) );
                }
        }

 private:
    /**
     * A pointer to unstructured binary data.
     **/
    std::vector<byte> *dataPtr;

    /**
     * The current index of the iterator.
     **/
    std::size_t index;
};

#endif // BINARY_ITERATOR_HH_INCLUDED
