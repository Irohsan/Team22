
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "GenTestParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GenTestParser.
 */
class  GenTestListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(GenTestParser::FileContext *ctx) = 0;
  virtual void exitFile(GenTestParser::FileContext *ctx) = 0;

  virtual void enterComment(GenTestParser::CommentContext *ctx) = 0;
  virtual void exitComment(GenTestParser::CommentContext *ctx) = 0;

  virtual void enterInclude(GenTestParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(GenTestParser::IncludeContext *ctx) = 0;

  virtual void enterGlobal(GenTestParser::GlobalContext *ctx) = 0;
  virtual void exitGlobal(GenTestParser::GlobalContext *ctx) = 0;

  virtual void enterFunction(GenTestParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(GenTestParser::FunctionContext *ctx) = 0;

  virtual void enterHeader(GenTestParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(GenTestParser::HeaderContext *ctx) = 0;

  virtual void enterBody(GenTestParser::BodyContext *ctx) = 0;
  virtual void exitBody(GenTestParser::BodyContext *ctx) = 0;

  virtual void enterLine(GenTestParser::LineContext *ctx) = 0;
  virtual void exitLine(GenTestParser::LineContext *ctx) = 0;

  virtual void enterDeclaration(GenTestParser::DeclarationContext *ctx) = 0;
  virtual void exitDeclaration(GenTestParser::DeclarationContext *ctx) = 0;

  virtual void enterAssignment(GenTestParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(GenTestParser::AssignmentContext *ctx) = 0;

  virtual void enterExpression(GenTestParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(GenTestParser::ExpressionContext *ctx) = 0;

  virtual void enterOperation(GenTestParser::OperationContext *ctx) = 0;
  virtual void exitOperation(GenTestParser::OperationContext *ctx) = 0;

  virtual void enterAdd(GenTestParser::AddContext *ctx) = 0;
  virtual void exitAdd(GenTestParser::AddContext *ctx) = 0;

  virtual void enterSub(GenTestParser::SubContext *ctx) = 0;
  virtual void exitSub(GenTestParser::SubContext *ctx) = 0;

  virtual void enterMul(GenTestParser::MulContext *ctx) = 0;
  virtual void exitMul(GenTestParser::MulContext *ctx) = 0;

  virtual void enterDiv(GenTestParser::DivContext *ctx) = 0;
  virtual void exitDiv(GenTestParser::DivContext *ctx) = 0;

  virtual void enterMod(GenTestParser::ModContext *ctx) = 0;
  virtual void exitMod(GenTestParser::ModContext *ctx) = 0;

  virtual void enterEq(GenTestParser::EqContext *ctx) = 0;
  virtual void exitEq(GenTestParser::EqContext *ctx) = 0;

  virtual void enterNe(GenTestParser::NeContext *ctx) = 0;
  virtual void exitNe(GenTestParser::NeContext *ctx) = 0;

  virtual void enterGt(GenTestParser::GtContext *ctx) = 0;
  virtual void exitGt(GenTestParser::GtContext *ctx) = 0;

  virtual void enterGe(GenTestParser::GeContext *ctx) = 0;
  virtual void exitGe(GenTestParser::GeContext *ctx) = 0;

  virtual void enterLt(GenTestParser::LtContext *ctx) = 0;
  virtual void exitLt(GenTestParser::LtContext *ctx) = 0;

  virtual void enterLe(GenTestParser::LeContext *ctx) = 0;
  virtual void exitLe(GenTestParser::LeContext *ctx) = 0;

  virtual void enterNo(GenTestParser::NoContext *ctx) = 0;
  virtual void exitNo(GenTestParser::NoContext *ctx) = 0;

  virtual void enterConditional(GenTestParser::ConditionalContext *ctx) = 0;
  virtual void exitConditional(GenTestParser::ConditionalContext *ctx) = 0;

  virtual void enterCondition(GenTestParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(GenTestParser::ConditionContext *ctx) = 0;

  virtual void enterElif(GenTestParser::ElifContext *ctx) = 0;
  virtual void exitElif(GenTestParser::ElifContext *ctx) = 0;

  virtual void enterOtherwise(GenTestParser::OtherwiseContext *ctx) = 0;
  virtual void exitOtherwise(GenTestParser::OtherwiseContext *ctx) = 0;

  virtual void enterRtrn(GenTestParser::RtrnContext *ctx) = 0;
  virtual void exitRtrn(GenTestParser::RtrnContext *ctx) = 0;

  virtual void enterType(GenTestParser::TypeContext *ctx) = 0;
  virtual void exitType(GenTestParser::TypeContext *ctx) = 0;

  virtual void enterPointerRef(GenTestParser::PointerRefContext *ctx) = 0;
  virtual void exitPointerRef(GenTestParser::PointerRefContext *ctx) = 0;

  virtual void enterKeyword(GenTestParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(GenTestParser::KeywordContext *ctx) = 0;

  virtual void enterCall(GenTestParser::CallContext *ctx) = 0;
  virtual void exitCall(GenTestParser::CallContext *ctx) = 0;

  virtual void enterVariable(GenTestParser::VariableContext *ctx) = 0;
  virtual void exitVariable(GenTestParser::VariableContext *ctx) = 0;

  virtual void enterCharacter(GenTestParser::CharacterContext *ctx) = 0;
  virtual void exitCharacter(GenTestParser::CharacterContext *ctx) = 0;

  virtual void enterText(GenTestParser::TextContext *ctx) = 0;
  virtual void exitText(GenTestParser::TextContext *ctx) = 0;

  virtual void enterEof(GenTestParser::EofContext *ctx) = 0;
  virtual void exitEof(GenTestParser::EofContext *ctx) = 0;

  virtual void enterSymbolic(GenTestParser::SymbolicContext *ctx) = 0;
  virtual void exitSymbolic(GenTestParser::SymbolicContext *ctx) = 0;

  virtual void enterDeepstate_noinline(GenTestParser::Deepstate_noinlineContext *ctx) = 0;
  virtual void exitDeepstate_noinline(GenTestParser::Deepstate_noinlineContext *ctx) = 0;

  virtual void enterTest(GenTestParser::TestContext *ctx) = 0;
  virtual void exitTest(GenTestParser::TestContext *ctx) = 0;

  virtual void enterTest_header(GenTestParser::Test_headerContext *ctx) = 0;
  virtual void exitTest_header(GenTestParser::Test_headerContext *ctx) = 0;

  virtual void enterDs_assert_type(GenTestParser::Ds_assert_typeContext *ctx) = 0;
  virtual void exitDs_assert_type(GenTestParser::Ds_assert_typeContext *ctx) = 0;

  virtual void enterDs_assert(GenTestParser::Ds_assertContext *ctx) = 0;
  virtual void exitDs_assert(GenTestParser::Ds_assertContext *ctx) = 0;

  virtual void enterDs_assume_type(GenTestParser::Ds_assume_typeContext *ctx) = 0;
  virtual void exitDs_assume_type(GenTestParser::Ds_assume_typeContext *ctx) = 0;

  virtual void enterDs_assume(GenTestParser::Ds_assumeContext *ctx) = 0;
  virtual void exitDs_assume(GenTestParser::Ds_assumeContext *ctx) = 0;

  virtual void enterDs_check_type(GenTestParser::Ds_check_typeContext *ctx) = 0;
  virtual void exitDs_check_type(GenTestParser::Ds_check_typeContext *ctx) = 0;

  virtual void enterDs_check(GenTestParser::Ds_checkContext *ctx) = 0;
  virtual void exitDs_check(GenTestParser::Ds_checkContext *ctx) = 0;

  virtual void enterRtrn_msg(GenTestParser::Rtrn_msgContext *ctx) = 0;
  virtual void exitRtrn_msg(GenTestParser::Rtrn_msgContext *ctx) = 0;


};

