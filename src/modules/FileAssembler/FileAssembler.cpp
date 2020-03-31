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

    int currentDepth = 0;

    for( int currentTranslation = 0; currentTranslation < (int) size; currentTranslation++ )
    {
        //maybe move individual translations to a seperate class/function that the translation is passed into
        //convert testing library to correct library

        bool added = false;

        std::string currentString = stripWhiteSpace( current->text );

        currentString = stripNewLine( currentString );

        std::cout<<"Node: " + currentString + "\nType: " + std::to_string(current->type) + "\n";

        //Workaround for TE adding an additional blank line
        if( currentString.length() == 0 )
        {
            current++;

            continue;
        }

        //translate the deepstate include statement
        if( current->type == INCLUDE && current->text.find( INCLUDE_STATEMENT ) != std::string::npos )
        {
            output += generatePadding( currentDepth ) + translate.findTranslationFromNTerminal(INCLUDE).translateTo + '\n';

            added = true;
        }
        else if( current->type == CLOSE_BRK )
        {
            structFlag = false;
            output += generatePadding( currentDepth ) + "\n" + current->text + "\n";
        }
        else if( current->type == STRUCT || current->type == TYPEDEF )
        {
            structFlag = true;
            output += generatePadding( currentDepth ) + current->text;
        }
        else if( current->type == SYMBOLIC && structFlag )
        {
            auto startOfVar = currentString.find_first_of(' ') + 1;

            auto location = currentString.find(',');

            std::string variableName = currentString.substr( startOfVar, location - startOfVar );

            output += generatePadding( currentDepth ) + current->datatype + " " + variableName + ";" + "\n";
        }
        else if( current->type == SYMBOLIC )
        {
            //if multi variable line
            while( currentString.find(',') != std::string::npos )
            {
                auto startOfVar = currentString.find_first_of(' ') + 1;

                auto location = currentString.find(',');

                std::string variableName = currentString.substr( startOfVar, location - startOfVar );

                output += generatePadding( currentDepth ) + symbolicLine( variableName, &it, current->datatype ) + "\n";

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

            added = true;

            output += generatePadding( currentDepth ) + symbolicLine( variableName, &it, current->datatype ) + '\n';
        }

        //handle ASSERT/CHECK/ASSUME statements
        else if( current->type >= ASSERT_GT && current->type <= CHECK )
        {
            TranslationEntry translation = translate.findTranslationFromNTerminal(current->type );

            //If translation doesnt exist, convert to base case with the correct sign
            if( translation.newEntry )
            {
                output += generatePadding( currentDepth ) + questionConversion( currentString, current->type, &translate ) + '\n';
            }
            else
            {
                output += generatePadding( currentDepth ) + questionTranslation( translation, currentString ) + '\n';
            }

            added = true;
        }
        //handles deepstate_question
        else if( current->type >= DEEPSTATE_ASSERT && current->type <= DEEPSTATE_CHECK )
        {
            auto startOfStatement = currentString.find_first_of('_') + 1;

            auto statement = currentString.substr(startOfStatement, currentString.length() - startOfStatement);

            NTerminal currentType;

            if( statement.find("Assume") != std::string::npos )
            {
                currentType = ASSUME;
            }
            else if( statement.find("Assert") != std::string::npos )
            {
                currentType = ASSERT;
            }
            else
            {
                currentType = CHECK;
            }

            auto translation = translate.findTranslationFromNTerminal( currentType );

            output += generatePadding( currentDepth ) + questionTranslation( translation, statement ) + '\n';

            added = true;
        }
        else if( current->type >= DEEPSTATE_INT && current->type <= DEEPSTATE_MALLOC )
        {
            //TODO: Implement DeepState_Types


        }

        //get rid of namespace
        else if( currentString.find("using namespace deepstate;") != std::string::npos )
        {
            currentString = "";

            added = true;
        }
        //if a function has a NO_INLINE
        else if( current->type == FUNC && currentString.find(S_DEEPSTATE_NOINLINE) != std::string::npos )
        {
            //TODO: Gracefully crash if no translation for NO_INLINE in the cfg
            output += generatePadding( currentDepth ) +
                    translate.findTranslationFromNTerminal(DEEPSTATE_NOINLINE).translateTo +
                    currentString.substr(S_DEEPSTATE_NOINLINE.length());

            added = true;
        }

        if( current->text.find('}') != std::string::npos )
        {
            currentDepth--;
        }

        if( !added )
        {
            output += generatePadding( currentDepth ) + currentString + "\n";
        }

        //if at the end of a function, add an additional new line
        if( currentDepth == 0 && currentString.find('}') != std::string::npos )
        {
            output += '\n';
        }

        if( current->text.find('{') != std::string::npos )
        {
            currentDepth++;
        }

        //reset the iterator for each test
        if( current->type == TEST )
        {
            it.reset();
        }



        current++;
    }

    //will insert a main function from the .cfg if it exists.
    auto mainTrans = translate.findTranslationFromNTerminal(MAIN_FUNC);

    if( mainTrans.translationAdded )
    {
        output += mainTrans.translateTo;
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

std::string symbolicLine( const std::string& variableName, BinaryIterator * iterator, const std::string& type )
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

    const auto& checkSign = checkCoversion.at(whichCheck);

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

std::string questionTranslation( const TranslationEntry& translation, const std::string& originalString )
{
    std::string translateTo = translation.translateTo;

    auto start = originalString.find_first_of('(');

    auto values = originalString.substr(start, originalString.length()-start);

    return translateTo + values;
}

int questionClosingParen( const std::string& args )
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

std::string generatePadding( int depth )
{
    return std::string(depth, '\t');
}

std::string stripWhiteSpace( const std::string& toStrip )
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

std::string questionWhichCheck( const std::string& toCheck, const std::string& baseCase )
{
    auto length = baseCase.length();

    return toCheck.substr(length, 2);
}

int commaLocation( const std::string& toFind )
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

void writeToFile( const std::string& fileLocation, const std::string& fileContents )
{
    std::ofstream outputFile;

    outputFile.open( fileLocation );

    outputFile<<fileContents<<std::endl;

    outputFile.close();
}
