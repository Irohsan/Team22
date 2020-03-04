
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

