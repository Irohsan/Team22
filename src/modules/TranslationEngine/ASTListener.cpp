#include "ASTListener.h"

#define INDENT 2

using namespace std;

ASTListener::ASTListener()
{
    this->semiFlag = false;
}

void ASTListener::trimWhitespace()
{
    for( int i = 0; i < (int) list.size(); i++ )
    {
        size_t start = list.at( i ).text.find_first_not_of( ASTListener::WHITESPACE );
        list.at( i ).text = list.at( i ).text.substr(start);
    }
}

void ASTListener::indent()
{
    int level = 0;

    for( int i = 0; i < (int) list.size(); i++ )
    {
        if( list.at( i ).type == CLOSE_BRK )
        {
            level--;
        }
        
        list.at( i ).text = this->createIndent( level ) + list.at( i ).text;

        if( list.at( i ).type == OPEN_BRK ||
            list.at( i ).type == IF ||
            list.at( i ).type == TEST ||
            list.at( i ).type == WHILE_LOOP ||
            list.at( i ).type == FOR_LOOP || 
            list.at( i ).type == TYPEDEF ||
            list.at( i ).type == STRUCT )
        {
            level++;
        }
    }
}

void ASTListener::formatTree()
{
    for( int i = 0; i < (int) list.size(); i++ )
    {
        if( list.at( i ).type == FUNC ||
            list.at( i ).type == TEST ||
            list.at( i ).type == TYPEDEF ||
            list.at( i ).type == STRUCT ||
            list.at( i ).type == NAMESPACE ||
            list.at( i ).type == DEFINE ||
            list.at( i ).type == INCLUDE )
        {
            list.at( i ).text = "\n" + list.at( i ).text;
        }
    }
}

std::string ASTListener::createIndent( int level )
{
    std::string indentString = "";

    for( int i = 0; i < level * INDENT; i++ )
    {
        indentString += " ";
    }

    return indentString;
}


void ASTListener::enterMulti_line(GenTestParser::Multi_lineContext *ctx)
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = COMMENT;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterSingle_line(GenTestParser::Single_lineContext *ctx )
{
    if( list.at( list.size() - 1 ).text.find( "//" ) == std::string::npos )
    {
        // Create node.
        Node newNode;

        // Configure info.
        newNode.type = COMMENT;
        newNode.text = ctx->getText();

        // Add to list.
        ASTListener::list.push_back( newNode );
    }
}

void ASTListener::enterSpace(GenTestParser::SpaceContext *ctx)
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = NAMESPACE;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterInclude(GenTestParser::IncludeContext *ctx)
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = INCLUDE;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterMacro_define(GenTestParser::Macro_defineContext *ctx)
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = DEFINE;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}


void ASTListener::enterStructure_header(GenTestParser::Structure_headerContext *ctx)
{
    ASTListener::semiFlag = true;

    if( ASTListener::list.at( ASTListener::list.size() - 1 ).type != TYPEDEF )
    {
        // Create node.
        Node newNode;

        // Configure info.
        newNode.type = STRUCT;
        newNode.text = ctx->getText();

        // Add to list.
        ASTListener::list.push_back( newNode );
    }
    else
    {
        list.at( list.size() - 1 ).text += ctx->getText();
    }
}

void ASTListener::enterFunction_header(GenTestParser::Function_headerContext *ctx)
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = FUNC;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterStatement(GenTestParser::StatementContext *ctx) 
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = STATEMENT;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterTypedef_header(GenTestParser::Typedef_headerContext *ctx )
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = TYPEDEF;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterTest_header(GenTestParser::Test_headerContext *ctx) 
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = TEST;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterWhile_loop(GenTestParser::While_loopContext *ctx) 
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = WHILE_LOOP;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterFor_loop(GenTestParser::For_loopContext *ctx) 
{
   // Create node.
    Node newNode;

    // Configure info.
    newNode.type = FOR_LOOP;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}


void ASTListener::enterCond_header(GenTestParser::Cond_headerContext *ctx) 
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = IF;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );
}

void ASTListener::enterAssrt_gt(GenTestParser::Assrt_gtContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSERT_GT;
}

