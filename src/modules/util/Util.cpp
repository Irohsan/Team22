// Program Information //////////////////////////////////////////////
/**
  * @file Util.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief Utility classes/functions go here
  *
  * @details This file will contain utility functions or classes that dont necessarily have
  *          another location to be.
  *
  * @version 0.01
  *          Tristan Miller ( 5 November 2019 )
  *          Created skeleton for class layout

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/

#include "Util.h"


//TranslateDictionary Class functions
void TranslateDictionary::buildDefaultTranslations()
{
    for (const auto &nTToTranslate : toTranslate)
    {
        addTranslation( nTToTranslate.first, nTToTranslate.second );
    }
}

int TranslateDictionary::getSize()
{
    return getSizeRecursiveHelp( head );
}

void TranslateDictionary::generateTranslateMapFromConfig()
{
    std::string line, key, value;

    while( getline( translateFile, line ) )
    {
        key = line.substr( 0, line.find( '=' ) );

        value = line.substr( line.find( '=' ) + 1, line.length() );

        addTranslation(needTranslateString.find(key)->second, value);
    }
}

void TranslateDictionary::openTranslateFile( const std::string& fileName )
{
    translateFile.open( fileName );

    //error handling for invalid file
    if( translateFile.fail() )
    {
        throw FileException(fileName, translateFile.fail() );
    }

}

void TranslateDictionary::addTranslation(NTerminal NTToAdd, const std::basic_string<char>& translateTo )
{
    //temp value needed to convert const value translateTo to a non-const value
    std::string temp;

    //create initial node
    if( head == nullptr )
    {
        head = new TranslateEntry;

        tail = head;

        head->nTToTranslate = NTToAdd;

        temp = translateTo;

        head->translation = temp;
    }
    else
    {
        //if list is already created
        tail->next = new TranslateEntry;

        tail = tail->next;

        tail->nTToTranslate = NTToAdd;

        tail->translation = translateTo;
    }
}

void TranslateDictionary::buildFullTranslationDictionary()
{
    buildDefaultTranslations();

    generateTranslateMapFromConfig();
}

NTerminal TranslateDictionary::findTranslateTo( const std::string& translation )
{
    return findTranslateToHelper( translation, head );
}

std::string TranslateDictionary::findNTerminal( NTerminal nTerminal )
{
    return findNTerminalToHelper( nTerminal, head );
}


//private TranslateDictionary functions
int TranslateDictionary::getSizeRecursiveHelp( struct TranslateEntry *entry )
{
    if( entry == nullptr )
    {
        return 0;
    }
    else return getSizeRecursiveHelp( entry->next ) + 1;
}

NTerminal TranslateDictionary::findTranslateToHelper( const std::string& translation,
                                                      struct TranslateEntry *entry )
{
    if( entry == nullptr )
    {
        throw TranslationException( translation );
    }
    else
    {
        if( entry->translation == translation )
        {
            return entry->nTToTranslate;
        }
        else
        {
            return findTranslateToHelper( translation, entry->next );
        }
    }
}

std::string TranslateDictionary::findNTerminalToHelper( NTerminal currentNTerminal,
                                                      struct TranslateEntry *entry )
{
    if( entry == nullptr )
    {
        throw NTerminalException( currentNTerminal );
    }
    else
    {
        if( entry->nTToTranslate == currentNTerminal )
        {
            return entry->translation;
        }
        else
        {
            return findNTerminalToHelper( currentNTerminal, entry->next );
        }
    }
}




