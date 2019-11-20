// Program Header Information ///////////////////////////
/**
 * @file TranslationEngine.h
 *
 * @team GenTest ( Team 22 )
 *
 * @brief Header file for the TranslationEngine system
 *
 * @details Contains NonTerminals and function definitions for the TranslationEngine
 *
 * @version 1.00
 *          Joshua Johnson (11/16/19)
 *          Initial development of the TranslationEngine
 */


#ifndef GENTEST_TRANSLATIONENGINE_H
#define GENTEST_TRANSLATIONENGINE_H

#include "DataStructures.h"
#include "Util.h"


/**
 * A Line is used for storing non terminals and lines of code
 */

class FileParser
{
public:
    std::fstream harnessFile;

    std::vector<CFG> fileVector;

    TranslateDictionary translateDictionary;

    void buildTranslateDictionary( const std::string& fileName );

    void openHarnessFile( const std::string& fileName );

    void scanFile();

    void scanLine( std::string line );

    static std::string removeWhitespace( std::string line );

    void displayTranslatedFile();

    std::string translatedToString();

    void writeToFile(std::string fileName);

};

void runTranslator( const std::string& fileName, const std::string& configFileName );



#endif //GENTEST_TRANSLATIONENGINE_H