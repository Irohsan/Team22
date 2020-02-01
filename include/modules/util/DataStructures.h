// Program Header Information ///////////////////////////
/**
 * @file DataStructures.h
 *
 * @team GenTest ( Team 22 )
 *
 * @brief Header File for DataStructures
 *
 * @details Contains Struct and Function Definitions for DataStructures.cpp
 *
 * @version 1.00
 *          Tristan Miller
 *          Created Skeleton File
 *
 */

#ifndef GENTEST_DATASTRUCTURES_H
#define GENTEST_DATASTRUCTURES_H

#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <utility>
#include "Util.h"

//TranslationEngine structures
typedef enum NonTerminals
{
    ROOT,
    FUNC,                     // Basic non-terminals.
    EXP,
    ADD,
    SUB,
    MUL,
    DIV,
    EQUALS_TO,
    EQUAL,
    GT,
    LT,
    ST_PARETHESIS,
    END_PARETHESIS,
    CONDITIONAL,
    CONDITIONAL_BRANCH,
    INT,                        // Type Non-Terminals
    LONG,
    SHORT,
    DOUBLE,
    FLOAT,
    UINT8,
    UINT16,
    UINT32,
    UINT64,
    UNSIGNED_INT,
    UNSIGNED_LONG,
    UNSIGNED_SHORT,
    X_INT,                      // Symbloic Type Non-Terminals.
    X_LONG,
    X_SHORT,
    X_DOUBLE,
    X_FLOAT,
    X_UINT8,
    X_UINT16,
    X_UINT32,
    X_UINT64,
    X_USIGNED_INT,
    X_UNSIGNED_LONG,
    X_UNSIGNED_SHORT,
    X_UNSIGNED,
    X_CHAR,
    LEFT_SHIFT,                 // Shift Operators >>/<<
    RIGHT_SHIFT,
    ASSERT,
    ASSERT_GT,                  // Assertion operators.
    ASSERT_GE,
    ASSERT_LT,
    ASSERT_LE,
    ASSERT_NE,
    ASSERT_EQ,
    CHECK_EQ,                   // Check operators
    CHECK_NE,
    CHECK_LT,
    CHECK_LE,
    CHECK_GT,
    CHECK_GE,
    ASSUME_EQ,                  // Assume operators.
    ASSUME_NE,
    ASSUME_LT,
    ASSUME_LE,
    ASSUME_GT,
    ASSUME_GE,
    DEEPSTATE_ASSERT,		// DeepState assertion operators.
    DEEPSTATE_ASSUME,
    DEEPSTATE_CHECK,
    DEEPSTATE_NOINLINE,
    TEST,                  //function for a test
    ONE_OF,
    NO_TRANSLATE

} NTerminal;


typedef struct node{
	
    NTerminal type;
    node * parent;
    std::vector<node> childList;
    int lineNum;
    int colNum;

} Node;

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

    std::string decodeNonTerminal( NTerminal nt );
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
    NTerminal getCFGAssoc( std::string string );
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
                     std::string endSymb = EMPTY_STRING );

    void addToBody( std::string item );

    void setHeader( NTerminal newHeader );

    void setBeginSymb( std::string newBeginSymb );

    void setEndSymb( std::string newEndSymb );

    std::string getHeader();

    NTerminal getHeaderNt();

    std::string getBeginSymb();

    std::string getEndSymb();

    std::string getBody( bool addSpaces = false );

    std::vector< std::string > getBodyVector();

    std::string getString( bool includeSemiColon = false );

    void toString( bool includeSemiColon = false );
};

class AST{
    
    node currentNode, rootNode;

    public:

        AST()
        {
            node rootNode;
            rootNode.type = ROOT;
            rootNode.parent = NULL;
            rootNode.lineNum = 0;
            rootNode.colNum = 0;

            currentNode = rootNode;
            this->rootNode = rootNode;
        }

        void addNode( NTerminal type, int lineNum, int colNum )
        {
            // Declare new node.
            node newNode;

            // Configure new node.
            newNode.type = type;
            newNode.lineNum = lineNum;
            newNode.colNum = colNum
            newNode.parent = &this->currentNode;

            // Add node to parent's list.
            this->currentNode.childList.push_back( newNode );
            
            // Set newNode as current.
            this->currentNode = newNode;
        }

        void goBack()
        {
            this->currentNode = *(this->currentNode.parent);
        }

        void getChild()
        
        
        
};




#endif //GENTEST_DATASTRUCTURES_H
