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
    ROOT = 0,
    FUNC,                     // Basic non-terminals.
    TEST,
    STATEMENT,
    FOR_LOOP,
    WHILE_LOOP,
    COMMENT,
    DEEPSTATE_NOINLINE,
    NO_TRANSLATE,
    NAMESPACE,
    INCLUDE,
    DEFINE,
    IF,
    ASSERT_GT,
    ASSERT_LT,
    ASSERT_GE,
    ASSERT_LE,
    ASSERT_NE,
    ASSERT_EQ,
    ASSERT,
    ASSUME_GT,
    ASSUME_LT,
    ASSUME_GE,
    ASSUME_LE,
    ASSUME_NE,
    ASSUME_EQ,
    CHECK_GT,
    CHECK_LT,
    CHECK_GE,
    CHECK_LE,
    CHECK_NE,
    CHECK_EQ,
    SYMBOLIC,
    CLOSE_BRK,
    OPEN_BRK
    

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


class Node {
	
    public:

    NTerminal type;
    std::string text;
    std::string datatype;
};




#endif //GENTEST_DATASTRUCTURES_H
