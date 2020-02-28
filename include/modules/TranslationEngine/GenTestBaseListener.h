
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

  virtual void enterSpace(GenTestParser::SpaceContext * /*ctx*/) override { }
  virtual void exitSpace(GenTestParser::SpaceContext * /*ctx*/) override { }

  virtual void enterInclude(GenTestParser::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(GenTestParser::IncludeContext * /*ctx*/) override { }

  virtual void enterInclude_bracket(GenTestParser::Include_bracketContext * /*ctx*/) override { }
  virtual void exitInclude_bracket(GenTestParser::Include_bracketContext * /*ctx*/) override { }

  virtual void enterInclude_quote(GenTestParser::Include_quoteContext * /*ctx*/) override { }
  virtual void exitInclude_quote(GenTestParser::Include_quoteContext * /*ctx*/) override { }

  virtual void enterMacro_define(GenTestParser::Macro_defineContext * /*ctx*/) override { }
  virtual void exitMacro_define(GenTestParser::Macro_defineContext * /*ctx*/) override { }

  virtual void enterStructure(GenTestParser::StructureContext * /*ctx*/) override { }
  virtual void exitStructure(GenTestParser::StructureContext * /*ctx*/) override { }

  virtual void enterSingle_var(GenTestParser::Single_varContext * /*ctx*/) override { }
  virtual void exitSingle_var(GenTestParser::Single_varContext * /*ctx*/) override { }

  virtual void enterMulti_var(GenTestParser::Multi_varContext * /*ctx*/) override { }
  virtual void exitMulti_var(GenTestParser::Multi_varContext * /*ctx*/) override { }

  virtual void enterNumeration(GenTestParser::NumerationContext * /*ctx*/) override { }
  virtual void exitNumeration(GenTestParser::NumerationContext * /*ctx*/) override { }

  virtual void enterTypdef(GenTestParser::TypdefContext * /*ctx*/) override { }
  virtual void exitTypdef(GenTestParser::TypdefContext * /*ctx*/) override { }

  virtual void enterBase_def(GenTestParser::Base_defContext * /*ctx*/) override { }
  virtual void exitBase_def(GenTestParser::Base_defContext * /*ctx*/) override { }

  virtual void enterIfdef(GenTestParser::IfdefContext * /*ctx*/) override { }
  virtual void exitIfdef(GenTestParser::IfdefContext * /*ctx*/) override { }

  virtual void enterUndefine(GenTestParser::UndefineContext * /*ctx*/) override { }
  virtual void exitUndefine(GenTestParser::UndefineContext * /*ctx*/) override { }

  virtual void enterComment(GenTestParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(GenTestParser::CommentContext * /*ctx*/) override { }

  virtual void enterSingle_line(GenTestParser::Single_lineContext * /*ctx*/) override { }
  virtual void exitSingle_line(GenTestParser::Single_lineContext * /*ctx*/) override { }

  virtual void enterMulti_line(GenTestParser::Multi_lineContext * /*ctx*/) override { }
  virtual void exitMulti_line(GenTestParser::Multi_lineContext * /*ctx*/) override { }

  virtual void enterFunction(GenTestParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(GenTestParser::FunctionContext * /*ctx*/) override { }

  virtual void enterFunction_header(GenTestParser::Function_headerContext * /*ctx*/) override { }
  virtual void exitFunction_header(GenTestParser::Function_headerContext * /*ctx*/) override { }

  virtual void enterFunction_body(GenTestParser::Function_bodyContext * /*ctx*/) override { }
  virtual void exitFunction_body(GenTestParser::Function_bodyContext * /*ctx*/) override { }

  virtual void enterFunction_param(GenTestParser::Function_paramContext * /*ctx*/) override { }
  virtual void exitFunction_param(GenTestParser::Function_paramContext * /*ctx*/) override { }

  virtual void enterStatement(GenTestParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(GenTestParser::StatementContext * /*ctx*/) override { }

  virtual void enterElement(GenTestParser::ElementContext * /*ctx*/) override { }
  virtual void exitElement(GenTestParser::ElementContext * /*ctx*/) override { }

  virtual void enterDefine(GenTestParser::DefineContext * /*ctx*/) override { }
  virtual void exitDefine(GenTestParser::DefineContext * /*ctx*/) override { }

  virtual void enterType_def(GenTestParser::Type_defContext * /*ctx*/) override { }
  virtual void exitType_def(GenTestParser::Type_defContext * /*ctx*/) override { }

  virtual void enterLib_def(GenTestParser::Lib_defContext * /*ctx*/) override { }
  virtual void exitLib_def(GenTestParser::Lib_defContext * /*ctx*/) override { }

  virtual void enterPointer_def(GenTestParser::Pointer_defContext * /*ctx*/) override { }
  virtual void exitPointer_def(GenTestParser::Pointer_defContext * /*ctx*/) override { }

  virtual void enterClass_def(GenTestParser::Class_defContext * /*ctx*/) override { }
  virtual void exitClass_def(GenTestParser::Class_defContext * /*ctx*/) override { }

  virtual void enterBrackets(GenTestParser::BracketsContext * /*ctx*/) override { }
  virtual void exitBrackets(GenTestParser::BracketsContext * /*ctx*/) override { }

  virtual void enterAssignment(GenTestParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(GenTestParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterConditional(GenTestParser::ConditionalContext * /*ctx*/) override { }
  virtual void exitConditional(GenTestParser::ConditionalContext * /*ctx*/) override { }

  virtual void enterCond_header(GenTestParser::Cond_headerContext * /*ctx*/) override { }
  virtual void exitCond_header(GenTestParser::Cond_headerContext * /*ctx*/) override { }

  virtual void enterCond_body(GenTestParser::Cond_bodyContext * /*ctx*/) override { }
  virtual void exitCond_body(GenTestParser::Cond_bodyContext * /*ctx*/) override { }

  virtual void enterElif(GenTestParser::ElifContext * /*ctx*/) override { }
  virtual void exitElif(GenTestParser::ElifContext * /*ctx*/) override { }

  virtual void enterEls(GenTestParser::ElsContext * /*ctx*/) override { }
  virtual void exitEls(GenTestParser::ElsContext * /*ctx*/) override { }

  virtual void enterArithmetic(GenTestParser::ArithmeticContext * /*ctx*/) override { }
  virtual void exitArithmetic(GenTestParser::ArithmeticContext * /*ctx*/) override { }

  virtual void enterOperation(GenTestParser::OperationContext * /*ctx*/) override { }
  virtual void exitOperation(GenTestParser::OperationContext * /*ctx*/) override { }

  virtual void enterIncrement(GenTestParser::IncrementContext * /*ctx*/) override { }
  virtual void exitIncrement(GenTestParser::IncrementContext * /*ctx*/) override { }

  virtual void enterDecrement(GenTestParser::DecrementContext * /*ctx*/) override { }
  virtual void exitDecrement(GenTestParser::DecrementContext * /*ctx*/) override { }

  virtual void enterEvaluation(GenTestParser::EvaluationContext * /*ctx*/) override { }
  virtual void exitEvaluation(GenTestParser::EvaluationContext * /*ctx*/) override { }

  virtual void enterComparison(GenTestParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(GenTestParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterBoolean_(GenTestParser::Boolean_Context * /*ctx*/) override { }
  virtual void exitBoolean_(GenTestParser::Boolean_Context * /*ctx*/) override { }

  virtual void enterEq(GenTestParser::EqContext * /*ctx*/) override { }
  virtual void exitEq(GenTestParser::EqContext * /*ctx*/) override { }

  virtual void enterNe(GenTestParser::NeContext * /*ctx*/) override { }
  virtual void exitNe(GenTestParser::NeContext * /*ctx*/) override { }

  virtual void enterInverse(GenTestParser::InverseContext * /*ctx*/) override { }
  virtual void exitInverse(GenTestParser::InverseContext * /*ctx*/) override { }

  virtual void enterBool_op(GenTestParser::Bool_opContext * /*ctx*/) override { }
  virtual void exitBool_op(GenTestParser::Bool_opContext * /*ctx*/) override { }

  virtual void enterLoop(GenTestParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(GenTestParser::LoopContext * /*ctx*/) override { }

  virtual void enterLoop_body(GenTestParser::Loop_bodyContext * /*ctx*/) override { }
  virtual void exitLoop_body(GenTestParser::Loop_bodyContext * /*ctx*/) override { }

  virtual void enterWhile_loop(GenTestParser::While_loopContext * /*ctx*/) override { }
  virtual void exitWhile_loop(GenTestParser::While_loopContext * /*ctx*/) override { }

  virtual void enterFor_loop(GenTestParser::For_loopContext * /*ctx*/) override { }
  virtual void exitFor_loop(GenTestParser::For_loopContext * /*ctx*/) override { }

  virtual void enterReference(GenTestParser::ReferenceContext * /*ctx*/) override { }
  virtual void exitReference(GenTestParser::ReferenceContext * /*ctx*/) override { }

  virtual void enterFunction_call(GenTestParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(GenTestParser::Function_callContext * /*ctx*/) override { }

  virtual void enterPeriod_call(GenTestParser::Period_callContext * /*ctx*/) override { }
  virtual void exitPeriod_call(GenTestParser::Period_callContext * /*ctx*/) override { }

  virtual void enterArrow_call(GenTestParser::Arrow_callContext * /*ctx*/) override { }
  virtual void exitArrow_call(GenTestParser::Arrow_callContext * /*ctx*/) override { }

  virtual void enterLib_call(GenTestParser::Lib_callContext * /*ctx*/) override { }
  virtual void exitLib_call(GenTestParser::Lib_callContext * /*ctx*/) override { }

  virtual void enterParam_list(GenTestParser::Param_listContext * /*ctx*/) override { }
  virtual void exitParam_list(GenTestParser::Param_listContext * /*ctx*/) override { }

  virtual void enterLib(GenTestParser::LibContext * /*ctx*/) override { }
  virtual void exitLib(GenTestParser::LibContext * /*ctx*/) override { }

  virtual void enterArray(GenTestParser::ArrayContext * /*ctx*/) override { }
  virtual void exitArray(GenTestParser::ArrayContext * /*ctx*/) override { }

  virtual void enterPointer_cast(GenTestParser::Pointer_castContext * /*ctx*/) override { }
  virtual void exitPointer_cast(GenTestParser::Pointer_castContext * /*ctx*/) override { }

  virtual void enterAddress_cast(GenTestParser::Address_castContext * /*ctx*/) override { }
  virtual void exitAddress_cast(GenTestParser::Address_castContext * /*ctx*/) override { }

  virtual void enterType_cast(GenTestParser::Type_castContext * /*ctx*/) override { }
  virtual void exitType_cast(GenTestParser::Type_castContext * /*ctx*/) override { }

  virtual void enterDisplay(GenTestParser::DisplayContext * /*ctx*/) override { }
  virtual void exitDisplay(GenTestParser::DisplayContext * /*ctx*/) override { }

  virtual void enterDisplay_f(GenTestParser::Display_fContext * /*ctx*/) override { }
  virtual void exitDisplay_f(GenTestParser::Display_fContext * /*ctx*/) override { }

  virtual void enterVariable_no_ws(GenTestParser::Variable_no_wsContext * /*ctx*/) override { }
  virtual void exitVariable_no_ws(GenTestParser::Variable_no_wsContext * /*ctx*/) override { }

  virtual void enterInput(GenTestParser::InputContext * /*ctx*/) override { }
  virtual void exitInput(GenTestParser::InputContext * /*ctx*/) override { }

  virtual void enterText(GenTestParser::TextContext * /*ctx*/) override { }
  virtual void exitText(GenTestParser::TextContext * /*ctx*/) override { }

  virtual void enterSymbol(GenTestParser::SymbolContext * /*ctx*/) override { }
  virtual void exitSymbol(GenTestParser::SymbolContext * /*ctx*/) override { }

  virtual void enterType(GenTestParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(GenTestParser::TypeContext * /*ctx*/) override { }

  virtual void enterString(GenTestParser::StringContext * /*ctx*/) override { }
  virtual void exitString(GenTestParser::StringContext * /*ctx*/) override { }

  virtual void enterKeyword(GenTestParser::KeywordContext * /*ctx*/) override { }
  virtual void exitKeyword(GenTestParser::KeywordContext * /*ctx*/) override { }

  virtual void enterIdentifier(GenTestParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(GenTestParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterNum(GenTestParser::NumContext * /*ctx*/) override { }
  virtual void exitNum(GenTestParser::NumContext * /*ctx*/) override { }

  virtual void enterTest(GenTestParser::TestContext * /*ctx*/) override { }
  virtual void exitTest(GenTestParser::TestContext * /*ctx*/) override { }

  virtual void enterTest_header(GenTestParser::Test_headerContext * /*ctx*/) override { }
  virtual void exitTest_header(GenTestParser::Test_headerContext * /*ctx*/) override { }

  virtual void enterTest_body(GenTestParser::Test_bodyContext * /*ctx*/) override { }
  virtual void exitTest_body(GenTestParser::Test_bodyContext * /*ctx*/) override { }

  virtual void enterSymbolic(GenTestParser::SymbolicContext * /*ctx*/) override { }
  virtual void exitSymbolic(GenTestParser::SymbolicContext * /*ctx*/) override { }

  virtual void enterBracket_symbolic(GenTestParser::Bracket_symbolicContext * /*ctx*/) override { }
  virtual void exitBracket_symbolic(GenTestParser::Bracket_symbolicContext * /*ctx*/) override { }

  virtual void enterUnderscore_symbolic(GenTestParser::Underscore_symbolicContext * /*ctx*/) override { }
  virtual void exitUnderscore_symbolic(GenTestParser::Underscore_symbolicContext * /*ctx*/) override { }

  virtual void enterVerification(GenTestParser::VerificationContext * /*ctx*/) override { }
  virtual void exitVerification(GenTestParser::VerificationContext * /*ctx*/) override { }

  virtual void enterAssrt(GenTestParser::AssrtContext * /*ctx*/) override { }
  virtual void exitAssrt(GenTestParser::AssrtContext * /*ctx*/) override { }

  virtual void enterAssrt_gt(GenTestParser::Assrt_gtContext * /*ctx*/) override { }
  virtual void exitAssrt_gt(GenTestParser::Assrt_gtContext * /*ctx*/) override { }

  virtual void enterAssrt_lt(GenTestParser::Assrt_ltContext * /*ctx*/) override { }
  virtual void exitAssrt_lt(GenTestParser::Assrt_ltContext * /*ctx*/) override { }

  virtual void enterAssrt_ge(GenTestParser::Assrt_geContext * /*ctx*/) override { }
  virtual void exitAssrt_ge(GenTestParser::Assrt_geContext * /*ctx*/) override { }

  virtual void enterAssrt_le(GenTestParser::Assrt_leContext * /*ctx*/) override { }
  virtual void exitAssrt_le(GenTestParser::Assrt_leContext * /*ctx*/) override { }

  virtual void enterAssrt_ne(GenTestParser::Assrt_neContext * /*ctx*/) override { }
  virtual void exitAssrt_ne(GenTestParser::Assrt_neContext * /*ctx*/) override { }

  virtual void enterAssrt_eq(GenTestParser::Assrt_eqContext * /*ctx*/) override { }
  virtual void exitAssrt_eq(GenTestParser::Assrt_eqContext * /*ctx*/) override { }

  virtual void enterOnly_assrt(GenTestParser::Only_assrtContext * /*ctx*/) override { }
  virtual void exitOnly_assrt(GenTestParser::Only_assrtContext * /*ctx*/) override { }

  virtual void enterAssume(GenTestParser::AssumeContext * /*ctx*/) override { }
  virtual void exitAssume(GenTestParser::AssumeContext * /*ctx*/) override { }

  virtual void enterAssume_gt(GenTestParser::Assume_gtContext * /*ctx*/) override { }
  virtual void exitAssume_gt(GenTestParser::Assume_gtContext * /*ctx*/) override { }

  virtual void enterAssume_lt(GenTestParser::Assume_ltContext * /*ctx*/) override { }
  virtual void exitAssume_lt(GenTestParser::Assume_ltContext * /*ctx*/) override { }

  virtual void enterAssume_ge(GenTestParser::Assume_geContext * /*ctx*/) override { }
  virtual void exitAssume_ge(GenTestParser::Assume_geContext * /*ctx*/) override { }

  virtual void enterAssume_le(GenTestParser::Assume_leContext * /*ctx*/) override { }
  virtual void exitAssume_le(GenTestParser::Assume_leContext * /*ctx*/) override { }

  virtual void enterAssume_ne(GenTestParser::Assume_neContext * /*ctx*/) override { }
  virtual void exitAssume_ne(GenTestParser::Assume_neContext * /*ctx*/) override { }

  virtual void enterAssume_eq(GenTestParser::Assume_eqContext * /*ctx*/) override { }
  virtual void exitAssume_eq(GenTestParser::Assume_eqContext * /*ctx*/) override { }

  virtual void enterCheck(GenTestParser::CheckContext * /*ctx*/) override { }
  virtual void exitCheck(GenTestParser::CheckContext * /*ctx*/) override { }

  virtual void enterCheck_gt(GenTestParser::Check_gtContext * /*ctx*/) override { }
  virtual void exitCheck_gt(GenTestParser::Check_gtContext * /*ctx*/) override { }

  virtual void enterCheck_lt(GenTestParser::Check_ltContext * /*ctx*/) override { }
  virtual void exitCheck_lt(GenTestParser::Check_ltContext * /*ctx*/) override { }

  virtual void enterCheck_ge(GenTestParser::Check_geContext * /*ctx*/) override { }
  virtual void exitCheck_ge(GenTestParser::Check_geContext * /*ctx*/) override { }

  virtual void enterCheck_le(GenTestParser::Check_leContext * /*ctx*/) override { }
  virtual void exitCheck_le(GenTestParser::Check_leContext * /*ctx*/) override { }

  virtual void enterCheck_ne(GenTestParser::Check_neContext * /*ctx*/) override { }
  virtual void exitCheck_ne(GenTestParser::Check_neContext * /*ctx*/) override { }

  virtual void enterCheck_eq(GenTestParser::Check_eqContext * /*ctx*/) override { }
  virtual void exitCheck_eq(GenTestParser::Check_eqContext * /*ctx*/) override { }

  virtual void enterMsg(GenTestParser::MsgContext * /*ctx*/) override { }
  virtual void exitMsg(GenTestParser::MsgContext * /*ctx*/) override { }

  virtual void enterMatch_lexer(GenTestParser::Match_lexerContext * /*ctx*/) override { }
  virtual void exitMatch_lexer(GenTestParser::Match_lexerContext * /*ctx*/) override { }

  virtual void enterOpen_bracket(GenTestParser::Open_bracketContext * /*ctx*/) override { }
  virtual void exitOpen_bracket(GenTestParser::Open_bracketContext * /*ctx*/) override { }

  virtual void enterClose_bracket(GenTestParser::Close_bracketContext * /*ctx*/) override { }
  virtual void exitClose_bracket(GenTestParser::Close_bracketContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

