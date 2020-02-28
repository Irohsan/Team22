/**
  * @file FileAssembler.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief This will handle the reassembly of the standalone test
  *
  * @details This file will take in the output from the Translation Engine
  *          and utilize the binary parser to insert and generate a standalone test
  *
  * @version 1.00
  *          Tristan Miller ( 24 February 2019 )
  *          Began work on final system

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/
#include <BinaryParser.h>
#include "FileAssembler.h"
#include "DataStructures.h"

void buildFile( std::vector<Node> transEngineOutput, char * binaryFile,
        char * outputPath, char * translateCFG )
{
    auto current = transEngineOutput.begin();

    auto size = transEngineOutput.size();

    std::string output = "";

    BinaryParser bp;

    bp.parse( binaryFile );

    TranslationDictionary translate;

    translate.setFile(translateCFG);

    if( !translate.loadFile() )
    {
        //TODO: Log if loading the file is bad
    }

    for( int currentTranslation = 0; currentTranslation < (int) size; currentTranslation++ )
    {
        //maybe move individual translations to a seperate class/function that the translation is passed into
        //convert testing library to correct library

        std::string currentString = current->text;

        //strip the \n on everything but comments to make it consistent
        //comments do not have a \n at the end of their statement
        if( current->type != COMMENT )
        {
            currentString = stripNewLine( currentString );
        }

        //translate the deepstate include statement
        if( current->type == INCLUDE && current->text.find(INCLUDE_STATEMENT) != std::string::npos )
        {
            currentString = translate.findTranslationFromNTerminal(INCLUDE)->translateTo;
        }

        if( current->type == SYMBOLIC )
        {
            //TODO: Insertion of values
        }

        output+=currentString + "\n\n";

        current++;
    }

    //TODO: Save to file instead of just printing
    std::cout<<output;
}

std::string stripNewLine( std::string stringToStrip )
{
    while( stringToStrip.find('\n') != std::string::npos )
    {
        auto location = stringToStrip.find('\n');

        stringToStrip.erase( location, 1 );
    }

    return stringToStrip;
}