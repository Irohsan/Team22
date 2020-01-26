// Program Header Information ///////////////////////////
/**
 * @file TranslationEngine.h
 *
 * @team GenTest ( Team 22 )
 *
 * @brief Header file for the TranslationEngine system
 *
 * @details Contains NonTerminals and function definitions for the TranslationEngine
 *
 * @version 1.00
 *          Joshua Johnson (11/16/19)
 *          Initial development of the TranslationEngine
 */

#ifndef GENTEST_TRANSLATIONENGINE_H
#define GENTEST_TRANSLATIONENGINE_H


/******************************
* Included Files
*******************************/


#include "Util.h"
#include "DataStructures.h"
#include "BinaryParser.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>


/******************************
* Class Definitions
*******************************/


class SymbolicProcessor
{
    public:

    void setBinaryFile( std::string binaryFile );

    std::string appendData( NTerminal header, std::string lineBody );

    private:

    // Private field variables.
    BinaryParser binaryParser;
    BinaryIterator iter = nullptr;
    std::string filename;
    
    // Constant field variables.
    const char demoDummyCharArray[ 10 ] = { 'a', 'z', 'b', 't', 'l', 'm', 'o', 'p', 'j', 'k' };


    std::vector< std::string > splitLine( std::string line, const std::string delimitor,
                                          const std::string delimitor2 = EMPTY_STRING,
                                          bool keepEnd = false );

    std::string substr( std::string str, int beginPos, int endPos );
};

class Parser
{
public:
    void setFile( char * filePath );

    void closeFile();

    void runParser();

    std::vector< std::vector< Line > > getOutputVector();

    void setBinaryFile( std::string binaryFilePath );


private:
    CFGDictionary cfgd;
    std::vector< std::vector< Line > > fileVector;
    SymbolicProcessor symbolic_p;
    std::string binaryFile;
    int functionHandle = -1;
    std::fstream harnessFile;

    void parseLine( std::string line );

    std::vector< std::string > splitLine( std::string line, const std::string delimitor,
                                          const std::string delimitor2 = EMPTY_STRING,
                                          bool keepEnd = false );

    std::string substr( std::string str, int beginPos, int endPos );

    std::string stripBeginWhiteSpace( std::string str );

    bool isFunction( std::string line );

    bool isSymbolic( std::string line );

    bool isFor( std::string line );

    bool isIf( std::string line );

    bool isTest( std::string line );

    bool isAssert( const std::string& line );

    bool isAssume( const std::string& line );

    bool isCheck( const std::string& line );
};

std::vector< std::vector< Line > > runTranslator( char * harnessFilePath, char * binaryFile );

#endif //GENTEST_TRANSLATIONENGINE_H
