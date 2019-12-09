//
// Created by craps on 11/5/2019.
//

#ifndef GENTEST_TRANSLATIONENGINE_H
#define GENTEST_TRANSLATIONENGINE_H


/******************************
* Included Files
*******************************/


#include "Util.h"
#include "BinaryParser.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>


/******************************
* Class Definitions
*******************************/

class GoogleTestDictionary
{
    public:

    // Constants
    const std::string EXPECT_GT = "EXPECT_GT";
    const std::string EXPECT_LT = "EXPECT_LT";
    const std::string EXPECT_GE = "EXPECT_GE";
    const std::string EXPECT_LE = "EXPECT_LE";
    const std::string EXPECT_EQ = "EXPECT_EQ";
    const std::string EXPECT_NE = "EXPECT_NE";
    const std::string EXPECT_TRUE = "EXPECT_TRUE";
    
    const std::string GT = ">";
    const std::string LT = "<";
    const std::string GE = ">=";
    const std::string LE = "<=";
    const std::string EQ = "==";
    const std::string NE = "!=";

    const std::string GTEST_NOINLINE = "GTEST_NO_INLINE_";
    const std::string GTEST = "TEST";

    /**
      *   Function Name: decodeNonTerminal
      *   -------------------------------------------------------
      *   Algorithm: Takes a non-terminal (NT) value and returns
      *   the terminal representation NT value in string form.     
      *   
      *   Preconditions: A valid NT supplied to the function.
      *   Postconditions: The appropriate non-terminal string returned.
      *
      *   Notes: N/A
    **/
    std::string decodeNonTerminal( NTerminal nt )
    {

        switch( nt )
        {
            case ASSERT_GT:
            
                return "ASSERT_GT";

            break;

            case ASSERT_LT:
    
                return "ASSERT_LT";

            break;

            case ASSERT_GE:

                return "ASSERT_GE";

            break;

            case ASSERT_LE:

                return "ASSERT_LE";

            break;

            case ASSERT_EQ:

                return "ASSERT_EQ";

            break;

            case ASSERT_NE:

                return "ASSERT_NE";

            break;

            case DEEPSTATE_ASSERT:
    
                return "ASSERT_TRUE";

            break;

            case ASSERT:
            
                return "ASSERT_TRUE";

            break;

            case ASSUME_GT:

                return EXPECT_GT;

            break;

            case ASSUME_LT:
        
                return EXPECT_LT;

            break;

            case ASSUME_GE:

                return EXPECT_GE;

            break;

            case ASSUME_LE:
                
                return EXPECT_LE;

            break;

            case ASSUME_EQ:

                return EXPECT_EQ;

            break;

            case ASSUME_NE:

                return EXPECT_NE;

            break;

            case DEEPSTATE_ASSUME:
        
                return EXPECT_TRUE;

            break;

            case CHECK_GT:

                return GT;

            break;

            case CHECK_LT:

                return LT;

            break;

            case CHECK_GE:

                return GE;

            break;

            case CHECK_LE:

                return LE;

            break;

            case CHECK_EQ:

                return EQ;

            break;

            case CHECK_NE:

                return EQ;

            break;

            case DEEPSTATE_NOINLINE:
            
                return GTEST_NOINLINE;

            break;

            case TEST:
                
                return GTEST;

            break;

            case X_INT:
    
                return "int";
    
            break;

            case X_UINT8:
        
                return "uint8_t";

            break;

            case X_UINT16:
        
                return "uint16_t";

            break;

            case X_UINT32:

                return "uint32_t";

            break;

            case X_UINT64:

                return "uint64_t";

            break;

            case X_UNSIGNED:
                
                return "unsigned";

            break;

            case X_CHAR:

                return "char";

            break;

            case X_FLOAT:

                return "float";

            break;

            case X_DOUBLE:

                return "double";

            break;

            default:

                return EMPTY_STRING;

            break;
        }    
    }
};


class CFGDictionary
{
    public:

