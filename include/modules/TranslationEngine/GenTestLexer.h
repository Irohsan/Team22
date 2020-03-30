
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, ASSUME_C = 44, 
    ASSUME = 45, ASSRT = 46, ASSRT_C = 47, DEEPSTATE = 48, CHK = 49, CHK_C = 50, 
    GREATER = 51, LESS = 52, GREATER_EQ = 53, LESS_EQ = 54, EQ = 55, NOT_E = 56, 
    TEST = 57, DEEPSTATE_INLINE = 58, DEEPSTATE_NOINLINE = 59, DEEPSTATE_NORETURN = 60, 
    SYMBOLIC = 61, SYMBOLIC_C = 62, FORALL = 63, INT = 64, UINT8 = 65, UINT16 = 66, 
    UINT32 = 67, UINT64 = 68, SHORT = 69, LONG = 70, DOUBLE = 71, FLOAT = 72, 
    CHAR = 73, UNSIGNED = 74, BOOL = 75, IDENTIFIER = 76, NUM = 77, WS = 78, 
    NEWLINE = 79, TAB = 80, SEMICOLON = 81, TRUE = 82, FALSE = 83
  };

  GenTestLexer(antlr4::CharStream *input);
  ~GenTestLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

