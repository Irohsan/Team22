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

//number of args (test, binary, output name)
const static int NUM_ARGS = 3;

using namespace std;

int main( int numArgs, char** args )
{
    //declare output from translator
    std::vector< std::vector< Line > > outputFromTranslator;

    if( numArgs - 1 != NUM_ARGS )
    {
        //probably want to create/utilize some sort of logger

        cout << "Invalid number of args" << endl;
    }

    //Detect if valid DeepState test file (args[1])

    //pass into TranslationEngine with Vector pointer

    //auto keyword automatically gets the type
    auto output = runTranslator( args[ 1 ], args[ 2 ], args[ 3 ] );

    //pass binary file into binary parser (this might be done in the translation engine)

    //take vector and pass into FileAssembler

    //take output of FileAssembler and write to output file (args[2])
}
