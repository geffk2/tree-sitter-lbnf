#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 144
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11

enum {
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

static const char *ts_symbol_names[] = {
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
  [anon_sym_QMARK] = "?",
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '\\')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == 'c')
        ADVANCE(18);
      if (lookahead == 'd')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == 'i')
        ADVANCE(21);
      if (lookahead == 'l')
        ADVANCE(22);
      if (lookahead == 'n')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(27);
      if (lookahead == 'u')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(34);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(35);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      if (lookahead == 'U')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(37);
      if (lookahead == 'x')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 18:
      if (lookahead == 'h')
        ADVANCE(41);
      if (lookahead == 'o')
        ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'i')
        ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'n')
        ADVANCE(44);
      if (lookahead == 'p')
        ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'n')
        ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'a')
        ADVANCE(47);
      if (lookahead == 'e')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'o')
        ADVANCE(50);
      END_STATE();
    case 24:
      if (lookahead == 'o')
        ADVANCE(51);
      END_STATE();
    case 25:
      if (lookahead == 'u')
        ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'e')
        ADVANCE(53);
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'o')
        ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'p')
        ADVANCE(57);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(58);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(11);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == 'c')
        ADVANCE(18);
      if (lookahead == 'd')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(20);
      if (lookahead == 'i')
        ADVANCE(21);
      if (lookahead == 'l')
        ADVANCE(22);
      if (lookahead == 'n')
        ADVANCE(23);
      if (lookahead == 'p')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(26);
      if (lookahead == 't')
        ADVANCE(27);
      if (lookahead == 'u')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(61);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(63);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 41:
      if (lookahead == 'a')
        ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'e')
        ADVANCE(65);
      if (lookahead == 'm')
        ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'g')
        ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 't')
        ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 's')
        ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 't')
        ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'y')
        ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 't')
        ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'w')
        ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'n')
        ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 's')
        ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'l')
        ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'p')
        ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'o')
        ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'r')
        ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'k')
        ADVANCE(80);
      if (lookahead == 'p')
        ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'p')
        ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == '-')
        ADVANCE(83);
      if (lookahead != 0)
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(84);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(38);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(40);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 64:
      if (lookahead == 'r')
        ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'r')
        ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'm')
        ADVANCE(87);
      END_STATE();
    case 67:
      if (lookahead == 'i')
        ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'r')
        ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_eps);
      END_STATE();
    case 70:
      if (lookahead == 'e')
        ADVANCE(90);
      END_STATE();
    case 71:
      if (lookahead == 'o')
        ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 't')
        ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'e')
        ADVANCE(93);
      END_STATE();
    case 74:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'i')
        ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'a')
        ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'p')
        ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'm')
        ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'e')
        ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'l')
        ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'e')
        ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == '}')
        ADVANCE(103);
      if (lookahead != 0)
        ADVANCE(58);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 86:
      if (lookahead == 'c')
        ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 't')
        ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'y')
        ADVANCE(108);
      END_STATE();
    case 90:
      if (lookahead == 'r')
        ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'u')
        ADVANCE(110);
      END_STATE();
    case 92:
      if (lookahead == 'e')
        ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'r')
        ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 'm')
        ADVANCE(113);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 96:
      if (lookahead == 's')
        ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_stop);
      END_STATE();
    case 99:
      if (lookahead == 'i')
        ADVANCE(117);
      END_STATE();
    case 100:
      if (lookahead == 'n')
        ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == 'e')
        ADVANCE(119);
      END_STATE();
    case 102:
      if (lookahead == 'r')
        ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 105:
      if (lookahead == 'i')
        ADVANCE(121);
      END_STATE();
    case 106:
      if (lookahead == 'n')
        ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_digit);
      END_STATE();
    case 108:
      if (lookahead == 'p')
        ADVANCE(123);
      END_STATE();
    case 109:
      if (lookahead == 'n')
        ADVANCE(124);
      END_STATE();
    case 110:
      if (lookahead == 't')
        ADVANCE(125);
      END_STATE();
    case 111:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_lower);
      END_STATE();
    case 113:
      if (lookahead == 'p')
        ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'i')
        ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 116:
      if (lookahead == 'a')
        ADVANCE(129);
      END_STATE();
    case 117:
      if (lookahead == 'n')
        ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_token);
      END_STATE();
    case 119:
      if (lookahead == 'v')
        ADVANCE(131);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_upper);
      END_STATE();
    case 121:
      if (lookahead == 'o')
        ADVANCE(132);
      END_STATE();
    case 122:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 123:
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'a')
        ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_letter);
      END_STATE();
    case 127:
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 128:
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 129:
      if (lookahead == 't')
        ADVANCE(138);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'e')
        ADVANCE(140);
      END_STATE();
    case 132:
      if (lookahead == 'n')
        ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 134:
      if (lookahead == 'i')
        ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 'l')
        ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'y')
        ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'n')
        ADVANCE(145);
      END_STATE();
    case 138:
      if (lookahead == 'o')
        ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 't')
        ADVANCE(147);
      END_STATE();
    case 140:
      if (lookahead == 'l')
        ADVANCE(148);
      END_STATE();
    case 141:
      if (lookahead == 's')
        ADVANCE(149);
      END_STATE();
    case 142:
      if (lookahead == 'n')
        ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_nonempty);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_position);
      END_STATE();
    case 146:
      if (lookahead == 'r')
        ADVANCE(151);
      END_STATE();
    case 147:
      if (lookahead == 'o')
        ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_toplevel);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_coercions);
      END_STATE();
    case 150:
      if (lookahead == 't')
        ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_separator);
      END_STATE();
    case 152:
      if (lookahead == 'r')
        ADVANCE(154);
      END_STATE();
    case 153:
      if (lookahead == 's')
        ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_terminator);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      END_STATE();
    case 156:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == 'c')
        ADVANCE(158);
      if (lookahead == 'e')
        ADVANCE(159);
      if (lookahead == 'i')
        ADVANCE(160);
      if (lookahead == 'l')
        ADVANCE(161);
      if (lookahead == 'p')
        ADVANCE(162);
      if (lookahead == 'r')
        ADVANCE(163);
      if (lookahead == 's')
        ADVANCE(164);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 157:
      if (lookahead == '-')
        ADVANCE(34);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 166:
      if (lookahead == '-')
        ADVANCE(58);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(177);
      if (lookahead == 'm')
        ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y')
        ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's')
        ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_rules);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_token);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_layout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_internal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_position);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_coercions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_separator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_terminator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_entrypoints);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 235:
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '.')
        ADVANCE(10);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '_')
        ADVANCE(17);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 236:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(237);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'm')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'y')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_nonempty);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 245:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(246);
      if (lookahead == 't')
        ADVANCE(247);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      END_STATE();
    case 246:
      if (lookahead == 't')
        ADVANCE(54);
      END_STATE();
    case 247:
      if (lookahead == 'o')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'p')
        ADVANCE(81);
      END_STATE();
    case 249:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ':')
        ADVANCE(250);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 251:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == 't')
        ADVANCE(252);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(251);
      END_STATE();
    case 252:
      if (lookahead == 'o')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'k')
        ADVANCE(80);
      END_STATE();
    case 254:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 255:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 256:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 257:
      if (lookahead == ':')
        ADVANCE(35);
      END_STATE();
    case 258:
      if (lookahead == '\n')
        SKIP(259);
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '\\')
        ADVANCE(15);
      if (lookahead == '{')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(262);
      if (lookahead != 0)
        ADVANCE(263);
      END_STATE();
    case 259:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '{')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-')
        ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}')
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\')
        ADVANCE(263);
      END_STATE();
    case 267:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(268);
      if (lookahead == 'd')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(269);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      END_STATE();
    case 268:
      if (lookahead == 'h')
        ADVANCE(41);
      END_STATE();
    case 269:
      if (lookahead == 'p')
        ADVANCE(45);
      END_STATE();
    case 270:
      if (lookahead == 'e')
        ADVANCE(48);
      if (lookahead == 'o')
        ADVANCE(49);
      END_STATE();
    case 271:
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      END_STATE();
    case 272:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == '"')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(167);
      END_STATE();
    case 274:
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(6);
      if (lookahead == '+')
        ADVANCE(7);
      if (lookahead == '-')
        ADVANCE(9);
      if (lookahead == ';')
        ADVANCE(12);
      if (lookahead == '?')
        ADVANCE(13);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == 'c')
        ADVANCE(268);
      if (lookahead == 'd')
        ADVANCE(19);
      if (lookahead == 'e')
        ADVANCE(269);
      if (lookahead == 'l')
        ADVANCE(270);
      if (lookahead == 'u')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(29);
      if (lookahead == '|')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      END_STATE();
    case 275:
      if (lookahead == '\n')
        SKIP(276);
      if (lookahead == '-')
        ADVANCE(277);
      if (lookahead == '\\')
        ADVANCE(278);
      if (lookahead == '{')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(280);
      END_STATE();
    case 276:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-')
        ADVANCE(34);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'U')
        ADVANCE(36);
      if (lookahead == 'u')
        ADVANCE(37);
      if (lookahead == 'x')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(40);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '-')
        ADVANCE(58);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 281:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '[')
        ADVANCE(14);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(281);
      END_STATE();
    case 282:
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '}')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(282);
      END_STATE();
    case 283:
      if (lookahead == ',')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(157);
      if (lookahead == ']')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 156},
  [2] = {.lex_state = 235},
  [3] = {.lex_state = 236},
  [4] = {.lex_state = 235},
  [5] = {.lex_state = 245},
  [6] = {.lex_state = 235},
  [7] = {.lex_state = 245},
  [8] = {.lex_state = 235},
  [9] = {.lex_state = 249},
  [10] = {.lex_state = 251},
  [11] = {.lex_state = 235},
  [12] = {.lex_state = 254},
  [13] = {.lex_state = 235},
  [14] = {.lex_state = 156},
  [15] = {.lex_state = 235},
  [16] = {.lex_state = 255},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 235},
  [19] = {.lex_state = 235},
  [20] = {.lex_state = 235},
  [21] = {.lex_state = 256},
  [22] = {.lex_state = 235},
  [23] = {.lex_state = 245},
  [24] = {.lex_state = 258},
  [25] = {.lex_state = 255},
  [26] = {.lex_state = 267},
  [27] = {.lex_state = 245},
  [28] = {.lex_state = 255},
  [29] = {.lex_state = 271},
  [30] = {.lex_state = 254},
  [31] = {.lex_state = 267},
  [32] = {.lex_state = 235},
  [33] = {.lex_state = 272},
  [34] = {.lex_state = 235},
  [35] = {.lex_state = 271},
  [36] = {.lex_state = 156},
  [37] = {.lex_state = 235},
  [38] = {.lex_state = 156},
  [39] = {.lex_state = 249},
  [40] = {.lex_state = 235},
  [41] = {.lex_state = 235},
  [42] = {.lex_state = 235},
  [43] = {.lex_state = 245},
  [44] = {.lex_state = 254},
  [45] = {.lex_state = 255},
  [46] = {.lex_state = 273},
  [47] = {.lex_state = 258},
  [48] = {.lex_state = 274},
  [49] = {.lex_state = 267},
  [50] = {.lex_state = 275},
  [51] = {.lex_state = 245},
  [52] = {.lex_state = 245},
  [53] = {.lex_state = 274},
  [54] = {.lex_state = 274},
  [55] = {.lex_state = 274},
  [56] = {.lex_state = 271},
  [57] = {.lex_state = 245},
  [58] = {.lex_state = 271},
  [59] = {.lex_state = 254},
  [60] = {.lex_state = 235},
  [61] = {.lex_state = 267},
  [62] = {.lex_state = 255},
  [63] = {.lex_state = 235},
  [64] = {.lex_state = 271},
  [65] = {.lex_state = 272},
  [66] = {.lex_state = 281},
  [67] = {.lex_state = 156},
  [68] = {.lex_state = 235},
  [69] = {.lex_state = 235},
  [70] = {.lex_state = 272},
  [71] = {.lex_state = 255},
  [72] = {.lex_state = 256},
  [73] = {.lex_state = 273},
  [74] = {.lex_state = 258},
  [75] = {.lex_state = 267},
  [76] = {.lex_state = 267},
  [77] = {.lex_state = 282},
  [78] = {.lex_state = 254},
  [79] = {.lex_state = 267},
  [80] = {.lex_state = 274},
  [81] = {.lex_state = 274},
  [82] = {.lex_state = 271},
  [83] = {.lex_state = 271},
  [84] = {.lex_state = 271},
  [85] = {.lex_state = 267},
  [86] = {.lex_state = 255},
  [87] = {.lex_state = 255},
  [88] = {.lex_state = 255},
  [89] = {.lex_state = 255},
  [90] = {.lex_state = 271},
  [91] = {.lex_state = 271},
  [92] = {.lex_state = 255},
  [93] = {.lex_state = 254},
  [94] = {.lex_state = 271},
  [95] = {.lex_state = 283},
  [96] = {.lex_state = 255},
  [97] = {.lex_state = 274},
  [98] = {.lex_state = 274},
  [99] = {.lex_state = 274},
  [100] = {.lex_state = 235},
  [101] = {.lex_state = 255},
  [102] = {.lex_state = 255},
  [103] = {.lex_state = 255},
  [104] = {.lex_state = 255},
  [105] = {.lex_state = 255},
  [106] = {.lex_state = 283},
  [107] = {.lex_state = 283},
  [108] = {.lex_state = 156},
  [109] = {.lex_state = 156},
  [110] = {.lex_state = 271},
  [111] = {.lex_state = 283},
  [112] = {.lex_state = 255},
  [113] = {.lex_state = 255},
  [114] = {.lex_state = 254},
  [115] = {.lex_state = 283},
  [116] = {.lex_state = 283},
  [117] = {.lex_state = 254},
  [118] = {.lex_state = 283},
  [119] = {.lex_state = 156},
  [120] = {.lex_state = 271},
  [121] = {.lex_state = 283},
  [122] = {.lex_state = 283},
  [123] = {.lex_state = 283},
  [124] = {.lex_state = 283},
  [125] = {.lex_state = 283},
  [126] = {.lex_state = 267},
  [127] = {.lex_state = 254},
  [128] = {.lex_state = 156},
  [129] = {.lex_state = 267},
  [130] = {.lex_state = 283},
  [131] = {.lex_state = 235},
  [132] = {.lex_state = 283},
  [133] = {.lex_state = 254},
  [134] = {.lex_state = 235},
  [135] = {.lex_state = 267},
  [136] = {.lex_state = 283},
  [137] = {.lex_state = 283},
  [138] = {.lex_state = 235},
  [139] = {.lex_state = 267},
  [140] = {.lex_state = 283},
  [141] = {.lex_state = 235},
  [142] = {.lex_state = 267},
  [143] = {.lex_state = 235},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym__] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_letter] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_terminator] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_rules] = ACTIONS(1),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(1),
    [anon_sym_entrypoints] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_stop] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_upper] = ACTIONS(1),
    [anon_sym_separator] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_token] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_digit] = ACTIONS(1),
    [anon_sym_eps] = ACTIONS(1),
    [anon_sym_toplevel] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_nonempty] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_coercions] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_position] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [aux_sym_grammar_repeat1] = STATE(14),
    [sym_label] = STATE(15),
    [sym_def] = STATE(16),
    [sym_grammar] = STATE(17),
    [sym_label_id] = STATE(18),
    [anon_sym__] = ACTIONS(5),
    [anon_sym_separator] = ACTIONS(7),
    [anon_sym_comment] = ACTIONS(9),
    [anon_sym_token] = ACTIONS(11),
    [anon_sym_terminator] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_rules] = ACTIONS(13),
    [anon_sym_entrypoints] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_ident] = ACTIONS(23),
    [anon_sym_layout] = ACTIONS(25),
    [anon_sym_coercions] = ACTIONS(27),
    [anon_sym_position] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
  },
  [2] = {
    [sym_label] = STATE(19),
    [sym_label_id] = STATE(18),
    [anon_sym__] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_ident] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
  },
  [3] = {
    [sym_cat] = STATE(23),
    [sym_ident] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_nonempty] = ACTIONS(37),
  },
  [4] = {
    [anon_sym__] = ACTIONS(39),
    [anon_sym_DOT] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_ident] = ACTIONS(39),
  },
  [5] = {
    [sym_string] = STATE(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [6] = {
    [sym_ident] = ACTIONS(43),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_string] = STATE(29),
    [anon_sym_toplevel] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_stop] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [8] = {
    [sym_ident] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [anon_sym_COLON] = ACTIONS(51),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [anon_sym_token] = ACTIONS(53),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_ident] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(57),
  },
  [13] = {
    [sym_ident] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [aux_sym_grammar_repeat1] = STATE(36),
    [sym_label] = STATE(15),
    [sym_def] = STATE(16),
    [sym_label_id] = STATE(18),
    [anon_sym__] = ACTIONS(5),
    [anon_sym_separator] = ACTIONS(7),
    [anon_sym_comment] = ACTIONS(9),
    [anon_sym_token] = ACTIONS(11),
    [anon_sym_terminator] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_rules] = ACTIONS(13),
    [anon_sym_entrypoints] = ACTIONS(15),
    [anon_sym_internal] = ACTIONS(17),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_ident] = ACTIONS(23),
    [anon_sym_layout] = ACTIONS(25),
    [anon_sym_coercions] = ACTIONS(27),
    [anon_sym_position] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
  },
  [15] = {
    [anon_sym_DOT] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_prof_item] = STATE(40),
    [aux_sym_label_repeat1] = STATE(40),
    [sym_label_id] = STATE(41),
    [anon_sym__] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(71),
    [sym_ident] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
  },
  [19] = {
    [anon_sym_DOT] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_cat] = STATE(43),
    [sym_comment] = ACTIONS(3),
    [sym_ident] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(35),
  },
  [21] = {
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_ident] = ACTIONS(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(77),
  },
  [22] = {
    [sym_cat] = STATE(44),
    [sym_comment] = ACTIONS(3),
    [sym_ident] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(35),
  },
  [23] = {
    [sym_string] = STATE(45),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [24] = {
    [aux_sym_string_repeat1] = STATE(47),
    [sym_escape_sequence] = ACTIONS(79),
    [sym_comment] = ACTIONS(81),
    [aux_sym_string_token1] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(83),
  },
  [25] = {
    [sym_string] = STATE(45),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [26] = {
    [sym_reg] = STATE(45),
    [sym_char] = STATE(48),
    [sym_reg1] = STATE(53),
    [sym_reg3] = STATE(54),
    [sym_reg2] = STATE(55),
    [anon_sym_char] = ACTIONS(87),
    [anon_sym_letter] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_digit] = ACTIONS(87),
    [anon_sym_eps] = ACTIONS(87),
    [anon_sym_upper] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_lower] = ACTIONS(87),
  },
  [27] = {
    [sym_string] = STATE(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [28] = {
    [anon_sym_SEMI] = ACTIONS(85),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [aux_sym_def_repeat4] = STATE(58),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym_integer] = ACTIONS(99),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(103),
  },
  [32] = {
    [sym_ident] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_COLON_COLON_EQ] = ACTIONS(107),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym__] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym_ident] = ACTIONS(109),
  },
  [35] = {
    [aux_sym_def_repeat2] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [aux_sym_grammar_repeat1] = STATE(36),
    [sym_label] = STATE(15),
    [sym_def] = STATE(16),
    [sym_label_id] = STATE(18),
    [anon_sym__] = ACTIONS(113),
    [anon_sym_separator] = ACTIONS(116),
    [anon_sym_comment] = ACTIONS(119),
    [anon_sym_token] = ACTIONS(122),
    [anon_sym_terminator] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
    [anon_sym_rules] = ACTIONS(125),
    [anon_sym_entrypoints] = ACTIONS(128),
    [anon_sym_internal] = ACTIONS(131),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [sym_ident] = ACTIONS(139),
    [anon_sym_layout] = ACTIONS(142),
    [anon_sym_coercions] = ACTIONS(145),
    [anon_sym_position] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(151),
  },
  [37] = {
    [sym_cat] = STATE(65),
    [sym_comment] = ACTIONS(3),
    [sym_ident] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(35),
  },
  [38] = {
    [anon_sym__] = ACTIONS(134),
    [anon_sym_separator] = ACTIONS(154),
    [anon_sym_comment] = ACTIONS(154),
    [anon_sym_token] = ACTIONS(154),
    [anon_sym_terminator] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
    [anon_sym_rules] = ACTIONS(154),
    [anon_sym_entrypoints] = ACTIONS(154),
    [anon_sym_internal] = ACTIONS(154),
    [ts_builtin_sym_end] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(134),
    [sym_ident] = ACTIONS(154),
    [anon_sym_layout] = ACTIONS(154),
    [anon_sym_coercions] = ACTIONS(154),
    [anon_sym_position] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(134),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(156),
  },
  [40] = {
    [sym_prof_item] = STATE(68),
    [aux_sym_label_repeat1] = STATE(68),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym_prof_item] = STATE(69),
    [aux_sym_label_repeat1] = STATE(69),
    [anon_sym_DOT] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym_cat] = STATE(70),
    [sym_comment] = ACTIONS(3),
    [sym_ident] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(35),
  },
  [43] = {
    [sym_string] = STATE(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [44] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(162),
  },
  [45] = {
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [sym_ident] = ACTIONS(166),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(166),
  },
  [47] = {
    [aux_sym_string_repeat1] = STATE(74),
    [sym_escape_sequence] = ACTIONS(168),
    [sym_comment] = ACTIONS(81),
    [aux_sym_string_token1] = ACTIONS(168),
    [anon_sym_DQUOTE] = ACTIONS(170),
  },
  [48] = {
    [anon_sym_PIPE] = ACTIONS(172),
    [anon_sym_char] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_letter] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_digit] = ACTIONS(172),
    [anon_sym_eps] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(172),
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_upper] = ACTIONS(172),
    [anon_sym_QMARK] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_LBRACE] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
  },
  [49] = {
    [sym_reg] = STATE(75),
    [sym_char] = STATE(48),
    [sym_reg1] = STATE(53),
    [sym_reg3] = STATE(54),
    [sym_reg2] = STATE(55),
    [anon_sym_char] = ACTIONS(87),
    [anon_sym_letter] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_digit] = ACTIONS(87),
    [anon_sym_eps] = ACTIONS(87),
    [anon_sym_upper] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_lower] = ACTIONS(87),
  },
  [50] = {
    [sym_escape_sequence] = ACTIONS(176),
    [aux_sym_char_token1] = ACTIONS(178),
    [sym_comment] = ACTIONS(81),
  },
  [51] = {
    [sym_string] = STATE(77),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [52] = {
    [sym_string] = STATE(78),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [53] = {
    [anon_sym_PIPE] = ACTIONS(180),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
  },
  [54] = {
    [anon_sym_PIPE] = ACTIONS(184),
    [anon_sym_char] = ACTIONS(184),
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_letter] = ACTIONS(184),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_digit] = ACTIONS(184),
    [anon_sym_eps] = ACTIONS(184),
    [anon_sym_PLUS] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(184),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(184),
    [anon_sym_upper] = ACTIONS(184),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
  },
  [55] = {
    [sym_reg3] = STATE(81),
    [sym_char] = STATE(48),
    [anon_sym_PIPE] = ACTIONS(190),
    [anon_sym_char] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(190),
    [anon_sym_letter] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_digit] = ACTIONS(87),
    [anon_sym_eps] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_upper] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(190),
  },
  [56] = {
    [aux_sym_def_repeat4] = STATE(82),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym_string] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [58] = {
    [aux_sym_def_repeat4] = STATE(84),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(194),
  },
  [60] = {
    [anon_sym__] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [sym_ident] = ACTIONS(196),
  },
  [61] = {
    [sym_reg] = STATE(71),
    [sym_char] = STATE(48),
    [sym_reg1] = STATE(53),
    [sym_reg3] = STATE(54),
    [sym_reg2] = STATE(55),
    [anon_sym_char] = ACTIONS(87),
    [anon_sym_letter] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_digit] = ACTIONS(87),
    [anon_sym_eps] = ACTIONS(87),
    [anon_sym_upper] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_lower] = ACTIONS(87),
  },
  [62] = {
    [sym_cat] = STATE(87),
    [aux_sym_def_repeat3] = STATE(88),
    [sym_item] = STATE(89),
    [aux_sym_def_repeat1] = STATE(89),
    [sym_string] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_ident] = ACTIONS(75),
  },
  [63] = {
    [sym_ident] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [aux_sym_def_repeat2] = STATE(91),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(111),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_COLON_COLON_EQ] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [sym_int_list] = STATE(95),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(206),
  },
  [67] = {
    [anon_sym_LBRACK] = ACTIONS(156),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym_prof_item] = STATE(68),
    [aux_sym_label_repeat1] = STATE(68),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(210),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym_prof_item] = STATE(68),
    [aux_sym_label_repeat1] = STATE(68),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(160),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [anon_sym_COLON_COLON_EQ] = ACTIONS(215),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_PIPE] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(219),
    [sym_ident] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
  },
  [73] = {
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_PIPE] = ACTIONS(221),
    [sym_ident] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
  },
  [74] = {
    [aux_sym_string_repeat1] = STATE(74),
    [sym_escape_sequence] = ACTIONS(223),
    [sym_comment] = ACTIONS(81),
    [aux_sym_string_token1] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(226),
  },
  [75] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(228),
  },
  [76] = {
    [anon_sym_SQUOTE] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [anon_sym_RBRACE] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(228),
  },
  [79] = {
    [sym_reg3] = STATE(54),
    [sym_reg2] = STATE(99),
    [sym_char] = STATE(48),
    [anon_sym_char] = ACTIONS(87),
    [anon_sym_letter] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_digit] = ACTIONS(87),
    [anon_sym_eps] = ACTIONS(87),
    [anon_sym_upper] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_lower] = ACTIONS(87),
  },
  [80] = {
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_char] = ACTIONS(232),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_letter] = ACTIONS(232),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_digit] = ACTIONS(232),
    [anon_sym_eps] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_upper] = ACTIONS(232),
    [anon_sym_QMARK] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(232),
  },
  [81] = {
    [anon_sym_PIPE] = ACTIONS(236),
    [anon_sym_char] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_letter] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(236),
    [anon_sym_digit] = ACTIONS(236),
    [anon_sym_eps] = ACTIONS(236),
    [anon_sym_PLUS] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(186),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_upper] = ACTIONS(236),
    [anon_sym_QMARK] = ACTIONS(186),
    [anon_sym_DASH] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(236),
    [anon_sym_RPAREN] = ACTIONS(236),
  },
  [82] = {
    [aux_sym_def_repeat4] = STATE(84),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
  },
  [84] = {
    [aux_sym_def_repeat4] = STATE(84),
    [anon_sym_SEMI] = ACTIONS(240),
    [anon_sym_COMMA] = ACTIONS(242),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(245),
  },
  [86] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(101),
    [aux_sym_def_repeat1] = STATE(101),
    [sym_string] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(247),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(247),
    [sym_ident] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [87] = {
    [sym_ident] = ACTIONS(249),
    [anon_sym_PIPE] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
  },
  [88] = {
    [aux_sym_def_repeat3] = STATE(102),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [89] = {
    [sym_cat] = STATE(87),
    [aux_sym_def_repeat3] = STATE(103),
    [sym_item] = STATE(104),
    [aux_sym_def_repeat1] = STATE(104),
    [sym_string] = STATE(87),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_ident] = ACTIONS(75),
  },
  [90] = {
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
    [sym_comment] = ACTIONS(3),
  },
  [91] = {
    [aux_sym_def_repeat2] = STATE(91),
    [anon_sym_SEMI] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
  },
  [92] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(105),
    [aux_sym_def_repeat1] = STATE(105),
    [sym_string] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(217),
    [sym_ident] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [93] = {
    [sym_integer] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(258),
  },
  [94] = {
    [anon_sym_COMMA] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
  },
  [95] = {
    [aux_sym_prof_item_repeat1] = STATE(111),
    [anon_sym_COMMA] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(264),
  },
  [96] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(112),
    [aux_sym_def_repeat1] = STATE(112),
    [sym_string] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_ident] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [97] = {
    [anon_sym_PIPE] = ACTIONS(268),
    [anon_sym_char] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_letter] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_digit] = ACTIONS(268),
    [anon_sym_eps] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_upper] = ACTIONS(268),
    [anon_sym_QMARK] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(270),
    [anon_sym_LBRACE] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(268),
  },
  [98] = {
    [anon_sym_PIPE] = ACTIONS(272),
    [anon_sym_char] = ACTIONS(272),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_letter] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_digit] = ACTIONS(272),
    [anon_sym_eps] = ACTIONS(272),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [sym_comment] = ACTIONS(3),
    [anon_sym_lower] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(272),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_upper] = ACTIONS(272),
    [anon_sym_QMARK] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(272),
  },
  [99] = {
    [sym_reg3] = STATE(81),
    [sym_char] = STATE(48),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PIPE] = ACTIONS(276),
    [anon_sym_char] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_letter] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_digit] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [anon_sym_eps] = ACTIONS(87),
    [anon_sym_upper] = ACTIONS(87),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_lower] = ACTIONS(87),
  },
  [100] = {
    [anon_sym__] = ACTIONS(278),
    [anon_sym_DOT] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [sym_ident] = ACTIONS(278),
  },
  [101] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(104),
    [aux_sym_def_repeat1] = STATE(104),
    [sym_string] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(280),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(280),
    [sym_ident] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [102] = {
    [aux_sym_def_repeat3] = STATE(102),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_PIPE] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [103] = {
    [aux_sym_def_repeat3] = STATE(102),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_PIPE] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(104),
    [aux_sym_def_repeat1] = STATE(104),
    [sym_string] = STATE(87),
    [sym_ident] = ACTIONS(285),
    [anon_sym_PIPE] = ACTIONS(288),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(293),
  },
  [105] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(113),
    [aux_sym_def_repeat1] = STATE(113),
    [sym_string] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(266),
    [sym_ident] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [106] = {
    [aux_sym_prof_item_repeat2] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(298),
  },
  [107] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [108] = {
    [anon_sym_LBRACK] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [sym_int_list] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(204),
    [sym_comment] = ACTIONS(3),
  },
  [110] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [111] = {
    [aux_sym_prof_item_repeat1] = STATE(121),
    [anon_sym_COMMA] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(306),
  },
  [112] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(113),
    [aux_sym_def_repeat1] = STATE(113),
    [sym_string] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(308),
    [sym_ident] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(41),
  },
  [113] = {
    [sym_cat] = STATE(87),
    [sym_item] = STATE(113),
    [aux_sym_def_repeat1] = STATE(113),
    [sym_string] = STATE(87),
    [sym_ident] = ACTIONS(285),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_DQUOTE] = ACTIONS(293),
  },
  [114] = {
    [sym_integer] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(312),
  },
  [116] = {
    [aux_sym_prof_item_repeat2] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(314),
  },
  [117] = {
    [sym_integer] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(318),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(320),
  },
  [119] = {
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_comment] = ACTIONS(3),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(3),
  },
  [121] = {
    [aux_sym_prof_item_repeat1] = STATE(121),
    [anon_sym_COMMA] = ACTIONS(326),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(320),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(329),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(331),
  },
  [124] = {
    [aux_sym_prof_item_repeat2] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(333),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(329),
  },
  [125] = {
    [aux_sym_prof_item_repeat2] = STATE(130),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(336),
  },
  [126] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(338),
  },
  [127] = {
    [sym_integer] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(336),
  },
  [128] = {
    [anon_sym_LBRACK] = ACTIONS(342),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(344),
  },
  [130] = {
    [aux_sym_prof_item_repeat2] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(346),
  },
  [131] = {
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [sym_comment] = ACTIONS(3),
  },
  [132] = {
    [aux_sym_prof_item_repeat2] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(346),
  },
  [133] = {
    [sym_integer] = ACTIONS(350),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(346),
  },
  [134] = {
    [anon_sym_DOT] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [sym_comment] = ACTIONS(3),
  },
  [135] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(354),
  },
  [136] = {
    [aux_sym_prof_item_repeat2] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(356),
  },
  [137] = {
    [aux_sym_prof_item_repeat2] = STATE(140),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(356),
  },
  [138] = {
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(358),
    [sym_comment] = ACTIONS(3),
  },
  [139] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(360),
  },
  [140] = {
    [aux_sym_prof_item_repeat2] = STATE(124),
    [anon_sym_COMMA] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(362),
  },
  [141] = {
    [anon_sym_DOT] = ACTIONS(364),
    [anon_sym_LPAREN] = ACTIONS(364),
    [sym_comment] = ACTIONS(3),
  },
  [142] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(366),
  },
  [143] = {
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_LPAREN] = ACTIONS(368),
    [sym_comment] = ACTIONS(3),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(4),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(6),
  [13] = {.count = 1, .reusable = false}, SHIFT(11),
  [15] = {.count = 1, .reusable = false}, SHIFT(13),
  [17] = {.count = 1, .reusable = false}, SHIFT(2),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_grammar, 0),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = false}, SHIFT(4),
  [25] = {.count = 1, .reusable = false}, SHIFT(7),
  [27] = {.count = 1, .reusable = false}, SHIFT(8),
  [29] = {.count = 1, .reusable = false}, SHIFT(10),
  [31] = {.count = 1, .reusable = true}, SHIFT(12),
  [33] = {.count = 1, .reusable = false}, SHIFT(21),
  [35] = {.count = 1, .reusable = true}, SHIFT(22),
  [37] = {.count = 1, .reusable = false}, SHIFT(20),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 1),
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = true}, SHIFT(26),
  [45] = {.count = 1, .reusable = true}, SHIFT(28),
  [47] = {.count = 1, .reusable = true}, SHIFT(27),
  [49] = {.count = 1, .reusable = true}, SHIFT(30),
  [51] = {.count = 1, .reusable = true}, SHIFT(31),
  [53] = {.count = 1, .reusable = true}, SHIFT(32),
  [55] = {.count = 1, .reusable = true}, SHIFT(33),
  [57] = {.count = 1, .reusable = true}, SHIFT(34),
  [59] = {.count = 1, .reusable = true}, SHIFT(35),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_grammar, 1),
  [63] = {.count = 1, .reusable = true}, SHIFT(37),
  [65] = {.count = 1, .reusable = true}, SHIFT(38),
  [67] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_label, 1),
  [71] = {.count = 1, .reusable = true}, SHIFT(39),
  [73] = {.count = 1, .reusable = true}, SHIFT(42),
  [75] = {.count = 1, .reusable = true}, SHIFT(21),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_cat, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(47),
  [81] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [83] = {.count = 1, .reusable = false}, SHIFT(46),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_def, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(48),
  [89] = {.count = 1, .reusable = true}, SHIFT(49),
  [91] = {.count = 1, .reusable = true}, SHIFT(50),
  [93] = {.count = 1, .reusable = false}, SHIFT(51),
  [95] = {.count = 1, .reusable = true}, SHIFT(52),
  [97] = {.count = 1, .reusable = true}, SHIFT(57),
  [99] = {.count = 1, .reusable = true}, SHIFT(45),
  [101] = {.count = 1, .reusable = true}, SHIFT(59),
  [103] = {.count = 1, .reusable = true}, SHIFT(60),
  [105] = {.count = 1, .reusable = true}, SHIFT(61),
  [107] = {.count = 1, .reusable = true}, SHIFT(62),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(63),
  [113] = {.count = 2, .reusable = true}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(4),
  [116] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(3),
  [119] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(5),
  [122] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(6),
  [125] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(11),
  [128] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(13),
  [131] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(2),
  [134] = {.count = 1, .reusable = true}, REDUCE(aux_sym_grammar_repeat1, 2),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(9),
  [139] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(4),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(7),
  [145] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(8),
  [148] = {.count = 2, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_grammar_repeat1, 2), SHIFT_REPEAT(12),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym_grammar_repeat1, 2),
  [156] = {.count = 1, .reusable = true}, SHIFT(66),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [160] = {.count = 1, .reusable = true}, SHIFT(67),
  [162] = {.count = 1, .reusable = true}, SHIFT(72),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_def, 3),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_string, 2),
  [168] = {.count = 1, .reusable = true}, SHIFT(74),
  [170] = {.count = 1, .reusable = false}, SHIFT(73),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_reg3, 1),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_reg3, 1),
  [176] = {.count = 1, .reusable = true}, SHIFT(76),
  [178] = {.count = 1, .reusable = false}, SHIFT(76),
  [180] = {.count = 1, .reusable = true}, SHIFT(79),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_reg, 1),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_reg2, 1),
  [186] = {.count = 1, .reusable = true}, SHIFT(80),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_reg2, 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_reg1, 1),
  [192] = {.count = 1, .reusable = false}, SHIFT(79),
  [194] = {.count = 1, .reusable = true}, SHIFT(85),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 3),
  [198] = {.count = 1, .reusable = true}, SHIFT(86),
  [200] = {.count = 1, .reusable = true}, SHIFT(90),
  [202] = {.count = 1, .reusable = true}, SHIFT(92),
  [204] = {.count = 1, .reusable = true}, SHIFT(93),
  [206] = {.count = 1, .reusable = true}, SHIFT(94),
  [208] = {.count = 1, .reusable = true}, REDUCE(aux_sym_label_repeat1, 2),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_label_repeat1, 2), SHIFT_REPEAT(67),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_label, 3),
  [215] = {.count = 1, .reusable = true}, SHIFT(96),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_def, 4),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_cat, 3),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_string, 3),
  [223] = {.count = 2, .reusable = true}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(74),
  [226] = {.count = 1, .reusable = false}, REDUCE(aux_sym_string_repeat1, 2),
  [228] = {.count = 1, .reusable = true}, SHIFT(97),
  [230] = {.count = 1, .reusable = true}, SHIFT(98),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_reg3, 2),
  [234] = {.count = 1, .reusable = false}, REDUCE(sym_reg3, 2),
  [236] = {.count = 1, .reusable = true}, REDUCE(sym_reg2, 2),
  [238] = {.count = 1, .reusable = false}, REDUCE(sym_reg2, 2),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat4, 2),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat4, 2), SHIFT_REPEAT(57),
  [245] = {.count = 1, .reusable = true}, SHIFT(100),
  [247] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat3, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_item, 1),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat2, 2),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat2, 2), SHIFT_REPEAT(63),
  [256] = {.count = 1, .reusable = true}, SHIFT(106),
  [258] = {.count = 1, .reusable = true}, SHIFT(107),
  [260] = {.count = 1, .reusable = true}, SHIFT(108),
  [262] = {.count = 1, .reusable = true}, SHIFT(109),
  [264] = {.count = 1, .reusable = true}, SHIFT(110),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_def, 5),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_reg3, 3),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_reg3, 3),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_char, 3),
  [274] = {.count = 1, .reusable = false}, REDUCE(sym_char, 3),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_reg1, 3),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_label_id, 5),
  [280] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat3, 2),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat3, 2), SHIFT_REPEAT(86),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(21),
  [288] = {.count = 1, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(22),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_def_repeat1, 2), SHIFT_REPEAT(24),
  [296] = {.count = 1, .reusable = true}, SHIFT(114),
  [298] = {.count = 1, .reusable = true}, SHIFT(115),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_int_list, 2),
  [302] = {.count = 1, .reusable = true}, SHIFT(117),
  [304] = {.count = 1, .reusable = true}, SHIFT(119),
  [306] = {.count = 1, .reusable = true}, SHIFT(120),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_def, 6),
  [310] = {.count = 1, .reusable = true}, SHIFT(122),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_int_list, 3),
  [314] = {.count = 1, .reusable = true}, SHIFT(123),
  [316] = {.count = 1, .reusable = true}, SHIFT(125),
  [318] = {.count = 1, .reusable = true}, SHIFT(126),
  [320] = {.count = 1, .reusable = true}, REDUCE(aux_sym_prof_item_repeat1, 2),
  [322] = {.count = 1, .reusable = true}, SHIFT(127),
  [324] = {.count = 1, .reusable = true}, SHIFT(128),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_prof_item_repeat1, 2), SHIFT_REPEAT(109),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym_prof_item_repeat2, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_int_list, 4),
  [333] = {.count = 2, .reusable = true}, REDUCE(aux_sym_prof_item_repeat2, 2), SHIFT_REPEAT(114),
  [336] = {.count = 1, .reusable = true}, SHIFT(129),
  [338] = {.count = 1, .reusable = true}, SHIFT(131),
  [340] = {.count = 1, .reusable = true}, SHIFT(132),
  [342] = {.count = 1, .reusable = true}, SHIFT(133),
  [344] = {.count = 1, .reusable = true}, SHIFT(134),
  [346] = {.count = 1, .reusable = true}, SHIFT(135),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_prof_item, 7),
  [350] = {.count = 1, .reusable = true}, SHIFT(137),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_prof_item, 8),
  [354] = {.count = 1, .reusable = true}, SHIFT(138),
  [356] = {.count = 1, .reusable = true}, SHIFT(139),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_prof_item, 9),
  [360] = {.count = 1, .reusable = true}, SHIFT(141),
  [362] = {.count = 1, .reusable = true}, SHIFT(142),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_prof_item, 10),
  [366] = {.count = 1, .reusable = true}, SHIFT(143),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_prof_item, 11),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_LBNF() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
