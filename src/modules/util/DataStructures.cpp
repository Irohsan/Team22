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


//Translation Dictionary Methods
bool TranslationDictionary::loadFile( const std::string& filePath )
{
    configFile.open( filePath );

    //loops over each line of cfg file
    while( !configFile.eof() )
    {
        std::string currentTrans, nTerminal, translateTo;

        std::getline( configFile, currentTrans );

        auto location = currentTrans.find('=');

        //if invalid translation
        if( location == std::string::npos )
        {
            //log if this happens
        }
        else
        {
            nTerminal = currentTrans.substr(0, location );

            translateTo = currentTrans.substr( location + 1 );

            //replaces all "unnatural new lines" mainly for MAIN_FUNC
            while( translateTo.find('\\') != std::string::npos )
            {
                auto locationOfNewLine = translateTo.find_first_of('\\');

                translateTo = translateTo.substr(0,locationOfNewLine) + '\n'
                              + translateTo.substr(locationOfNewLine+2, translateTo.length());
            }

            TranslationEntry newEntry;

            newEntry.nTerminalVal = nTerminal;

            newEntry.translateTo = translateTo;

            newEntry.newEntry = false;

            translations.push_back( newEntry );
        }


    }

    configFile.close();

    return populateNTerminals();
}

TranslationEntry TranslationDictionary::findTranslationFromNTerminal( NonTerminals NTerminalToFind )
{
    TranslationEntry output = TranslationEntry();

    for( auto & translation : translations )
    {
        if( translation.nTerminal == NTerminalToFind )
        {
            output = translation;
        }
    }

    return output;
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

        bool populated = assignTranslation( currentNTerminalVal, currentNTerminal );

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

        bool populated = assignTranslation( currentNTerminalVal, currentNTerminal );

        if( !populated )
        {
            //TODO: Log if a non vital translation is missing
        }

        nonVitalIt++;
    }

    return true;
}

bool TranslationDictionary::assignTranslation(std::string translationString, NTerminal currentNTerminal )
{
    bool added = false;

    for( int index = 0; index < translations.size(); index++ )
    {
        if( translations[ index ].nTerminalVal == translationString )
        {
            translations[ index ].nTerminal = currentNTerminal;

            translations[ index ].translationAdded = true;

            added = true;
        }
    }

    return added;
}

// Structure Support Code

TypedefEntry::TypedefEntry(){ }


std::string TypedefEntry::getName()
{
    return this->name;
}

void TypedefEntry::setName( std::string name )
{
    this->name = name;
}

void TypedefEntry::addParam( ParameterPacket param )
{
    this->paramList.push_back( param );
}

std::vector<ParameterPacket> TypedefEntry::getParamList()
{
    return this->paramList;
}


bool StructHandler::inList( std::vector<TypedefEntry> vector, std::string name )
{
    for( int i = 0; i < (int) vector.size(); i++ )
    {
        if( name.find( vector.at( i ).getName() ) != std::string::npos )
        {
            return true;
        }
    }

    return false;
}

bool StructHandler::entryInList( std::vector<TypedefEntry> vector, std::string name )
{
    for( int i = 0; i < (int) vector.size(); i++ )
    {
        if( vector.at( i ).getName() == name )
        {
            return true;
        }
    }

    return false;
}

TypedefEntry StructHandler::getAssocEntry( std::string text )
{
    for( int i = 0; i < (int) entryList.size(); i++ )
    {
        if( text.find( entryList.at( i ).getName() ) != std::string::npos )
        {
            return entryList.at( i );
        }
    }
}

StructHandler::StructHandler( std::vector<Node> ast )
{
    this->ast = ast;
}

