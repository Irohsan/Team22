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

std::string symbolicLine( std::string variableName, BinaryIterator * iterator, std::string type );

std::string questionConversion( std::string previousText, NTerminal currentNTerminal, TranslationDictionary * dictionary );

std::string questionTranslation( TranslationEntry translation, std::string originalString );

int questionClosingParen( std::string args );

std::string stripWhiteSpace( std::string toStrip );

std::string questionWhichCheck( std::string toCheck, std::string baseCase );

int commaLocation( std::string toFind );

NTerminal findBaseCase( NTerminal currentCase );

void writeToFile( std::string fileLocation, std::string fileContents );