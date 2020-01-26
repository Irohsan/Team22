// Program Information //////////////////////////////////////////////
/**
  * @file DataStructures.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief Storage of different data structure classes
  *
  * @details This class will be used for the creation and storage for code
  *           relating to created data structures
  *
  * @version 0.01
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/

// data structures go here as needed ( we can split these into separate files for readability if need be )

#include "DataStructures.h"

/*************************************
 * GoogleTestDictionary functions
 *************************************/

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
std::string GoogleTestDictionary::decodeNonTerminal( NTerminal nt )
{
    switch( nt )
    {
        case ASSERT_GT:

            return "ASSERT_GT";

        case ASSERT_LT:

            return "ASSERT_LT";

        case ASSERT_GE:

            return "ASSERT_GE";


        case ASSERT_LE:

            return "ASSERT_LE";;

        case ASSERT_EQ:

            return "ASSERT_EQ";

        case ASSERT_NE:

            return "ASSERT_NE";

        case DEEPSTATE_ASSERT:

            return "ASSERT_TRUE";

        case ASSERT:

            return "ASSERT_TRUE";

        case ASSUME_GT:

            return EXPECT_GT;

        case ASSUME_LT:

            return EXPECT_LT;

        case ASSUME_GE:

            return EXPECT_GE;

        case ASSUME_LE:

            return EXPECT_LE;

        case ASSUME_EQ:

            return EXPECT_EQ;

        case ASSUME_NE:

            return EXPECT_NE;

        case DEEPSTATE_ASSUME:

            return EXPECT_TRUE;

        case CHECK_GT:

            return GT;

        case CHECK_LT:

            return LT;


        case CHECK_GE:

            return GE;

        case CHECK_LE:

            return LE;

        case CHECK_EQ:

            return EQ;

        case CHECK_NE:

            return NE;


        case DEEPSTATE_NOINLINE:

            return GTEST_NOINLINE;


        case TEST:

            return GTEST;


        case X_INT:

            return "int";


        case X_UINT8:

            return "uint8_t";


        case X_UINT16:

            return "uint16_t";

        case X_UINT32:

            return "uint32_t";

        case X_UINT64:

            return "uint64_t";


        case X_UNSIGNED:

            return "unsigned";


        case X_CHAR:

            return "char";


        case X_FLOAT:

            return "float";


        case X_DOUBLE:

            return "double";


        default:

            return EMPTY_STRING;
    }
}

/*************************************
 * CFGDictionary Functions
 *************************************/

NTerminal CFGDictionary::getCFGAssoc( std::string string )
{
    if( string == S_ASSERT_GT )
    {
        return ASSERT_GT;
    }
    else if( string == S_ASSERT_LT )
    {
        return ASSERT_LT;
    }
    else if( string == S_ASSERT_GE )
    {
        return ASSERT_GE;
    }
    else if( string == S_ASSERT_LE )
    {
        return ASSERT_LE;
    }
    else if( string == S_ASSERT_EQ )
    {
        return ASSERT_EQ;
    }
    else if( string == S_ASSERT_NE )
    {
        return ASSERT_NE;
    }
    else if( string == S_ASSUME_GT )
    {
        return ASSUME_GT;
    }
    else if( string == S_ASSUME_LT )
    {
        return ASSUME_LT;
    }
    else if( string == S_ASSUME_GE )
    {
        return ASSUME_GE;
    }
    else if( string == S_ASSUME_LE )
    {
        return ASSUME_LE;
    }
    else if( string == S_ASSUME_EQ )
    {
        return ASSUME_EQ;
    }
    else if( string == S_ASSUME_NE )
    {
        return ASSUME_NE;
    }
    else if( string == S_CHECK_GT )
    {
        return CHECK_GT;
    }
    else if( string == S_CHECK_LT )
    {
        return CHECK_LT;
    }
    else if( string == S_CHECK_GE )
    {
        return CHECK_GE;
    }
    else if( string == S_CHECK_LE )
    {
        return CHECK_LE;
    }
    else if( string == S_CHECK_EQ )
    {
        return CHECK_EQ;
    }
    else if( string == S_CHECK_NE )
    {
        return CHECK_NE;
    }
    else if( string == S_DEEPSTATE_NOINLINE )
    {
        return DEEPSTATE_NOINLINE;
    }
    else if( string == S_TEST )
    {
        return TEST;
    }
    else if( string == S_ASSERT )
    {
        return ASSERT;
    }
    else if( string == S_DEEPSTATE_ASSERT )
    {
        return DEEPSTATE_ASSERT;
    }
    else if( string == S_DEEPSTATE_ASSUME )
    {
        return DEEPSTATE_ASSUME;
    }
    else if( string == S_DEEPSTATE_CHECK )
    {
        return DEEPSTATE_CHECK;
    }
    else if( string == SYMB_UNDER_INT
             || string == SYMB_BRACKET_INT )
    {
        return X_INT;
    }
    else if( string == SYMB_UNDER_UINT8
             || string == SYMB_BRACKET_UINT8 )
    {
        return UINT8;
    }
    else if( string == SYMB_UNDER_UINT16
             || string == SYMB_BRACKET_UINT16 )
    {
        return X_UINT16;
    }
    else if( string == SYMB_UNDER_UINT32
             || string == SYMB_BRACKET_UINT32 )
    {
        return X_UINT32;
    }
    else if( string == SYMB_UNDER_UINT64
             || string == SYMB_BRACKET_UINT64 )
    {
        return X_UINT32;
    }
    else if( string == SYMB_UNDER_UNSIGNED
             || string == SYMB_BRACKET_UNSIGNED )
    {
        return X_UNSIGNED;
    }
    else if( string == SYMB_UNDER_LONG
             || string == SYMB_BRACKET_LONG )
    {
        return X_LONG;
    }
    else if( string == SYMB_UNDER_SHORT
             || string == SYMB_BRACKET_SHORT )
    {
        return X_SHORT;
    }
    else if( string == SYMB_UNDER_CHAR
             || string == SYMB_BRACKET_CHAR )
    {
        return X_CHAR;
    }
    else if( string == SYMB_UNDER_FLOAT
             || string == SYMB_BRACKET_FLOAT )
    {
        return X_FLOAT;
    }
    else if( string == SYMB_UNDER_DOUBLE
             || string == SYMB_BRACKET_DOUBLE )
    {
        return X_DOUBLE;
    }

    return NO_TRANSLATE;
}

/*************************************
 * Line Functions
 *************************************/


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
void Line::initialize( NTerminal header, std::string beginSymb,
                       std::string endSymb )
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
void Line::addToBody( std::string item )
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
void Line::setHeader( NTerminal newHeader )
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
void Line::setBeginSymb( std::string newBeginSymb )
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
void Line::setEndSymb( std::string newEndSymb )
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
std::string Line::getHeader()
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
NTerminal Line::getHeaderNt()
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
std::string Line::getBeginSymb()
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
std::string Line::getEndSymb()
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
std::string Line::getBody( bool addSpaces )
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
            bodyString += this->body.at( index ) + SPACE;
        }
        else
        {
            bodyString += this->body.at( index );
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
std::vector< std::string > Line::getBodyVector()
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
std::string Line::getString( bool includeSemiColon )
{
    // Declare local variables.
    std::string outputString = this->getHeader();

    outputString += this->getBeginSymb() + this->getBody();

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
void Line::toString( bool includeSemiColon )
{
    std::cout << this->getString( includeSemiColon ) << "\n";
}


