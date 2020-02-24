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
#include "FileAssembler.h"
#include "DataStructures.h"

void buildFile( std::vector<Node> transEngineOutput, char * binaryFile,
        char * outputPath, char * translateCFG )
{
    auto current = transEngineOutput.begin();

    auto size = transEngineOutput.size();

    TranslationDictionary translate;

    translate.setFile(translateCFG);

    if( !translate.loadFile() )
    {
        //TODO: Log if loading the file is bad
    }



    for( int currentTranslation = 0; currentTranslation < (int) size; currentTranslation++ )
    {


        std::cout << "Text: " << current->text << std::endl;

        current++;
    }
}