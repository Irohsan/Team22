
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, LOWERCASE = 26, 
    UPPERCASE = 27, NUM = 28, INT = 29, UINT8 = 30, UINT16 = 31, UINT32 = 32, 
    UINT64 = 33, SHORT = 34, LONG = 35, DOUBLE = 36, FLOAT = 37, UNSIGNED = 38, 
    CHAR = 39, VOID = 40, NO_INLINE = 41, TEST = 42, ASSERT = 43, ASSERT_EQ = 44, 
    ASSERT_NE = 45, ASSERT_GT = 46, ASSERT_GE = 47, ASSERT_LT = 48, ASSERT_LE = 49, 
    ASSUME_EQ = 50, ASSUME_NE = 51, ASSUME_GT = 52, ASSUME_GE = 53, ASSUME_LT = 54, 
    ASSUME_LE = 55, CHECK_EQ = 56, CHECK_NE = 57, CHECK_GT = 58, CHECK_GE = 59, 
    CHECK_LT = 60, CHECK_LE = 61, PRIVATE = 62, PUBLIC = 63, INLINE = 64, 
    STATIC = 65, VIRTUAL = 66, CONSTANT = 67, ADD = 68, SUBTRACT = 69, MULTIPLY = 70, 
    DIVIDE = 71, MODULUS = 72, EQUALS = 73, NOTEQ = 74, GT = 75, LT = 76, 
    GE = 77, LE = 78, WHITESPACE = 79, OPN_PARENTH = 80, CLS_PARENTH = 81, 
    COMMA = 82, SEMICOLON = 83, NEWLINE = 84, CLOSE_BRACKET = 85
  };

  enum {
    RuleFile = 0, RuleComment = 1, RuleInclude = 2, RuleFunction = 3, RuleHeader = 4, 
    RuleBody = 5, RuleLine = 6, RuleDeclaration = 7, RuleAssignment = 8, 
    RuleOperation = 9, RuleAdd = 10, RuleSub = 11, RuleMul = 12, RuleDiv = 13, 
    RuleMod = 14, RuleEq = 15, RuleNe = 16, RuleGt = 17, RuleGe = 18, RuleLt = 19, 
    RuleLe = 20, RuleConditional = 21, RuleCondition = 22, RuleElif = 23, 
    RuleOtherwise = 24, RuleRtrn = 25, RuleType = 26, RulePointerRef = 27, 
    RuleKeyword = 28, RuleCall = 29, RuleVariable = 30, RuleCharacter = 31, 
    RuleText = 32, RuleEof = 33, RuleSymbolic = 34, RuleDeepstate_noinline = 35, 
    RuleTest = 36, RuleTest_header = 37, RuleDs_assert = 38, RuleDs_assume = 39, 
    RuleDs_check = 40, RuleRtrn_msg = 41
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
  class FunctionContext;
  class HeaderContext;
  class BodyContext;
  class LineContext;
  class DeclarationContext;
  class AssignmentContext;
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
  class Ds_assertContext;
  class Ds_assumeContext;
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
    OperationContext *operation();
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
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
    std::vector<CallContext *> call();
    CallContext* call(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignmentContext* assignment();

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
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
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
    OperationContext *operation();
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
    std::vector<OperationContext *> operation();
    OperationContext* operation(size_t i);
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

  class  Ds_assertContext : public antlr4::ParserRuleContext {
  public:
    Ds_assertContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPN_PARENTH();
    antlr4::tree::TerminalNode *CLS_PARENTH();
    Rtrn_msgContext *rtrn_msg();
    antlr4::tree::TerminalNode *ASSERT();
    antlr4::tree::TerminalNode *ASSERT_EQ();
    antlr4::tree::TerminalNode *ASSERT_NE();
    antlr4::tree::TerminalNode *ASSERT_GT();
    antlr4::tree::TerminalNode *ASSERT_GE();
    antlr4::tree::TerminalNode *ASSERT_LT();
    antlr4::tree::TerminalNode *ASSERT_LE();
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
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_assertContext* ds_assert();

  class  Ds_assumeContext : public antlr4::ParserRuleContext {
  public:
    Ds_assumeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    antlr4::tree::TerminalNode *CLS_PARENTH();
    Rtrn_msgContext *rtrn_msg();
    antlr4::tree::TerminalNode *ASSUME_EQ();
    antlr4::tree::TerminalNode *ASSUME_NE();
    antlr4::tree::TerminalNode *ASSUME_GT();
    antlr4::tree::TerminalNode *ASSUME_GE();
    antlr4::tree::TerminalNode *ASSUME_LT();
    antlr4::tree::TerminalNode *ASSUME_LE();
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
    std::vector<antlr4::tree::TerminalNode *> WHITESPACE();
    antlr4::tree::TerminalNode* WHITESPACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ds_assumeContext* ds_assume();

  class  Ds_checkContext : public antlr4::ParserRuleContext {
  public:
    Ds_checkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> OPN_PARENTH();
    antlr4::tree::TerminalNode* OPN_PARENTH(size_t i);
    antlr4::tree::TerminalNode *CLS_PARENTH();
    Rtrn_msgContext *rtrn_msg();
    antlr4::tree::TerminalNode *CHECK_EQ();
    antlr4::tree::TerminalNode *CHECK_NE();
    antlr4::tree::TerminalNode *CHECK_GT();
    antlr4::tree::TerminalNode *CHECK_GE();
    antlr4::tree::TerminalNode *CHECK_LT();
    antlr4::tree::TerminalNode *CHECK_LE();
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