    /**
      *   Function Name: getCFGAssoc
      *   -------------------------------------------------------
      *   Algorithm: Takes in a string and returns its non-terminal
      *              representation if it exists.     
      *   
      *   Preconditions: A valid string supplied to the function.
      *   Postconditions: The appropriate non-terminal code returned. 
      *
      *   Notes: N/A
    **/
    NTerminal getCFGAssoc( std::string string )
    {
        if( string.compare( S_ASSERT_GT ) == 0 )
        {
            return ASSERT_GT;
        }
        else if( string.compare( S_ASSERT_LT ) == 0 )
        {
            return ASSERT_LT;
        }
        else if( string.compare( S_ASSERT_GE ) == 0 )
        {
            return ASSERT_GE;
        }
        else if( string.compare( S_ASSERT_LE ) == 0 )
        {
            return ASSERT_LE;
        }
        else if( string.compare( S_ASSERT_EQ ) == 0 )
        {
            return ASSERT_EQ;
        }
        else if( string.compare( S_ASSERT_NE ) == 0 )
        {
            return ASSERT_NE;
        }
        else if( string.compare( S_ASSUME_GT ) == 0 )
        {
            return ASSUME_GT;
        }
        else if( string.compare( S_ASSUME_LT ) == 0 )
        {
            return ASSUME_LT;
        }
        else if( string.compare( S_ASSUME_GE ) == 0 )
        {
            return ASSUME_GE;
        }
        else if( string.compare( S_ASSUME_LE ) == 0 )
        {
            return ASSUME_LE;
        }
        else if( string.compare( S_ASSUME_EQ ) == 0 )
        {
            return ASSUME_EQ;
        }
        else if( string.compare( S_ASSUME_NE ) == 0 )
        {
            return ASSUME_NE;
        }
        else if( string.compare( S_CHECK_GT ) == 0 )
        {
            return CHECK_GT;
        }
        else if( string.compare( S_CHECK_LT ) == 0 )
        {
            return CHECK_LT;
        }
        else if( string.compare( S_CHECK_GE ) == 0 )
        {
            return CHECK_GE;
        }
        else if( string.compare( S_CHECK_LE ) == 0 )
        {
            return CHECK_LE;
        }
        else if( string.compare( S_CHECK_EQ ) == 0 )
        {
            return CHECK_EQ;
        }
        else if( string.compare( S_CHECK_NE ) == 0 )
        {
            return CHECK_NE;
        }
        else if( string.compare( S_DEEPSTATE_NOINLINE ) == 0 )
        {
            return DEEPSTATE_NOINLINE;
        }
        else if( string.compare( S_TEST ) == 0 )
        {
            return TEST;
        }
        else if( string.compare( S_ASSERT ) == 0 )
	    {
	        return ASSERT;
	    }
	    else if( string.compare( S_DEEPSTATE_ASSERT ) == 0 )
	    {
            return DEEPSTATE_ASSERT;
	    }
	    else if( string.compare( S_DEEPSTATE_ASSUME ) == 0 )
	    {
	        return DEEPSTATE_ASSUME;
	    }
	    else if( string.compare( S_DEEPSTATE_CHECK ) == 0 )
	    {
            return DEEPSTATE_CHECK;
	    }
        else if( string.compare( SYMB_UNDER_INT ) == 0
                 || string.compare( SYMB_BRACKET_INT ) == 0 )
        {
            return X_INT;
        }
        else if( string.compare( SYMB_UNDER_UINT8 ) == 0
                 || string.compare( SYMB_BRACKET_UINT8 ) == 0 )
        {
            return UINT8;
        }
        else if( string.compare( SYMB_UNDER_UINT16 ) == 0
                 || string.compare( SYMB_BRACKET_UINT16 ) == 0 )
        {
            return X_UINT16;
        }
        else if( string.compare( SYMB_UNDER_UINT32 ) == 0
                 || string.compare( SYMB_BRACKET_UINT32 ) == 0 )
        {
            return X_UINT32;
        }
        else if( string.compare( SYMB_UNDER_UINT64 ) == 0
                 || string.compare( SYMB_BRACKET_UINT64 ) == 0 )
        {
            return X_UINT32;
        }
        else if( string.compare( SYMB_UNDER_UNSIGNED ) == 0
                 || string.compare( SYMB_BRACKET_UNSIGNED ) == 0 )
        {
            return X_UNSIGNED;
        }
        else if( string.compare( SYMB_UNDER_LONG ) == 0
                 || string.compare( SYMB_BRACKET_LONG ) == 0 )
        {
            return X_LONG;
        }
        else if( string.compare( SYMB_UNDER_SHORT ) == 0
                 || string.compare( SYMB_BRACKET_SHORT ) == 0 )
        {
            return X_SHORT;
        }
        else if( string.compare( SYMB_UNDER_CHAR ) == 0
                 || string.compare( SYMB_BRACKET_CHAR ) == 0 )
        {
            return X_CHAR;
        }
        else if( string.compare( SYMB_UNDER_FLOAT ) == 0
                 || string.compare( SYMB_BRACKET_FLOAT ) == 0 )
        {
            return X_FLOAT;
        }
        else if( string.compare( SYMB_UNDER_DOUBLE ) == 0
                 || string.compare( SYMB_BRACKET_DOUBLE ) == 0 )
        {
            return X_DOUBLE;
        }

        return NO_TRANSLATE;
    }    

};


