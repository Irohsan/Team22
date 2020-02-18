
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestLexer : public antlr4::Lexer {
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

