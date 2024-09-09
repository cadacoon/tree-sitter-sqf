#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  sym_number_literal = 5,
  anon_sym_SQUOTE = 6,
  anon_sym_DQUOTE = 7,
  sym_string_content = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_BANG = 11,
  anon_sym_not = 12,
  anon_sym_PIPE_PIPE = 13,
  anon_sym_or = 14,
  anon_sym_AMP_AMP = 15,
  anon_sym_and = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_min = 23,
  anon_sym_max = 24,
  anon_sym_STAR = 25,
  anon_sym_SLASH = 26,
  anon_sym_PERCENT = 27,
  anon_sym_mod = 28,
  anon_sym_atan2 = 29,
  anon_sym_CARET = 30,
  anon_sym_POUND = 31,
  anon_sym_EQ = 32,
  sym_comment = 33,
  sym_source_file = 34,
  sym_statements = 35,
  sym_statement = 36,
  sym_statement_block = 37,
  sym_nular_expression = 38,
  sym_string_literal = 39,
  sym_unary_expression = 40,
  sym_binary_expression = 41,
  aux_sym_statements_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_not] = "not",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_or] = "or",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_min] = "min",
  [anon_sym_max] = "max",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_mod] = "mod",
  [anon_sym_atan2] = "atan2",
  [anon_sym_CARET] = "^",
  [anon_sym_POUND] = "#",
  [anon_sym_EQ] = "=",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_statements] = "statements",
  [sym_statement] = "statement",
  [sym_statement_block] = "statement_block",
  [sym_nular_expression] = "nular_expression",
  [sym_string_literal] = "string_literal",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_statements_repeat1] = "statements_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_atan2] = anon_sym_atan2,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_statements] = sym_statements,
  [sym_statement] = sym_statement,
  [sym_statement_block] = sym_statement_block,
  [sym_nular_expression] = sym_nular_expression,
  [sym_string_literal] = sym_string_literal,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_statements_repeat1] = aux_sym_statements_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_block] = {
    .visible = true,
    .named = true,
  },
  [sym_nular_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_left = 2,
  field_operator = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_operator, 0},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 63,
        '"', 49,
        '#', 83,
        '%', 79,
        '&', 6,
        '\'', 48,
        '*', 77,
        '+', 59,
        '-', 61,
        '.', 15,
        '/', 78,
        ';', 29,
        '<', 74,
        '=', 84,
        '>', 71,
      );
      if (lookahead == '\\') SKIP(21);
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '\r') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(67);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '|') ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 17:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 18:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 19:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 20:
      if (eof) ADVANCE(28);
      if (lookahead == '\n') SKIP(27);
      END_STATE();
    case 21:
      if (eof) ADVANCE(28);
      if (lookahead == '\r') SKIP(17);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 22:
      if (eof) ADVANCE(28);
      if (lookahead == '\r') SKIP(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(26);
      END_STATE();
    case 23:
      if (eof) ADVANCE(28);
      if (lookahead == '\r') SKIP(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 24:
      if (eof) ADVANCE(28);
      if (lookahead == '\r') SKIP(20);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(27);
      END_STATE();
    case 25:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 63,
        '"', 49,
        '#', 83,
        '%', 79,
        '&', 6,
        '\'', 48,
        '*', 77,
        '+', 59,
        '-', 61,
        '.', 15,
        '/', 78,
        ';', 29,
        '<', 74,
        '=', 12,
        '>', 71,
      );
      if (lookahead == '\\') SKIP(23);
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(48);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\\') SKIP(22);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 11,
        '#', 83,
        '%', 79,
        '&', 6,
        '*', 77,
        '+', 58,
        '-', 60,
        '/', 78,
        ';', 29,
        '<', 74,
        '=', 12,
        '>', 71,
      );
      if (lookahead == '\\') SKIP(24);
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '|') ADVANCE(13);
      if (lookahead == '}') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_string_content);
      ADVANCE_MAP(
        '*', 52,
        '/', 85,
        '\\', 4,
        '\n', 9,
        '\r', 9,
        '"', 9,
        '$', 9,
        '`', 9,
      );
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(9);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(9);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '`') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\r' ||
          lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '`') ADVANCE(89);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 27},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_atan2] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym_statements] = STATE(35),
    [sym_statement] = STATE(5),
    [sym_statement_block] = STATE(6),
    [sym_nular_expression] = STATE(6),
    [sym_string_literal] = STATE(17),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [aux_sym_statements_repeat1] = STATE(21),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_not] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(7),
    [sym_statement_block] = STATE(6),
    [sym_nular_expression] = STATE(6),
    [sym_string_literal] = STATE(17),
    [sym_unary_expression] = STATE(6),
    [sym_binary_expression] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(7),
    [sym_number_literal] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(15),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_min] = ACTIONS(21),
    [anon_sym_max] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_atan2] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_min] = ACTIONS(25),
    [anon_sym_max] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_atan2] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_min] = ACTIONS(25),
    [anon_sym_max] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_atan2] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_min] = ACTIONS(51),
    [anon_sym_max] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(51),
    [anon_sym_atan2] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_SEMI] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_or] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_and] = ACTIONS(59),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_min] = ACTIONS(59),
    [anon_sym_max] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_mod] = ACTIONS(59),
    [anon_sym_atan2] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(57),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(61),
    [anon_sym_DASH] = ACTIONS(61),
    [anon_sym_PIPE_PIPE] = ACTIONS(61),
    [anon_sym_or] = ACTIONS(63),
    [anon_sym_AMP_AMP] = ACTIONS(61),
    [anon_sym_and] = ACTIONS(63),
    [anon_sym_EQ_EQ] = ACTIONS(61),
    [anon_sym_BANG_EQ] = ACTIONS(61),
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_GT_EQ] = ACTIONS(61),
    [anon_sym_LT_EQ] = ACTIONS(61),
    [anon_sym_LT] = ACTIONS(63),
    [anon_sym_min] = ACTIONS(63),
    [anon_sym_max] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_PERCENT] = ACTIONS(61),
    [anon_sym_mod] = ACTIONS(63),
    [anon_sym_atan2] = ACTIONS(63),
    [anon_sym_CARET] = ACTIONS(61),
    [anon_sym_POUND] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(65),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_min] = ACTIONS(51),
    [anon_sym_max] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(51),
    [anon_sym_atan2] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(69),
    [anon_sym_DASH] = ACTIONS(69),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [anon_sym_or] = ACTIONS(71),
    [anon_sym_AMP_AMP] = ACTIONS(69),
    [anon_sym_and] = ACTIONS(71),
    [anon_sym_EQ_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_GT] = ACTIONS(71),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(69),
    [anon_sym_LT] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(69),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_PERCENT] = ACTIONS(69),
    [anon_sym_mod] = ACTIONS(71),
    [anon_sym_atan2] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(69),
    [anon_sym_POUND] = ACTIONS(69),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [anon_sym_or] = ACTIONS(75),
    [anon_sym_AMP_AMP] = ACTIONS(73),
    [anon_sym_and] = ACTIONS(75),
    [anon_sym_EQ_EQ] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_GT_EQ] = ACTIONS(73),
    [anon_sym_LT_EQ] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_min] = ACTIONS(75),
    [anon_sym_max] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_mod] = ACTIONS(75),
    [anon_sym_atan2] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_min] = ACTIONS(51),
    [anon_sym_max] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(51),
    [anon_sym_atan2] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_min] = ACTIONS(25),
    [anon_sym_max] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_atan2] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_min] = ACTIONS(51),
    [anon_sym_max] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(51),
    [anon_sym_atan2] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_min] = ACTIONS(51),
    [anon_sym_max] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(51),
    [anon_sym_atan2] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_min] = ACTIONS(51),
    [anon_sym_max] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(51),
    [anon_sym_atan2] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [anon_sym_PIPE_PIPE] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_AMP_AMP] = ACTIONS(23),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(25),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [anon_sym_min] = ACTIONS(25),
    [anon_sym_max] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_mod] = ACTIONS(25),
    [anon_sym_atan2] = ACTIONS(25),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(19),
    [anon_sym_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_or] = ACTIONS(21),
    [anon_sym_AMP_AMP] = ACTIONS(19),
    [anon_sym_and] = ACTIONS(21),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_min] = ACTIONS(21),
    [anon_sym_max] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_mod] = ACTIONS(21),
    [anon_sym_atan2] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(77),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_or] = ACTIONS(41),
    [anon_sym_AMP_AMP] = ACTIONS(43),
    [anon_sym_and] = ACTIONS(45),
    [anon_sym_EQ_EQ] = ACTIONS(47),
    [anon_sym_BANG_EQ] = ACTIONS(47),
    [anon_sym_GT] = ACTIONS(49),
    [anon_sym_GT_EQ] = ACTIONS(47),
    [anon_sym_LT_EQ] = ACTIONS(47),
    [anon_sym_LT] = ACTIONS(49),
    [anon_sym_min] = ACTIONS(51),
    [anon_sym_max] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(55),
    [anon_sym_PERCENT] = ACTIONS(53),
    [anon_sym_mod] = ACTIONS(51),
    [anon_sym_atan2] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(5), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    STATE(21), 1,
      aux_sym_statements_repeat1,
    STATE(39), 1,
      sym_statements,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [45] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_number_literal,
    ACTIONS(88), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_BANG,
    STATE(17), 1,
      sym_string_literal,
    STATE(18), 1,
      sym_statement,
    STATE(20), 1,
      aux_sym_statements_repeat1,
    ACTIONS(94), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [87] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(8), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    STATE(20), 1,
      aux_sym_statements_repeat1,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [129] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(14), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [168] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(12), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [207] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(13), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [246] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(16), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [285] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(15), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [324] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(3), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [363] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(4), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [402] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(7), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [441] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      sym_number_literal,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_BANG,
    STATE(11), 1,
      sym_statement,
    STATE(17), 1,
      sym_string_literal,
    ACTIONS(15), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    STATE(6), 4,
      sym_statement_block,
      sym_nular_expression,
      sym_unary_expression,
      sym_binary_expression,
  [480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(102), 4,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(100), 5,
      anon_sym_LBRACE,
      sym_number_literal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BANG,
  [501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(102), 4,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(100), 5,
      anon_sym_LBRACE,
      sym_number_literal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BANG,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      sym_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
    ACTIONS(100), 5,
      anon_sym_LBRACE,
      sym_number_literal,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BANG,
  [539] = 2,
    ACTIONS(106), 1,
      sym_string_content,
    ACTIONS(108), 1,
      sym_comment,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
  [553] = 2,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_string_content,
  [560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DQUOTE,
  [574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 45,
  [SMALL_STATE(21)] = 87,
  [SMALL_STATE(22)] = 129,
  [SMALL_STATE(23)] = 168,
  [SMALL_STATE(24)] = 207,
  [SMALL_STATE(25)] = 246,
  [SMALL_STATE(26)] = 285,
  [SMALL_STATE(27)] = 324,
  [SMALL_STATE(28)] = 363,
  [SMALL_STATE(29)] = 402,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 480,
  [SMALL_STATE(32)] = 501,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 539,
  [SMALL_STATE(35)] = 546,
  [SMALL_STATE(36)] = 553,
  [SMALL_STATE(37)] = 560,
  [SMALL_STATE(38)] = 567,
  [SMALL_STATE(39)] = 574,
  [SMALL_STATE(40)] = 581,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nular_expression, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nular_expression, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_block, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_block, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statements_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statements, 3, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sqf(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
