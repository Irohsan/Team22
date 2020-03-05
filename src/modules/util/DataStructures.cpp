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
bool TranslationEntry::assignTranslation( const std::string& translation, NonTerminals toAssign )


    //if this translation is correct
    if( this->nTerminalVal == translation )
    {
        this->nTerminal = toAssign;

        return true;
    }

    if( this->nextEntry == nullptr )
    {
        return false;
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
    bool first = false;


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

        //replaces all "unnatural new lines" mainly for MAIN_FUNC
        while( translateTo.find("\\") != std::string::npos )
        {
            auto location = translateTo.find_first_of("\\");

            translateTo = translateTo.substr(0,location) + '\n'
                    + translateTo.substr(location+2, translateTo.length());
        }

        //if first entry
        if( !first )
        {
            translations.nTerminalVal = nTerminal;

            translations.translateTo = translateTo;

            first = true;
        }
        //else append to end
        else {
            translations.appendToEnd( nTerminal, translateTo );
        }
    }

    return populateNTerminals();
}

TranslationEntry * TranslationDictionary::findTranslationFromNTerminal( NonTerminals NTerminalToFind )
{
    return translations.findTranslationFromNTerminal( NTerminalToFind );
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

        bool populated = translations.assignTranslation( currentNTerminalVal, currentNTerminal );

        //if a vitalTranslation wasn't populated
        if( !populated )
        {
            //TODO: Log vital translation not being populated

            return false;
        }
        //increment the iterator for the next vital translation
        it++;

    }
    auto nonVitalIt = nonVital.begin();

    while( nonVitalIt != nonVital.end() )
    {
        std::string currentNTerminalVal = nonVitalIt->first;

        NTerminal currentNTerminal = nonVitalIt->second;

        bool populated = translations.assignTranslation( currentNTerminalVal, currentNTerminal );

        if( !populated )
        {
            //TODO: Log if a non vital translation is missing
        }

        nonVitalIt++;
    }

    return true;
}


