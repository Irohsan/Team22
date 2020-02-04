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

/**
 * Helper class for TranslationDictionary, stores the desired translation
 */
class TranslationEntry
{
public:
    std::string nTerminalVal;

    NonTerminals nTerminal;

    std::string translateTo;

    TranslationEntry * nextEntry = nullptr;

    void appendToEnd( std::string nTerminalVal, std::string translateTo );

    bool assignTranslation(std::string translation, NonTerminals toAssign );

    TranslationEntry* findTranslationFromNTerminal( NonTerminals NTerminalToFind );
};

/**
 * Class for storing translations loaded from a configuration file.
 */
class TranslationDictionary
{
public:
    void setFile( const std::string& filePath );

    bool loadFile();

    TranslationEntry * findTranslationFromNTerminal( NonTerminals NTerminalToFind );

private:
    std::fstream configFile;

    TranslationEntry * translations = nullptr;

    bool populateNTerminals();
};

//map containing the references for NTerminals that are vital for runtime
//this might be expanded on or reduced in the future
const std::map < std::string, NonTerminals > vitalTranslations =
        {{ "LEFT_SHIFT", LEFT_SHIFT },
        { "RIGHT_SHIFT", RIGHT_SHIFT },
        { "ASSERT_GT", ASSERT_GT },
        { "ASSERT_GE", ASSERT_GE },
        { "ASSERT_LT", ASSERT_LT },
        { "ASSERT_LE", ASSERT_LE },
        { "ASSERT_NE", ASSERT_NE },
        { "ASSERT_EQ", ASSERT_EQ },
        { "CHECK_EQ", CHECK_EQ },
        { "CHECK_NE", CHECK_NE },
        { "CHECK_LT", CHECK_LT },
        { "CHECK_LE", CHECK_LE },
        { "CHECK_GT", CHECK_GT },
        { "CHECK_GE", CHECK_GE },
        { "ASSUME_EQ", ASSUME_EQ },
        { "ASSUME_NE", ASSUME_NE },
        { "ASSUME_LT", ASSUME_LT },
        { "ASSUME_LE", ASSUME_LE },
        { "ASSUME_GT", ASSUME_GT },
        { "ASSUME_GE", ASSUME_GE }};



#endif //GENTEST_DATASTRUCTURES_H
