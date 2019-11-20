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

#include "DataStructures.h"

/**
 * @brief will build a dictionary for translation
 *
 * @details Class to store the translations for nonTerminals, will iteratively create using config file
 */
class TranslateDictionary
{
public:
    std::fstream translateFile;

    struct TranslateEntry *head = nullptr, *tail;

    void buildDefaultTranslations();

    int getSize();

    void generateTranslateMapFromConfig();

    void openTranslateFile( const std::string& fileName );

    void addTranslation(NTerminal NTToAdd, const std::basic_string<char>& translateTo );

    void buildFullTranslationDictionary();

    NTerminal findTranslateTo( const std::string& translation );

    std::string findNTerminal( NTerminal nTerminal );

    TranslateEntry* doesStringContainTranslation( const std::string& stringToCheck );

private:
    /**
     * recursive helper function to get size, this function
     * assumes that the list is already populated
     * @param entry current entry to check for tail
     * @return size of TranslateEntry list
     */
    static int getSizeRecursiveHelp( struct TranslateEntry *entry );

    static NTerminal findTranslateToHelper( const std::string& translation, struct TranslateEntry *entry );

    static std::string findNTerminalToHelper( NTerminal currentNTerminal,
                                       struct TranslateEntry *entry );

    static TranslateEntry* doesStringContainTranslationHelp( const std::string& stringToCheck,
                                           struct TranslateEntry *entry );
};





#endif //GENTEST_UTIL_H
