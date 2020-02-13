
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

  virtual void enterInclude(GenTestParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(GenTestParser::IncludeContext *ctx) = 0;

  virtual void enterInclude_bracket(GenTestParser::Include_bracketContext *ctx) = 0;
  virtual void exitInclude_bracket(GenTestParser::Include_bracketContext *ctx) = 0;

  virtual void enterInclude_quote(GenTestParser::Include_quoteContext *ctx) = 0;
  virtual void exitInclude_quote(GenTestParser::Include_quoteContext *ctx) = 0;

  virtual void enterMacro_define(GenTestParser::Macro_defineContext *ctx) = 0;
  virtual void exitMacro_define(GenTestParser::Macro_defineContext *ctx) = 0;

  virtual void enterSpace(GenTestParser::SpaceContext *ctx) = 0;
  virtual void exitSpace(GenTestParser::SpaceContext *ctx) = 0;

  virtual void enterComment(GenTestParser::CommentContext *ctx) = 0;
  virtual void exitComment(GenTestParser::CommentContext *ctx) = 0;

  virtual void enterSingle_line(GenTestParser::Single_lineContext *ctx) = 0;
  virtual void exitSingle_line(GenTestParser::Single_lineContext *ctx) = 0;

  virtual void enterMulti_line(GenTestParser::Multi_lineContext *ctx) = 0;
  virtual void exitMulti_line(GenTestParser::Multi_lineContext *ctx) = 0;

  virtual void enterFunction(GenTestParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(GenTestParser::FunctionContext *ctx) = 0;

  virtual void enterFunction_header(GenTestParser::Function_headerContext *ctx) = 0;
  virtual void exitFunction_header(GenTestParser::Function_headerContext *ctx) = 0;

  virtual void enterFunction_body(GenTestParser::Function_bodyContext *ctx) = 0;
  virtual void exitFunction_body(GenTestParser::Function_bodyContext *ctx) = 0;

  virtual void enterFunction_param(GenTestParser::Function_paramContext *ctx) = 0;
  virtual void exitFunction_param(GenTestParser::Function_paramContext *ctx) = 0;

  virtual void enterStatement(GenTestParser::StatementContext *ctx) = 0;
  virtual void exitStatement(GenTestParser::StatementContext *ctx) = 0;

  virtual void enterElement(GenTestParser::ElementContext *ctx) = 0;
  virtual void exitElement(GenTestParser::ElementContext *ctx) = 0;

  virtual void enterRtrn(GenTestParser::RtrnContext *ctx) = 0;
  virtual void exitRtrn(GenTestParser::RtrnContext *ctx) = 0;

  virtual void enterDefine(GenTestParser::DefineContext *ctx) = 0;
  virtual void exitDefine(GenTestParser::DefineContext *ctx) = 0;

  virtual void enterType_def(GenTestParser::Type_defContext *ctx) = 0;
  virtual void exitType_def(GenTestParser::Type_defContext *ctx) = 0;

  virtual void enterLib_def(GenTestParser::Lib_defContext *ctx) = 0;
  virtual void exitLib_def(GenTestParser::Lib_defContext *ctx) = 0;

  virtual void enterPointer_def(GenTestParser::Pointer_defContext *ctx) = 0;
  virtual void exitPointer_def(GenTestParser::Pointer_defContext *ctx) = 0;

  virtual void enterClass_def(GenTestParser::Class_defContext *ctx) = 0;
  virtual void exitClass_def(GenTestParser::Class_defContext *ctx) = 0;

  virtual void enterBrackets(GenTestParser::BracketsContext *ctx) = 0;
  virtual void exitBrackets(GenTestParser::BracketsContext *ctx) = 0;

  virtual void enterAssignment(GenTestParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(GenTestParser::AssignmentContext *ctx) = 0;

  virtual void enterConditional(GenTestParser::ConditionalContext *ctx) = 0;
  virtual void exitConditional(GenTestParser::ConditionalContext *ctx) = 0;

  virtual void enterMain_statement(GenTestParser::Main_statementContext *ctx) = 0;
  virtual void exitMain_statement(GenTestParser::Main_statementContext *ctx) = 0;

  virtual void enterCond_body(GenTestParser::Cond_bodyContext *ctx) = 0;
  virtual void exitCond_body(GenTestParser::Cond_bodyContext *ctx) = 0;

  virtual void enterElif(GenTestParser::ElifContext *ctx) = 0;
  virtual void exitElif(GenTestParser::ElifContext *ctx) = 0;

  virtual void enterEls(GenTestParser::ElsContext *ctx) = 0;
  virtual void exitEls(GenTestParser::ElsContext *ctx) = 0;

  virtual void enterArithmetic(GenTestParser::ArithmeticContext *ctx) = 0;
  virtual void exitArithmetic(GenTestParser::ArithmeticContext *ctx) = 0;

  virtual void enterOperation(GenTestParser::OperationContext *ctx) = 0;
  virtual void exitOperation(GenTestParser::OperationContext *ctx) = 0;

  virtual void enterIncrement(GenTestParser::IncrementContext *ctx) = 0;
  virtual void exitIncrement(GenTestParser::IncrementContext *ctx) = 0;

  virtual void enterDecrement(GenTestParser::DecrementContext *ctx) = 0;
  virtual void exitDecrement(GenTestParser::DecrementContext *ctx) = 0;

  virtual void enterEvaluation(GenTestParser::EvaluationContext *ctx) = 0;
  virtual void exitEvaluation(GenTestParser::EvaluationContext *ctx) = 0;

  virtual void enterComparison(GenTestParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(GenTestParser::ComparisonContext *ctx) = 0;

  virtual void enterBoolean_(GenTestParser::Boolean_Context *ctx) = 0;
  virtual void exitBoolean_(GenTestParser::Boolean_Context *ctx) = 0;

  virtual void enterEq(GenTestParser::EqContext *ctx) = 0;
  virtual void exitEq(GenTestParser::EqContext *ctx) = 0;

  virtual void enterNe(GenTestParser::NeContext *ctx) = 0;
  virtual void exitNe(GenTestParser::NeContext *ctx) = 0;

  virtual void enterInverse(GenTestParser::InverseContext *ctx) = 0;
  virtual void exitInverse(GenTestParser::InverseContext *ctx) = 0;

  virtual void enterBool_op(GenTestParser::Bool_opContext *ctx) = 0;
  virtual void exitBool_op(GenTestParser::Bool_opContext *ctx) = 0;

  virtual void enterLoop(GenTestParser::LoopContext *ctx) = 0;
  virtual void exitLoop(GenTestParser::LoopContext *ctx) = 0;

  virtual void enterLoop_body(GenTestParser::Loop_bodyContext *ctx) = 0;
  virtual void exitLoop_body(GenTestParser::Loop_bodyContext *ctx) = 0;

  virtual void enterWhile_loop(GenTestParser::While_loopContext *ctx) = 0;
  virtual void exitWhile_loop(GenTestParser::While_loopContext *ctx) = 0;

  virtual void enterFor_loop(GenTestParser::For_loopContext *ctx) = 0;
  virtual void exitFor_loop(GenTestParser::For_loopContext *ctx) = 0;

  virtual void enterReference(GenTestParser::ReferenceContext *ctx) = 0;
  virtual void exitReference(GenTestParser::ReferenceContext *ctx) = 0;

  virtual void enterFunction_call(GenTestParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(GenTestParser::Function_callContext *ctx) = 0;

  virtual void enterPeriod_call(GenTestParser::Period_callContext *ctx) = 0;
  virtual void exitPeriod_call(GenTestParser::Period_callContext *ctx) = 0;

  virtual void enterArrow_call(GenTestParser::Arrow_callContext *ctx) = 0;
  virtual void exitArrow_call(GenTestParser::Arrow_callContext *ctx) = 0;

  virtual void enterLib_call(GenTestParser::Lib_callContext *ctx) = 0;
  virtual void exitLib_call(GenTestParser::Lib_callContext *ctx) = 0;

  virtual void enterParam_list(GenTestParser::Param_listContext *ctx) = 0;
  virtual void exitParam_list(GenTestParser::Param_listContext *ctx) = 0;

  virtual void enterLib(GenTestParser::LibContext *ctx) = 0;
  virtual void exitLib(GenTestParser::LibContext *ctx) = 0;

  virtual void enterArray(GenTestParser::ArrayContext *ctx) = 0;
  virtual void exitArray(GenTestParser::ArrayContext *ctx) = 0;

  virtual void enterPointer_cast(GenTestParser::Pointer_castContext *ctx) = 0;
  virtual void exitPointer_cast(GenTestParser::Pointer_castContext *ctx) = 0;

  virtual void enterAddress_cast(GenTestParser::Address_castContext *ctx) = 0;
  virtual void exitAddress_cast(GenTestParser::Address_castContext *ctx) = 0;

  virtual void enterType_cast(GenTestParser::Type_castContext *ctx) = 0;
  virtual void exitType_cast(GenTestParser::Type_castContext *ctx) = 0;

  virtual void enterDisplay(GenTestParser::DisplayContext *ctx) = 0;
  virtual void exitDisplay(GenTestParser::DisplayContext *ctx) = 0;

  virtual void enterDisplay_f(GenTestParser::Display_fContext *ctx) = 0;
  virtual void exitDisplay_f(GenTestParser::Display_fContext *ctx) = 0;

  virtual void enterVariable_no_ws(GenTestParser::Variable_no_wsContext *ctx) = 0;
  virtual void exitVariable_no_ws(GenTestParser::Variable_no_wsContext *ctx) = 0;

  virtual void enterInput(GenTestParser::InputContext *ctx) = 0;
  virtual void exitInput(GenTestParser::InputContext *ctx) = 0;

  virtual void enterText(GenTestParser::TextContext *ctx) = 0;
  virtual void exitText(GenTestParser::TextContext *ctx) = 0;

  virtual void enterSymbol(GenTestParser::SymbolContext *ctx) = 0;
  virtual void exitSymbol(GenTestParser::SymbolContext *ctx) = 0;

  virtual void enterType(GenTestParser::TypeContext *ctx) = 0;
  virtual void exitType(GenTestParser::TypeContext *ctx) = 0;

  virtual void enterString(GenTestParser::StringContext *ctx) = 0;
  virtual void exitString(GenTestParser::StringContext *ctx) = 0;

  virtual void enterKeyword(GenTestParser::KeywordContext *ctx) = 0;
  virtual void exitKeyword(GenTestParser::KeywordContext *ctx) = 0;

  virtual void enterIdentifier(GenTestParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(GenTestParser::IdentifierContext *ctx) = 0;

  virtual void enterNum(GenTestParser::NumContext *ctx) = 0;
  virtual void exitNum(GenTestParser::NumContext *ctx) = 0;

  virtual void enterTest(GenTestParser::TestContext *ctx) = 0;
  virtual void exitTest(GenTestParser::TestContext *ctx) = 0;

  virtual void enterTest_body(GenTestParser::Test_bodyContext *ctx) = 0;
  virtual void exitTest_body(GenTestParser::Test_bodyContext *ctx) = 0;

  virtual void enterSymbolic(GenTestParser::SymbolicContext *ctx) = 0;
  virtual void exitSymbolic(GenTestParser::SymbolicContext *ctx) = 0;

  virtual void enterBracket_symbolic(GenTestParser::Bracket_symbolicContext *ctx) = 0;
  virtual void exitBracket_symbolic(GenTestParser::Bracket_symbolicContext *ctx) = 0;

  virtual void enterVerification(GenTestParser::VerificationContext *ctx) = 0;
  virtual void exitVerification(GenTestParser::VerificationContext *ctx) = 0;

  virtual void enterAssrt(GenTestParser::AssrtContext *ctx) = 0;
  virtual void exitAssrt(GenTestParser::AssrtContext *ctx) = 0;

  virtual void enterAssume(GenTestParser::AssumeContext *ctx) = 0;
  virtual void exitAssume(GenTestParser::AssumeContext *ctx) = 0;

  virtual void enterCheck(GenTestParser::CheckContext *ctx) = 0;
  virtual void exitCheck(GenTestParser::CheckContext *ctx) = 0;

  virtual void enterVerification_type(GenTestParser::Verification_typeContext *ctx) = 0;
  virtual void exitVerification_type(GenTestParser::Verification_typeContext *ctx) = 0;

  virtual void enterMsg(GenTestParser::MsgContext *ctx) = 0;
  virtual void exitMsg(GenTestParser::MsgContext *ctx) = 0;


};

