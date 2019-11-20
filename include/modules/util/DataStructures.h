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
    USIGNED_INT,
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
    LEFT_SHIFT,                 // Shift Operators >>/<<
    RIGHT_SHIFT,
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
    TEST_FUNC,                  //function for a test
    ONE_OF,
    NO_TRANSLATE

} NTerminal;

class Line
{
public:
    NTerminal nonTerminalCode;
    std::string data;
};

class CFG {

public:
    Line heldLine;

    void add( NTerminal nonTerminal, std::string data );

    void toString();

    std::string getString();

};


//Util structures

//map containing enums that require translation, with their DeepState names
//allows for lookup of enum for desired translationtoTranslate
const std::map < std::string, NTerminal > needTranslateString =
        {
                { "LEFT_SHIFT", LEFT_SHIFT },
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
                { "ASSUME_GE", ASSUME_GE },
                { "TEST_FUNC", TEST_FUNC }
        };

/**
 * @brief Class for FileNotFoundException
 *
 * @details Exception that is thrown when a file is not found
 */
class FileException : public std::exception
{
protected:
    const std::string fileName;

    const bool fileFail;

public:
    explicit FileException( std::string  fileName, const bool fileFail=true ):
            fileName(std::move(fileName)),
            fileFail(fileFail)
    {/*empty function*/}
};

//setup default population of toTranslate
//will be populated from testConfig as well
const std::map< NTerminal, std::string > toTranslate =
        {
                { X_INT, "int" },
                { X_LONG, "long" },
                { X_SHORT, "short" },
                { X_DOUBLE, "double" },
                { X_FLOAT, "float" },
                { X_UINT8, "uint_8" },
                { X_UINT16, "uint_16" },
                { X_UINT32, "uint_32" },
                { X_UINT64, "uint_32" },
                { X_USIGNED_INT, "unsigned int" },
                { X_UNSIGNED_LONG, "unsigned long" },
                { X_UNSIGNED_SHORT, "unsigned short" }
        };

//Eventually this should be populated with all nonTerminals (I Think)
const std::map< NTerminal, std::string > beforeTranslate =
        {
                { X_INT, "Symbolic<int>>" },
                { X_LONG, "Symbolic<long>" },
                { X_SHORT, "Symbolic<short>" },
                { X_DOUBLE, "Symbolic<double>" },
                { X_FLOAT, "Symbolic<float>" },
                { X_UINT8, "Symbolic<uint_8>" },
                { X_UINT16, "Symbolic<uint_16>" },
                { X_UINT32, "Symbolic<uint_32>" },
                { X_UINT64, "Symbolic<uint_32>" },
                { X_USIGNED_INT, "Symbolic<unsigned int>" },
                { X_UNSIGNED_LONG, "Symbolic<unsigned long>" },
                { X_UNSIGNED_SHORT, "Symbolic<unsigned short>" }
        };

/**
 * @brief will contain a single translation of a NT
 *
 * @details struct that will hold the translations of NT's
 */
struct TranslateEntry
{
    NTerminal nTToTranslate;

    std::string translation;

    std::string toTranslate;

    TranslateEntry *next = nullptr;
};




#endif //GENTEST_DATASTRUCTURES_H
