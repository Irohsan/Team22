
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestLexer : public antlr4::Lexer {
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

