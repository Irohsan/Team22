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
#include <algorithm>

void buildFile( std::vector<Node> transEngineOutput, char * binaryFile,
        char * outputPath, char * translateCFG );

std::string symbolicLine( const std::string& variableName, BinaryIterator * iterator, const std::string& type );

std::string deepstateTypeReturn( Node currentNode, std::string currentString, BinaryIterator * it  );

std::string questionConversion( std::string previousText, NTerminal currentNTerminal, TranslationDictionary * dictionary );

std::string questionTranslation( const TranslationEntry& translation, const std::string& originalString );

int questionClosingParen( const std::string& args );

std::vector<std::string> symbolicValHandle( std::string currentString, BinaryIterator * it, std::string& dataType );

std::vector<std::string> questionHandle(TranslationDictionary * translate, NTerminal current, const std::string& currentString );

std::vector<std::string> deepstateQuestionHandle( TranslationDictionary * translate, const std::string& currentString );

std::vector<std::string> deepstateTypeHandle( const std::string& currentString, BinaryIterator * it, Node * current );

std::vector<std::string> structHandle( const std::string& currentString, StructHandler * handler, Node * current, BinaryIterator * it );

std::string questionWhichCheck( const std::string& toCheck, const std::string& baseCase );

NTerminal findBaseCase( NTerminal currentCase );

void writeToFile( const std::string& fileLocation, const std::string& fileContents );