class Line
{
    private:

    // Dictionaries    
    GoogleTestDictionary googtd;    

    NTerminal header;
    std::string beginSymb;
    std::string endSymb;
    std::vector< std::string > body;

    public:

   /**
      *   Function Name: initialize
      *   -------------------------------------------------------
      *   Algorithm: Takes a NT header, beginning symbol, and ending symbol.
      *              Sets the internal field variables with the passed in parameters.
      *   
      *   Preconditions: A valid NT header, beginning symbol, and ending symbol.
      *   Postconditions: All field variables configured internally.
      *
      *   Notes: N/A
    **/
    void initialize( NTerminal header, std::string beginSymb = EMPTY_STRING,
                         std::string endSymb = EMPTY_STRING )
    {
        // Initialize private variables.
        this->header = header;
        this->beginSymb = beginSymb;
        this->endSymb = endSymb;
    }


    /**
      *   Function Name: addToBody
      *   -------------------------------------------------------
      *   Algorithm: Adds a string to the body of the line.
      *   
      *   Preconditions: A valid string.
      *   Postconditions: String added to the internal body vector.
      *
      *   Notes: N/A
    **/
    void addToBody( std::string item )
    {
        this->body.push_back( item );
    }


    // Setter methods.


    /**
      *   Function Name: setHeader
      *   -------------------------------------------------------
      *   Algorithm: Takes a non-terminal and sets the line header to
      *              this value.
      *   
      *   Preconditions: A valid non-terminal value supplied to the function.
      *   Postconditions: Line header set to new value.
      *
      *   Notes: N/A
    **/
    void setHeader( NTerminal newHeader )
    {
        this->header = newHeader;
    }


    /**
      *   Function Name: setBeginSymb
      *   -------------------------------------------------------
      *   Algorithm: Takes string symbol and sets the line beginning symbol to
      *              this value.
      *   
      *   Preconditions: A valid string symbol value supplied to the function.
      *   Postconditions: Line begin symbol set to new value.
      *
      *   Notes: N/A
    **/
    void setBeginSymb( std::string newBeginSymb )
    {
        this->beginSymb = newBeginSymb;
    }


    /**
      *   Function Name: setEndSymb
      *   -------------------------------------------------------
      *   Algorithm: Takes a non-terminal and sets the line ending symbol to
      *              this value.
      *   
      *   Preconditions: A valid string symbol value supplied to the function.
      *   Postconditions: Line end symbol set to new value.
      *
      *   Notes: N/A
    **/
    void setEndSymb( std::string newEndSymb )
    {
        this->endSymb = newEndSymb;
    }


