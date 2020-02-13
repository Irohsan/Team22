
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, SYMBOLIC = 12, SYMBOLIC_C = 13, 
    ASSUME_C = 14, ASSUME = 15, ASSRT = 16, ASSRT_C = 17, DEEPSTATE = 18, 
    CHECK = 19, CHECK_C = 20, GREATER = 21, LESS = 22, GREATER_EQ = 23, 
    LESS_EQ = 24, EQ = 25, NOT_E = 26, TEST = 27, DEEPSTATE_INLINE = 28, 
    DEEPSTATE_NOINLINE = 29, INT = 30, UINT8 = 31, UINT16 = 32, UINT32 = 33, 
    UINT64 = 34, SHORT = 35, LONG = 36, DOUBLE = 37, FLOAT = 38, CHAR = 39, 
    UNSIGNED = 40, PRIVATE = 41, PUBLIC = 42, INLINE = 43, VIRTUAL = 44, 
    CONSTANT = 45, STATIC = 46, EXTERN = 47, RETURN = 48, INCLUDE = 49, 
    DEFINE = 50, SPACE = 51, IDENTIFIER = 52, NUM = 53, UNDERSCORE = 54, 
    OPEN_PAR = 55, CLOSE_PAR = 56, COMMA = 57, PERIOD = 58, ARROW = 59, 
    SCOPE = 60, LT = 61, GT = 62, GE = 63, LE = 64, EQUALS = 65, NE = 66, 
    INVERSE = 67, SEMICOLON = 68, OPEN_SQ = 69, CLOSE_SQ = 70, EQUAL = 71, 
    PLUS_EQ = 72, MINUS_EQ = 73, TIMES_EQ = 74, DIV_EQ = 75, PLUS = 76, 
    SUB = 77, DIV = 78, MUL = 79, MOD = 80, OPEN_BRK = 81, CLOSE_BRK = 82, 
    LEFT_SHIFT = 83, HASH = 84, QUOTE = 85, LINE_COMMENT = 86, MULTI_LINE_O = 87, 
    MULTI_LINE_E = 88, ADDRESS = 89, AND = 90, OR = 91, CAR_R = 92, PRINT = 93, 
    PRINT_F = 94, WS = 95, NEWLINE = 96, TAB = 97, TRUE = 98, FALSE = 99
  };

  enum {
    RuleFile = 0, RuleInclude = 1, RuleInclude_bracket = 2, RuleInclude_quote = 3, 
    RuleMacro_define = 4, RuleSpace = 5, RuleComment = 6, RuleSingle_line = 7, 
    RuleMulti_line = 8, RuleFunction = 9, RuleFunction_header = 10, RuleFunction_body = 11, 
    RuleFunction_param = 12, RuleStatement = 13, RuleElement = 14, RuleRtrn = 15, 
    RuleDefine = 16, RuleType_def = 17, RuleLib_def = 18, RulePointer_def = 19, 
    RuleClass_def = 20, RuleBrackets = 21, RuleAssignment = 22, RuleConditional = 23, 
    RuleMain_statement = 24, RuleCond_body = 25, RuleElif = 26, RuleEls = 27, 
    RuleArithmetic = 28, RuleOperation = 29, RuleIncrement = 30, RuleDecrement = 31, 
    RuleEvaluation = 32, RuleComparison = 33, RuleBoolean_ = 34, RuleEq = 35, 
    RuleNe = 36, RuleInverse = 37, RuleBool_op = 38, RuleLoop = 39, RuleLoop_body = 40, 
    RuleWhile_loop = 41, RuleFor_loop = 42, RuleReference = 43, RuleFunction_call = 44, 
    RulePeriod_call = 45, RuleArrow_call = 46, RuleLib_call = 47, RuleParam_list = 48, 
    RuleLib = 49, RuleArray = 50, RulePointer_cast = 51, RuleAddress_cast = 52, 
    RuleType_cast = 53, RuleDisplay = 54, RuleDisplay_f = 55, RuleVariable_no_ws = 56, 
    RuleInput = 57, RuleText = 58, RuleSymbol = 59, RuleType = 60, RuleString = 61, 
    RuleKeyword = 62, RuleIdentifier = 63, RuleNum = 64, RuleTest = 65, 
    RuleTest_body = 66, RuleSymbolic = 67, RuleBracket_symbolic = 68, RuleVerification = 69, 
    RuleAssrt = 70, RuleAssume = 71, RuleCheck = 72, RuleVerification_type = 73, 
    RuleMsg = 74
  };

  GenTestParser(antlr4::TokenStream *input);
  ~GenTestParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class IncludeContext;
  class Include_bracketContext;
  class Include_quoteContext;
  class Macro_defineContext;
  class SpaceContext;
  class CommentContext;
  class Single_lineContext;
  class Multi_lineContext;
  class FunctionContext;
  class Function_headerContext;
  class Function_bodyContext;
  class Function_paramContext;
  class StatementContext;
  class ElementContext;
  class RtrnContext;
  class DefineContext;
  class Type_defContext;
  class Lib_defContext;
  class Pointer_defContext;
  class Class_defContext;
  class BracketsContext;
  class AssignmentContext;
  class ConditionalContext;
  class Main_statementContext;
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
  class Test_bodyContext;
  class SymbolicContext;
  class Bracket_symbolicContext;
  class VerificationContext;
  class AssrtContext;
  class AssumeContext;
  class CheckContext;
  class Verification_typeContext;
  class MsgContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

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

  class  SpaceContext : public antlr4::ParserRuleContext {
  public:
    SpaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SpaceContext* space();

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
    antlr4::tree::TerminalNode *OPEN_BRK();
    Function_bodyContext *function_body();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

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
    std::vector<RtrnContext *> rtrn();
    RtrnContext* rtrn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
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
    std::vector<ElementContext *> element();
    ElementContext* element(size_t i);
    InputContext *input();
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  ElementContext : public antlr4::ParserRuleContext {
  public:
    ElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    DefineContext *define();
    ArithmeticContext *arithmetic();
    CommentContext *comment();
    EvaluationContext *evaluation();
    Boolean_Context *boolean_();
    ArrayContext *array();
    ReferenceContext *reference();
    SymbolicContext *symbolic();
    VerificationContext *verification();
    DisplayContext *display();
    Display_fContext *display_f();
    LibContext *lib();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElementContext* element();

  class  RtrnContext : public antlr4::ParserRuleContext {
  public:
    RtrnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    StatementContext *statement();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *NUM();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RtrnContext* rtrn();

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
    Main_statementContext *main_statement();
    std::vector<ElifContext *> elif();
    ElifContext* elif(size_t i);
    ElsContext *els();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalContext* conditional();

  class  Main_statementContext : public antlr4::ParserRuleContext {
  public:
    Main_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *OPEN_BRK();
    Cond_bodyContext *cond_body();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Main_statementContext* main_statement();

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
    std::vector<RtrnContext *> rtrn();
    RtrnContext* rtrn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
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
    antlr4::tree::TerminalNode *OPEN_BRK();
    Cond_bodyContext *cond_body();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElifContext* elif();

  class  ElsContext : public antlr4::ParserRuleContext {
  public:
    ElsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRK();
    Cond_bodyContext *cond_body();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElsContext* els();

  class  ArithmeticContext : public antlr4::ParserRuleContext {
  public:
    ArithmeticContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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
    std::vector<ArrayContext *> array();
    ArrayContext* array(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<ReferenceContext *> reference();
    ReferenceContext* reference(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OPEN_PAR();
    antlr4::tree::TerminalNode* OPEN_PAR(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLOSE_PAR();
    antlr4::tree::TerminalNode* CLOSE_PAR(size_t i);
    std::vector<SymbolContext *> symbol();
    SymbolContext* symbol(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);

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
    antlr4::tree::TerminalNode *OPEN_BRK();
    Loop_bodyContext *loop_body();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    While_loopContext *while_loop();
    For_loopContext *for_loop();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

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
    std::vector<RtrnContext *> rtrn();
    RtrnContext* rtrn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
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
    antlr4::tree::TerminalNode *DEEPSTATE();
    antlr4::tree::TerminalNode *WS();
    antlr4::tree::TerminalNode *LINE_COMMENT();
    antlr4::tree::TerminalNode *NEWLINE();

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
    std::vector<antlr4::tree::TerminalNode *> DEEPSTATE();
    antlr4::tree::TerminalNode* DEEPSTATE(size_t i);
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
    antlr4::tree::TerminalNode *TEST();
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *OPEN_BRK();
    Test_bodyContext *test_body();
    antlr4::tree::TerminalNode *CLOSE_BRK();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestContext* test();

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
    std::vector<RtrnContext *> rtrn();
    RtrnContext* rtrn(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Test_bodyContext* test_body();

  class  SymbolicContext : public antlr4::ParserRuleContext {
  public:
    SymbolicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Bracket_symbolicContext *bracket_symbolic();
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
    TypeContext *type();
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bracket_symbolicContext* bracket_symbolic();

  class  VerificationContext : public antlr4::ParserRuleContext {
  public:
    VerificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssrtContext *assrt();
    AssumeContext *assume();
    CheckContext *check();
    MsgContext *msg();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VerificationContext* verification();

  class  AssrtContext : public antlr4::ParserRuleContext {
  public:
    AssrtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSRT();
    antlr4::tree::TerminalNode *ASSRT_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    antlr4::tree::TerminalNode *UNDERSCORE();
    Verification_typeContext *verification_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssrtContext* assrt();

  class  AssumeContext : public antlr4::ParserRuleContext {
  public:
    AssumeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *ASSUME();
    antlr4::tree::TerminalNode *ASSUME_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    antlr4::tree::TerminalNode *UNDERSCORE();
    Verification_typeContext *verification_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssumeContext* assume();

  class  CheckContext : public antlr4::ParserRuleContext {
  public:
    CheckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Param_listContext *param_list();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CHECK_C();
    antlr4::tree::TerminalNode *DEEPSTATE();
    antlr4::tree::TerminalNode *UNDERSCORE();
    Verification_typeContext *verification_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CheckContext* check();

  class  Verification_typeContext : public antlr4::ParserRuleContext {
  public:
    Verification_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UNDERSCORE();
    antlr4::tree::TerminalNode *GREATER();
    antlr4::tree::TerminalNode *LESS();
    antlr4::tree::TerminalNode *GREATER_EQ();
    antlr4::tree::TerminalNode *LESS_EQ();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NOT_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Verification_typeContext* verification_type();

  class  MsgContext : public antlr4::ParserRuleContext {
  public:
    MsgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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

