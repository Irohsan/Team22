
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, LOWERCASE = 24, UPPERCASE = 25, 
    NUM = 26, INT = 27, UINT8 = 28, UINT16 = 29, UINT32 = 30, UINT64 = 31, 
    SHORT = 32, LONG = 33, DOUBLE = 34, FLOAT = 35, UNSIGNED = 36, CHAR = 37, 
    VOID = 38, NO_INLINE = 39, TEST = 40, ASSERT = 41, ASSERT_EQ = 42, ASSERT_NE = 43, 
    ASSERT_GT = 44, ASSERT_GE = 45, ASSERT_LT = 46, ASSERT_LE = 47, ASSUME_EQ = 48, 
    ASSUME_NE = 49, ASSUME_GT = 50, ASSUME_GE = 51, ASSUME_LT = 52, ASSUME_LE = 53, 
    CHECK_EQ = 54, CHECK_NE = 55, CHECK_GT = 56, CHECK_GE = 57, CHECK_LT = 58, 
    CHECK_LE = 59, DEEPSTATE_ASSERT = 60, DEEPSTATE_ASSUME = 61, DEEPSTATE_CHECK = 62, 
    PRIVATE = 63, PUBLIC = 64, INLINE = 65, STATIC = 66, VIRTUAL = 67, CONSTANT = 68, 
    ADD = 69, SUBTRACT = 70, MULTIPLY = 71, DIVIDE = 72, MODULUS = 73, EQUALS = 74, 
    NOTEQ = 75, GT = 76, LT = 77, GE = 78, LE = 79, NOT = 80, WHITESPACE = 81, 
    OPN_PARENTH = 82, CLS_PARENTH = 83, COMMA = 84, SEMICOLON = 85, NEWLINE = 86, 
    CLOSE_BRACKET = 87
  };

  enum {
    RuleFile = 0, RuleComment = 1, RuleInclude = 2, RuleGlobal = 3, RuleFunction = 4, 
    RuleHeader = 5, RuleBody = 6, RuleLine = 7, RuleDeclaration = 8, RuleAssignment = 9, 
    RuleExpression = 10, RuleOperation = 11, RuleAdd = 12, RuleSub = 13, 
    RuleMul = 14, RuleDiv = 15, RuleMod = 16, RuleEq = 17, RuleNe = 18, 
    RuleGt = 19, RuleGe = 20, RuleLt = 21, RuleLe = 22, RuleNo = 23, RuleConditional = 24, 
    RuleCondition = 25, RuleElif = 26, RuleOtherwise = 27, RuleRtrn = 28, 
    RuleType = 29, RulePointerRef = 30, RuleKeyword = 31, RuleCall = 32, 
    RuleVariable = 33, RuleCharacter = 34, RuleText = 35, RuleEof = 36, 
    RuleSymbolic = 37, RuleDeepstate_noinline = 38, RuleTest = 39, RuleTest_header = 40, 
    RuleDs_assert_type = 41, RuleDs_assert = 42, RuleDs_assume_type = 43, 
    RuleDs_assume = 44, RuleDs_check_type = 45, RuleDs_check = 46, RuleRtrn_msg = 47
  };

  GenTestParser(antlr4::TokenStream *input);
  ~GenTestParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class CommentContext;
  class IncludeContext;
  class GlobalContext;
  class FunctionContext;
  class HeaderContext;
  class BodyContext;
  class LineContext;
  class DeclarationContext;
  class AssignmentContext;
  class ExpressionContext;
  class OperationContext;
  class AddContext;
  class SubContext;
  class MulContext;
  class DivContext;
  class ModContext;
  class EqContext;
  class NeContext;
  class GtContext;
  class GeContext;
  class LtContext;
  class LeContext;
  class NoContext;
  class ConditionalContext;
  class ConditionContext;
  class ElifContext;
  class OtherwiseContext;
  class RtrnContext;
  class TypeContext;
  class PointerRefContext;
  class KeywordContext;
  class CallContext;
  class VariableContext;
  class CharacterContext;
  class TextContext;
  class EofContext;
  class SymbolicContext;
  class Deepstate_noinlineContext;
  class TestContext;
  class Test_headerContext;
  class Ds_assert_typeContext;
  class Ds_assertContext;
  class Ds_assume_typeContext;
  class Ds_assumeContext;
  class Ds_check_typeContext;
  class Ds_checkContext;
  class Rtrn_msgContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EofContext *eof();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);
    std::vector<IncludeContext *> include();
    IncludeContext* include(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);
    std::vector<TestContext *> test();
    TestContext* test(size_t i);
    std::vector<GlobalContext *> global();
    GlobalContext* global(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FileContext* file();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CommentContext* comment();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncludeContext* include();

  class  GlobalContext : public antlr4::ParserRuleContext {
  public:
    GlobalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DeclarationContext *declaration();
    antlr4::tree::TerminalNode *SEMICOLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GlobalContext* global();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    BodyContext *body();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<Deepstate_noinlineContext *> deepstate_noinline();
    Deepstate_noinlineContext* deepstate_noinline(size_t i);
    std::vector<KeywordContext *> keyword();
    KeywordContext* keyword(size_t i);
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);
    std::vector<DeclarationContext *> declaration();
    DeclarationContext* declaration(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HeaderContext* header();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    std::vector<ConditionalContext *> conditional();
    ConditionalContext* conditional(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BodyContext* body();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMICOLON();
    CallContext *call();
    DeclarationContext *declaration();
    ExpressionContext *expression();
    RtrnContext *rtrn();
    Ds_assertContext *ds_assert();
    Ds_assumeContext *ds_assume();
    Ds_checkContext *ds_check();
    SymbolicContext *symbolic();
    AssignmentContext *assignment();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LineContext* line();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *CONSTANT();
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);
    antlr4::tree::TerminalNode *MULTIPLY();
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DeclarationContext* declaration();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PointerRefContext *pointerRef();
    VariableContext *variable();
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpressionContext* expression();

  class  OperationContext : public antlr4::ParserRuleContext {
  public:
    OperationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AddContext *add();
    SubContext *sub();
    MulContext *mul();
    DivContext *div();
    ModContext *mod();
    EqContext *eq();
    NeContext *ne();
    GtContext *gt();
    GeContext *ge();
    LtContext *lt();
    LeContext *le();
    NoContext *no();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OperationContext* operation();

  class  AddContext : public antlr4::ParserRuleContext {
  public:
    AddContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AddContext* add();

  class  SubContext : public antlr4::ParserRuleContext {
  public:
    SubContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUBTRACT();
    antlr4::tree::TerminalNode* SUBTRACT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SubContext* sub();

  class  MulContext : public antlr4::ParserRuleContext {
  public:
    MulContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTIPLY();
    antlr4::tree::TerminalNode* MULTIPLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MulContext* mul();

  class  DivContext : public antlr4::ParserRuleContext {
  public:
    DivContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVIDE();
    antlr4::tree::TerminalNode* DIVIDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  DivContext* div();

  class  ModContext : public antlr4::ParserRuleContext {
  public:
    ModContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MODULUS();
    antlr4::tree::TerminalNode* MODULUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ModContext* mod();

  class  EqContext : public antlr4::ParserRuleContext {
  public:
    EqContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EqContext* eq();

  class  NeContext : public antlr4::ParserRuleContext {
  public:
    NeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOTEQ();
    antlr4::tree::TerminalNode* NOTEQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NeContext* ne();

  class  GtContext : public antlr4::ParserRuleContext {
  public:
    GtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GtContext* gt();

  class  GeContext : public antlr4::ParserRuleContext {
  public:
    GeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GE();
    antlr4::tree::TerminalNode* GE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GeContext* ge();

  class  LtContext : public antlr4::ParserRuleContext {
  public:
    LtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LtContext* lt();

  class  LeContext : public antlr4::ParserRuleContext {
  public:
    LeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LE();
    antlr4::tree::TerminalNode* LE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LeContext* le();

  class  NoContext : public antlr4::ParserRuleContext {
  public:
    NoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOT();
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CLS_PARENTH();
    antlr4::tree::TerminalNode* CLS_PARENTH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NoContext* no();

  class  ConditionalContext : public antlr4::ParserRuleContext {
  public:
    ConditionalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionContext *condition();
    BodyContext *body();
    std::vector<ElifContext *> elif();
    ElifContext* elif(size_t i);
    OtherwiseContext *otherwise();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionalContext* conditional();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConditionContext* condition();

  class  ElifContext : public antlr4::ParserRuleContext {
  public:
    ElifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionContext *condition();
    BodyContext *body();
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ElifContext* elif();

  class  OtherwiseContext : public antlr4::ParserRuleContext {
  public:
    OtherwiseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BodyContext *body();
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);
    std::vector<CommentContext *> comment();
    CommentContext* comment(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  OtherwiseContext* otherwise();

  class  RtrnContext : public antlr4::ParserRuleContext {
  public:
    RtrnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    DeclarationContext *declaration();
    ExpressionContext *expression();
    RtrnContext *rtrn();
    Ds_assertContext *ds_assert();
    Ds_assumeContext *ds_assume();
    Ds_checkContext *ds_check();
    SymbolicContext *symbolic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RtrnContext* rtrn();

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
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TypeContext* type();

  class  PointerRefContext : public antlr4::ParserRuleContext {
  public:
    PointerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MULTIPLY();
    VariableContext *variable();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PointerRefContext* pointerRef();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> PRIVATE();
    antlr4::tree::TerminalNode* PRIVATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PUBLIC();
    antlr4::tree::TerminalNode* PUBLIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> INLINE();
    antlr4::tree::TerminalNode* INLINE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> STATIC();
    antlr4::tree::TerminalNode* STATIC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VIRTUAL();
    antlr4::tree::TerminalNode* VIRTUAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NO_INLINE();
    antlr4::tree::TerminalNode* NO_INLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  KeywordContext* keyword();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CallContext* call();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CharacterContext *> character();
    CharacterContext* character(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NUM();
    antlr4::tree::TerminalNode* NUM(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VariableContext* variable();

  class  CharacterContext : public antlr4::ParserRuleContext {
  public:
    CharacterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *UPPERCASE();
    antlr4::tree::TerminalNode *LOWERCASE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CharacterContext* character();

  class  TextContext : public antlr4::ParserRuleContext {
  public:
    TextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOWERCASE();
    antlr4::tree::TerminalNode *UPPERCASE();
    antlr4::tree::TerminalNode *NUM();
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MODULUS();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *WHITESPACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TextContext* text();

  class  EofContext : public antlr4::ParserRuleContext {
  public:
    EofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  EofContext* eof();

  class  SymbolicContext : public antlr4::ParserRuleContext {
  public:
    SymbolicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeContext *type();
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    antlr4::tree::TerminalNode *LT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *GT();
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SymbolicContext* symbolic();

  class  Deepstate_noinlineContext : public antlr4::ParserRuleContext {
  public:
    Deepstate_noinlineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NO_INLINE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Deepstate_noinlineContext* deepstate_noinline();

  class  TestContext : public antlr4::ParserRuleContext {
  public:
    TestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Test_headerContext *test_header();
    BodyContext *body();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestContext* test();

  class  Test_headerContext : public antlr4::ParserRuleContext {
  public:
    Test_headerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TEST();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Test_headerContext* test_header();

  class  Ds_assert_typeContext : public antlr4::ParserRuleContext {
  public:
    Ds_assert_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *ASSERT_EQ();
    antlr4::tree::TerminalNode *ASSERT_NE();
    antlr4::tree::TerminalNode *ASSERT_GT();
    antlr4::tree::TerminalNode *ASSERT_GE();
    antlr4::tree::TerminalNode *ASSERT_LT();
    antlr4::tree::TerminalNode *ASSERT_LE();
    antlr4::tree::TerminalNode *DEEPSTATE_ASSERT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_assert_typeContext* ds_assert_type();

  class  Ds_assertContext : public antlr4::ParserRuleContext {
  public:
    Ds_assertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ds_assert_typeContext *ds_assert_type();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    Rtrn_msgContext *rtrn_msg();
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUBTRACT();
    antlr4::tree::TerminalNode* SUBTRACT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTIPLY();
    antlr4::tree::TerminalNode* MULTIPLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVIDE();
    antlr4::tree::TerminalNode* DIVIDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MODULUS();
    antlr4::tree::TerminalNode* MODULUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GE();
    antlr4::tree::TerminalNode* GE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOTEQ();
    antlr4::tree::TerminalNode* NOTEQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LE();
    antlr4::tree::TerminalNode* LE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_assertContext* ds_assert();

  class  Ds_assume_typeContext : public antlr4::ParserRuleContext {
  public:
    Ds_assume_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME_EQ();
    antlr4::tree::TerminalNode *ASSUME_NE();
    antlr4::tree::TerminalNode *ASSUME_GT();
    antlr4::tree::TerminalNode *ASSUME_GE();
    antlr4::tree::TerminalNode *ASSUME_LT();
    antlr4::tree::TerminalNode *ASSUME_LE();
    antlr4::tree::TerminalNode *DEEPSTATE_ASSUME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_assume_typeContext* ds_assume_type();

  class  Ds_assumeContext : public antlr4::ParserRuleContext {
  public:
    Ds_assumeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ds_assume_typeContext *ds_assume_type();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    Rtrn_msgContext *rtrn_msg();
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUBTRACT();
    antlr4::tree::TerminalNode* SUBTRACT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTIPLY();
    antlr4::tree::TerminalNode* MULTIPLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVIDE();
    antlr4::tree::TerminalNode* DIVIDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MODULUS();
    antlr4::tree::TerminalNode* MODULUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GE();
    antlr4::tree::TerminalNode* GE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOTEQ();
    antlr4::tree::TerminalNode* NOTEQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LE();
    antlr4::tree::TerminalNode* LE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_assumeContext* ds_assume();

  class  Ds_check_typeContext : public antlr4::ParserRuleContext {
  public:
    Ds_check_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSUME_EQ();
    antlr4::tree::TerminalNode *ASSUME_NE();
    antlr4::tree::TerminalNode *ASSUME_GT();
    antlr4::tree::TerminalNode *ASSUME_GE();
    antlr4::tree::TerminalNode *ASSUME_LT();
    antlr4::tree::TerminalNode *ASSUME_LE();
    antlr4::tree::TerminalNode *DEEPSTATE_CHECK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_check_typeContext* ds_check_type();

  class  Ds_checkContext : public antlr4::ParserRuleContext {
  public:
    Ds_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ds_check_typeContext *ds_check_type();
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    Rtrn_msgContext *rtrn_msg();
    std::vector<CallContext *> call();
    CallContext* call(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ADD();
    antlr4::tree::TerminalNode* ADD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SUBTRACT();
    antlr4::tree::TerminalNode* SUBTRACT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MULTIPLY();
    antlr4::tree::TerminalNode* MULTIPLY(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DIVIDE();
    antlr4::tree::TerminalNode* DIVIDE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> MODULUS();
    antlr4::tree::TerminalNode* MODULUS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EQUALS();
    antlr4::tree::TerminalNode* EQUALS(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GE();
    antlr4::tree::TerminalNode* GE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> NOTEQ();
    antlr4::tree::TerminalNode* NOTEQ(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LE();
    antlr4::tree::TerminalNode* LE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_checkContext* ds_check();

  class  Rtrn_msgContext : public antlr4::ParserRuleContext {
  public:
    Rtrn_msgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TextContext *> text();
    TextContext* text(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Rtrn_msgContext* rtrn_msg();


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

