//
// Created by craps on 11/5/2019.
//

#ifndef GENTEST_UTIL_H
#define GENTEST_UTIL_H

/******************************
* Include Libraries
*******************************/
#include <string>

/******************************
* Constant Definitions
*******************************/

const std::string S_ASSERT_GT = "ASSERT_GT";
const std::string S_ASSERT_LT = "ASSERT_LT";
const std::string S_ASSERT_GE = "ASSERT_GE";
const std::string S_ASSERT_LE = "ASSERT_LE";
const std::string S_ASSERT_EQ = "ASSERT_EQ";
const std::string S_ASSERT_NE = "ASSERT_NE";
const std::string S_ASSUME_GT = "ASSUME_GT";
const std::string S_ASSUME_LT = "ASSUME_LT";
const std::string S_ASSUME_GE = "ASSUME_GE";
const std::string S_ASSUME_LE = "ASSUME_LE";
const std::string S_ASSUME_EQ = "ASSUME_EQ";
const std::string S_ASSUME_NE = "ASSUME_NE";
const std::string S_CHECK_GT = "CHECK_GT";
const std::string S_CHECK_LT = "CHECK_LT";
const std::string S_CHECK_GE = "CHECK_GE";
const std::string S_CHECK_LE = "CHECK_LE";
const std::string S_CHECK_EQ = "CHECK_EQ";
const std::string S_CHECK_NE = "CHECK_NE";
const std::string S_DEEPSTATE_ASSERT = "DeepState_Assert";
const std::string S_DEEPSTATE_ASSUME = "DeepState_Assume";
const std::string S_DEEPSTATE_CHECK = "DeepState_Check";

const std::string S_DEEPSTATE_NOINLINE = "DEEPSTATE_NOINLINE";
const std::string S_TEST = "TEST";

const std::string SYMB_UNDER_INT = "symbolic_int";
const std::string SYMB_UNDER_UINT8 = "symbolic_uint8_t";
const std::string SYMB_UNDER_UINT16 = "symbolic_uint16_t";
const std::string SYMB_UNDER_UINT32 = "symbolic_uint32_t";
const std::string SYMB_UNDER_UINT64 = "symbolic_uint64_t";
const std::string SYMB_UNDER_LONG = "symbolic_long";
const std::string SYMB_UNDER_SHORT = "symbolic_short";
const std::string SYMB_UNDER_CHAR = "symbolic_char";
const std::string SYMB_UNDER_FLOAT = "symbolic_float";
const std::string SYMB_UNDER_DOUBLE = "symbolic_double";

const std::string SYMB_BRACKET_INT = "Symbolic<int>";
const std::string SYMB_BRACKET_UINT8 = "Symbolic<uint8_t>";
const std::string SYMB_BRACKET_UINT16 = "Symbolic<uint16_t>";
const std::string SYMB_BRACKET_UINT32 = "Symbolic<uint32_t>";
const std::string SYMB_BRACKET_UINT64 = "Symbolic<uint64_t>";
const std::string SYMB_BRACKET_LONG = "Symbolic<long>";
const std::string SYMB_BRACKET_SHORT = "Symbolic<short>";
const std::string SYMB_BRACKET_CHAR = "Symbolic<char>";
const std::string SYMB_BRACKET_FLOAT = "Symbolic<float>";
const std::string SYMB_BRACKET_DOUBLE = "Symbolic<double>";

const std::string SYMBOLIC_BRACKETS = "Symbolic";

// General Constants
const std::string EMPTY_STRING = "";
const std::string SPACE = " ";
const std::string SEMI_COLON = ";";
const std::string OPEN_PARENTHESIS = "(";
const std::string CLOSE_PARENTHESIS = ")";
const std::string OPEN_BRACKET = "{";
const std::string CLOSE_BRACKET = "}";
const std::string STRING_EQUALS;
const std::string LT_SYMB = "<";
const std::string GT_SYMB = ">";
const std::string UNDERSCORE = "_";
const std::string COMMA = ",";


/******************************
* Type Definitions
*******************************/

//TranslationEngine structures
typedef enum NonTerminals
{
    FUNC,                     // Basic non-terminals.
    EXP,
    ADD,
    SUB,
    MUL,
    DIV,
    EQUALS_TO,
    EQUAL,
    GT,
    LT,
    ST_PARETHESIS,
    END_PARETHESIS,
    CONDITIONAL,
    CONDITIONAL_BRANCH,
    INT,                        // Type Non-Terminals
    LONG,
    SHORT,
    DOUBLE,
    FLOAT,
    UINT8,
    UINT16,
    UINT32,
    UINT64,
    USIGNED_INT,
    UNSIGNED_LONG,
    UNSIGNED_SHORT,
    X_INT,                      // Symbloic Type Non-Terminals.
    X_LONG,
    X_SHORT,
    X_DOUBLE,
    X_FLOAT,
    X_UINT8,
    X_UINT16,
    X_UINT32,
    X_UINT64,
    X_USIGNED_INT,
    X_UNSIGNED_LONG,
    X_UNSIGNED_SHORT,
    LEFT_SHIFT,                 // Shift Operators >>/<<
    RIGHT_SHIFT,
    ASSERT_GT,                  // Assertion operators.
    ASSERT_GE,
    ASSERT_LT,
    ASSERT_LE,
    ASSERT_NE,
    ASSERT_EQ,
    CHECK_EQ,                   // Check operators
    CHECK_NE,
    CHECK_LT,
    CHECK_LE,
    CHECK_GT,
    CHECK_GE,
    ASSUME_EQ,                  // Assume operators.
    ASSUME_NE,
    ASSUME_LT,
    ASSUME_LE,
    ASSUME_GT,
    ASSUME_GE,
    DEEPSTATE_ASSERT,		// DeepState assertion operators.
    DEEPSTATE_ASSUME,
    DEEPSTATE_CHECK,
    DEEPSTATE_NOINLINE,
    TEST,                  //function for a test
    ONE_OF,
    NO_TRANSLATE

} NTerminal;


class Util {

};


#endif //GENTEST_UTIL_H