void StructHandler::lookForSymbolic( int seed )
{
   // Declare local variables.
   bool flag = false;
   Node currentNode;
   std::string name, paramName;
   
   // Iterate over each node in the AST looking of TYPEDEF/STRUCT
   for( int i = 0; i < (int) this->ast.size(); i++ )
   {
       // Get current node.
       currentNode = this->ast.at( i );

       if( currentNode.type == STRUCT || currentNode.type == TYPEDEF )
       {
           // Assign name
           name = currentNode.text.substr( currentNode.text.find_first_not_of( " \n\r\t\f\v" ), currentNode.text.find_last_not_of( " \n\r\t\f\v" ) );
           name = name.substr( name.find( "struct" ) + 6, name.length() - 2 );
           name = name.substr( name.find_first_not_of( " \n\r\t\f\v" ), name.length() );

           // Set flag
           flag = true;
       }

       // Exit case.
       if( flag && currentNode.type == CLOSE_BRK )
       {
           flag = false;
       }

       if( flag && ( currentNode.type == SYMBOLIC || ( inList( this->entryList, currentNode.text ) ) ) )
       {
      
           // Analyze pointer information.
           bool pointer = currentNode.text.find( "*" ) != std::string::npos;
    
           // Get param name.
           paramName = currentNode.text.substr( currentNode.text.find_first_not_of( " " ), currentNode.text.find( ";" ) );
           paramName = paramName.substr( paramName.find( " " ) + 1, paramName.length() );

           // Create parameter packet.
           ParameterPacket newParam;

           // Set values.
           newParam.name = paramName;
           newParam.type = currentNode.datatype;
           newParam.pointerFlag = pointer;
           newParam.prevObj.setName( "NULL" );

           if( inList( this->entryList, currentNode.text ) )
           {
               newParam.prevObj = getAssocEntry( currentNode.text );
           }

           this->paramList.push_back( newParam );
        
           // Check for entry already added.
           if( this->entryList.size() > 0 && 
               entryInList( this->entryList, name ) )
           {
               this->entryList.at( this->entryList.size() - 1 ).addParam( newParam );
           }
           else if( !entryInList( this->entryList, name ) )
           {
               // Create new entry.
               TypedefEntry newEntry;

               // Initialize entry info.
               newEntry.setName( name );
               newEntry.addParam( newParam );
            
               // Add to entryList.
               this->entryList.push_back( newEntry );  
           }
       }   
   }
}

std::vector<Node> StructHandler::getAST()
{
    return this->ast;
}

void StructHandler::createAssoc()
{
   // Declare local variables.
   bool flag = false;
   Node currentNode;
   std::string name, paramName;

   // Run base assoc.
   this->lookForSymbolic( 0 );
}

std::vector<std::string> StructHandler::getLine( TypedefEntry entry, int index  )
{   
    // Declare local variables.
    std::vector<std::string> lines;
    std::vector<std::string> base;
    std::string temp;
    TypedefEntry currentEntry = entry.getParamList().at( index ).prevObj;
    TypedefEntry nextEntry = currentEntry;

    // Configure base
    base.push_back( getStatement( entry, index ) );

    for( int i = 0; i < (int) currentEntry.getParamList().size(); i++ )
    { 
        while( nextEntry.getName() != "NULL" )
        {
            for( int j = 0; j < (int) base.size(); j++ )
            {
                lines.push_back( base.at( j ) + getStatement( nextEntry, i ) );
            }

            base = lines;
            lines.clear();
            nextEntry = nextEntry.getParamList().at( i ).prevObj;
        }   
    }
    
    return base;   
}

std::vector<std::vector<std::string>> StructHandler::getText( TypedefEntry entry )
{
    // Declare local variables.
    std::vector<std::vector<std::string>> list;

    // Iterate over each parameter.
    for( int index = 0; index < (int) entry.getParamList().size(); index++ )
    {
        list.push_back( getLine( entry, index ) );
    }
    
    return list;
}



std::string StructHandler::getName( std::string text )
{
    text = text.substr( text.find_first_not_of( " \n\r\t\f\v" ),
                        text.find_last_not_of( " \n\r\t\f\v" ) );

    if( text.find( "*" ) != std::string::npos )
    {
        text = text.substr( text.find( "*" ) + 1, text.length() );
    }

    text = text.substr( text.find(" ") + 1, text.length() );
    text = text.substr( 0, text.find( ";" ) );

    return text;
}

