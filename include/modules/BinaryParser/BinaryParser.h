//
// Created by craps on 11/5/2019.
//

#ifndef BINARY_PARSER_HH_INCLUDED
#define BINARY_PARSER_HH_INCLUDED

#include <bitset>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/**
 * Type alias byte to unsigned char 
 * to make its use more clear.
 **/
using byte = unsigned char;

/**
 * A BinaryParser reads unstructured binary data 
 * from a filestream and stores the data internally. 
 **/
class BinaryParser
{
 public:
    BinaryParser() = default;

 private:

    /**
     * Represents unstructured binary data.
     * Each byte is represented by an unsigned char.
     **/
    std::vector<byte> data;

    /**
     * Method to convert a string to unstructured binary 
     * data. This method takes the byte values in string 
     * and stores them in this->data.
     * @param string The string from which to take input.
     * @post data[ x ] = string[ x ] for x from zero to string.length() 
     **/
    void stringToData( const std::string& string );

    /**
     * Get unstructured binary data from a stream.
     * @param inputStream THe input stream to get the data 
     *        from.
     * @pre inputStream is a reference to a valid 
     *      inputStream, i.e. operations on inputStream
     *      are defined.
     **/
    void fromStream( std::istream& inputStream );
    

};

#endif // BINARY_PARSER_HH_INCLUDED