void ASTListener::enterAssrt_lt(GenTestParser::Assrt_ltContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSERT_LT;
}

void ASTListener::enterAssrt_ge(GenTestParser::Assrt_geContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSERT_GE;
}

void ASTListener::enterAssrt_le(GenTestParser::Assrt_leContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSERT_LE;
}

void ASTListener::enterAssrt_ne(GenTestParser::Assrt_neContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSERT_NE;
}

void ASTListener::enterAssrt_eq(GenTestParser::Assrt_eqContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSERT_EQ;

}

void ASTListener::enterAssume_gt(GenTestParser::Assume_gtContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_GT;
}

void ASTListener::enterAssume_lt(GenTestParser::Assume_ltContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_LT;
}

void ASTListener::enterAssume_ge(GenTestParser::Assume_geContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_GE;
}

void ASTListener::enterAssume_le(GenTestParser::Assume_leContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_LE;
}

void ASTListener::enterAssume_ne(GenTestParser::Assume_neContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_NE;
}

void ASTListener::enterAssume_eq(GenTestParser::Assume_eqContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_EQ;
}

void ASTListener::enterCheck_gt(GenTestParser::Check_gtContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = CHECK_GT;
}

void ASTListener::enterCheck_lt(GenTestParser::Check_ltContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_LT;
}

void ASTListener::enterCheck_ge(GenTestParser::Check_geContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_GE;
}

void ASTListener::enterCheck_le(GenTestParser::Check_leContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_LE;
}

void ASTListener::enterCheck_ne(GenTestParser::Check_neContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_NE;
}

void ASTListener::enterCheck_eq(GenTestParser::Check_eqContext *ctx)
{
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = ASSUME_EQ;

}

void ASTListener::enterSymbolic(GenTestParser::SymbolicContext *ctx)
{
    if( ( list.size() > 0 ) && list.at( list.size() - 1 ).type == STRUCT )
    {
        // Create node.
        Node newNode;

        // Configure info.
        newNode.type = SYMBOLIC;
        newNode.text = ctx->getText();

        // Add to list.
        ASTListener::list.push_back( newNode );
    }
    else
    {
        ASTListener::list.at( ASTListener::list.size() - 1 ).type = SYMBOLIC;
    }
}

void ASTListener::enterType(GenTestParser::TypeContext *ctx) {

    ASTListener::list.at( ASTListener::list.size() - 1 ).datatype = ctx->getText();
}

void ASTListener::enterDefine(GenTestParser::DefineContext *ctx ) {

    if( ASTListener::semiFlag )
    {
        // Create node.
        Node newNode;

        // Configure info.
        newNode.type = DEFINE;
        newNode.text = ctx->getText() + ";";

        // Add to list.
        ASTListener::list.push_back( newNode );
    }
}

void ASTListener::enterClose_bracket(GenTestParser::Close_bracketContext *ctx)
{
    if( list.at( list.size() - 1 ).type != TYPEDEF
        || list.at( list.size() - 1 ).type != STRUCT )
    {
        // Create node.
        Node newNode;

        // Configure info.
        newNode.type = CLOSE_BRK;

        if( ASTListener::semiFlag )
        {
            newNode.text = ctx->getText() + ";";
            semiFlag = false;
        }
        else
        {
            newNode.text = ctx->getText();
        }

        // Add to list.
        ASTListener::list.push_back( newNode );
    }
}

void ASTListener::enterOpen_bracket(GenTestParser::Open_bracketContext *ctx)
{

    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = OPEN_BRK;
    newNode.text = ctx->getText();

    // Add to list.
    if( list.at( list.size() - 1 ).type == FOR_LOOP
	|| list.at( list.size() - 1 ).type == WHILE_LOOP
 	|| list.at( list.size() - 1 ).type == FUNC )
    {
    	ASTListener::list.push_back( newNode );
    }
}

vector<Node> ASTListener::getAST(){

this->trimWhitespace();
this->indent();
this->formatTree();
return ASTListener::list;

}





