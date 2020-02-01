#include "antlr4-runtime.h"
#include "GenTestBaseListener.h"
#include "stdlib.h"
#include "DataStructures.h"

class ASTListener : public GenTestBaseListener
{

    public: 

    void enterDeepstate_noinline(GenTestParser::Deepstate_noinlineContext * ctx ) override;
	void enterDs_assert(GenTestParser::Ds_assertContext * ctx ) override;
	void enterDs_assume(GenTestParser::Ds_assumeContext * ctx ) override;
	void enterDs_check(GenTestParser::Ds_checkContext * ctx ) override;
	void enterSymbolic(GenTestParser::SymbolicContext * ctx ) override;
    void enterType(GenTestParser::TypeContext * ctx ) override;
    std::vector<node> getList();
	      
};
