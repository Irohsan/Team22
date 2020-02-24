#include "antlr4-runtime.h"
#include "GenTestBaseListener.h"
#include "stdlib.h"
#include "DataStructures.h"
#include <string>

class ASTListener : public GenTestBaseListener
{
    std::vector<Node> list;

    public: 

          void enterMulti_line(GenTestParser::Multi_lineContext *ctx);
          void enterSpace(GenTestParser::SpaceContext *ctx);
          void enterInclude(GenTestParser::IncludeContext *ctx);
          void enterMacro_define(GenTestParser::Macro_defineContext *ctx);
          void enterFunction_header(GenTestParser::Function_headerContext *ctx);
          void enterStatement(GenTestParser::StatementContext *ctx);
          void enterTest_header(GenTestParser::Test_headerContext *ctx );
          void enterWhile_loop(GenTestParser::While_loopContext *ctx );
          void enterFor_loop(GenTestParser::For_loopContext *ctx );
          void enterCond_header(GenTestParser::Cond_headerContext *ctx);
          void enterAssume_gt(GenTestParser::Assume_gtContext *ctx);
	  void enterAssume_lt(GenTestParser::Assume_ltContext *ctx);
	  void enterAssume_ge(GenTestParser::Assume_geContext *ctx);
	  void enterAssume_le(GenTestParser::Assume_leContext *ctx);
	  void enterAssume_ne(GenTestParser::Assume_neContext *ctx);
	  void enterAssume_eq(GenTestParser::Assume_eqContext *ctx);
          void enterAssrt_gt(GenTestParser::Assrt_gtContext *ctx);
	  void enterAssrt_lt(GenTestParser::Assrt_ltContext *ctx);
	  void enterAssrt_ge(GenTestParser::Assrt_geContext *ctx);
	  void enterAssrt_le(GenTestParser::Assrt_leContext *ctx);
	  void enterAssrt_ne(GenTestParser::Assrt_neContext *ctx);
	  void enterAssrt_eq(GenTestParser::Assrt_eqContext *ctx);
	  void enterCheck_gt(GenTestParser::Check_gtContext *ctx);
	  void enterCheck_lt(GenTestParser::Check_ltContext *ctx);
	  void enterCheck_ge(GenTestParser::Check_geContext *ctx);
	  void enterCheck_le(GenTestParser::Check_leContext *ctx);
	  void enterCheck_ne(GenTestParser::Check_neContext *ctx);
	  void enterCheck_eq(GenTestParser::Check_eqContext *ctx);
          void enterSymbolic(GenTestParser::SymbolicContext *ctx);
	  void enterType(GenTestParser::TypeContext *ctx);
          std::vector<Node> getAST();
};
