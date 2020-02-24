#include "ASTListener.h"

using namespace std;

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
    ASTListener::list.at( ASTListener::list.size() - 1 ).type = SYMBOLIC;
}

void ASTListener::enterType(GenTestParser::TypeContext *ctx) {

    ASTListener::list.at( ASTListener::list.size() - 1 ).datatype = ctx->getText();
}


vector<Node> ASTListener::getAST(){

return ASTListener::list;

}





