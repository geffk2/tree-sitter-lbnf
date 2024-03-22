#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_DOT = 2,
  anon_sym_COLON_COLON_EQ = 3,
  anon_sym_comment = 4,
  anon_sym_internal = 5,
  anon_sym_token = 6,
  anon_sym_position = 7,
  anon_sym_entrypoints = 8,
  anon_sym_separator = 9,
  anon_sym_nonempty = 10,
  anon_sym_terminator = 11,
  anon_sym_delimiters = 12,
  anon_sym_coercions = 13,
  anon_sym_rules = 14,
  anon_sym_PIPE = 15,
  anon_sym_define = 16,
  anon_sym_ = 17,
  anon_sym_EQ = 18,
  anon_sym_layout = 19,
  anon_sym_stop = 20,
  anon_sym_toplevel = 21,
  anon_sym_COLON = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_COMMA = 27,
  anon_sym__ = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_PLUS = 31,
  anon_sym_QMARK = 32,
  anon_sym_eps = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_digit = 36,
  anon_sym_letter = 37,
  anon_sym_upper = 38,
  anon_sym_lower = 39,
  anon_sym_char = 40,
  sym_integer = 41,
  sym_double = 42,
  anon_sym_SQUOTE = 43,
  aux_sym_char_token1 = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_string_token1 = 46,
  sym_escape_sequence = 47,
  sym_ident = 48,
  sym_comment = 49,
  sym_grammar = 50,
  sym_def = 51,
  sym_exp = 52,
  sym_exp1 = 53,
  sym_exp2 = 54,
  sym_list_exp = 55,
  sym_list_exp2 = 56,
  sym_cat = 57,
  sym_label = 58,
  sym_reg2 = 59,
  sym_reg1 = 60,
  sym_reg3 = 61,
  sym_reg = 62,
  sym_char = 63,
  sym_string = 64,
  aux_sym_grammar_repeat1 = 65,
  aux_sym_grammar_repeat2 = 66,
  aux_sym_def_repeat1 = 67,
  aux_sym_def_repeat2 = 68,
  aux_sym_def_repeat3 = 69,
  aux_sym_def_repeat4 = 70,
  aux_sym_def_repeat5 = 71,
  aux_sym_def_repeat6 = 72,
  aux_sym_cat_repeat1 = 73,
  aux_sym_string_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_comment] = "comment",
  [anon_sym_internal] = "internal",
  [anon_sym_token] = "token",
  [anon_sym_position] = "position",
  [anon_sym_entrypoints] = "entrypoints",
  [anon_sym_separator] = "separator",
  [anon_sym_nonempty] = "nonempty",
  [anon_sym_terminator] = "terminator",
  [anon_sym_delimiters] = "delimiters",
  [anon_sym_coercions] = "coercions",
  [anon_sym_rules] = "rules",
  [anon_sym_PIPE] = "|",
  [anon_sym_define] = "define",
  [anon_sym_] = "",
  [anon_sym_EQ] = "=",
  [anon_sym_layout] = "layout",
  [anon_sym_stop] = "stop",
  [anon_sym_toplevel] = "toplevel",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym__] = "_",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "\?",
  [anon_sym_eps] = "eps",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_digit] = "digit",
  [anon_sym_letter] = "letter",
  [anon_sym_upper] = "upper",
  [anon_sym_lower] = "lower",
  [anon_sym_char] = "char",
  [sym_integer] = "integer",
  [sym_double] = "double",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [sym_grammar] = "grammar",
  [sym_def] = "def",
  [sym_exp] = "exp",
  [sym_exp1] = "exp1",
  [sym_exp2] = "exp2",
  [sym_list_exp] = "list_exp",
  [sym_list_exp2] = "list_exp2",
  [sym_cat] = "cat",
  [sym_label] = "label",
  [sym_reg2] = "reg2",
  [sym_reg1] = "reg1",
  [sym_reg3] = "reg3",
  [sym_reg] = "reg",
  [sym_char] = "char",
  [sym_string] = "string",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym_grammar_repeat2] = "grammar_repeat2",
  [aux_sym_def_repeat1] = "def_repeat1",
  [aux_sym_def_repeat2] = "def_repeat2",
  [aux_sym_def_repeat3] = "def_repeat3",
  [aux_sym_def_repeat4] = "def_repeat4",
  [aux_sym_def_repeat5] = "def_repeat5",
  [aux_sym_def_repeat6] = "def_repeat6",
  [aux_sym_cat_repeat1] = "cat_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_token] = anon_sym_token,
  [anon_sym_position] = anon_sym_position,
  [anon_sym_entrypoints] = anon_sym_entrypoints,
  [anon_sym_separator] = anon_sym_separator,
  [anon_sym_nonempty] = anon_sym_nonempty,
  [anon_sym_terminator] = anon_sym_terminator,
  [anon_sym_delimiters] = anon_sym_delimiters,
  [anon_sym_coercions] = anon_sym_coercions,
  [anon_sym_rules] = anon_sym_rules,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_] = anon_sym_,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_toplevel] = anon_sym_toplevel,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym__] = anon_sym__,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_eps] = anon_sym_eps,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_digit] = anon_sym_digit,
  [anon_sym_letter] = anon_sym_letter,
  [anon_sym_upper] = anon_sym_upper,
  [anon_sym_lower] = anon_sym_lower,
  [anon_sym_char] = anon_sym_char,
  [sym_integer] = sym_integer,
  [sym_double] = sym_double,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [sym_grammar] = sym_grammar,
  [sym_def] = sym_def,
  [sym_exp] = sym_exp,
  [sym_exp1] = sym_exp1,
  [sym_exp2] = sym_exp2,
  [sym_list_exp] = sym_list_exp,
  [sym_list_exp2] = sym_list_exp2,
  [sym_cat] = sym_cat,
  [sym_label] = sym_label,
  [sym_reg2] = sym_reg2,
  [sym_reg1] = sym_reg1,
  [sym_reg3] = sym_reg3,
  [sym_reg] = sym_reg,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
  [aux_sym_grammar_repeat2] = aux_sym_grammar_repeat2,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [aux_sym_def_repeat2] = aux_sym_def_repeat2,
  [aux_sym_def_repeat3] = aux_sym_def_repeat3,
  [aux_sym_def_repeat4] = aux_sym_def_repeat4,
  [aux_sym_def_repeat5] = aux_sym_def_repeat5,
  [aux_sym_def_repeat6] = aux_sym_def_repeat6,
  [aux_sym_cat_repeat1] = aux_sym_cat_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_token] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_position] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entrypoints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_separator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonempty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terminator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delimiters] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coercions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_toplevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eps] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_digit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_letter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lower] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_exp1] = {
    .visible = true,
    .named = true,
  },
  [sym_exp2] = {
    .visible = true,
    .named = true,
  },
  [sym_list_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_list_exp2] = {
    .visible = true,
    .named = true,
  },
  [sym_cat] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_reg2] = {
    .visible = true,
    .named = true,
  },
  [sym_reg1] = {
    .visible = true,
    .named = true,
  },
  [sym_reg3] = {
    .visible = true,
    .named = true,
  },
  [sym_reg] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_grammar_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_repeat6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cat_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 4,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 26,
  [32] = 22,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 55,
  [63] = 63,
  [64] = 54,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 102,
  [138] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '?') ADVANCE(189);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '_') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '}') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(141)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '{') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0) ADVANCE(212);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '{') ADVANCE(204);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(202);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '?') ADVANCE(189);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '}') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '_') ADVANCE(185);
      if (lookahead == '{') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '{') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '{') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(268);
      if (lookahead == '{') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '{') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 87:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 125:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 126:
      if (lookahead == 'w') ADVANCE(37);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 130:
      if (lookahead == '}') ADVANCE(301);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '+') ADVANCE(188);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(179);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '=') ADVANCE(173);
      if (lookahead == '?') ADVANCE(189);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '_') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == '{') ADVANCE(191);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '}') ADVANCE(192);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(141)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '(') ADVANCE(182);
      if (lookahead == ')') ADVANCE(183);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '_') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead == '{') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(142)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_position);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_separator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_nonempty);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_nonempty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_terminator);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_terminator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_delimiters);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_delimiters);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_coercions);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_coercions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_rules);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_define);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_layout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_toplevel);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(14);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_eps);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(302);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'U') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (lookahead != 0) ADVANCE(213);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(209);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(272);
      if (lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 142},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 142},
  [6] = {.lex_state = 142},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 142},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 142},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 142},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 142},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 172},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 172},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 172},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 142},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_token] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_entrypoints] = ACTIONS(1),
    [anon_sym_separator] = ACTIONS(1),
    [anon_sym_nonempty] = ACTIONS(1),
    [anon_sym_terminator] = ACTIONS(1),
    [anon_sym_delimiters] = ACTIONS(1),
    [anon_sym_coercions] = ACTIONS(1),
    [anon_sym_rules] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_toplevel] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_eps] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_digit] = ACTIONS(1),
    [anon_sym_letter] = ACTIONS(1),
    [anon_sym_upper] = ACTIONS(1),
    [anon_sym_lower] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_grammar] = STATE(125),
    [sym_def] = STATE(98),
    [sym_label] = STATE(120),
    [aux_sym_grammar_repeat2] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_comment] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(9),
    [anon_sym_token] = ACTIONS(11),
    [anon_sym_position] = ACTIONS(13),
    [anon_sym_entrypoints] = ACTIONS(15),
    [anon_sym_separator] = ACTIONS(17),
    [anon_sym_terminator] = ACTIONS(17),
    [anon_sym_delimiters] = ACTIONS(19),
    [anon_sym_coercions] = ACTIONS(21),
    [anon_sym_rules] = ACTIONS(23),
    [anon_sym_define] = ACTIONS(25),
    [anon_sym_layout] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym__] = ACTIONS(33),
    [sym_ident] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_comment,
    ACTIONS(9), 1,
      anon_sym_internal,
    ACTIONS(11), 1,
      anon_sym_token,
    ACTIONS(13), 1,
      anon_sym_position,
    ACTIONS(15), 1,
      anon_sym_entrypoints,
    ACTIONS(19), 1,
      anon_sym_delimiters,
    ACTIONS(21), 1,
      anon_sym_coercions,
    ACTIONS(23), 1,
      anon_sym_rules,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_layout,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym__,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_grammar_repeat2,
    STATE(98), 1,
      sym_def,
    STATE(120), 1,
      sym_label,
    ACTIONS(17), 2,
      anon_sym_separator,
      anon_sym_terminator,
  [62] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_comment,
    ACTIONS(44), 1,
      anon_sym_internal,
    ACTIONS(47), 1,
      anon_sym_token,
    ACTIONS(50), 1,
      anon_sym_position,
    ACTIONS(53), 1,
      anon_sym_entrypoints,
    ACTIONS(59), 1,
      anon_sym_delimiters,
    ACTIONS(62), 1,
      anon_sym_coercions,
    ACTIONS(65), 1,
      anon_sym_rules,
    ACTIONS(68), 1,
      anon_sym_define,
    ACTIONS(71), 1,
      anon_sym_layout,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_ident,
    STATE(3), 1,
      aux_sym_grammar_repeat2,
    STATE(98), 1,
      sym_def,
    STATE(120), 1,
      sym_label,
    ACTIONS(56), 2,
      anon_sym_separator,
      anon_sym_terminator,
  [124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(86), 18,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
      anon_sym_SQUOTE,
  [152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym_grammar_repeat1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym__,
    ACTIONS(92), 13,
      anon_sym_comment,
      anon_sym_internal,
      anon_sym_token,
      anon_sym_position,
      anon_sym_entrypoints,
      anon_sym_separator,
      anon_sym_terminator,
      anon_sym_delimiters,
      anon_sym_coercions,
      anon_sym_rules,
      anon_sym_define,
      anon_sym_layout,
      sym_ident,
  [183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym_grammar_repeat1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym__,
    ACTIONS(99), 13,
      anon_sym_comment,
      anon_sym_internal,
      anon_sym_token,
      anon_sym_position,
      anon_sym_entrypoints,
      anon_sym_separator,
      anon_sym_terminator,
      anon_sym_delimiters,
      anon_sym_coercions,
      anon_sym_rules,
      anon_sym_define,
      anon_sym_layout,
      sym_ident,
  [214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(105), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(101), 12,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
      anon_sym_SQUOTE,
  [241] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(107), 15,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
      anon_sym_SQUOTE,
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(111), 15,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
      anon_sym_SQUOTE,
  [291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(115), 15,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
      anon_sym_SQUOTE,
  [316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(105), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(119), 12,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
      anon_sym_SQUOTE,
  [343] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_exp2,
    STATE(50), 1,
      sym_list_exp2,
    ACTIONS(131), 2,
      sym_double,
      sym_ident,
    STATE(25), 2,
      sym_char,
      sym_string,
    ACTIONS(123), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [383] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(133), 1,
      anon_sym_SQUOTE,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_exp2,
    STATE(53), 1,
      sym_list_exp2,
    ACTIONS(131), 2,
      sym_double,
      sym_ident,
    STATE(25), 2,
      sym_char,
      sym_string,
    ACTIONS(137), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [423] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_reg3,
    STATE(10), 1,
      sym_char,
    ACTIONS(139), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(147), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [461] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_char,
    STATE(11), 1,
      sym_reg3,
    STATE(14), 1,
      sym_reg2,
    STATE(82), 1,
      sym_reg1,
    STATE(116), 1,
      sym_reg,
    ACTIONS(147), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [500] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_char,
    STATE(11), 1,
      sym_reg3,
    STATE(14), 1,
      sym_reg2,
    STATE(82), 1,
      sym_reg1,
    STATE(138), 1,
      sym_reg,
    ACTIONS(147), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [539] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_char,
    STATE(11), 1,
      sym_reg3,
    STATE(14), 1,
      sym_reg2,
    STATE(82), 1,
      sym_reg1,
    STATE(113), 1,
      sym_reg,
    ACTIONS(147), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [578] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_reg3,
    STATE(10), 1,
      sym_char,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(147), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [613] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    STATE(10), 1,
      sym_char,
    STATE(11), 1,
      sym_reg3,
    STATE(18), 1,
      sym_reg2,
    ACTIONS(147), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [646] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_ident,
    STATE(46), 1,
      sym_exp2,
    STATE(48), 1,
      sym_exp1,
    STATE(100), 1,
      sym_exp,
    STATE(131), 1,
      sym_list_exp,
    STATE(25), 2,
      sym_char,
      sym_string,
  [687] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_ident,
    STATE(46), 1,
      sym_exp2,
    STATE(48), 1,
      sym_exp1,
    STATE(100), 1,
      sym_exp,
    STATE(111), 1,
      sym_list_exp,
    STATE(25), 2,
      sym_char,
      sym_string,
  [728] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_integer,
    ACTIONS(159), 11,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_ident,
  [748] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_ident,
    STATE(46), 1,
      sym_exp2,
    STATE(48), 1,
      sym_exp1,
    STATE(59), 1,
      sym_exp,
    STATE(25), 2,
      sym_char,
      sym_string,
  [786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_integer,
    ACTIONS(163), 11,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_ident,
  [806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(123), 11,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_ident,
  [826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_integer,
    ACTIONS(169), 11,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_ident,
  [846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_integer,
    ACTIONS(86), 11,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_double,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      sym_ident,
  [866] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_ident,
    STATE(46), 1,
      sym_exp2,
    STATE(48), 1,
      sym_exp1,
    STATE(109), 1,
      sym_exp,
    STATE(25), 2,
      sym_char,
      sym_string,
  [904] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_ident,
    STATE(46), 1,
      sym_exp2,
    STATE(48), 1,
      sym_exp1,
    STATE(113), 1,
      sym_exp,
    STATE(25), 2,
      sym_char,
      sym_string,
  [942] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_double,
    ACTIONS(151), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_ident,
    STATE(46), 1,
      sym_exp2,
    STATE(48), 1,
      sym_exp1,
    STATE(112), 1,
      sym_exp,
    STATE(25), 2,
      sym_char,
      sym_string,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 11,
      anon_sym_SEMI,
      anon_sym_separator,
      anon_sym_nonempty,
      anon_sym_terminator,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 11,
      anon_sym_SEMI,
      anon_sym_separator,
      anon_sym_nonempty,
      anon_sym_terminator,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_cat_repeat1,
    ACTIONS(173), 6,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [1032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_cat_repeat1,
    ACTIONS(177), 6,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_cat_repeat1,
    ACTIONS(179), 6,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [1068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_cat_repeat1,
    ACTIONS(181), 6,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [1086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_cat_repeat1,
    ACTIONS(183), 6,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [1104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    STATE(39), 3,
      sym_cat,
      sym_string,
      aux_sym_def_repeat1,
  [1125] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      sym_ident,
    STATE(39), 3,
      sym_cat,
      sym_string,
      aux_sym_def_repeat1,
  [1146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 7,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_ident,
  [1159] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(43), 3,
      sym_cat,
      sym_string,
      aux_sym_def_repeat1,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_ident,
  [1193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(39), 3,
      sym_cat,
      sym_string,
      aux_sym_def_repeat1,
  [1214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(38), 3,
      sym_cat,
      sym_string,
      aux_sym_def_repeat1,
  [1235] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(213), 1,
      anon_sym_stop,
    ACTIONS(215), 1,
      anon_sym_toplevel,
    STATE(60), 2,
      sym_string,
      aux_sym_def_repeat6,
  [1255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_label,
    ACTIONS(33), 2,
      anon_sym__,
      sym_ident,
  [1283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COLON,
    ACTIONS(219), 4,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(52), 2,
      sym_cat,
      aux_sym_def_repeat2,
  [1313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    STATE(49), 2,
      sym_cat,
      aux_sym_def_repeat2,
  [1341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym_ident,
    STATE(52), 2,
      sym_cat,
      aux_sym_def_repeat2,
  [1358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 5,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1369] = 4,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(241), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_string_repeat1,
    ACTIONS(239), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1383] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(245), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1397] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_,
    STATE(68), 1,
      aux_sym_def_repeat4,
    ACTIONS(249), 2,
      anon_sym_EQ,
      sym_ident,
  [1411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(65), 2,
      sym_string,
      aux_sym_def_repeat6,
  [1425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      anon_sym_nonempty,
    ACTIONS(251), 2,
      anon_sym_separator,
      anon_sym_terminator,
  [1439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(66), 2,
      sym_string,
      aux_sym_def_repeat6,
  [1463] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_nonempty,
    ACTIONS(259), 1,
      sym_ident,
    STATE(86), 1,
      sym_cat,
  [1479] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(245), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1493] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_,
    STATE(56), 1,
      aux_sym_def_repeat4,
    ACTIONS(263), 2,
      anon_sym_EQ,
      sym_ident,
  [1507] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_string_repeat1,
    ACTIONS(267), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    STATE(66), 2,
      sym_string,
      aux_sym_def_repeat6,
  [1535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(273), 1,
      anon_sym_DQUOTE,
    STATE(66), 2,
      sym_string,
      aux_sym_def_repeat6,
  [1549] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym_string_repeat1,
    ACTIONS(278), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1563] = 4,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_,
    STATE(68), 1,
      aux_sym_def_repeat4,
    ACTIONS(284), 2,
      anon_sym_EQ,
      sym_ident,
  [1577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
    ACTIONS(288), 1,
      sym_ident,
    STATE(79), 1,
      aux_sym_def_repeat5,
  [1590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_EQ,
    ACTIONS(292), 1,
      sym_ident,
    STATE(70), 1,
      aux_sym_def_repeat5,
  [1603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    STATE(99), 1,
      sym_cat,
  [1616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_def_repeat3,
  [1629] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_string,
  [1642] = 3,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_,
    ACTIONS(284), 2,
      anon_sym_EQ,
      sym_ident,
  [1653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    STATE(103), 1,
      sym_cat,
  [1666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    STATE(89), 1,
      sym_cat,
  [1679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_def_repeat3,
  [1692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      sym_ident,
    STATE(95), 1,
      sym_string,
  [1705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_ident,
    ACTIONS(306), 1,
      anon_sym_EQ,
    STATE(70), 1,
      aux_sym_def_repeat5,
  [1718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      sym_ident,
    STATE(81), 1,
      sym_string,
  [1731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    ACTIONS(302), 1,
      anon_sym_PIPE,
    STATE(77), 1,
      aux_sym_def_repeat3,
  [1744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_PIPE,
    ACTIONS(310), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    STATE(108), 1,
      sym_cat,
  [1768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    STATE(124), 1,
      sym_cat,
  [1781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(192), 1,
      sym_ident,
    STATE(107), 1,
      sym_cat,
  [1794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_string,
  [1804] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      sym_string,
  [1814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_string,
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_string,
  [1834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(316), 1,
      sym_ident,
  [1844] = 3,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(318), 1,
      aux_sym_char_token1,
    ACTIONS(320), 1,
      sym_escape_sequence,
  [1854] = 3,
    ACTIONS(241), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_char_token1,
    ACTIONS(324), 1,
      sym_escape_sequence,
  [1864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_string,
  [1874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(119), 1,
      sym_string,
  [1884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [1892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      anon_sym_nonempty,
  [1902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [1912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_grammar_repeat1,
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      sym_string,
  [1932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(336), 1,
      anon_sym_COMMA,
  [1942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_string,
  [1952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SQUOTE,
  [1959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
  [1966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_SEMI,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COLON_COLON_EQ,
  [1980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_integer,
  [1987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COLON_COLON_EQ,
  [1994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
  [2001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_SEMI,
  [2008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
  [2015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
  [2022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
  [2029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_SEMI,
  [2036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [2043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_ident,
  [2050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [2057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DOT,
  [2064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_DOT,
  [2071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
  [2078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
  [2085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DOT,
  [2092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_ident,
  [2106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COLON_COLON_EQ,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [2120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
  [2127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [2134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_RBRACK,
  [2141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_ident,
  [2148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
  [2162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_ident,
  [2169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      sym_ident,
  [2176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_DOT,
  [2183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_token,
  [2190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      sym_ident,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_SQUOTE,
  [2204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 152,
  [SMALL_STATE(6)] = 183,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 241,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 291,
  [SMALL_STATE(11)] = 316,
  [SMALL_STATE(12)] = 343,
  [SMALL_STATE(13)] = 383,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 461,
  [SMALL_STATE(16)] = 500,
  [SMALL_STATE(17)] = 539,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 613,
  [SMALL_STATE(20)] = 646,
  [SMALL_STATE(21)] = 687,
  [SMALL_STATE(22)] = 728,
  [SMALL_STATE(23)] = 748,
  [SMALL_STATE(24)] = 786,
  [SMALL_STATE(25)] = 806,
  [SMALL_STATE(26)] = 826,
  [SMALL_STATE(27)] = 846,
  [SMALL_STATE(28)] = 866,
  [SMALL_STATE(29)] = 904,
  [SMALL_STATE(30)] = 942,
  [SMALL_STATE(31)] = 980,
  [SMALL_STATE(32)] = 997,
  [SMALL_STATE(33)] = 1014,
  [SMALL_STATE(34)] = 1032,
  [SMALL_STATE(35)] = 1050,
  [SMALL_STATE(36)] = 1068,
  [SMALL_STATE(37)] = 1086,
  [SMALL_STATE(38)] = 1104,
  [SMALL_STATE(39)] = 1125,
  [SMALL_STATE(40)] = 1146,
  [SMALL_STATE(41)] = 1159,
  [SMALL_STATE(42)] = 1180,
  [SMALL_STATE(43)] = 1193,
  [SMALL_STATE(44)] = 1214,
  [SMALL_STATE(45)] = 1235,
  [SMALL_STATE(46)] = 1255,
  [SMALL_STATE(47)] = 1266,
  [SMALL_STATE(48)] = 1283,
  [SMALL_STATE(49)] = 1296,
  [SMALL_STATE(50)] = 1313,
  [SMALL_STATE(51)] = 1324,
  [SMALL_STATE(52)] = 1341,
  [SMALL_STATE(53)] = 1358,
  [SMALL_STATE(54)] = 1369,
  [SMALL_STATE(55)] = 1383,
  [SMALL_STATE(56)] = 1397,
  [SMALL_STATE(57)] = 1411,
  [SMALL_STATE(58)] = 1425,
  [SMALL_STATE(59)] = 1439,
  [SMALL_STATE(60)] = 1449,
  [SMALL_STATE(61)] = 1463,
  [SMALL_STATE(62)] = 1479,
  [SMALL_STATE(63)] = 1493,
  [SMALL_STATE(64)] = 1507,
  [SMALL_STATE(65)] = 1521,
  [SMALL_STATE(66)] = 1535,
  [SMALL_STATE(67)] = 1549,
  [SMALL_STATE(68)] = 1563,
  [SMALL_STATE(69)] = 1577,
  [SMALL_STATE(70)] = 1590,
  [SMALL_STATE(71)] = 1603,
  [SMALL_STATE(72)] = 1616,
  [SMALL_STATE(73)] = 1629,
  [SMALL_STATE(74)] = 1642,
  [SMALL_STATE(75)] = 1653,
  [SMALL_STATE(76)] = 1666,
  [SMALL_STATE(77)] = 1679,
  [SMALL_STATE(78)] = 1692,
  [SMALL_STATE(79)] = 1705,
  [SMALL_STATE(80)] = 1718,
  [SMALL_STATE(81)] = 1731,
  [SMALL_STATE(82)] = 1744,
  [SMALL_STATE(83)] = 1755,
  [SMALL_STATE(84)] = 1768,
  [SMALL_STATE(85)] = 1781,
  [SMALL_STATE(86)] = 1794,
  [SMALL_STATE(87)] = 1804,
  [SMALL_STATE(88)] = 1814,
  [SMALL_STATE(89)] = 1824,
  [SMALL_STATE(90)] = 1834,
  [SMALL_STATE(91)] = 1844,
  [SMALL_STATE(92)] = 1854,
  [SMALL_STATE(93)] = 1864,
  [SMALL_STATE(94)] = 1874,
  [SMALL_STATE(95)] = 1884,
  [SMALL_STATE(96)] = 1892,
  [SMALL_STATE(97)] = 1902,
  [SMALL_STATE(98)] = 1912,
  [SMALL_STATE(99)] = 1922,
  [SMALL_STATE(100)] = 1932,
  [SMALL_STATE(101)] = 1942,
  [SMALL_STATE(102)] = 1952,
  [SMALL_STATE(103)] = 1959,
  [SMALL_STATE(104)] = 1966,
  [SMALL_STATE(105)] = 1973,
  [SMALL_STATE(106)] = 1980,
  [SMALL_STATE(107)] = 1987,
  [SMALL_STATE(108)] = 1994,
  [SMALL_STATE(109)] = 2001,
  [SMALL_STATE(110)] = 2008,
  [SMALL_STATE(111)] = 2015,
  [SMALL_STATE(112)] = 2022,
  [SMALL_STATE(113)] = 2029,
  [SMALL_STATE(114)] = 2036,
  [SMALL_STATE(115)] = 2043,
  [SMALL_STATE(116)] = 2050,
  [SMALL_STATE(117)] = 2057,
  [SMALL_STATE(118)] = 2064,
  [SMALL_STATE(119)] = 2071,
  [SMALL_STATE(120)] = 2078,
  [SMALL_STATE(121)] = 2085,
  [SMALL_STATE(122)] = 2092,
  [SMALL_STATE(123)] = 2099,
  [SMALL_STATE(124)] = 2106,
  [SMALL_STATE(125)] = 2113,
  [SMALL_STATE(126)] = 2120,
  [SMALL_STATE(127)] = 2127,
  [SMALL_STATE(128)] = 2134,
  [SMALL_STATE(129)] = 2141,
  [SMALL_STATE(130)] = 2148,
  [SMALL_STATE(131)] = 2155,
  [SMALL_STATE(132)] = 2162,
  [SMALL_STATE(133)] = 2169,
  [SMALL_STATE(134)] = 2176,
  [SMALL_STATE(135)] = 2183,
  [SMALL_STATE(136)] = 2190,
  [SMALL_STATE(137)] = 2197,
  [SMALL_STATE(138)] = 2204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat2, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(101),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(47),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(136),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(135),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(51),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(61),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(71),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(133),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(132),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(129),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(45),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(128),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(127),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(126),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2), SHIFT_REPEAT(126),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_repeat2, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg2, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg2, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg3, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg3, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg3, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg3, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg3, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg3, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg2, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg2, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp2, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_exp2, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg1, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg1, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp2, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp2, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp2, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cat_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cat_repeat1, 2), SHIFT_REPEAT(90),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(75),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(64),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(34),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cat_repeat1, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp1, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat2, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat2, 2), SHIFT_REPEAT(75),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat2, 2), SHIFT_REPEAT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_exp2, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_repeat5, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_repeat5, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat6, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat6, 2), SHIFT_REPEAT(54),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(67),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat4, 2), SHIFT_REPEAT(123),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_repeat4, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat5, 2),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat5, 2), SHIFT_REPEAT(63),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat3, 2),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat3, 2), SHIFT_REPEAT(78),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat4, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_exp, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 5),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [372] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_exp, 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lbnf(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
