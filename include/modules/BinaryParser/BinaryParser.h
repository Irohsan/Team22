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
};

#endif // BINARY_PARSER_HH_INCLUDED
