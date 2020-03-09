/**
  * @file FileAssembler.cpp
  *
  * @team GenTest ( Team 22 )
  *
  * @brief This will handle the reassembly of the standalone test
  *
  * @details This file will take in the output from the Translation Engine
  *          and utilize the binary parser to insert and generate a standalone test
  *
  * @version 1.00
  *          Tristan Miller ( 24 February 2019 )
  *          Began work on final system

  (Legal terms of use/libraries used need to be added here once we get to that point)

**/
#include "FileAssembler.h"

void buildFile( std::vector<Node> transEngineOutput, char * binaryFile,
        char * outputPath, char * translateCFG )
{
    std::map<std::string, std::string> varMap;

    std::string output;
    bool structFlag = false;

    BinaryParser bp;

    bp.parse( binaryFile );

    auto it = bp.getIterator();

    // Struct translation handler.
    StructHandler handler( transEngineOutput );
    handler.createAssoc();

    handler.populateAssoc( &it );
    transEngineOutput = handler.getAST();

    TranslationDictionary translate;

    if( !translate.loadFile(translateCFG) )
    {
        std::cout<<"Bad Load\n";

        //TODO: Log if loading the file is bad
    }

    auto current = transEngineOutput.begin();

    auto size = transEngineOutput.size();

    for( int currentTranslation = 0; currentTranslation < (int) size; currentTranslation++ )
    {
        //maybe move individual translations to a seperate class/function that the translation is passed into
        //convert testing library to correct library

        std::string currentString = current->text;

        //strip the \n on everything but comments to make it consistent
        //comments do not have a \n at the end of their statement
        if( current->type != COMMENT )
        {
            currentString = stripNewLine( currentString );
        }
        //translate the deepstate include statement
        if( current->type == INCLUDE && current->text.find(INCLUDE_STATEMENT) != std::string::npos )
        {
            output += translate.findTranslationFromNTerminal(INCLUDE).translateTo + '\n';
        }
        else if( current->type == CLOSE_BRK )
        {
            structFlag = false;
            output += "\n" + current->text + "\n";
        }
        else if( current->type == STRUCT || current->type == TYPEDEF )
        {
            structFlag = true;
            output += current->text;
        }
        else if( current->type == SYMBOLIC && structFlag )
        {
            auto startOfVar = currentString.find_first_of(' ') + 1;

            auto location = currentString.find(',');

            std::string variableName = currentString.substr( startOfVar, location - startOfVar );

            output += current->datatype + " " + variableName + ";" + "\n";
        }
        else if( current->type == SYMBOLIC )
        {

            //Added due to AST functionality
            currentString = stripWhiteSpace( currentString);

            //if multi variable line
            while( currentString.find(',') != std::string::npos )
            {
                auto startOfVar = currentString.find_first_of(' ') + 1;

                auto location = currentString.find(',');

                std::string variableName = currentString.substr( startOfVar, location - startOfVar );

                output += symbolicLine( variableName, &it, current->datatype ) + '\n';

                auto firstPart = currentString.substr( 0, startOfVar );

                auto secondPart = currentString.substr(location + 1, currentString.length() - location );

                //strip additional spaces
                while( secondPart.substr(0,1).find(' ') != std::string::npos )
                {
                    secondPart = secondPart.substr(1, secondPart.length() - 1 );
                }

                currentString = firstPart + secondPart;
            }

            //locate the variable name
            auto startOfVar = currentString.find_last_of(' ') + 1;

            auto endOfVar = currentString.find(';');

            std::string variableName = currentString.substr(startOfVar, endOfVar - startOfVar );

            output += symbolicLine( variableName, &it, current->datatype ) + '\n';
        }

        //handle ASSERT/CHECK/ASSUME statements
        else if( current->type >= ASSERT_GT && current->type <= CHECK )
        {
            TranslationEntry translation = translate.findTranslationFromNTerminal(current->type );

            //If translation doesnt exist, convert to base case with the correct sign
            if( translation.newEntry )
            {
                output += questionConversion( currentString, current->type, &translate ) + '\n';
            }
            else
            {
                output += questionTranslation( translation, currentString ) + '\n';
            }
        }

        //get rid of namespace
        else if( currentString.find("using namespace deepstate;") != std::string::npos )
        {
            currentString = "";
        }
        //if a function has a NO_INLINE
        else if( current->type == FUNC && currentString.find(S_DEEPSTATE_NOINLINE) != std::string::npos )
        {
            //TODO: Gracefully crash if no translation for NO_INLINE in the cfg
            output += translate.findTranslationFromNTerminal(DEEPSTATE_NOINLINE).translateTo +
                    currentString.substr(S_DEEPSTATE_NOINLINE.length());
        }
        else
        {
            output+=currentString + "\n";
        }

        current++;
    }

    //will insert a main function from the .cfg if it exists.
    auto mainTrans = translate.findTranslationFromNTerminal(MAIN_FUNC);

    if( mainTrans.translationAdded )
    {
        output +=  '\n' + mainTrans.translateTo;
    }

    writeToFile( outputPath, output);
}

std::string stripNewLine( std::string stringToStrip )
{
    while( stringToStrip.find('\n') != std::string::npos )
    {
        auto location = stringToStrip.find('\n');

        stringToStrip.erase( location, 1 );
    }

    return stringToStrip;
}

