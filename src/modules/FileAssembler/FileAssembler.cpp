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

#include "FileAssembler.h"

/**
      *   Function Name: initialize
      *   -------------------------------------------------------
      *   Algorithm: Takes a cfgVector and a filename for the output file.
      *              Opens the ouptut file internally and sets internal field variables.
      *
      *   Preconditions: A valid cfgVector and output filename.
      *   Postconditions: All field variables configured internally.
      *
      *   Notes: N/A
    **/
void FileWriter::initialize( std::vector< std::vector< Line > > cfgVector, std::string fileName, std::string binaryFile )
{
    // Initialize values.
    this->stateReady = true;
    this->indentLevel = 2;
    this->fileName = fileName;
    this->outputFile.open( fileName );

    // Copy vector.
    for( int index = 0; index < (int) cfgVector.size(); index++ )
    {
        this->fileVector.push_back( cfgVector.at( index ) );
    }
}


/**
  *   Function Name: displayFunctionAt
  *   -------------------------------------------------------
  *   Algorithm: Displays the function held at the index in
  *              the file vector.
  *
  *   Preconditions: A valid index within the range of the fileVector size.
  *   Postconditions: All lines of the function printed to the screen.
  *
  *   Notes: N/A
**/
void FileWriter::displayFunctionAt( int index )
{
    if( index < (int) this->fileVector.size() && this->stateReady )
    {
        for( int funcIndex = 0; funcIndex < (int) fileVector.at( index ).size(); funcIndex++ )
        {
            // Fetch Current Line
            Line currentLine = fileVector.at( index ).at( funcIndex );

            if( currentLine.getHeaderNt() != NO_TRANSLATE
                && currentLine.getHeaderNt() != TEST
                && currentLine.getHeaderNt() != DEEPSTATE_NOINLINE )
            {
                // Ident the line.
                std::cout << indentLine();
                currentLine.toString( true );
            }
            else
            {
                currentLine.toString();
            }
        }
    }
}


/**
  *   Function Name: writeOutput
  *   -------------------------------------------------------
  *   Algorithm: Takes the internal cfgVector and writes each
  *              stored function to the file specified in filename.
  *
  *   Preconditions: A valid filename and cfgVector configured in the object.
  *   Postconditions: A file is created with the translated syntax.
  *
  *   Notes: N/A
**/
void FileWriter::writeOutput()
{
    // Write file header.
    writeHeader();

    // Loop through all functions in the file and display each line.
    for( int index = 0; index < (int) this->fileVector.size(); index++ )
    {
        // Write the lines for the function at index.
        writeFunctionAt( index );

        // Output a newline for formatting reasons.
        this->outputFile << std::endl;
    }

    this->outputFile << "\n";
    this->outputFile << "int main(int argc, char **argv) \n{\n testing::InitGoogleTest(&argc, argv); \n return RUN_ALL_TESTS(); \n}\n";
}


/**
  *   Function Name: writeFunctionAt
  *   -------------------------------------------------------
  *   Algorithm: Takes an index and writes the function to file
  *              at that index in the fileVector.
  *
  *   Preconditions: A valid index.
  *   Postconditions: All function lines written to file.
  *
  *   Notes: N/A
**/
void FileWriter::writeFunctionAt( int index )
{
    // If the fileVector is initialized.
    if( index < (int) this->fileVector.size() && this->stateReady )
    {
        // Itereate through all lines in the function, starting from the function header.
        for( int funcIndex = 0; funcIndex < (int) fileVector.at( index ).size(); funcIndex++ )
        {
            // Fetch Current Line
            Line currentLine = fileVector.at( index ).at( funcIndex );

            // Non-Terminal line case.
            if( index < (int) fileVector.at( index ).size() - 1 )
            {
                if( currentLine.getHeaderNt() != NO_TRANSLATE
                    && currentLine.getHeaderNt() != TEST
                    && currentLine.getHeaderNt() != DEEPSTATE_NOINLINE
                    && fileVector.at( index ).at( funcIndex + 1 ).getBody().find( "<<" ) == std::string::npos )
                {
                    // Ident the line.
                    this->outputFile << indentLine();
                    this->outputFile << currentLine.getString( true ) << std::endl;
                }
                else if( currentLine.getHeaderNt() != NO_TRANSLATE
                         && currentLine.getHeaderNt() != TEST
                         && currentLine.getHeaderNt() != DEEPSTATE_NOINLINE
                         && fileVector.at( index ).at( funcIndex + 1 ).getBody().find( "<<" ) != std::string::npos )
                {
                    // Ident the line.
                    this->outputFile << indentLine();
                    this->outputFile << currentLine.getString() << std::endl;
                }
                else
                {
                    this->outputFile << currentLine.getString() << std::endl;
                }

            }
            else
            {
                if( currentLine.getHeaderNt() != NO_TRANSLATE
                    && currentLine.getHeaderNt() != TEST
                    && currentLine.getHeaderNt() != DEEPSTATE_NOINLINE )
                {
                    // Ident the line.
                    this->outputFile << indentLine();
                    this->outputFile << currentLine.getString( true ) << std::endl;
                }
                else
                {
                    this->outputFile << currentLine.getString() << std::endl;
                }
            }
        }
    }
}

/**
  *   Function Name: setIndentLevel
  *   -------------------------------------------------------
  *   Algorithm: Sets the internal number of spaces that will
  *              be written to file or displayed before NT lines.
  *
  *   Preconditions: A valid, positive integer.
  *   Postconditions: Indent Level set.
  *
  *   Notes: N/A
**/
void FileWriter::setIndentLevel( int indentLevel )
{
    this->indentLevel = indentLevel;
}


/**
  *   Function Name: writeHeader
  *   -------------------------------------------------------
  *   Algorithm: Writes the header of the standalone test to the file.
  *
  *   Preconditions: A file is open in the object.
  *   Postconditions: Header is written to file.
  *
  *   Notes: N/A
**/
void FileWriter::writeHeader()
{
    auto timenow = std::chrono::system_clock::to_time_t( std::chrono::system_clock::now() );

    this->outputFile << "/** Function: " << this->fileName << "\n";
    this->outputFile << "  *----------------------------------------------- " << "\n";
    this->outputFile << "  * Generated by GenTest on " << ctime( &timenow );
    this->outputFile << "  *                                                " << "\n";
    this->outputFile << "  ************************************************/ " << "\n";

    this->outputFile << "\n";
    this->outputFile << "#include <gtest/gtest.h>\n\n";
}


/**
  *   Function Name: repeatString
  *   -------------------------------------------------------
  *   Algorithm: Takes a string and the number of times to repeat.
  *              Returns a string containing the parameter string repeated.
  *
  *   Preconditions: N/A
  *   Postconditions: String repeated N number of times.
  *
  *   Notes: N/A
**/
std::string FileWriter::repeatString( const std::string string, int times )
{
    // Declare local variables.
    std::string returnStr;

    // Append string until the number of times requested.
    for( int index = 0; index < times; index++ )
    {
        returnStr += string;
    }

    // Return string.
    return returnStr;
}


/**
  *   Function Name: indentLine
  *   -------------------------------------------------------
  *   Algorithm: Returns a number of spaces according to the
  *              set indent level.
  *
  *   Preconditions: N/A
  *   Postconditions: Appropriate indent returned.
  *
  *   Notes: N/A
**/
std::string FileWriter::indentLine()
{
    return this->repeatString( SPACE, this->indentLevel );
}