std::string StructHandler::getType( std::string var )
{
    for( int i = 0; i < (int) this->paramList.size(); i++ )
    {
        if( var.find( this->paramList.at( i ).name ) != std::string::npos )
        {
            return this->paramList.at( i ).type;
        }
    }

    return "";
}

void StructHandler::populateAssoc( BinaryIterator * iter )
{
    // Declare local variables.
    std::vector<Node> nodeList;
    std::string datatype;
    std::string searchVar;
    std::vector<Node> tempAST = this->ast;
   
    // Iterate over AST.
    for( int i = 0; i < (int) this->ast.size(); i++ )
    {
        if( this->ast.at( i ).type == STATEMENT 
            && inList( this->entryList, this->ast.at( i ).text ) )
        {
            std::vector<std::vector<std::string>> textList = getText( getAssocEntry( this->ast.at( i ).text ) );
            std::string name = getName( this->ast.at( i ).text );
            std::string delim = ".";
            
            if( this->ast.at( i ).text.find( "*" ) != std::string::npos )
            {
                delim = "->";
            }

            for( int string = 0; string < (int) textList.size(); string++ )
            {
                for( int line = 0; line < (int) textList.at( string ).size(); line++ )
                {
                    // Create a new Node.
                    Node newNode;

                    // Assign values.
                    newNode.type = STATEMENT;
                    newNode.text += name + delim + textList.at( string ).at( line ) + " = ";

                    // Get last variable name to find type.
                    searchVar = newNode.text.substr( newNode.text.find_last_of( "." ) + 1, newNode.text.find_last_not_of( " " ) );
                    searchVar = searchVar.substr( searchVar.find_last_of( "->" ) + 1, searchVar.length() );
                    searchVar = searchVar.substr( 0, searchVar.find_last_of( " " ) - 1 );
                    newNode.datatype = getType( searchVar );
                    
                    if( newNode.datatype == "int" )
                    {
                        newNode.text += std::to_string( iter->nextInt() );
                    }
                    else if( newNode.datatype == "char" )
                    {
                        newNode.text += std::to_string( iter->nextChar() );
                    }
                    else if( newNode.datatype == "long" )
                    {
                        newNode.text += std::to_string( iter->nextLong() );
                    }
                    else if( newNode.datatype == "double" )
                    {
                        newNode.text += std::to_string( iter->nextDouble() );
                    }
                    else if( newNode.datatype == "float" )
                    {
                        newNode.text += std::to_string( iter->nextFloat() );
                    }
                    else if( newNode.datatype == "short" )
                    {
                        newNode.text += std::to_string( iter->nextShort() );
                    }
                    else if( newNode.datatype == "unsigned" )
                    {
                        newNode.text += std::to_string( iter->nextUInt() );
                    }
                    else if( newNode.datatype == "bool" )
                    {
                        newNode.text += std::to_string( iter->nextBool() );
                    }
                    else
                    {
                        std::cout<<"UNIMPLEMENTED type: "<<newNode.datatype<<std::endl;
                    }

                    newNode.text += ";";
                    
                    // Add node into tempAST
                    tempAST.insert( (tempAST.begin() + i + 1), newNode );
                }
            }
        }
    }

    // Set ast.
    this->ast = tempAST;
}

std::string StructHandler::getStatement( TypedefEntry entry, int index )
{
    // Declare local variables.
    ParameterPacket param = entry.getParamList().at( index );

    if( param.prevObj.getName() == "NULL" )
    {
        return param.name;
    }
    else if( param.pointerFlag )
    {
        return param.name + "->";
    }
    else
    {
        return param.name + ".";
    } 
}


std::vector<TypedefEntry> StructHandler::getEntryList()
{
    return this->entryList;
}

