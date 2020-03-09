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
#include "BinaryIterator.h"

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
    ASSUME,
    CHECK_GT,
    CHECK_LT,
    CHECK_GE,
    CHECK_LE,
    CHECK_NE,
    CHECK_EQ,
    CHECK,
    SYMBOLIC,
    CLOSE_BRK,
    OPEN_BRK,
    MAIN_FUNC,
    TYPEDEF,
    STRUCT

} NTerminal;

//Contains all translations required to run the program
const std::map < std::string, NonTerminals > vitalTranslations =
        {{"ASSERT", ASSERT},
         {"CHECK", CHECK},
         {"ASSUME", ASSUME},
         {"INCLUDE", INCLUDE}};

//Contains all translations not vital to run the program, but can still be used.
const std::map < std::string, NonTerminals > nonVital =
        {{"NO_INLINE", DEEPSTATE_NOINLINE},
         {"MAIN_FUNC", MAIN_FUNC},
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

const std::map <std::string, std::string> checkCoversion =
        {{"GT", ">"},
        {"GE", ">="},
        {"LT", "<"},
        {"LE", "<="},
        {"NE", "!="},
        {"EQ", "=="}};

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

    bool newEntry = true;

    bool translationAdded = false;
};

/**
 * Class for storing translations loaded from a configuration file.
 */
class TranslationDictionary
{
public:
    bool loadFile( const std::string& filePath );

    TranslationEntry findTranslationFromNTerminal( NonTerminals NTerminalToFind );

private:
    std::ifstream configFile;
  
    std::vector< TranslationEntry > translations;

    bool populateNTerminals();

    bool assignTranslation(std::string translationString, NTerminal currentNTerminal );
};


class ParameterPacket;

class TypedefEntry
{
    // Private field variables.
    std::string name;
    std::vector<ParameterPacket> paramList;

    
    public:
    
    TypedefEntry();
    void setName( std::string name );
    void addParam( ParameterPacket param );
    std::vector<ParameterPacket> getParamList();
    std::string getName();
};

class ParameterPacket
{
    public:

    TypedefEntry prevObj;
    std::string name;    
    std::string type;
    bool pointerFlag;
    
};

// Class for managing structs.
class StructHandler
{
    // Private field variables.
    std::vector<TypedefEntry> entryList;
    std::vector<Node> ast;

    // Private functions
    bool inList( std::vector<TypedefEntry> vector, std::string name );
    bool entryInList( std::vector<TypedefEntry> vector, std::string name );
    std::string getName( std::string text );
    std::string getType( std::string var );
    
    public:
    std::vector<ParameterPacket> paramList;

    TypedefEntry getAssocEntry( std::string text );
    std::vector<Node> getAST();
    std::vector<std::string> getLine( TypedefEntry entry, int index  );
    StructHandler( std::vector<Node> ast );
    void lookForSymbolic( int seed );
    void createAssoc();
    void populateAssoc( BinaryIterator * iter );
    std::vector<TypedefEntry> getEntryList();
    std::vector<std::vector<std::string>> getText( TypedefEntry entry );
    std::string getStatement( TypedefEntry entry, int index );
};


#endif //GENTEST_DATASTRUCTURES_H
