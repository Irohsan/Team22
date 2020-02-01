
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestLexer : public antlr4::Lexer {
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

