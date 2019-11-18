// Program Header Information ///////////////////////////
/**
 * @file Util.h
 *
 * @team GenTest ( Team 22 )
 *
 * @brief Header file for Util
 *
 * @details Contains class and function definitions for Util.cpp
 *
 * @version 1.00
 *          Tristan Miller
 *          Created Skeleton File
 *
 */

#ifndef GENTEST_UTIL_H
#define GENTEST_UTIL_H

#include <bits/exception.h>
#include <string>
#include "TranslationEngine.h"


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
        { "TEST", TEST_FUNC }
        };


/**
 * @brief Class for FileNotFoundException
 *
 * @details Exception that is thrown when a file is not found
 */
class FileException : public std::exception
{
protected:
    const std::string& fileName;

    const bool fileFail;

public:
    FileException( const std::string& fileName, const bool fileFail=true ):
    fileName(fileName),
    fileFail(fileFail)
    {/*empty function*/}

};

/**
 * @brief will contain a single translation of a NT
 *
 * @details class that will hold the translations of NT's
 */
class TranslateObject
{
    NTerminal nonTerminalCode;
    std::string translateTo;
};

/**
 * @brief will build a dictionary for translation
 *
 * @details Class to store the translations for nonTerminals, will iteratively create using config file
 */
class TranslateDictionary
{
public:
    std::fstream translateFile;

    std::vector< TranslateObject > translationStorage;

    std::string getTranslation( NTerminal stringToGet );

    //setup default population of toTranslate
    //will be populated from testConfig as well
    //this probably should be done using the TranslateObject data type turned
    //into a linked list or something, I'm struggling with the map..
    std::map< NTerminal, std::string > toTranslate =
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


    void generateTranslateMapFromConfig();

    void openTranslateFile( const std::string& fileName );
};


#endif //GENTEST_UTIL_H
