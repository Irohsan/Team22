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

void buildFile( std::vector<Node> transEngineOutput, char * binaryFile,
        char * outputPath, char * translateCFG )
{
    std::map<std::string, std::string> varMap;

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
            output += translate.findTranslationFromNTerminal(INCLUDE)->translateTo + '\n';
        }
        else if( current->type == SYMBOLIC )
        {
            //locate the variable name
            auto startOfVar = currentString.find_last_of(' ') + 1;

            auto endOfVar = currentString.find(';');

            std::string variableName = currentString.substr(startOfVar, endOfVar - startOfVar );

            output += symbolicLine( variableName, bp, current->datatype ) + '\n';
        }

        //get rid of namespace
        else if( currentString.find("using namespace deepstate;") != std::string::npos )
        {
            currentString = "";
        }
        else if( current->type == FUNC && currentString.find(S_DEEPSTATE_NOINLINE) != std::string::npos )
        {
            size_t found = currentString.find(S_DEEPSTATE_NOINLINE);

            output += translate.findTranslationFromNTerminal(NO_INLINE)->translateTo +
                    currentString.substr(S_DEEPSTATE_NOINLINE.length());
        }
        else
        {
            output+=currentString + "\n";
        }

        current++;
    }

    writeToFile( outputPath, output);
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

std::string symbolicLine( std::string variableName, BinaryParser bp, std::string type )
{
    std::string outputString;

    auto iterator = bp.getIterator();

    if( type == "int" )
    {
        outputString = "int " + variableName + " = " + std::to_string( iterator.nextInt() );
    }
    else if( type == "char" )
    {
        outputString = "char " + variableName + " = " + std::to_string( iterator.nextChar() );
    }
    else if( type == "long" )
    {
        outputString = "long " + variableName + " = " + std::to_string( iterator.nextLong() );
    }
    else if( type == "double" )
    {
        outputString = "double " + variableName + " = " + std::to_string( iterator.nextDouble() );
    }
    else if( type == "float" )
    {
        outputString = "float " + variableName + " = " + std::to_string( iterator.nextFloat() );
    }
    else if( type == "short" )
    {
        outputString = "short " + variableName + " = " + std::to_string( iterator.nextShort() );
    }
    //TODO: Support all data types

    return outputString + ';';
}

void writeToFile( std::string fileLocation, std::string fileContents )
{
    std::ofstream outputFile;

    outputFile.open( fileLocation );

    outputFile<<fileContents<<std::endl;

    outputFile.close();
}