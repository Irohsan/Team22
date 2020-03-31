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

std::string symbolicLine( const std::string& variableName, BinaryIterator * iterator, const std::string& type );

std::string questionConversion( std::string previousText, NTerminal currentNTerminal, TranslationDictionary * dictionary );

std::string questionTranslation( const TranslationEntry& translation, const std::string& originalString );

int questionClosingParen( const std::string& args );

std::string generatePadding( int depth );

std::string stripWhiteSpace( const std::string& toStrip );

std::string questionWhichCheck( const std::string& toCheck, const std::string& baseCase );

int commaLocation( const std::string& toFind );

NTerminal findBaseCase( NTerminal currentCase );

void writeToFile( const std::string& fileLocation, const std::string& fileContents );