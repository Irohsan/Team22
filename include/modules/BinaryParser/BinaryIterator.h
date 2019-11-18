// Program Header Information ///////////////////////////
/**
 * @file BinaryIterator.h
 *
 * @team GenTest ( Team 22 )
 *
 * @brief Header file for BinaryIterator class
 *
 * @details Contains function definitions for the BinaryIterator
 *
 * @version 1.00
 *          Zane Fink
 *          Initial development of the BinaryIterator Class
 *
 */

#ifndef BINARY_ITERATOR_HH_INCLUDED
#define BINARY_ITERATOR_HH_INCLUDED
#include <vector>
#include <cstddef>
#include <stdexcept>

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
     * @throws std::runtime_error if there is not enough 
     *         space for another member of type T.
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
                    return T( *(T*) &( dataPtr->at( index++ ) ) );
                }
            throw std::runtime_error( "Specified type requested is larger than "
                                      "the remaining memory."
                                      );
        }

    /**
     * Rewind the iterator back one position.
     * This is equivalent to calling
     * BinaryIterator::rewind( 1 )
     **/
    void rewind();

    /**
     * Rewind the iterator's pointer back 
     * step bytes.
     * @param step the number of bytes to rewind the 
     *        iterator.
     * @note If step > index, the iterator 
     *       points to the 0'th position.
     **/
    void rewind( std::size_t step );

    // Begin template specializations for primitive types

    /**
     * Get the next integer from the BinaryIterator
     * @returns an integer from the Iterator's data.
     **/
    int nextInt();

    /**
     * Get the next unsigned char from the BinaryIterator
     * @returns an unsigned char from the Iterator's data.
     **/
    unsigned char nextUChar();

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
