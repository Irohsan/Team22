// Program Information //////////////////////////////////////////////
/**
  * @file DataStructures.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief For deconstructing of DeepState tests into a context free grammar
  *
  * @details This class will be deconstruct DeepStates behaviours into a context-free grammar
  *          and store these values into a vector class. This vector class will then be sent
  *          to the File assembler for reconstruction into a standalone test
  *          For the Demo it shall be able to translate the following example test harnesses:
  *
  *          	o Crash.cpp
  *		        o Euler.cpp
  *		        o IntegerOverflow.cpp
  *		        o Primes.cpp 
  *
  * @version 0.01
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout
  *

 (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include "TranslationEngine.h"

using namespace std;


class Parser
{
    public:

    void setBinaryFile( std::string binaryFilePath )
    {
        this->binaryFile = binaryFilePath;

        this->symbolic_p.setBinaryFile( binaryFile );
    }

    /**
      *   Function Name: setFile
      *   -------------------------------------------------------
      *   Algorithm: Takes the file name of a harness file and
      *              opens it for use by the parser.  
      *   
      *   Preconditions: A valid file name.
      *   Postconditions: The file is opened and stored in the parser.
      *
      *   Notes: N/A
    **/
    void setFile( char * filePath )
    {
        this->harnessFile.open( filePath );
    }


    /**
      *   Function Name: closeFile
      *   -------------------------------------------------------
      *   Algorithm: Closes the currently open file in the parser.  
      *   
      *   Preconditions: A file is open in the parser.
      *   Postconditions: File is closed.
      *
      *   Notes: N/A
    **/
    void closeFile()
    {   
        this->harnessFile.close();
    }


    /**
      *   Function Name: runParser
      *   -------------------------------------------------------
      *   Algorithm: Iterates over every line in the open harness file,
      *              invoking parseLine to analyze, translate, and store
      *              all code held within or relating to the declartion of a function.
      *   
      *   Preconditions: A file is open in the parser.
      *   Postconditions: File is translated to a CFG representation vector.
      *
      *   Notes: N/A
    **/
    void runParser()
    {
        // Declare local variables.
        std::string line;
        bool funcFlag = false;

        while( std::getline( this->harnessFile, line ) )
        {   
            if( this->isFunction( line ) )
            {
                funcFlag = true;
                this->functionHandle++;                      
            }

            if( funcFlag )
            {
                parseLine( line );
            }


            if( line.find( CLOSE_BRACKET ) != std::string::npos 
                && line.find( SPACE ) == std::string::npos )
            {
                funcFlag = false;
            }
        }
    }


    /**
      *   Function Name: getOutputVector
      *   -------------------------------------------------------
      *   Algorithm: Returns the vector containing all lines (translated or untranslated)
      *              in the file.
      *   
      *   Preconditions: N/A
      *   Postconditions: FileVector is returned.
      *
      *   Notes: N/A
    **/
    std::vector< std::vector< Line > > getOutputVector()
    {
        return this->fileVector;
    }

    private:
    CFGDictionary cfgd;
    std::vector< std::vector< Line > > fileVector;
    SymbolicProcessor symbolic_p;
    std::string binaryFile;
    int functionHandle = -1;
    fstream harnessFile;


    /**
      *   Function Name: parseLine
      *   -------------------------------------------------------
      *   Algorithm: Takes in a string line and iterates over it character
      *              by character, translating found strings to their CFG
      *              representations and adding the code to the fileVector.  
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: Line translated if appropriate and added to fileVector.
      *
      *   Notes: N/A
    **/
    void parseLine( std::string line )
    {
        // Declare local variables.
        std::vector< Line > lineVector;
        Line appendLine;
        NTerminal header = NO_TRANSLATE;
        std::string appendString = EMPTY_STRING, currentChar;
        std::string strippedLine;

        appendLine.setHeader( header );
        strippedLine = stripBeginWhiteSpace( line );
        
        for( int index = 0; index < (int) strippedLine.length(); index++ )
        {
            // Get current character.
            currentChar = strippedLine.at( index );

            // Add it to append string.
            appendString += currentChar;

            // Check for translation phrase.
            header = this->cfgd.getCFGAssoc( appendString );

            if( header != NO_TRANSLATE )
            {
                // Initialize appendLine.
                if( isFunction( line ) )
                {
                    // Append data to line.
                    appendLine.initialize( header, EMPTY_STRING, OPEN_BRACKET );
                    appendLine.addToBody( this->substr( line, index + 1, ( int ) line.length() - 1 ) );

                    // Add to lineVector.
                    lineVector.push_back( appendLine );

                    // Add lineVector to fileVector.
                    this->fileVector.push_back( lineVector );
                    
                    // Exit loop.
                    index = (int) line.length();
                }
                else if( isAssert( line ) || isAssume( line ) || isCheck( line ) )
                {
                    // Append data to line.
                    appendLine.initialize( header );

                    if( line.find( "ASSERT(" ) != std::string::npos )
                    {
                        appendLine.initialize( header, OPEN_PARENTHESIS, EMPTY_STRING );
                    }

                    if( line.find( SEMI_COLON ) != std::string::npos )
                    {
                        appendLine.addToBody( this->substr( line, index + 3, line.find( SEMI_COLON ) ) );
                    }
                    else
                    {
                        line += SEMI_COLON;
                        appendLine.addToBody( this->substr( line, index + 3, line.find( SEMI_COLON ) ) );
                    }

                    // Add to file vector.
                    this->fileVector.at( this->functionHandle ).push_back( appendLine );

                    // Reset string.
                    appendString = EMPTY_STRING;
                }
                else if( isSymbolic( line ) )
                {
                    // Append data to line.
                    appendLine.initialize( header );
                    appendLine.addToBody(  symbolic_p.appendData( header, 
                                                                  substr( strippedLine, 
                                                                  strippedLine.find( SPACE ), 
                                                                  (int) strippedLine.length() - 1 ) )  );
                  
                    // Add to file vector.
                    this->fileVector.at( this->functionHandle ).push_back( appendLine ); 
                }
            }
        }
        
        if( appendLine.getHeader().compare( EMPTY_STRING ) == 0 )
        {
            // Setup appendLine.
            appendLine.initialize( header, EMPTY_STRING, EMPTY_STRING );
            appendLine.addToBody( line );

            if( (int) this->fileVector.size() != 0 )
            {
                this->fileVector.at( this->functionHandle ).push_back( appendLine );
            }
            else
            {
                // Place line in line vector.
                lineVector.push_back( appendLine );

                // Append the lineVector to the fileVector.
                this->fileVector.push_back( lineVector );
            }
        }
    }


    /**
      *   Function Name: splitLine
      *   -------------------------------------------------------
      *   Algorithm: Takes in a string value and splits it at the 
      *              delimeters specified.  
      *   
      *   Preconditions: A valid string.
      *   Postconditions: Vector returned with split string.
      *
      *   Notes: N/A
    **/
    vector< std::string > splitLine( std::string line, const std::string delimitor,
                                     const std::string delimitor2 = EMPTY_STRING,
                                     bool keepEnd = false )
    {
        // Declare local variables.
        std::vector< std::string > lineVector;
        std::string substring = EMPTY_STRING;
        int index = 0, partitionIndex = 0;

        while( index < (int) line.length() )
        {
            std::string currentCharacter( 1, line.at( index ) );

            if( currentCharacter.compare( delimitor ) == 0 
                || currentCharacter.compare( delimitor2 ) == 0 )
            {
                // Get substring
                substring = substr( line, partitionIndex, index );

                // Add to vector
                lineVector.push_back( substring );

                // Set partition index.
                partitionIndex = index + 1;
            }           

            // Increment index.
            index++;
        }

        if( keepEnd )
        {
            // Get end substring.
            substring = substr( line, partitionIndex, index );
            
            // Add to vector.
            lineVector.push_back( substring );                        
        }

        return lineVector;
    }


    /**
      *   Function Name: substr
      *   -------------------------------------------------------
      *   Algorithm: Takes in a string and returns the substring from
      *              the start position until the end position - 1.  
      *   
      *   Preconditions: A valid string with indicies within range.
      *   Postconditions: Substring returned.
      *
      *   Notes: This function will not execute if you provide a
      *          end position greater than or equal to the size of the
      *          string.
    **/
    std::string substr( std::string str, int beginPos, int endPos )
    {
        int index = beginPos;
        std::string returnStr = EMPTY_STRING;

        if( endPos < (int) str.length() )
        {
            while( index < endPos )
            {
                // Get character.
                std::string character( 1, str.at( index ) );
            
                // Add to return string.
                returnStr = returnStr + character;
                
                // Increment index.
                index++;
            }
        }

        return returnStr;
    }

    /**
      *   Function Name: stripBeginWhiteSpace
      *   -------------------------------------------------------
      *   Algorithm: Takes a string and removes the trailing white space
      *              before it. 
      *   
      *   Preconditions: A valid string.
      *   Postconditions: String returned with no trailing white space. 
      *
      *   Notes: N/A
    **/
    std::string stripBeginWhiteSpace( std::string str )
    {
        // Declare local variables.
        std::string currentCharacter;
        int index;

        for( index = 0; index < (int) str.length(); index++ )
        {
            currentCharacter = str.at( index );

            if( currentCharacter.compare( SPACE ) != 0 )
            {
                return str.substr( index, (int) str.length() - 1 ); 
            }      
        }

        return str;
    }


    /**
      *   Function Name: isFunction
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it is a function. 
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isFunction( std::string line )
    {
        return line.find( OPEN_PARENTHESIS ) != std::string::npos 
                && line.find( CLOSE_PARENTHESIS ) != std::string::npos
                && line.find( OPEN_BRACKET ) != std::string::npos
                && line.find( "for" ) == std::string::npos
                && line.find( "if" ) == std::string::npos;
    }


    /**
      *   Function Name: isSymbolic
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it is a symbolic declaration.  
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isSymbolic( std::string line )
    {
        return line.find( "Symbolic" ) != std::string::npos || 
               line.find( "symbolic" ) != std::string::npos;
    }


    /**
      *   Function Name: isFor
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it contains a for loop.
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isFor( std::string line )
    {
        return line.find( "for " ) != std::string::npos;
    }


    /**
      *   Function Name: isIf
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it contains a conditional. 
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isIf( std::string line )
    {
        return line.find( "if" ) != std::string::npos;
    }

    /**
      *   Function Name: isTest
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it is test.
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isTest( std::string line )
    {
        return line.find( "TEST" ) != std::string::npos;
    }

    /**
      *   Function Name: isAssert
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it is an ASSERT clause. 
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isAssert( std::string line )
    {
        return line.find( "ASSERT" ) != std::string::npos || line.find( "Assert" ) != std::string::npos;
    }


    /**
      *   Function Name: isAssume
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it is an ASSUME clause. 
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isAssume( std::string line )
    {
        return line.find( "ASSUME" ) != std::string::npos || line.find( "Assume" ) != std::string::npos;
    }


    /**
      *   Function Name: isCheck
      *   -------------------------------------------------------
      *   Algorithm: Checks the line to see if it is an CHECK clause. 
      *   
      *   Preconditions: A valid file line.
      *   Postconditions: True if function, false otherwise.
      *
      *   Notes: N/A
    **/
    bool isCheck( std::string line )
    {
        return line.find( "CHECK" ) != std::string::npos || line.find( "Check" ) != std::string::npos;
    }
    
};

void runTranslator( char * harnessFilePath )
{ 
    // Declare classes.
    Parser harnessParser;
    FileWriter writer;

    // Declare data structures.
    std::vector< std::vector< Line > > outputVector;

    // Declare other variables.
    int pos = 0;

    // Setup filename.
    std::string filename( harnessFilePath );

    // Search string for last occurance of /.
    pos = filename.rfind( "/" );
    
    // Setup filename.
    filename = filename.substr( pos + 1, (int) filename.length());
    filename = "Standalone" + filename;

    // Setup and run parser.
    harnessParser.setFile( harnessFilePath );
    harnessParser.runParser();
    harnessParser.closeFile();

    // Retrieve outputVector from parser.
    outputVector = harnessParser.getOutputVector();

    // Initialize writer with outputVector.
    writer.initialize( outputVector, filename );
    writer.writeOutput();   

    // Close writer.
}

