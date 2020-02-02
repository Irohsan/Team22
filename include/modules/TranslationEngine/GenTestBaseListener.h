
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "GenTestListener.h"


/**
 * This class provides an empty implementation of GenTestListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GenTestBaseListener : public GenTestListener {
public:

  virtual void enterFile(GenTestParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(GenTestParser::FileContext * /*ctx*/) override { }

  virtual void enterComment(GenTestParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(GenTestParser::CommentContext * /*ctx*/) override { }

  virtual void enterInclude(GenTestParser::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(GenTestParser::IncludeContext * /*ctx*/) override { }

  virtual void enterGlobal(GenTestParser::GlobalContext * /*ctx*/) override { }
  virtual void exitGlobal(GenTestParser::GlobalContext * /*ctx*/) override { }

  virtual void enterFunction(GenTestParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(GenTestParser::FunctionContext * /*ctx*/) override { }

  virtual void enterHeader(GenTestParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(GenTestParser::HeaderContext * /*ctx*/) override { }

  virtual void enterBody(GenTestParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(GenTestParser::BodyContext * /*ctx*/) override { }

  virtual void enterLine(GenTestParser::LineContext * /*ctx*/) override { }
  virtual void exitLine(GenTestParser::LineContext * /*ctx*/) override { }

  virtual void enterDeclaration(GenTestParser::DeclarationContext * /*ctx*/) override { }
  virtual void exitDeclaration(GenTestParser::DeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(GenTestParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(GenTestParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpression(GenTestParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(GenTestParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterOperation(GenTestParser::OperationContext * /*ctx*/) override { }
  virtual void exitOperation(GenTestParser::OperationContext * /*ctx*/) override { }

  virtual void enterAdd(GenTestParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(GenTestParser::AddContext * /*ctx*/) override { }

  virtual void enterSub(GenTestParser::SubContext * /*ctx*/) override { }
  virtual void exitSub(GenTestParser::SubContext * /*ctx*/) override { }

  virtual void enterMul(GenTestParser::MulContext * /*ctx*/) override { }
  virtual void exitMul(GenTestParser::MulContext * /*ctx*/) override { }

  virtual void enterDiv(GenTestParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(GenTestParser::DivContext * /*ctx*/) override { }

  virtual void enterMod(GenTestParser::ModContext * /*ctx*/) override { }
  virtual void exitMod(GenTestParser::ModContext * /*ctx*/) override { }

  virtual void enterEq(GenTestParser::EqContext * /*ctx*/) override { }
  virtual void exitEq(GenTestParser::EqContext * /*ctx*/) override { }

  virtual void enterNe(GenTestParser::NeContext * /*ctx*/) override { }
  virtual void exitNe(GenTestParser::NeContext * /*ctx*/) override { }

  virtual void enterGt(GenTestParser::GtContext * /*ctx*/) override { }
  virtual void exitGt(GenTestParser::GtContext * /*ctx*/) override { }

  virtual void enterGe(GenTestParser::GeContext * /*ctx*/) override { }
  virtual void exitGe(GenTestParser::GeContext * /*ctx*/) override { }

  virtual void enterLt(GenTestParser::LtContext * /*ctx*/) override { }
  virtual void exitLt(GenTestParser::LtContext * /*ctx*/) override { }

  virtual void enterLe(GenTestParser::LeContext * /*ctx*/) override { }
  virtual void exitLe(GenTestParser::LeContext * /*ctx*/) override { }

  virtual void enterNo(GenTestParser::NoContext * /*ctx*/) override { }
  virtual void exitNo(GenTestParser::NoContext * /*ctx*/) override { }

  virtual void enterConditional(GenTestParser::ConditionalContext * /*ctx*/) override { }
  virtual void exitConditional(GenTestParser::ConditionalContext * /*ctx*/) override { }

  virtual void enterCondition(GenTestParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(GenTestParser::ConditionContext * /*ctx*/) override { }

  virtual void enterElif(GenTestParser::ElifContext * /*ctx*/) override { }
  virtual void exitElif(GenTestParser::ElifContext * /*ctx*/) override { }

  virtual void enterOtherwise(GenTestParser::OtherwiseContext * /*ctx*/) override { }
  virtual void exitOtherwise(GenTestParser::OtherwiseContext * /*ctx*/) override { }

  virtual void enterRtrn(GenTestParser::RtrnContext * /*ctx*/) override { }
  virtual void exitRtrn(GenTestParser::RtrnContext * /*ctx*/) override { }

  virtual void enterType(GenTestParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(GenTestParser::TypeContext * /*ctx*/) override { }

  virtual void enterPointerRef(GenTestParser::PointerRefContext * /*ctx*/) override { }
  virtual void exitPointerRef(GenTestParser::PointerRefContext * /*ctx*/) override { }

  virtual void enterKeyword(GenTestParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(GenTestParser::KeywordContext * /*ctx*/) override { }

  virtual void enterCall(GenTestParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(GenTestParser::CallContext * /*ctx*/) override { }

  virtual void enterVariable(GenTestParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(GenTestParser::VariableContext * /*ctx*/) override { }

  virtual void enterCharacter(GenTestParser::CharacterContext * /*ctx*/) override { }
  virtual void exitCharacter(GenTestParser::CharacterContext * /*ctx*/) override { }

  virtual void enterText(GenTestParser::TextContext * /*ctx*/) override { }
  virtual void exitText(GenTestParser::TextContext * /*ctx*/) override { }

  virtual void enterEof(GenTestParser::EofContext * /*ctx*/) override { }
  virtual void exitEof(GenTestParser::EofContext * /*ctx*/) override { }

  virtual void enterSymbolic(GenTestParser::SymbolicContext * /*ctx*/) override { }
  virtual void exitSymbolic(GenTestParser::SymbolicContext * /*ctx*/) override { }

  virtual void enterDeepstate_noinline(GenTestParser::Deepstate_noinlineContext * /*ctx*/) override { }
  virtual void exitDeepstate_noinline(GenTestParser::Deepstate_noinlineContext * /*ctx*/) override { }

  virtual void enterTest(GenTestParser::TestContext * /*ctx*/) override { }
  virtual void exitTest(GenTestParser::TestContext * /*ctx*/) override { }

  virtual void enterTest_header(GenTestParser::Test_headerContext * /*ctx*/) override { }
  virtual void exitTest_header(GenTestParser::Test_headerContext * /*ctx*/) override { }

  virtual void enterDs_assert_type(GenTestParser::Ds_assert_typeContext * /*ctx*/) override { }
  virtual void exitDs_assert_type(GenTestParser::Ds_assert_typeContext * /*ctx*/) override { }

  virtual void enterDs_assert(GenTestParser::Ds_assertContext * /*ctx*/) override { }
  virtual void exitDs_assert(GenTestParser::Ds_assertContext * /*ctx*/) override { }

  virtual void enterDs_assume_type(GenTestParser::Ds_assume_typeContext * /*ctx*/) override { }
  virtual void exitDs_assume_type(GenTestParser::Ds_assume_typeContext * /*ctx*/) override { }

  virtual void enterDs_assume(GenTestParser::Ds_assumeContext * /*ctx*/) override { }
  virtual void exitDs_assume(GenTestParser::Ds_assumeContext * /*ctx*/) override { }

  virtual void enterDs_check_type(GenTestParser::Ds_check_typeContext * /*ctx*/) override { }
  virtual void exitDs_check_type(GenTestParser::Ds_check_typeContext * /*ctx*/) override { }

  virtual void enterDs_check(GenTestParser::Ds_checkContext * /*ctx*/) override { }
  virtual void exitDs_check(GenTestParser::Ds_checkContext * /*ctx*/) override { }

  virtual void enterRtrn_msg(GenTestParser::Rtrn_msgContext * /*ctx*/) override { }
  virtual void exitRtrn_msg(GenTestParser::Rtrn_msgContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

