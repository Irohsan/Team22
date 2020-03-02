
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, ASSUME_C = 12, ASSUME = 13, 
    ASSRT = 14, ASSRT_C = 15, DEEPSTATE = 16, CHK = 17, CHK_C = 18, GREATER = 19, 
    LESS = 20, GREATER_EQ = 21, LESS_EQ = 22, EQ = 23, NOT_E = 24, TEST = 25, 
    DEEPSTATE_INLINE = 26, DEEPSTATE_NOINLINE = 27, DEEPSTATE_NORETURN = 28, 
    SYMBOLIC = 29, SYMBOLIC_C = 30, FORALL = 31, INT = 32, UINT8 = 33, UINT16 = 34, 
    UINT32 = 35, UINT64 = 36, SHORT = 37, LONG = 38, DOUBLE = 39, FLOAT = 40, 
    CHAR = 41, UNSIGNED = 42, BOOL = 43, PRIVATE = 44, PUBLIC = 45, INLINE = 46, 
    VIRTUAL = 47, CONSTANT = 48, STATIC = 49, EXTERN = 50, RETURN = 51, 
    INCLUDE = 52, DEFINE = 53, WHILE = 54, FOR = 55, ENUM = 56, SPACE = 57, 
    STRUCT = 58, TYPEDEF = 59, IFNDEF = 60, ENDIF = 61, UNDEF = 62, IFDEF = 63, 
    IDENTIFIER = 64, NUM = 65, UNDERSCORE = 66, OPEN_PAR = 67, CLOSE_PAR = 68, 
    COMMA = 69, PERIOD = 70, ARROW = 71, SCOPE = 72, LT = 73, GT = 74, GE = 75, 
    LE = 76, EQUALS = 77, NE = 78, INVERSE = 79, SEMICOLON = 80, OPEN_SQ = 81, 
    CLOSE_SQ = 82, EQUAL = 83, PLUS_EQ = 84, MINUS_EQ = 85, TIMES_EQ = 86, 
    DIV_EQ = 87, PLUS = 88, SUB = 89, DIV = 90, MUL = 91, MOD = 92, OPEN_BRK = 93, 
    CLOSE_BRK = 94, LEFT_SHIFT = 95, HASH = 96, QUOTE = 97, LINE_COMMENT = 98, 
    MULTI_LINE_O = 99, MULTI_LINE_E = 100, ADDRESS = 101, AND = 102, OR = 103, 
    CAR_R = 104, DOTS = 105, PRINT = 106, PRINT_F = 107, WS = 108, NEWLINE = 109, 
    TAB = 110, TRUE = 111, FALSE = 112
  };

  enum {
    RuleFile = 0, RuleSpace = 1, RuleInclude = 2, RuleInclude_bracket = 3, 
    RuleInclude_quote = 4, RuleMacro_define = 5, RuleStructure = 6, RuleStructure_header = 7, 
    RuleMulti_var = 8, RuleMulti_var_body = 9, RuleNumeration = 10, RuleTypdef = 11, 
    RuleTypedef_header = 12, RuleIfdef = 13, RuleUndefine = 14, RuleComment = 15, 
    RuleSingle_line = 16, RuleMulti_line = 17, RuleFunction = 18, RuleFunction_header = 19, 
    RuleFunction_body = 20, RuleFunction_param = 21, RuleStatement = 22, 
    RuleElement = 23, RuleDefine = 24, RuleType_def = 25, RuleLib_def = 26, 
    RulePointer_def = 27, RuleClass_def = 28, RuleBrackets = 29, RuleAssignment = 30, 
    RuleConditional = 31, RuleCond_header = 32, RuleCond_body = 33, RuleElif = 34, 
    RuleEls = 35, RuleArithmetic = 36, RuleOperation = 37, RuleIncrement = 38, 
    RuleDecrement = 39, RuleEvaluation = 40, RuleComparison = 41, RuleBoolean_ = 42, 
    RuleEq = 43, RuleNe = 44, RuleInverse = 45, RuleBool_op = 46, RuleLoop = 47, 
    RuleLoop_body = 48, RuleWhile_loop = 49, RuleFor_loop = 50, RuleReference = 51, 
    RuleFunction_call = 52, RulePeriod_call = 53, RuleArrow_call = 54, RuleLib_call = 55, 
    RuleParam_list = 56, RuleLib = 57, RuleArray = 58, RulePointer_cast = 59, 
    RuleAddress_cast = 60, RuleType_cast = 61, RuleDisplay = 62, RuleDisplay_f = 63, 
    RuleVariable_no_ws = 64, RuleInput = 65, RuleText = 66, RuleSymbol = 67, 
    RuleType = 68, RuleString = 69, RuleKeyword = 70, RuleIdentifier = 71, 
    RuleNum = 72, RuleTest = 73, RuleTest_header = 74, RuleTest_body = 75, 
    RuleSymbolic = 76, RuleBracket_symbolic = 77, RuleUnderscore_symbolic = 78, 
    RuleVerification = 79, RuleAssrt = 80, RuleAssrt_gt = 81, RuleAssrt_lt = 82, 
    RuleAssrt_ge = 83, RuleAssrt_le = 84, RuleAssrt_ne = 85, RuleAssrt_eq = 86, 
    RuleOnly_assrt = 87, RuleAssume = 88, RuleAssume_gt = 89, RuleAssume_lt = 90, 
    RuleAssume_ge = 91, RuleAssume_le = 92, RuleAssume_ne = 93, RuleAssume_eq = 94, 
    RuleCheck = 95, RuleCheck_gt = 96, RuleCheck_lt = 97, RuleCheck_ge = 98, 
    RuleCheck_le = 99, RuleCheck_ne = 100, RuleCheck_eq = 101, RuleFor_all = 102, 
    RuleFor_all_body = 103, RuleMsg = 104, RuleMatch_lexer = 105, RuleOpen_bracket = 106, 
    RuleClose_bracket = 107
  };

  GenTestParser(antlr4::TokenStream *input);
  ~GenTestParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class SpaceContext;
  class IncludeContext;
  class Include_bracketContext;
  class Include_quoteContext;
  class Macro_defineContext;
  class StructureContext;
  class Structure_headerContext;
  class Multi_varContext;
  class Multi_var_bodyContext;
  class NumerationContext;
  class TypdefContext;
  class Typedef_headerContext;
  class IfdefContext;
  class UndefineContext;
  class CommentContext;
  class Single_lineContext;
  class Multi_lineContext;
  class FunctionContext;
  class Function_headerContext;
  class Function_bodyContext;
  class Function_paramContext;
  class StatementContext;
  class ElementContext;
  class DefineContext;
  class Type_defContext;
  class Lib_defContext;
  class Pointer_defContext;
  class Class_defContext;
  class BracketsContext;
  class AssignmentContext;
  class ConditionalContext;
  class Cond_headerContext;
  class Cond_bodyContext;
  class ElifContext;
  class ElsContext;
  class ArithmeticContext;
  class OperationContext;
  class IncrementContext;
  class DecrementContext;
  class EvaluationContext;
  class ComparisonContext;
  class Boolean_Context;
  class EqContext;
  class NeContext;
  class InverseContext;
  class Bool_opContext;
  class LoopContext;
  class Loop_bodyContext;
  class While_loopContext;
  class For_loopContext;
  class ReferenceContext;
  class Function_callContext;
  class Period_callContext;
  class Arrow_callContext;
  class Lib_callContext;
  class Param_listContext;
  class LibContext;
  class ArrayContext;
  class Pointer_castContext;
  class Address_castContext;
  class Type_castContext;
  class DisplayContext;
  class Display_fContext;
  class Variable_no_wsContext;
  class InputContext;
  class TextContext;
  class SymbolContext;
  class TypeContext;
  class StringContext;
  class KeywordContext;
  class IdentifierContext;
  class NumContext;
  class TestContext;
  class Test_headerContext;
  class Test_bodyContext;
  class SymbolicContext;
  class Bracket_symbolicContext;
  class Underscore_symbolicContext;
  class VerificationContext;
  class AssrtContext;
  class Assrt_gtContext;
  class Assrt_ltContext;
  class Assrt_geContext;
  class Assrt_leContext;
  class Assrt_neContext;
  class Assrt_eqContext;
  class Only_assrtContext;
  class AssumeContext;
  class Assume_gtContext;
  class Assume_ltContext;
  class Assume_geContext;
  class Assume_leContext;
  class Assume_neContext;
  class Assume_eqContext;
  class CheckContext;
  class Check_gtContext;
  class Check_ltContext;
  class Check_geContext;
  class Check_leContext;
  class Check_neContext;
  class Check_eqContext;
  class For_allContext;
  class For_all_bodyContext;
  class MsgContext;
  class Match_lexerContext;
  class Open_bracketContext;
  class Close_bracketContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<IfdefContext *> ifdef();
    IfdefContext* ifdef(size_t i);
    std::vector<TypdefContext *> typdef();
    TypdefContext* typdef(size_t i);
    std::vector<NumerationContext *> numeration();
    NumerationContext* numeration(size_t i);
    std::vector<StructureContext *> structure();
    StructureContext* structure(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<SpaceContext *> space();
    SpaceContext* space(size_t i);
    std::vector<IncludeContext *> include();
    IncludeContext* include(size_t i);
    std::vector<Macro_defineContext *> macro_define();
    Macro_defineContext* macro_define(size_t i);
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);
    std::vector<UndefineContext *> undefine();
    UndefineContext* undefine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

  class  SpaceContext : public antlr4::ParserRuleContext {
  public:
    SpaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpaceContext* space();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *INCLUDE();
    Include_bracketContext *include_bracket();
    Include_quoteContext *include_quote();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncludeContext* include();

  class  Include_bracketContext : public antlr4::ParserRuleContext {
  public:
    Include_bracketContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Include_bracketContext* include_bracket();

  class  Include_quoteContext : public antlr4::ParserRuleContext {
  public:
    Include_quoteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Include_quoteContext* include_quote();

  class  Macro_defineContext : public antlr4::ParserRuleContext {
  public:
    Macro_defineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *DEFINE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Macro_defineContext* macro_define();

  class  StructureContext : public antlr4::ParserRuleContext {
  public:
    StructureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Structure_headerContext *structure_header();
    Multi_varContext *multi_var();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StructureContext* structure();

  class  Structure_headerContext : public antlr4::ParserRuleContext {
  public:
    Structure_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRUCT();
    IdentifierContext *identifier();
    Open_bracketContext *open_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Structure_headerContext* structure_header();

  class  Multi_varContext : public antlr4::ParserRuleContext {
  public:
    Multi_varContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multi_var_bodyContext *multi_var_body();
    Close_bracketContext *close_bracket();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multi_varContext* multi_var();

  class  Multi_var_bodyContext : public antlr4::ParserRuleContext {
  public:
    Multi_var_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    std::vector<SymbolicContext *> symbolic();
    SymbolicContext* symbolic(size_t i);
    std::vector<DefineContext *> define();
    DefineContext* define(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multi_var_bodyContext* multi_var_body();

  class  NumerationContext : public antlr4::ParserRuleContext {
  public:
    NumerationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    Open_bracketContext *open_bracket();
    Close_bracketContext *close_bracket();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumerationContext* numeration();

  class  TypdefContext : public antlr4::ParserRuleContext {
  public:
    TypdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Typedef_headerContext *typedef_header();
    StructureContext *structure();
    NumerationContext *numeration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypdefContext* typdef();

  class  Typedef_headerContext : public antlr4::ParserRuleContext {
  public:
    Typedef_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPEDEF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Typedef_headerContext* typedef_header();

  class  IfdefContext : public antlr4::ParserRuleContext {
  public:
    IfdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *IFNDEF();
    antlr4::tree::TerminalNode *IFDEF();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TypdefContext *> typdef();
    TypdefContext* typdef(size_t i);
    std::vector<NumerationContext *> numeration();
    NumerationContext* numeration(size_t i);
    std::vector<StructureContext *> structure();
    StructureContext* structure(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<SpaceContext *> space();
    SpaceContext* space(size_t i);
    std::vector<IncludeContext *> include();
    IncludeContext* include(size_t i);
    std::vector<Macro_defineContext *> macro_define();
    Macro_defineContext* macro_define(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);
    std::vector<UndefineContext *> undefine();
    UndefineContext* undefine(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IfdefContext* ifdef();

  class  UndefineContext : public antlr4::ParserRuleContext {
  public:
    UndefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDEF();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UndefineContext* undefine();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Multi_lineContext *multi_line();
    Single_lineContext *single_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommentContext* comment();

  class  Single_lineContext : public antlr4::ParserRuleContext {
  public:
    Single_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LINE_COMMENT();
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Single_lineContext* single_line();

  class  Multi_lineContext : public antlr4::ParserRuleContext {
  public:
    Multi_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTI_LINE_O();
    antlr4::tree::TerminalNode *MULTI_LINE_E();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Multi_lineContext* multi_line();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_headerContext *function_header();
    Open_bracketContext *open_bracket();
    Function_bodyContext *function_body();
    Close_bracketContext *close_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  Function_headerContext : public antlr4::ParserRuleContext {
  public:
    Function_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Function_paramContext *function_param();
    Type_defContext *type_def();
    Lib_defContext *lib_def();
    Variable_no_wsContext *variable_no_ws();
    Pointer_defContext *pointer_def();
    Class_defContext *class_def();
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_headerContext* function_header();

  class  Function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LoopContext *> loop();
    LoopContext* loop(size_t i);
    std::vector<ConditionalContext *> conditional();
    ConditionalContext* conditional(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<For_allContext *> for_all();
    For_allContext* for_all(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_bodyContext* function_body();

  class  Function_paramContext : public antlr4::ParserRuleContext {
  public:
    Function_paramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    std::vector<DefineContext *> define();
    DefineContext* define(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_paramContext* function_param();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *RETURN();
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    InputContext *input();
    CommentContext *comment();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolicContext *symbolic();
    AssignmentContext *assignment();
    DefineContext *define();
    ArithmeticContext *arithmetic();
    EvaluationContext *evaluation();
    Boolean_Context *boolean_();
    ArrayContext *array();
    ReferenceContext *reference();
    VerificationContext *verification();
    DisplayContext *display();
    Display_fContext *display_f();
    LibContext *lib();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *NUM();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementContext* element();

  class  DefineContext : public antlr4::ParserRuleContext {
  public:
    DefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_defContext *type_def();
    Lib_defContext *lib_def();
    Class_defContext *class_def();
    Pointer_defContext *pointer_def();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    KeywordContext *keyword();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<Pointer_castContext *> pointer_cast();
    Pointer_castContext* pointer_cast(size_t i);
    std::vector<Type_castContext *> type_cast();
    Type_castContext* type_cast(size_t i);
    std::vector<Address_castContext *> address_cast();
    Address_castContext* address_cast(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DefineContext* define();

  class  Type_defContext : public antlr4::ParserRuleContext {
  public:
    Type_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_defContext* type_def();

  class  Lib_defContext : public antlr4::ParserRuleContext {
  public:
    Lib_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LibContext *lib();
    BracketsContext *brackets();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lib_defContext* lib_def();

  class  Pointer_defContext : public antlr4::ParserRuleContext {
  public:
    Pointer_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_defContext *type_def();
    Class_defContext *class_def();
    Lib_defContext *lib_def();
    std::vector<antlr4::tree::TerminalNode *> MUL();
    antlr4::tree::TerminalNode* MUL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pointer_defContext* pointer_def();

  class  Class_defContext : public antlr4::ParserRuleContext {
  public:
    Class_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    BracketsContext *brackets();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Class_defContext* class_def();

  class  BracketsContext : public antlr4::ParserRuleContext {
  public:
    BracketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BracketsContext* brackets();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    LibContext *lib();
    ArrayContext *array();
    Period_callContext *period_call();
    Arrow_callContext *arrow_call();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Pointer_castContext *> pointer_cast();
    Pointer_castContext* pointer_cast(size_t i);
    std::vector<Type_castContext *> type_cast();
    Type_castContext* type_cast(size_t i);
    std::vector<Address_castContext *> address_cast();
    Address_castContext* address_cast(size_t i);
    ElementContext *element();
    StringContext *string();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  ConditionalContext : public antlr4::ParserRuleContext {
  public:
    ConditionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cond_headerContext *cond_header();
    Cond_bodyContext *cond_body();
    Close_bracketContext *close_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<ElifContext *> elif();
    ElifContext* elif(size_t i);
    ElsContext *els();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalContext* conditional();

  class  Cond_headerContext : public antlr4::ParserRuleContext {
  public:
    Cond_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_listContext *param_list();
    Open_bracketContext *open_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_headerContext* cond_header();

  class  Cond_bodyContext : public antlr4::ParserRuleContext {
  public:
    Cond_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LoopContext *> loop();
    LoopContext* loop(size_t i);
    std::vector<ConditionalContext *> conditional();
    ConditionalContext* conditional(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Cond_bodyContext* cond_body();

  class  ElifContext : public antlr4::ParserRuleContext {
  public:
    ElifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_listContext *param_list();
    Open_bracketContext *open_bracket();
    Cond_bodyContext *cond_body();
    Close_bracketContext *close_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElifContext* elif();

  class  ElsContext : public antlr4::ParserRuleContext {
  public:
    ElsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_bracketContext *open_bracket();
    Cond_bodyContext *cond_body();
    Close_bracketContext *close_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElsContext* els();

  class  ArithmeticContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<IncrementContext *> increment();
    IncrementContext* increment(size_t i);
    std::vector<DecrementContext *> decrement();
    DecrementContext* decrement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArithmeticContext* arithmetic();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SymbolContext *symbol();
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    OperationContext *operation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperationContext* operation();

  class  IncrementContext : public antlr4::ParserRuleContext {
  public:
    IncrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<antlr4::tree::TerminalNode *> PLUS();
    antlr4::tree::TerminalNode* PLUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncrementContext* increment();

  class  DecrementContext : public antlr4::ParserRuleContext {
  public:
    DecrementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<antlr4::tree::TerminalNode *> SUB();
    antlr4::tree::TerminalNode* SUB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DecrementContext* decrement();

  class  EvaluationContext : public antlr4::ParserRuleContext {
  public:
    EvaluationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);
    std::vector<ComparisonContext *> comparison();
    ComparisonContext* comparison(size_t i);
    std::vector<Boolean_Context *> boolean_();
    Boolean_Context* boolean_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EvaluationContext* evaluation();

  class  ComparisonContext : public antlr4::ParserRuleContext {
  public:
    ComparisonContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<SymbolContext *> symbol();
    SymbolContext* symbol(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComparisonContext* comparison();

  class  Boolean_Context : public antlr4::ParserRuleContext {
  public:
    Boolean_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EqContext *> eq();
    EqContext* eq(size_t i);
    std::vector<NeContext *> ne();
    NeContext* ne(size_t i);
    std::vector<InverseContext *> inverse();
    InverseContext* inverse(size_t i);
    std::vector<Bool_opContext *> bool_op();
    Bool_opContext* bool_op(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Boolean_Context* boolean_();

  class  EqContext : public antlr4::ParserRuleContext {
  public:
    EqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqContext* eq();

  class  NeContext : public antlr4::ParserRuleContext {
  public:
    NeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NE();
    antlr4::tree::TerminalNode* NE(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NeContext* ne();

  class  InverseContext : public antlr4::ParserRuleContext {
  public:
    InverseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INVERSE();
    ComparisonContext *comparison();
    ReferenceContext *reference();
    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InverseContext* inverse();

  class  Bool_opContext : public antlr4::ParserRuleContext {
  public:
    Bool_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComparisonContext *> comparison();
    ComparisonContext* comparison(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OR();
    antlr4::tree::TerminalNode* OR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bool_opContext* bool_op();

  class  LoopContext : public antlr4::ParserRuleContext {
  public:
    LoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Open_bracketContext *open_bracket();
    Loop_bodyContext *loop_body();
    Close_bracketContext *close_bracket();
    While_loopContext *while_loop();
    For_loopContext *for_loop();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LoopContext* loop();

  class  Loop_bodyContext : public antlr4::ParserRuleContext {
  public:
    Loop_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LoopContext *> loop();
    LoopContext* loop(size_t i);
    std::vector<ConditionalContext *> conditional();
    ConditionalContext* conditional(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Loop_bodyContext* loop_body();

  class  While_loopContext : public antlr4::ParserRuleContext {
  public:
    While_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    Param_listContext *param_list();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  While_loopContext* while_loop();

  class  For_loopContext : public antlr4::ParserRuleContext {
  public:
    For_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *OPEN_PAR();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);
    EvaluationContext *evaluation();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    DefineContext *define();
    AssignmentContext *assignment();
    ArithmeticContext *arithmetic();
    CommentContext *comment();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_loopContext* for_loop();

  class  ReferenceContext : public antlr4::ParserRuleContext {
  public:
    ReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();
    Period_callContext *period_call();
    Arrow_callContext *arrow_call();
    Lib_callContext *lib_call();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ReferenceContext* reference();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    Param_listContext *param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Function_callContext* function_call();

  class  Period_callContext : public antlr4::ParserRuleContext {
  public:
    Period_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *PERIOD();
    Param_listContext *param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Period_callContext* period_call();

  class  Arrow_callContext : public antlr4::ParserRuleContext {
  public:
    Arrow_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *ARROW();
    Param_listContext *param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Arrow_callContext* arrow_call();

  class  Lib_callContext : public antlr4::ParserRuleContext {
  public:
    Lib_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LibContext *lib();
    Param_listContext *param_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Lib_callContext* lib_call();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PAR();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<ArithmeticContext *> arithmetic();
    ArithmeticContext* arithmetic(size_t i);
    std::vector<ComparisonContext *> comparison();
    ComparisonContext* comparison(size_t i);
    std::vector<Boolean_Context *> boolean_();
    Boolean_Context* boolean_(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<Pointer_castContext *> pointer_cast();
    Pointer_castContext* pointer_cast(size_t i);
    std::vector<Address_castContext *> address_cast();
    Address_castContext* address_cast(size_t i);
    std::vector<Type_castContext *> type_cast();
    Type_castContext* type_cast(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOTS();
    antlr4::tree::TerminalNode* DOTS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Param_listContext* param_list();

  class  LibContext : public antlr4::ParserRuleContext {
  public:
    LibContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCOPE();
    antlr4::tree::TerminalNode* SCOPE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LibContext* lib();

  class  ArrayContext : public antlr4::ParserRuleContext {
  public:
    ArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_SQ();
    antlr4::tree::TerminalNode* OPEN_SQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_SQ();
    antlr4::tree::TerminalNode* CLOSE_SQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArrayContext* array();

  class  Pointer_castContext : public antlr4::ParserRuleContext {
  public:
    Pointer_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ReferenceContext *reference();
    ArrayContext *array();
    ArithmeticContext *arithmetic();
    std::vector<antlr4::tree::TerminalNode *> MUL();
    antlr4::tree::TerminalNode* MUL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Pointer_castContext* pointer_cast();

  class  Address_castContext : public antlr4::ParserRuleContext {
  public:
    Address_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ReferenceContext *reference();
    ArrayContext *array();
    ArithmeticContext *arithmetic();
    std::vector<antlr4::tree::TerminalNode *> ADDRESS();
    antlr4::tree::TerminalNode* ADDRESS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Address_castContext* address_cast();

  class  Type_castContext : public antlr4::ParserRuleContext {
  public:
    Type_castContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    IdentifierContext *identifier();
    ReferenceContext *reference();
    ArrayContext *array();
    ArithmeticContext *arithmetic();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MUL();
    antlr4::tree::TerminalNode* MUL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Type_castContext* type_cast();

  class  DisplayContext : public antlr4::ParserRuleContext {
  public:
    DisplayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    Param_listContext *param_list();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DisplayContext* display();

  class  Display_fContext : public antlr4::ParserRuleContext {
  public:
    Display_fContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT_F();
    Param_listContext *param_list();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Display_fContext* display_f();

  class  Variable_no_wsContext : public antlr4::ParserRuleContext {
  public:
    Variable_no_wsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Variable_no_wsContext* variable_no_ws();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LEFT_SHIFT();
    antlr4::tree::TerminalNode* LEFT_SHIFT(size_t i);
    std::vector<StringContext *> string();
    StringContext* string(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputContext* input();

  class  TextContext : public antlr4::ParserRuleContext {
  public:
    TextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *QUOTE();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *PERIOD();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *INVERSE();
    antlr4::tree::TerminalNode *UNDERSCORE();
    antlr4::tree::TerminalNode *OPEN_BRK();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    antlr4::tree::TerminalNode *OPEN_SQ();
    antlr4::tree::TerminalNode *CLOSE_SQ();
    antlr4::tree::TerminalNode *ADDRESS();
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *OPEN_PAR();
    antlr4::tree::TerminalNode *CLOSE_PAR();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *LINE_COMMENT();
    antlr4::tree::TerminalNode *NEWLINE();
    Match_lexerContext *match_lexer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextContext* text();

  class  SymbolContext : public antlr4::ParserRuleContext {
  public:
    SymbolContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *INVERSE();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS_EQ();
    antlr4::tree::TerminalNode *MINUS_EQ();
    antlr4::tree::TerminalNode *DIV_EQ();
    antlr4::tree::TerminalNode *TIMES_EQ();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolContext* symbol();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *UINT8();
    antlr4::tree::TerminalNode *UINT16();
    antlr4::tree::TerminalNode *UINT32();
    antlr4::tree::TerminalNode *UINT64();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *BOOL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringContext* string();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *DEEPSTATE_NOINLINE();
    antlr4::tree::TerminalNode *DEEPSTATE_INLINE();
    antlr4::tree::TerminalNode *DEEPSTATE_NORETURN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordContext* keyword();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<Match_lexerContext *> match_lexer();
    Match_lexerContext* match_lexer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdentifierContext* identifier();

  class  NumContext : public antlr4::ParserRuleContext {
  public:
    NumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUM();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumContext* num();

  class  TestContext : public antlr4::ParserRuleContext {
  public:
    TestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Test_headerContext *test_header();
    Test_bodyContext *test_body();
    Close_bracketContext *close_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestContext* test();

  class  Test_headerContext : public antlr4::ParserRuleContext {
  public:
    Test_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEST();
    Param_listContext *param_list();
    Open_bracketContext *open_bracket();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Test_headerContext* test_header();

  class  Test_bodyContext : public antlr4::ParserRuleContext {
  public:
    Test_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LoopContext *> loop();
    LoopContext* loop(size_t i);
    std::vector<ConditionalContext *> conditional();
    ConditionalContext* conditional(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<For_allContext *> for_all();
    For_allContext* for_all(size_t i);
    std::vector<SymbolicContext *> symbolic();
    SymbolicContext* symbolic(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Test_bodyContext* test_body();

  class  SymbolicContext : public antlr4::ParserRuleContext {
  public:
    SymbolicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bracket_symbolicContext *bracket_symbolic();
    Underscore_symbolicContext *underscore_symbolic();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SCOPE();
    antlr4::tree::TerminalNode* SCOPE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolicContext* symbolic();

  class  Bracket_symbolicContext : public antlr4::ParserRuleContext {
  public:
    Bracket_symbolicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYMBOLIC_C();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<LibContext *> lib();
    LibContext* lib(size_t i);
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bracket_symbolicContext* bracket_symbolic();

  class  Underscore_symbolicContext : public antlr4::ParserRuleContext {
  public:
    Underscore_symbolicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYMBOLIC();
    antlr4::tree::TerminalNode *UNDERSCORE();
    TypeContext *type();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<LibContext *> lib();
    LibContext* lib(size_t i);
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Underscore_symbolicContext* underscore_symbolic();

  class  VerificationContext : public antlr4::ParserRuleContext {
  public:
    VerificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssrtContext *assrt();
    AssumeContext *assume();
    CheckContext *check();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VerificationContext* verification();

  class  AssrtContext : public antlr4::ParserRuleContext {
  public:
    AssrtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assrt_gtContext *assrt_gt();
    Assrt_ltContext *assrt_lt();
    Assrt_leContext *assrt_le();
    Assrt_geContext *assrt_ge();
    Assrt_neContext *assrt_ne();
    Assrt_eqContext *assrt_eq();
    Only_assrtContext *only_assrt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssrtContext* assrt();

  class  Assrt_gtContext : public antlr4::ParserRuleContext {
  public:
    Assrt_gtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *GREATER();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assrt_gtContext* assrt_gt();

  class  Assrt_ltContext : public antlr4::ParserRuleContext {
  public:
    Assrt_ltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *LESS();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assrt_ltContext* assrt_lt();

  class  Assrt_geContext : public antlr4::ParserRuleContext {
  public:
    Assrt_geContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *GREATER_EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assrt_geContext* assrt_ge();

  class  Assrt_leContext : public antlr4::ParserRuleContext {
  public:
    Assrt_leContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *LESS_EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assrt_leContext* assrt_le();

  class  Assrt_neContext : public antlr4::ParserRuleContext {
  public:
    Assrt_neContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *NOT_E();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assrt_neContext* assrt_ne();

  class  Assrt_eqContext : public antlr4::ParserRuleContext {
  public:
    Assrt_eqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assrt_eqContext* assrt_eq();

  class  Only_assrtContext : public antlr4::ParserRuleContext {
  public:
    Only_assrtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    antlr4::tree::TerminalNode *UNDERSCORE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Only_assrtContext* only_assrt();

  class  AssumeContext : public antlr4::ParserRuleContext {
  public:
    AssumeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assume_gtContext *assume_gt();
    Assume_ltContext *assume_lt();
    Assume_geContext *assume_ge();
    Assume_leContext *assume_le();
    Assume_neContext *assume_ne();
    Assume_eqContext *assume_eq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssumeContext* assume();

  class  Assume_gtContext : public antlr4::ParserRuleContext {
  public:
    Assume_gtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *GREATER();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assume_gtContext* assume_gt();

  class  Assume_ltContext : public antlr4::ParserRuleContext {
  public:
    Assume_ltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *LESS();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assume_ltContext* assume_lt();

  class  Assume_geContext : public antlr4::ParserRuleContext {
  public:
    Assume_geContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *GREATER_EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assume_geContext* assume_ge();

  class  Assume_leContext : public antlr4::ParserRuleContext {
  public:
    Assume_leContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *LESS_EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assume_leContext* assume_le();

  class  Assume_neContext : public antlr4::ParserRuleContext {
  public:
    Assume_neContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *NOT_E();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assume_neContext* assume_ne();

  class  Assume_eqContext : public antlr4::ParserRuleContext {
  public:
    Assume_eqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Assume_eqContext* assume_eq();

  class  CheckContext : public antlr4::ParserRuleContext {
  public:
    CheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Check_gtContext *check_gt();
    Check_ltContext *check_lt();
    Check_geContext *check_ge();
    Check_leContext *check_le();
    Check_neContext *check_ne();
    Check_eqContext *check_eq();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CheckContext* check();

  class  Check_gtContext : public antlr4::ParserRuleContext {
  public:
    Check_gtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *GREATER();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CHK();
    antlr4::tree::TerminalNode *CHK_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Check_gtContext* check_gt();

  class  Check_ltContext : public antlr4::ParserRuleContext {
  public:
    Check_ltContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *LESS();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CHK();
    antlr4::tree::TerminalNode *CHK_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Check_ltContext* check_lt();

  class  Check_geContext : public antlr4::ParserRuleContext {
  public:
    Check_geContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *GREATER_EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CHK();
    antlr4::tree::TerminalNode *CHK_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Check_geContext* check_ge();

  class  Check_leContext : public antlr4::ParserRuleContext {
  public:
    Check_leContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *LESS_EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CHK();
    antlr4::tree::TerminalNode *CHK_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Check_leContext* check_le();

  class  Check_neContext : public antlr4::ParserRuleContext {
  public:
    Check_neContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *NOT_E();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CHK();
    antlr4::tree::TerminalNode *CHK_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Check_neContext* check_ne();

  class  Check_eqContext : public antlr4::ParserRuleContext {
  public:
    Check_eqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> UNDERSCORE();
    antlr4::tree::TerminalNode* UNDERSCORE(size_t i);
    antlr4::tree::TerminalNode *EQ();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CHK();
    antlr4::tree::TerminalNode *CHK_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Check_eqContext* check_eq();

  class  For_allContext : public antlr4::ParserRuleContext {
  public:
    For_allContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORALL();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);
    antlr4::tree::TerminalNode *OPEN_SQ();
    antlr4::tree::TerminalNode *CLOSE_SQ();
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);
    antlr4::tree::TerminalNode *OPEN_BRK();
    For_all_bodyContext *for_all_body();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<Lib_defContext *> lib_def();
    Lib_defContext* lib_def(size_t i);
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    std::vector<DefineContext *> define();
    DefineContext* define(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_allContext* for_all();

  class  For_all_bodyContext : public antlr4::ParserRuleContext {
  public:
    For_all_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LoopContext *> loop();
    LoopContext* loop(size_t i);
    std::vector<ConditionalContext *> conditional();
    ConditionalContext* conditional(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  For_all_bodyContext* for_all_body();

  class  MsgContext : public antlr4::ParserRuleContext {
  public:
    MsgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<antlr4::tree::TerminalNode *> LEFT_SHIFT();
    antlr4::tree::TerminalNode* LEFT_SHIFT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MsgContext* msg();

  class  Match_lexerContext : public antlr4::ParserRuleContext {
  public:
    Match_lexerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    antlr4::tree::TerminalNode *CHK();
    antlr4::tree::TerminalNode *CHK_C();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *LESS_EQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NOT_E();
    antlr4::tree::TerminalNode *TEST();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *DEEPSTATE_INLINE();
    antlr4::tree::TerminalNode *DEEPSTATE_NOINLINE();
    antlr4::tree::TerminalNode *SYMBOLIC();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *UINT8();
    antlr4::tree::TerminalNode *UINT16();
    antlr4::tree::TerminalNode *UINT32();
    antlr4::tree::TerminalNode *UINT64();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *CHAR();
    antlr4::tree::TerminalNode *UNSIGNED();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *INLINE();
    antlr4::tree::TerminalNode *VIRTUAL();
    antlr4::tree::TerminalNode *CONSTANT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *EXTERN();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *INCLUDE();
    antlr4::tree::TerminalNode *DEFINE();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ENUM();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRUCT();
    antlr4::tree::TerminalNode *TYPEDEF();
    antlr4::tree::TerminalNode *IFNDEF();
    antlr4::tree::TerminalNode *UNDEF();
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *DEEPSTATE_NORETURN();
    antlr4::tree::TerminalNode *DOTS();
    antlr4::tree::TerminalNode *NEWLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Match_lexerContext* match_lexer();

  class  Open_bracketContext : public antlr4::ParserRuleContext {
  public:
    Open_bracketContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Open_bracketContext* open_bracket();

  class  Close_bracketContext : public antlr4::ParserRuleContext {
  public:
    Close_bracketContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLOSE_BRK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Close_bracketContext* close_bracket();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

