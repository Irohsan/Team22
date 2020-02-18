#include "antlr4-runtime.h"
#include "GenTestBaseListener.h"
#include "stdlib.h"
#include "DataStructures.h"
#include <string>

class ASTListener : public GenTestBaseListener
{
    std::vector<Node> list;

    public: 

          void enterComment(GenTestParser::CommentContext *ctx);
          void enterSpace(GenTestParser::SpaceContext *ctx);
          void enterInclude(GenTestParser::IncludeContext *ctx);
          void enterMacro_define(GenTestParser::Macro_defineContext *ctx);
          void enterFunction_header(GenTestParser::Function_headerContext *ctx);
          void enterStatement(GenTestParser::StatementContext *ctx);
          void enterTest_header(GenTestParser::Test_headerContext *ctx );
          void enterWhile_loop(GenTestParser::While_loopContext *ctx );
          void enterFor_loop(GenTestParser::For_loopContext *ctx );
          void enterCond_header(GenTestParser::Cond_headerContext *ctx);
          std::vector<Node> getAST();
};
