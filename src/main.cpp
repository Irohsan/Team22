// Program Information //////////////////////////////////////////////
/**
  * @file main.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief This will be the main runner class for GenTest
  *
  * @details This class will be used for creating and starting GenTest
  *          and its other functions
  *
  * @version 0.01
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include <iostream>
#include "TranslationEngine.h"
#include "FileAssembler.h"

//number of args (test, binary, output name)
const static int NUM_ARGS = 3;

using namespace std;

int main( int numArgs, char** args )
{
    //numArgs - 1 because args[0] is the name of the program
    if( numArgs - 1 != NUM_ARGS )
    {
        //probably want to create/utilize some sort of logger

        cout << "Invalid number of args" << endl;

        return 0;
    }

    //setting up some local variables to make code more readable
    char * fileToTranslate = args[ 1 ],

    * binaryFile = args[ 2 ],

    * outputPath = args[ 3 ];

    FileWriter writer;

    //TODO: Detect if valid DeepState test file ( args[ 1 ] ) stretch goal maybe?

    //auto keyword automatically gets the type at compile time
    //for now I am passing the binaryFile into the TranslationEngine as some functions in it use the binary parser
    auto output = runTranslator( fileToTranslate, binaryFile );

    //pass binary file into binary parser (this might be done in the translation engine)

    writer.initialize( output, outputPath, binaryFile );

    writer.writeOutput();

    //take vector and pass into FileAssembler

    //take output of FileAssembler and write to output file (args[2])
}