    // Getter methods.


    /**
      *   Function Name: getHeader
      *   -------------------------------------------------------
      *   Algorithm: Returns the string representation of the non-terminal.
      *   
      *   Preconditions: N/A
      *   Postconditions: String representatino of the non-terminal returned.
      *
      *   Notes: N/A
    **/
    std::string getHeader()
    {
        return this->googtd.decodeNonTerminal( this->header );
    }

    
    /**
      *   Function Name: getHeaderNT()
      *   -------------------------------------------------------
      *   Algorithm: Returns the NT value of header for the line.
      *   
      *   Preconditions: N/A
      *   Postconditions: NT value of header returned.
      *
      *   Notes: N/A
    **/
    NTerminal getHeaderNt()
    {
        return this->header;
    }


    /**
      *   Function Name: getBeginSymb
      *   -------------------------------------------------------
      *   Algorithm: Returns the beginning symbol stored in the line.
      *   
      *   Preconditions: N/A
      *   Postconditions: Beginning symbol returned.
      *
      *   Notes: N/A
    **/
    std::string getBeginSymb()
    {
        return this->beginSymb;
    }

    
    /**
      *   Function Name: getEndSymb
      *   -------------------------------------------------------
      *   Algorithm: Returns the end symbol stored in the line.
      *   
      *   Preconditions: N/A
      *   Postconditions: End Symbol returned.
      *
      *   Notes: N/A
    **/
    std::string getEndSymb()
    {
        return this->endSymb;
    }


    /**
      *   Function Name: getBody
      *   -------------------------------------------------------
      *   Algorithm: Returns the body of the line.
      *   
      *   Preconditions: N/A
      *   Postconditions: Body of the line returned.
      *
      *   Notes: N/A
    **/
    std::string getBody( bool addSpaces = false )
    {
        // Declare local variables.
        std::string bodyString = EMPTY_STRING;
        int index = 0;

        while( index < (int) this->body.size() )
        {
            // Concatenate body strings. 
            if( addSpaces && ( index < (int) this->body.size() - 2 ) ) 
            {
                std::cout << index << "\n";
                bodyString = bodyString + this->body.at( index ) + SPACE;
            }
            else
            {
                bodyString = bodyString + this->body.at( index );
            }

            // Increment index
            index++;
        }

        return bodyString;
    }


    /**
      *   Function Name: getBodyVector
      *   -------------------------------------------------------
      *   Algorithm: Returns the vector containing body strings.
      *   
      *   Preconditions: N/A
      *   Postconditions: Vector containing line body strings returned.
      *
      *   Notes: N/A
    **/
    std::vector< std::string > getBodyVector()
    {
        return this->body;
    }


    // Get string methods.

    
    /**
      *   Function Name: getString
      *   -------------------------------------------------------
      *   Algorithm: Formats the header, body, beginning, and ending symbol
      *              into a string line and returns it to the user.
      *   
      *   Preconditions: N/A
      *   Postconditions: A translated line is returned.
      *
      *   Notes: includeSemiColon puts a semi-colon at the end of the line.
    **/
    std::string getString( bool includeSemiColon = false )
    {
        // Declare local variables.
        std::string outputString = this->getHeader();
    
        outputString = outputString + this->getBeginSymb() + this->getBody();
        
        if( includeSemiColon )
        {
            outputString = outputString + this->getEndSymb() + SEMI_COLON;
        }
        else
        {
            outputString = outputString + this->getEndSymb();
        }

        return outputString;
    }

   
    /**
      *   Function Name: toString
      *   -------------------------------------------------------
      *   Algorithm: Invokes the getString method and prints the line to 
      *              the screen.
      *   
      *   Preconditions: N/A
      *   Postconditions: Line printed to screen.
      *
      *   Notes: N/A
    **/
    void toString( bool includeSemiColon = false )
    {
        std::cout << this->getString( includeSemiColon ) << "\n";
    }
};