std::string symbolicLine( std::string variableName, BinaryIterator * iterator, std::string type )
{
    std::string outputString;

    if( type == "int" )
    {
        outputString = "int " + variableName + " = " + std::to_string( iterator->nextInt() );
    }
    else if( type == "char" )
    {
        outputString = "char " + variableName + " = " + std::to_string( iterator->nextChar() );
    }
    else if( type == "long" )
    {
        outputString = "long " + variableName + " = " + std::to_string( iterator->nextLong() );
    }
    else if( type == "double" )
    {
        outputString = "double " + variableName + " = " + std::to_string( iterator->nextDouble() );
    }
    else if( type == "float" )
    {
        outputString = "float " + variableName + " = " + std::to_string( iterator->nextFloat() );
    }
    else if( type == "short" )
    {
        outputString = "short " + variableName + " = " + std::to_string( iterator->nextShort() );
    }
    else if( type == "unsigned" )
    {
        outputString = "unsigned " + variableName + " = " + std::to_string( iterator->nextUInt() );
    }
    else if( type == "bool" )
    {
        outputString = "bool " + variableName + " = " + std::to_string( iterator->nextBool() );
    }
    else
    {
        std::cout<<"UNIMPLEMENTED TYPE: "<<type<<std::endl;
    }

    //TODO: Support all data types

    return outputString + ';';
}


std::string questionConversion( std::string previousText, NTerminal currentNTerminal, TranslationDictionary * dictionary )
{
    NTerminal baseCase = findBaseCase( currentNTerminal );

    std::string whichCheck;

    std::string translateTo = dictionary->findTranslationFromNTerminal(baseCase).translateTo;

    bool extraInfo = previousText.find("<<") != std::string::npos;

    //Something changed and now there is occasionally whitespace where there shouldn't be, added this line to fix
    previousText = stripWhiteSpace( previousText );

    if( baseCase == CHECK )
    {
        whichCheck = questionWhichCheck( previousText, "CHECK_" );
    }
    else if( baseCase == ASSUME )
    {
        whichCheck = questionWhichCheck( previousText, "ASSUME_" );
    }
    else whichCheck = questionWhichCheck( previousText, "ASSERT_" );

    auto checkSign = checkCoversion.at(whichCheck);

    auto start = previousText.find_first_of('(');

    auto end = questionClosingParen( previousText );

    auto args = previousText.substr( start+1, end-start-1);

    auto comma = commaLocation( args );

    std::string firstArg = stripWhiteSpace( args.substr(0, comma ));

    std::string secondArg = stripWhiteSpace( args.substr(comma + 1, args.length() - comma ) );

    std::string output = translateTo + "( " + firstArg + ' ' + checkSign + ' ' + secondArg + " )";

    if( extraInfo )
    {
        output += previousText.substr( end + 1 );

    }
    else
    {
        output += ';';
    }

    return output;
}


std::string questionTranslation( TranslationEntry translation, std::string originalString )
{
    std::string translateTo = translation.translateTo;

    auto start = originalString.find_first_of('(');

    auto values = originalString.substr(start, originalString.length()-start);

    return translateTo + values;
}

int questionClosingParen( std::string args )
{
    auto cstr = args.c_str();

    int scopeCount = 0;

    int index;

    for( index = 0; index < args.size(); index++ )
    {
        char currentVal = cstr[index];

        if( currentVal == '(' )
        {
            scopeCount++;
        }
        else if( currentVal == ')' )
        {
            scopeCount--;

            //if last closing parentheses in args, but not later values
            if( scopeCount == 0 )
            {
                return index;
            }
        }
    }

    return index;
}

std::string stripWhiteSpace( std::string toStrip )
{
    int startSpaces = 0, endSpaces = 0;

    auto cStr = toStrip.c_str();

    for( int index = 0; index < toStrip.length(); index++ )
    {
        char currentChar = cStr[index];

        if( currentChar == ' ' )
        {
            //still in starting spaces
            if( startSpaces == endSpaces )
            {
                startSpaces++;

                endSpaces++;
            }
        }
        else
        {
            endSpaces = index;
        }
    }

    return toStrip.substr(startSpaces, endSpaces-startSpaces+1);
}

std::string questionWhichCheck( std::string toCheck, std::string baseCase )
{
    auto length = baseCase.length();

    return toCheck.substr(length, 2);
}

int commaLocation( std::string toFind )
{
    const char * cStr = toFind.c_str();

    int currentDepth = 0;

    for( int index = 0; index < toFind.length(); index++ )
    {
        char current = cStr[index];

        if( current == '(') currentDepth++;
        else if (current == ')' ) currentDepth--;
        else if (current == ',' )
        {
            if( currentDepth == 0 )
            {
                return index;
            }
        }
    }

    return 0;
}

NTerminal findBaseCase( NTerminal currentCase )
{
    if( currentCase >= ASSERT_GT && currentCase < ASSERT )
    {
        return ASSERT;
    }
    else if( currentCase >= ASSUME_GT && currentCase < ASSUME )
    {
        return ASSUME;
    }
    else return CHECK;
}

void writeToFile( std::string fileLocation, std::string fileContents )
{
    std::ofstream outputFile;

    outputFile.open( fileLocation );

    outputFile<<fileContents<<std::endl;

    outputFile.close();
}
