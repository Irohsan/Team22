// Program Information //////////////////////////////////////////////
/**
  * @file FileAssembler.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief Will take values from the Vector storage and create a standalone test file
  *
  * @details This class will be used to translate from the context free grammar stored in the
  *          Vector class and construct a standalone test file iteratively. It will then
  *          output to a file with a name provided in the arguements.
  *
  * @version 0.01
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include <vector>

using namespace std;

class FileAssembler
{
    FileAssembler(char* outputFile )
    {
        //setup output data structure
        //maybe open file for output
    }


    void generateFile(vector* inputVector)
    {
        /** this could probably be done recursively for coolness factor, will need to insert values from
         *  the other storage bit with values into the cfg as well as using the cfg to create new files
         */

    }

    void output(/**Datastructure we create for file output**/ )
    {
        /** recursively or iteratively go through the data structure
         * output the file at one time as opposed to when each line is created
         * this will save some I/O time.
         */


    }
};