/**
  * @file FileAssembler.h
  *
  * @team GenTest ( Team 22 )
  *
  * @brief Header for File Assembler
  *
  *
  * @version 1.00
  *          Tristan Miller ( 24 February 2019 )
  *          Began work on final system

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include "DataStructures.h"
#include "BinaryParser.h"

void buildFile( std::vector<Node> transEngineOutput, char * binaryFile,
        char * outputPath, char * translateCFG );

std::string stripNewLine( std::string stringToStrip );

std::string symbolicLine( std::string variableName, BinaryParser bp, std::string type );

void writeToFile( std::string fileLocation, std::string fileContents );