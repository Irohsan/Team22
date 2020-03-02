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

//Comment added to register a change for creation of development branch

#include <iostream>
#include "TranslationEngine.h"
#include "FileAssembler.h"

//number of args (test, binary, output name)
int NUM_ARGS = 4;

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

    // Setting up some local variables to make code more readable
    char * binaryFile = args[ 2 ], 
	 * outputPath = args[ 3 ],
	 * translateCFG = args[ 4 ];

    // Create parser object.
    TranslationEngine parser;

    // Store fileToTranslate
    std::string fileToTranslate = args[ 1 ];

    // Get output.
    std::vector<Node> output = parser.getAST( fileToTranslate );

    buildFile(output, binaryFile, outputPath, translateCFG);

}
