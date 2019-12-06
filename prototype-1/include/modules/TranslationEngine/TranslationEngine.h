//
// Created by craps on 11/5/2019.
//

#ifndef GENTEST_TRANSLATIONENGINE_H
#define GENTEST_TRANSLATIONENGINE_H


/******************************
* Included Files
*******************************/


#include "Util.h"
#include <fstream>
#include <iostream>
#include <vector>


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

    const std::string GTEST_NOINLINE = "GTEST_NO_INLINE";
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

    void initialize( NTerminal header, std::string beginSymb = EMPTY_STRING,
                         std::string endSymb = EMPTY_STRING )
    {
        // Initialize private variables.
        this->header = header;
        this->beginSymb = beginSymb;
        this->endSymb = endSymb;
    }

    void addToBody( std::string item )
    {
        this->body.push_back( item );
    }

    // Setter methods.
    void setHeader( NTerminal newHeader )
    {
        this->header = newHeader;
    }

    void setBeginSymb( std::string newBeginSymb )
    {
        this->beginSymb = newBeginSymb;
    }

    void setEndSymb( std::string newEndSymb )
    {
        this->endSymb = newEndSymb;
    }

    // Getter methods.
    std::string getHeader()
    {
        return this->googtd.decodeNonTerminal( this->header );
    }

    std::string getBeginSymb()
    {
        return this->beginSymb;
    }

    std::string getEndSymb()
    {
        return this->endSymb;
    }

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

    std::vector< std::string > getBodyVector()
    {
        return this->body;
    }

    // Get string method.
    std::string getString( bool putSpacesAroundBody = false,
                           bool putSpacesInBody = false, 
                           bool includeSemiColon = false )
    {
        // Declare local variables.
        std::string outputString = this->getHeader();
    
        if( putSpacesAroundBody )
        {
            outputString = outputString + this->getBeginSymb() + SPACE + this->getBody( putSpacesInBody ) + SPACE;
        }
        else
        {
            outputString = outputString + this->getBeginSymb() + this->getBody( putSpacesInBody );
        }
        
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

    // To string method.
    void toString( bool addSpacesBody = false,
                   bool addSpacesInBody = false, 
                   bool includeSemiColon = false )
    {
        std::cout << this->getString( addSpacesBody, addSpacesInBody, 
                                      includeSemiColon ) << "\n";
    }
};


void runTranslator( char * harnessFilePath );

#endif //GENTEST_TRANSLATIONENGINE_H