class FileWriter
{
    public:


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
    void initialize( std::vector< std::vector< Line > > cfgVector, std::string fileName )
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
    void displayFunctionAt( int index )
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
    void writeOutput()
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
    void writeFunctionAt( int index )
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
    void setIndentLevel( int indentLevel )
    {
        this->indentLevel = indentLevel;
    }
        
    private:
    
    // Private file variables
    std::ofstream outputFile;
    std::vector< std::vector< Line > > fileVector;

    // Output file name.
    std::string fileName;

    // Output field variables.
    bool stateReady = false; 
    int indentLevel;

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
    void writeHeader()
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
    std::string repeatString( const std::string string, int times )
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
    std::string indentLine()
    {
        return this->repeatString( SPACE, this->indentLevel );  
    }
};


class SymbolicProcessor
{
    public:
    

    /**
      *   Function Name: setBinaryFile
      *   -------------------------------------------------------
      *   Algorithm: Takes a string binary file name and provides 
      *              it to the binary parser for parsing. 
      *   
      *   Preconditions: A valid path to a binary file.
      *   Postconditions: Binary data is held within internal binary parser.
      *
      *   Notes: N/A
    **/
    void setBinaryFile( std::string binaryFile )
    {
        binaryParser.parse( binaryFile );
    }

    /**
      *   Function Name: appendData
      *   -------------------------------------------------------
      *   Algorithm: Takes a non-terminal header and string.
      *              Appends symbolic data to the string for each variable
      *              held there within. 
      *   
      *   Preconditions: A valid string and header NT.
      *   Postconditions: A string with all values inserted returned. 
      *
      *   Notes: N/A
    **/
    std::string appendData( NTerminal header, std::string lineBody )
    {
        // Declare srand.
        srand( time( 0 ) );

        // Declare local variables.
        std::string appendString = EMPTY_STRING;
        std::vector< std::string > elementVector;
        
        // Split line on commas until semi-colon.
        if( lineBody.find( COMMA ) != std::string::npos )
        {   
            elementVector = this->splitLine( lineBody, COMMA, EMPTY_STRING, true );

            // Iterate over every element and add symbolic data.
            for( int index = 0; index < (int) elementVector.size(); index++ )
            {
                if( header == X_INT )
                {
                    appendString += elementVector.at( index ) + " = " + std::to_string( rand() );
                }
                else if( header == X_CHAR )
                {
                    appendString += elementVector.at( index ) + " = '" + demoDummyCharArray[ index ] + "'";
                }
                else if( header == X_UNSIGNED )
                {
                    appendString += elementVector.at( index ) + " = " + std::to_string( (unsigned) rand() );
                }

                if( index != (int) elementVector.size() - 1 )
                {
                    appendString += COMMA;
                }
            }   
        }
        else
        {
            elementVector.push_back( lineBody ); 

            if( header == X_INT )
            {
                appendString += elementVector.at( 0 ) + " = " + std::to_string( rand() );
            }
            else if( header == X_CHAR )
            {
                appendString += elementVector.at( 0 ) + " = '" + demoDummyCharArray[ 0 ] + "'";
            }
            else if( header == X_UNSIGNED )
            {
                appendString += elementVector.at( 0 ) + " = " + std::to_string( (unsigned) rand() );
            }
        }     

        return appendString;
    }

    private:

    // Private field variables.
    BinaryParser binaryParser;
    std::string filename;
    
    // Constant field variables.
    const char demoDummyCharArray[ 10 ] = { 'a', 'z', 'b', 't', 'l', 'm', 'o', 'p', 'j', 'k' };

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
    std::vector< std::string > splitLine( std::string line, const std::string delimitor,
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
                || currentCharacter.compare( delimitor2 ) == 0 )            {
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
            substring = line.substr( partitionIndex, (int) line.length() );
            
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
};

void runTranslator( char * harnessFilePath );

#endif //GENTEST_TRANSLATIONENGINE_H
