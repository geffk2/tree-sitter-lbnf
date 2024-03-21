#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 143
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
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
  anon_sym_COMMA = 9,
  anon_sym_separator = 10,
  anon_sym_nonempty = 11,
  anon_sym_terminator = 12,
  anon_sym_coercions = 13,
  anon_sym_rules = 14,
  anon_sym_PIPE = 15,
  anon_sym_layout = 16,
  anon_sym_stop = 17,
  anon_sym_toplevel = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym__ = 21,
  anon_sym_LPAREN = 22,
  anon_sym_COLON = 23,
  anon_sym_RPAREN = 24,
  anon_sym_DASH = 25,
  anon_sym_STAR = 26,
  anon_sym_PLUS = 27,
  anon_sym_QMARK = 28,
  anon_sym_eps = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_digit = 32,
  anon_sym_letter = 33,
  anon_sym_upper = 34,
  anon_sym_lower = 35,
  anon_sym_char = 36,
  sym_integer = 37,
  anon_sym_SQUOTE = 38,
  aux_sym_char_token1 = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_token1 = 41,
  sym_escape_sequence = 42,
  sym_ident = 43,
  sym_comment = 44,
  sym_grammar = 45,
  sym_def = 46,
  sym_item = 47,
  sym_cat = 48,
  sym_label = 49,
  sym_label_id = 50,
  sym_prof_item = 51,
  sym_int_list = 52,
  sym_reg2 = 53,
  sym_reg1 = 54,
  sym_reg3 = 55,
  sym_reg = 56,
  sym_char = 57,
  sym_string = 58,
  aux_sym_grammar_repeat1 = 59,
  aux_sym_def_repeat1 = 60,
  aux_sym_def_repeat2 = 61,
  aux_sym_def_repeat3 = 62,
  aux_sym_def_repeat4 = 63,
  aux_sym_label_repeat1 = 64,
  aux_sym_prof_item_repeat1 = 65,
  aux_sym_prof_item_repeat2 = 66,
  aux_sym_string_repeat1 = 67,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_separator] = "separator",
  [anon_sym_nonempty] = "nonempty",
  [anon_sym_terminator] = "terminator",
  [anon_sym_coercions] = "coercions",
  [anon_sym_rules] = "rules",
  [anon_sym_PIPE] = "|",
  [anon_sym_layout] = "layout",
  [anon_sym_stop] = "stop",
  [anon_sym_toplevel] = "toplevel",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym__] = "_",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [sym_grammar] = "grammar",
  [sym_def] = "def",
  [sym_item] = "item",
  [sym_cat] = "cat",
  [sym_label] = "label",
  [sym_label_id] = "label_id",
  [sym_prof_item] = "prof_item",
  [sym_int_list] = "int_list",
  [sym_reg2] = "reg2",
  [sym_reg1] = "reg1",
  [sym_reg3] = "reg3",
  [sym_reg] = "reg",
  [sym_char] = "char",
  [sym_string] = "string",
  [aux_sym_grammar_repeat1] = "grammar_repeat1",
  [aux_sym_def_repeat1] = "def_repeat1",
  [aux_sym_def_repeat2] = "def_repeat2",
  [aux_sym_def_repeat3] = "def_repeat3",
  [aux_sym_def_repeat4] = "def_repeat4",
  [aux_sym_label_repeat1] = "label_repeat1",
  [aux_sym_prof_item_repeat1] = "prof_item_repeat1",
  [aux_sym_prof_item_repeat2] = "prof_item_repeat2",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_separator] = anon_sym_separator,
  [anon_sym_nonempty] = anon_sym_nonempty,
  [anon_sym_terminator] = anon_sym_terminator,
  [anon_sym_coercions] = anon_sym_coercions,
  [anon_sym_rules] = anon_sym_rules,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_stop] = anon_sym_stop,
  [anon_sym_toplevel] = anon_sym_toplevel,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym__] = anon_sym__,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [sym_grammar] = sym_grammar,
  [sym_def] = sym_def,
  [sym_item] = sym_item,
  [sym_cat] = sym_cat,
  [sym_label] = sym_label,
  [sym_label_id] = sym_label_id,
  [sym_prof_item] = sym_prof_item,
  [sym_int_list] = sym_int_list,
  [sym_reg2] = sym_reg2,
  [sym_reg1] = sym_reg1,
  [sym_reg3] = sym_reg3,
  [sym_reg] = sym_reg,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [aux_sym_grammar_repeat1] = aux_sym_grammar_repeat1,
  [aux_sym_def_repeat1] = aux_sym_def_repeat1,
  [aux_sym_def_repeat2] = aux_sym_def_repeat2,
  [aux_sym_def_repeat3] = aux_sym_def_repeat3,
  [aux_sym_def_repeat4] = aux_sym_def_repeat4,
  [aux_sym_label_repeat1] = aux_sym_label_repeat1,
  [aux_sym_prof_item_repeat1] = aux_sym_prof_item_repeat1,
  [aux_sym_prof_item_repeat2] = aux_sym_prof_item_repeat2,
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
  [anon_sym_COMMA] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [sym_item] = {
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
  [sym_label_id] = {
    .visible = true,
    .named = true,
  },
  [sym_prof_item] = {
    .visible = true,
    .named = true,
  },
  [sym_int_list] = {
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
  [aux_sym_label_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prof_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prof_item_repeat2] = {
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
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
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
  [92] = 92,
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
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '?') ADVANCE(161);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == ']') ADVANCE(152);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '{') ADVANCE(180);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(175);
      if (lookahead == '{') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(172);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == ']') ADVANCE(152);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '{') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == '{') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '{') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 12:
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 106:
      if (lookahead == 'w') ADVANCE(29);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 109:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == '}') ADVANCE(259);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(171);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(157);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '+') ADVANCE(160);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '?') ADVANCE(161);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == ']') ADVANCE(152);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(22);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '{') ADVANCE(163);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(164);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'l') ADVANCE(186);
      if (lookahead == 'p') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(253);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '{') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(120)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_position);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_separator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_nonempty);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_nonempty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_terminator);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_terminator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_coercions);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_coercions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_rules);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_layout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_toplevel);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(11);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_eps);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'U') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 120},
  [3] = {.lex_state = 120},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 120},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 120},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_separator] = ACTIONS(1),
    [anon_sym_nonempty] = ACTIONS(1),
    [anon_sym_terminator] = ACTIONS(1),
    [anon_sym_coercions] = ACTIONS(1),
    [anon_sym_rules] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_toplevel] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_grammar] = STATE(128),
    [sym_def] = STATE(130),
    [sym_label] = STATE(132),
    [sym_label_id] = STATE(27),
    [aux_sym_grammar_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_comment] = ACTIONS(7),
    [anon_sym_internal] = ACTIONS(9),
    [anon_sym_token] = ACTIONS(11),
    [anon_sym_position] = ACTIONS(13),
    [anon_sym_entrypoints] = ACTIONS(15),
    [anon_sym_separator] = ACTIONS(17),
    [anon_sym_terminator] = ACTIONS(17),
    [anon_sym_coercions] = ACTIONS(19),
    [anon_sym_rules] = ACTIONS(21),
    [anon_sym_layout] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym__] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [sym_ident] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_comment,
    ACTIONS(38), 1,
      anon_sym_internal,
    ACTIONS(41), 1,
      anon_sym_token,
    ACTIONS(44), 1,
      anon_sym_position,
    ACTIONS(47), 1,
      anon_sym_entrypoints,
    ACTIONS(53), 1,
      anon_sym_coercions,
    ACTIONS(56), 1,
      anon_sym_rules,
    ACTIONS(59), 1,
      anon_sym_layout,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym__,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      sym_ident,
    STATE(2), 1,
      aux_sym_grammar_repeat1,
    STATE(27), 1,
      sym_label_id,
    STATE(130), 1,
      sym_def,
    STATE(132), 1,
      sym_label,
    ACTIONS(50), 2,
      anon_sym_separator,
      anon_sym_terminator,
  [59] = 19,
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
      anon_sym_coercions,
    ACTIONS(21), 1,
      anon_sym_rules,
    ACTIONS(23), 1,
      anon_sym_layout,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_ident,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_grammar_repeat1,
    STATE(27), 1,
      sym_label_id,
    STATE(130), 1,
      sym_def,
    STATE(132), 1,
      sym_label,
    ACTIONS(17), 2,
      anon_sym_separator,
      anon_sym_terminator,
  [118] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(76), 15,
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
  [143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(80), 15,
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
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(84), 15,
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
  [193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(92), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(88), 12,
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
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(94), 15,
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
  [245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 2,
      anon_sym_DASH,
      anon_sym_LBRACE,
    ACTIONS(92), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(98), 12,
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
  [272] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_DASH,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_char,
    STATE(9), 1,
      sym_reg3,
    ACTIONS(102), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(110), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [310] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_char,
    STATE(9), 1,
      sym_reg3,
    ACTIONS(116), 3,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_RPAREN,
    ACTIONS(110), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [345] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_reg3,
    STATE(8), 1,
      sym_char,
    STATE(10), 1,
      sym_reg2,
    STATE(54), 1,
      sym_reg1,
    STATE(133), 1,
      sym_reg,
    ACTIONS(110), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [384] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_reg3,
    STATE(8), 1,
      sym_char,
    STATE(10), 1,
      sym_reg2,
    STATE(54), 1,
      sym_reg1,
    STATE(142), 1,
      sym_reg,
    ACTIONS(110), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym__,
      anon_sym_LPAREN,
    ACTIONS(118), 11,
      anon_sym_comment,
      anon_sym_internal,
      anon_sym_token,
      anon_sym_position,
      anon_sym_entrypoints,
      anon_sym_separator,
      anon_sym_terminator,
      anon_sym_coercions,
      anon_sym_rules,
      anon_sym_layout,
      sym_ident,
  [446] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_reg3,
    STATE(8), 1,
      sym_char,
    STATE(10), 1,
      sym_reg2,
    STATE(54), 1,
      sym_reg1,
    STATE(123), 1,
      sym_reg,
    ACTIONS(110), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [485] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      sym_reg3,
    STATE(8), 1,
      sym_char,
    STATE(11), 1,
      sym_reg2,
    ACTIONS(110), 6,
      anon_sym_eps,
      anon_sym_digit,
      anon_sym_letter,
      anon_sym_upper,
      anon_sym_lower,
      anon_sym_char,
  [518] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    STATE(47), 1,
      aux_sym_def_repeat3,
    STATE(18), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [548] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_def_repeat3,
    STATE(19), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [578] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym_ident,
    ACTIONS(132), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(19), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [603] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    ACTIONS(143), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(19), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [628] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    ACTIONS(145), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(20), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [653] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(26), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_ident,
  [691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      sym_ident,
  [705] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(19), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [729] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    ACTIONS(153), 1,
      anon_sym_SEMI,
    STATE(19), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [753] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_label_id,
    ACTIONS(27), 2,
      anon_sym__,
      sym_ident,
    STATE(44), 2,
      sym_prof_item,
      aux_sym_label_repeat1,
  [777] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_ident,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    STATE(25), 2,
      sym_item,
      aux_sym_def_repeat1,
    STATE(33), 2,
      sym_cat,
      sym_string,
  [801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 7,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 7,
      anon_sym_SEMI,
      anon_sym_COLON_COLON_EQ,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [827] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_label_id,
    STATE(135), 1,
      sym_label,
    ACTIONS(27), 2,
      anon_sym__,
      sym_ident,
  [847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym__,
      anon_sym_LPAREN,
      sym_ident,
  [858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 5,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym_ident,
  [869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 5,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym__,
      anon_sym_LPAREN,
      sym_ident,
  [880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 5,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym__,
      anon_sym_LPAREN,
      sym_ident,
  [891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym__,
      anon_sym_LPAREN,
      sym_ident,
  [902] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(41), 2,
      sym_prof_item,
      aux_sym_label_repeat1,
  [916] = 4,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_comment,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(179), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [930] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(185), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      anon_sym_LPAREN,
    STATE(40), 2,
      sym_prof_item,
      aux_sym_label_repeat1,
  [958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(40), 2,
      sym_prof_item,
      aux_sym_label_repeat1,
  [972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      anon_sym_stop,
    ACTIONS(197), 1,
      anon_sym_toplevel,
    STATE(63), 1,
      sym_string,
  [988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_nonempty,
    ACTIONS(201), 1,
      sym_ident,
    STATE(88), 1,
      sym_cat,
  [1004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    STATE(40), 2,
      sym_prof_item,
      aux_sym_label_repeat1,
  [1018] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(205), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      aux_sym_prof_item_repeat2,
  [1045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_def_repeat3,
  [1058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_prof_item_repeat2,
  [1071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_prof_item_repeat1,
  [1084] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_ident,
    STATE(104), 1,
      sym_cat,
  [1097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_prof_item_repeat2,
  [1110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_prof_item_repeat1,
  [1123] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_prof_item_repeat2,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_PIPE,
    ACTIONS(229), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(233), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_def_repeat3,
  [1160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_def_repeat2,
  [1173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      aux_sym_def_repeat3,
  [1186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_ident,
    STATE(77), 1,
      sym_cat,
  [1199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_def_repeat2,
  [1212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_def_repeat4,
  [1225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_ident,
    STATE(117), 1,
      sym_cat,
  [1238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_def_repeat4,
  [1251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_def_repeat4,
  [1264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_prof_item_repeat2,
  [1277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_prof_item_repeat1,
  [1290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_int_list,
  [1303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_def_repeat4,
  [1316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(69), 1,
      aux_sym_prof_item_repeat2,
  [1329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_prof_item_repeat2,
  [1342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_def_repeat4,
  [1355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_prof_item_repeat2,
  [1368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_def_repeat2,
  [1381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      sym_string,
  [1394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_prof_item_repeat2,
  [1407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_ident,
    STATE(105), 1,
      sym_cat,
  [1420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_string,
  [1430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string,
  [1440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_string,
  [1474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    ACTIONS(272), 1,
      sym_integer,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [1510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
  [1518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(280), 1,
      sym_integer,
  [1528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym_string,
  [1538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      sym_integer,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      sym_string,
  [1592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      sym_integer,
  [1610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_string,
  [1620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1628] = 3,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym_char_token1,
    ACTIONS(300), 1,
      sym_escape_sequence,
  [1638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(89), 1,
      sym_string,
  [1656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_int_list,
  [1666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_COLON_COLON_EQ,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
  [1687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_ident,
  [1694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_token,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_ident,
  [1708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
  [1715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
  [1722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
  [1729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_ident,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_integer,
  [1743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_ident,
  [1750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
  [1757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
  [1764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_COLON_COLON_EQ,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COMMA,
  [1785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
  [1792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_COMMA,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_ident,
  [1806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [1813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [1820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_ident,
  [1834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [1855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SEMI,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_SEMI,
  [1869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DOT,
  [1876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_SEMI,
  [1883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
  [1890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_DOT,
  [1897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      anon_sym_COLON_COLON_EQ,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
  [1911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [1918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_integer,
  [1925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
  [1932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [1939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 143,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 220,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 310,
  [SMALL_STATE(12)] = 345,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 446,
  [SMALL_STATE(16)] = 485,
  [SMALL_STATE(17)] = 518,
  [SMALL_STATE(18)] = 548,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 603,
  [SMALL_STATE(21)] = 628,
  [SMALL_STATE(22)] = 653,
  [SMALL_STATE(23)] = 677,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 705,
  [SMALL_STATE(26)] = 729,
  [SMALL_STATE(27)] = 753,
  [SMALL_STATE(28)] = 777,
  [SMALL_STATE(29)] = 801,
  [SMALL_STATE(30)] = 814,
  [SMALL_STATE(31)] = 827,
  [SMALL_STATE(32)] = 847,
  [SMALL_STATE(33)] = 858,
  [SMALL_STATE(34)] = 869,
  [SMALL_STATE(35)] = 880,
  [SMALL_STATE(36)] = 891,
  [SMALL_STATE(37)] = 902,
  [SMALL_STATE(38)] = 916,
  [SMALL_STATE(39)] = 930,
  [SMALL_STATE(40)] = 944,
  [SMALL_STATE(41)] = 958,
  [SMALL_STATE(42)] = 972,
  [SMALL_STATE(43)] = 988,
  [SMALL_STATE(44)] = 1004,
  [SMALL_STATE(45)] = 1018,
  [SMALL_STATE(46)] = 1032,
  [SMALL_STATE(47)] = 1045,
  [SMALL_STATE(48)] = 1058,
  [SMALL_STATE(49)] = 1071,
  [SMALL_STATE(50)] = 1084,
  [SMALL_STATE(51)] = 1097,
  [SMALL_STATE(52)] = 1110,
  [SMALL_STATE(53)] = 1123,
  [SMALL_STATE(54)] = 1136,
  [SMALL_STATE(55)] = 1147,
  [SMALL_STATE(56)] = 1160,
  [SMALL_STATE(57)] = 1173,
  [SMALL_STATE(58)] = 1186,
  [SMALL_STATE(59)] = 1199,
  [SMALL_STATE(60)] = 1212,
  [SMALL_STATE(61)] = 1225,
  [SMALL_STATE(62)] = 1238,
  [SMALL_STATE(63)] = 1251,
  [SMALL_STATE(64)] = 1264,
  [SMALL_STATE(65)] = 1277,
  [SMALL_STATE(66)] = 1290,
  [SMALL_STATE(67)] = 1303,
  [SMALL_STATE(68)] = 1316,
  [SMALL_STATE(69)] = 1329,
  [SMALL_STATE(70)] = 1342,
  [SMALL_STATE(71)] = 1355,
  [SMALL_STATE(72)] = 1368,
  [SMALL_STATE(73)] = 1381,
  [SMALL_STATE(74)] = 1394,
  [SMALL_STATE(75)] = 1407,
  [SMALL_STATE(76)] = 1420,
  [SMALL_STATE(77)] = 1430,
  [SMALL_STATE(78)] = 1440,
  [SMALL_STATE(79)] = 1448,
  [SMALL_STATE(80)] = 1456,
  [SMALL_STATE(81)] = 1464,
  [SMALL_STATE(82)] = 1474,
  [SMALL_STATE(83)] = 1482,
  [SMALL_STATE(84)] = 1492,
  [SMALL_STATE(85)] = 1500,
  [SMALL_STATE(86)] = 1510,
  [SMALL_STATE(87)] = 1518,
  [SMALL_STATE(88)] = 1528,
  [SMALL_STATE(89)] = 1538,
  [SMALL_STATE(90)] = 1546,
  [SMALL_STATE(91)] = 1556,
  [SMALL_STATE(92)] = 1564,
  [SMALL_STATE(93)] = 1572,
  [SMALL_STATE(94)] = 1582,
  [SMALL_STATE(95)] = 1592,
  [SMALL_STATE(96)] = 1600,
  [SMALL_STATE(97)] = 1610,
  [SMALL_STATE(98)] = 1620,
  [SMALL_STATE(99)] = 1628,
  [SMALL_STATE(100)] = 1638,
  [SMALL_STATE(101)] = 1646,
  [SMALL_STATE(102)] = 1656,
  [SMALL_STATE(103)] = 1666,
  [SMALL_STATE(104)] = 1673,
  [SMALL_STATE(105)] = 1680,
  [SMALL_STATE(106)] = 1687,
  [SMALL_STATE(107)] = 1694,
  [SMALL_STATE(108)] = 1701,
  [SMALL_STATE(109)] = 1708,
  [SMALL_STATE(110)] = 1715,
  [SMALL_STATE(111)] = 1722,
  [SMALL_STATE(112)] = 1729,
  [SMALL_STATE(113)] = 1736,
  [SMALL_STATE(114)] = 1743,
  [SMALL_STATE(115)] = 1750,
  [SMALL_STATE(116)] = 1757,
  [SMALL_STATE(117)] = 1764,
  [SMALL_STATE(118)] = 1771,
  [SMALL_STATE(119)] = 1778,
  [SMALL_STATE(120)] = 1785,
  [SMALL_STATE(121)] = 1792,
  [SMALL_STATE(122)] = 1799,
  [SMALL_STATE(123)] = 1806,
  [SMALL_STATE(124)] = 1813,
  [SMALL_STATE(125)] = 1820,
  [SMALL_STATE(126)] = 1827,
  [SMALL_STATE(127)] = 1834,
  [SMALL_STATE(128)] = 1841,
  [SMALL_STATE(129)] = 1848,
  [SMALL_STATE(130)] = 1855,
  [SMALL_STATE(131)] = 1862,
  [SMALL_STATE(132)] = 1869,
  [SMALL_STATE(133)] = 1876,
  [SMALL_STATE(134)] = 1883,
  [SMALL_STATE(135)] = 1890,
  [SMALL_STATE(136)] = 1897,
  [SMALL_STATE(137)] = 1904,
  [SMALL_STATE(138)] = 1911,
  [SMALL_STATE(139)] = 1918,
  [SMALL_STATE(140)] = 1925,
  [SMALL_STATE(141)] = 1932,
  [SMALL_STATE(142)] = 1939,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(76),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(31),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(112),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(107),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(106),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(43),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(122),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(114),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(42),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(116),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(35),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(103),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(35),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg3, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg3, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg3, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg3, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg2, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg2, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg3, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg3, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg2, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reg2, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg1, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg1, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(75),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(38),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(29),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat3, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat3, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cat, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_id, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_id, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_id, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_id, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(39),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_label_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_label_repeat1, 2), SHIFT_REPEAT(120),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prof_item_repeat2, 2), SHIFT_REPEAT(113),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prof_item_repeat2, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prof_item_repeat1, 2), SHIFT_REPEAT(102),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prof_item_repeat1, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat3, 2), SHIFT_REPEAT(21),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat4, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat4, 2), SHIFT_REPEAT(101),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_repeat2, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_def_repeat2, 2), SHIFT_REPEAT(108),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prof_item, 11),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prof_item, 10),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prof_item, 9),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prof_item, 8),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prof_item, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_list, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_list, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_list, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
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
