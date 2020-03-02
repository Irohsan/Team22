
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
    CHAR = 41, UNSIGNED = 42, PRIVATE = 43, PUBLIC = 44, INLINE = 45, VIRTUAL = 46, 
    CONSTANT = 47, STATIC = 48, EXTERN = 49, RETURN = 50, INCLUDE = 51, 
    DEFINE = 52, WHILE = 53, FOR = 54, ENUM = 55, SPACE = 56, STRUCT = 57, 
    TYPEDEF = 58, IFNDEF = 59, ENDIF = 60, UNDEF = 61, IFDEF = 62, IDENTIFIER = 63, 
    NUM = 64, UNDERSCORE = 65, OPEN_PAR = 66, CLOSE_PAR = 67, COMMA = 68, 
    PERIOD = 69, ARROW = 70, SCOPE = 71, LT = 72, GT = 73, GE = 74, LE = 75, 
    EQUALS = 76, NE = 77, INVERSE = 78, SEMICOLON = 79, OPEN_SQ = 80, CLOSE_SQ = 81, 
    EQUAL = 82, PLUS_EQ = 83, MINUS_EQ = 84, TIMES_EQ = 85, DIV_EQ = 86, 
    PLUS = 87, SUB = 88, DIV = 89, MUL = 90, MOD = 91, OPEN_BRK = 92, CLOSE_BRK = 93, 
    LEFT_SHIFT = 94, HASH = 95, QUOTE = 96, LINE_COMMENT = 97, MULTI_LINE_O = 98, 
    MULTI_LINE_E = 99, ADDRESS = 100, AND = 101, OR = 102, CAR_R = 103, 
    DOTS = 104, PRINT = 105, PRINT_F = 106, WS = 107, NEWLINE = 108, TAB = 109, 
    TRUE = 110, FALSE = 111
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

