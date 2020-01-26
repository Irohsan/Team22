
// Program Header Information ///////////////////////////
/**
 * @file FileAssembler.h
 *
 * @team GenTest ( Team 22 )
 *
 * @brief Header file for the FileAssembler system
 *
 * @details Contains function definitions for the FileAssembler
 *
 * @version 1.00
 *          Tristan Miller (11/17/19)
 *          Initial development of the FileAssembler
 */


#include "Util.h"
#include "DataStructures.h"
#include "BinaryParser.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>

#ifndef GENTEST_FILEASSEMBLER_H
#define GENTEST_FILEASSEMBLER_H

class FileWriter
{
public:

    void initialize( std::vector< std::vector< Line > > cfgVector, std::string fileName, std::string binaryFile );

    void displayFunctionAt( int index );

    void writeOutput();

    void writeFunctionAt( int index );

    void setIndentLevel( int indentLevel );

private:
// Private file variables
    std::ofstream outputFile;
    std::vector< std::vector< Line > > fileVector;

// Output file name.
    std::string fileName;

// Output field variables.
    bool stateReady = false;
    int indentLevel;

    void writeHeader();

    std::string repeatString( const std::string string, int times );

    std::string indentLine();

};

#endif GENTEST_FILEASSEMBLER_H