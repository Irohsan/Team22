
// Generated from GenTest.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  GenTestLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, ASSUME_C = 12, ASSUME = 13, 
    ASSRT = 14, ASSRT_C = 15, DEEPSTATE = 16, CHK = 17, CHK_C = 18, GREATER = 19, 
    LESS = 20, GREATER_EQ = 21, LESS_EQ = 22, EQ = 23, NOT_E = 24, TEST = 25, 
    DEEPSTATE_INLINE = 26, DEEPSTATE_NOINLINE = 27, DEEPSTATE_NORETURN = 28, 
    SYMBOLIC = 29, SYMBOLIC_C = 30, INT = 31, UINT8 = 32, UINT16 = 33, UINT32 = 34, 
    UINT64 = 35, SHORT = 36, LONG = 37, DOUBLE = 38, FLOAT = 39, CHAR = 40, 
    UNSIGNED = 41, PRIVATE = 42, PUBLIC = 43, INLINE = 44, VIRTUAL = 45, 
    CONSTANT = 46, STATIC = 47, EXTERN = 48, RETURN = 49, INCLUDE = 50, 
    DEFINE = 51, WHILE = 52, FOR = 53, ENUM = 54, SPACE = 55, STRUCT = 56, 
    TYPEDEF = 57, IFNDEF = 58, ENDIF = 59, UNDEF = 60, IFDEF = 61, IDENTIFIER = 62, 
    NUM = 63, UNDERSCORE = 64, OPEN_PAR = 65, CLOSE_PAR = 66, COMMA = 67, 
    PERIOD = 68, ARROW = 69, SCOPE = 70, LT = 71, GT = 72, GE = 73, LE = 74, 
    EQUALS = 75, NE = 76, INVERSE = 77, SEMICOLON = 78, OPEN_SQ = 79, CLOSE_SQ = 80, 
    EQUAL = 81, PLUS_EQ = 82, MINUS_EQ = 83, TIMES_EQ = 84, DIV_EQ = 85, 
    PLUS = 86, SUB = 87, DIV = 88, MUL = 89, MOD = 90, OPEN_BRK = 91, CLOSE_BRK = 92, 
    LEFT_SHIFT = 93, HASH = 94, QUOTE = 95, LINE_COMMENT = 96, MULTI_LINE_O = 97, 
    MULTI_LINE_E = 98, ADDRESS = 99, AND = 100, OR = 101, CAR_R = 102, DOTS = 103, 
    PRINT = 104, PRINT_F = 105, WS = 106, NEWLINE = 107, TAB = 108, TRUE = 109, 
    FALSE = 110
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

