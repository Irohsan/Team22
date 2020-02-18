#include "ASTListener.h"

using namespace std;

void ASTListener::enterComment(GenTestParser::CommentContext *ctx)
{
    // Create node.
    Node newNode;

    // Configure info.
    newNode.type = COMMENT;
    newNode.text = ctx->getText();

    // Add to list.
    ASTListener::list.push_back( newNode );;
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

vector<Node> ASTListener::getAST(){

return ASTListener::list;

}





