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
    OPEN_BRK,
    TYPEDEF,
    STRUCT
    NO_INLINE,
    MAIN_FUNC

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

class Node {
	
    public:

    NTerminal type;
    std::string text;
    std::string datatype;
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
        {{ "ASSERT_GT", ASSERT_GT },
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
         { "ASSUME_GE", ASSUME_GE },
         {"INCLUDE", INCLUDE}};

const std::map < std::string, NonTerminals > nonVital =
        {{"NO_INLINE", NO_INLINE},
         {"MAIN_FUNC", MAIN_FUNC}};




#endif //GENTEST_DATASTRUCTURES_H
