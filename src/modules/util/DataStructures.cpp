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




//Translation Entry Methods

void TranslationEntry::appendToEnd( std::string nTerminalVal, std::string translateTo )
{
    //if current index is end of list
    if( this->nextEntry == nullptr )
    {
        this->nextEntry = new TranslationEntry;

        this->nextEntry->nTerminalVal = nTerminalVal;

        this->nextEntry->translateTo = translateTo;
    } else
    {
        this->nextEntry->appendToEnd( nTerminalVal, translateTo );
    }
}

bool TranslationEntry::assignTranslation(std::string translation, NonTerminals toAssign )
{
    if( this == nullptr )
    {
        //TODO: Log not finding a translation in the entries
        return false;
    }
    //if this translation is correct
    if( this->nTerminalVal == translation )
    {
        this->nTerminal = toAssign;

        return true;
    }

    return this->nextEntry->assignTranslation(translation, toAssign);
}

TranslationEntry* TranslationEntry::findTranslationFromNTerminal( NonTerminals NTerminalToFind )
{
    if( this == nullptr )
    {
        //TODO: Log this

        return nullptr;
    }
    if( NTerminalToFind == this->nTerminal )
    {
        return this;
    }

    return this->nextEntry->findTranslationFromNTerminal( NTerminalToFind );
}

//Translation Dictionary Methods

void TranslationDictionary::setFile(const std::string& filePath )
{
    configFile.open( filePath );
}

bool TranslationDictionary::loadFile()
{
    //loops over each line of cfg file
    while( !configFile.eof() )
    {
        std::string currentTrans, nTerminal, translateTo;

        std::getline( configFile, currentTrans );

        int location = currentTrans.find('=');

        //if invalid translation
        if( location == std::string::npos )
        {
            //log if this happens

            return false;
        }

        nTerminal = currentTrans.substr(0, location );

        translateTo = currentTrans.substr( location + 1 );

        //if first entry
        if( translations == nullptr )
        {
            translations = new TranslationEntry();

            translations->nTerminalVal = nTerminal;

            translations->translateTo = translateTo;
        }
        //else append to end
        else {
            translations->appendToEnd( nTerminal, translateTo );
        }
    }

    return populateNTerminals();
}

TranslationEntry * TranslationDictionary::findTranslationFromNTerminal( NonTerminals NTerminalToFind )
{
    return translations->findTranslationFromNTerminal( NTerminalToFind );
}

/**
 * Private method to populate the translation entries with their proper NTerminal
 * @return If the population was successful.
 */
bool TranslationDictionary::populateNTerminals()
{
    auto it = vitalTranslations.begin();

    while( it != vitalTranslations.end() )
    {
        std::string currentNTerminalVal = it->first;

        NTerminal currentNTerminal = it->second;

        bool populated = translations->assignTranslation( currentNTerminalVal, currentNTerminal );

        //if a vitalTranslation wasn't populated
        if( !populated )
        {
            //TODO: Log vital translation not being populated

            return false;
        }
        //increment the iterator for the next vital translation
        it++;

    }

    return true;
}


