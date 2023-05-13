#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_LT = 1,
  anon_sym_COMMA = 2,
  anon_sym_GT = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_i = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_DQUOTE = 10,
  sym_string_content = 11,
  aux_sym__escape_sequence_token1 = 12,
  sym_escape_sequence = 13,
  sym_number = 14,
  sym_float = 15,
  anon_sym_d = 16,
  aux_sym_datetime_token1 = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  sym_null = 20,
  anon_sym_x = 21,
  aux_sym_hex_blob_token1 = 22,
  anon_sym_b = 23,
  sym_comment = 24,
  sym_document = 25,
  sym__value = 26,
  sym_meta_map = 27,
  sym__meta_pair = 28,
  sym_map = 29,
  sym_pair = 30,
  sym_imap = 31,
  sym_ipair = 32,
  sym_array = 33,
  sym_string = 34,
  sym__escape_sequence = 35,
  sym_datetime = 36,
  sym_boolean = 37,
  sym_hex_blob = 38,
  sym_esc_blob = 39,
  aux_sym_meta_map_repeat1 = 40,
  aux_sym_meta_map_repeat2 = 41,
  aux_sym_map_repeat1 = 42,
  aux_sym_imap_repeat1 = 43,
  aux_sym_array_repeat1 = 44,
  aux_sym_string_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_i] = "i",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [aux_sym__escape_sequence_token1] = "_escape_sequence_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_float] = "float",
  [anon_sym_d] = "d",
  [aux_sym_datetime_token1] = "datetime_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_x] = "x",
  [aux_sym_hex_blob_token1] = "hex_blob_token1",
  [anon_sym_b] = "b",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_meta_map] = "meta_map",
  [sym__meta_pair] = "_meta_pair",
  [sym_map] = "map",
  [sym_pair] = "pair",
  [sym_imap] = "imap",
  [sym_ipair] = "ipair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_datetime] = "datetime",
  [sym_boolean] = "boolean",
  [sym_hex_blob] = "hex_blob",
  [sym_esc_blob] = "esc_blob",
  [aux_sym_meta_map_repeat1] = "meta_map_repeat1",
  [aux_sym_meta_map_repeat2] = "meta_map_repeat2",
  [aux_sym_map_repeat1] = "map_repeat1",
  [aux_sym_imap_repeat1] = "imap_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [aux_sym__escape_sequence_token1] = aux_sym__escape_sequence_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [anon_sym_d] = anon_sym_d,
  [aux_sym_datetime_token1] = aux_sym_datetime_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null] = sym_null,
  [anon_sym_x] = anon_sym_x,
  [aux_sym_hex_blob_token1] = aux_sym_hex_blob_token1,
  [anon_sym_b] = anon_sym_b,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_meta_map] = sym_meta_map,
  [sym__meta_pair] = sym__meta_pair,
  [sym_map] = sym_map,
  [sym_pair] = sym_pair,
  [sym_imap] = sym_imap,
  [sym_ipair] = sym_ipair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_datetime] = sym_datetime,
  [sym_boolean] = sym_boolean,
  [sym_hex_blob] = sym_hex_blob,
  [sym_esc_blob] = sym_esc_blob,
  [aux_sym_meta_map_repeat1] = aux_sym_meta_map_repeat1,
  [aux_sym_meta_map_repeat2] = aux_sym_meta_map_repeat2,
  [aux_sym_map_repeat1] = aux_sym_map_repeat1,
  [aux_sym_imap_repeat1] = aux_sym_imap_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_i] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_datetime_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_blob_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_meta_map] = {
    .visible = true,
    .named = true,
  },
  [sym__meta_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_map] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_imap] = {
    .visible = true,
    .named = true,
  },
  [sym_ipair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_datetime] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_blob] = {
    .visible = true,
    .named = true,
  },
  [sym_esc_blob] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_meta_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_map_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_imap_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1, .inherited = true},
    {field_value, 1, .inherited = true},
  [2] =
    {field_key, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [4] =
    {field_key, 0},
    {field_value, 2},
  [6] =
    {field_key, 1, .inherited = true},
    {field_key, 2, .inherited = true},
    {field_value, 1, .inherited = true},
    {field_value, 2, .inherited = true},
  [10] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
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
};

static inline bool sym_escape_sequence_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < '?'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '?' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(94);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '0') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '3') ADVANCE(30);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '1') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == '1') ADVANCE(43);
      if (lookahead == '2') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      if (sym_escape_sequence_character_set_1(lookahead)) ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == '{') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(15);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(90);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(6);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(13);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(44);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(51);
      END_STATE();
    case 36:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 37:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 38:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(82);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(67);
      if (lookahead == ']') ADVANCE(68);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(94);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_i);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'u') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == 'Z') ADVANCE(87);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (lookahead == 'Z') ADVANCE(87);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_datetime_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(45);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_hex_blob_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
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
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 95},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__escape_sequence_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(84),
    [sym__value] = STATE(83),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(83),
    [sym_imap] = STATE(83),
    [sym_array] = STATE(83),
    [sym_string] = STATE(83),
    [sym_datetime] = STATE(83),
    [sym_boolean] = STATE(83),
    [sym_hex_blob] = STATE(83),
    [sym_esc_blob] = STATE(83),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_float] = ACTIONS(15),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(21),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(2),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(2),
    [sym_imap] = STATE(2),
    [sym_array] = STATE(2),
    [sym_string] = STATE(2),
    [sym_datetime] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_hex_blob] = STATE(2),
    [sym_esc_blob] = STATE(2),
    [aux_sym_meta_map_repeat1] = STATE(7),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LT] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(30),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_i] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_number] = ACTIONS(47),
    [sym_float] = ACTIONS(47),
    [anon_sym_d] = ACTIONS(50),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_false] = ACTIONS(53),
    [sym_null] = ACTIONS(56),
    [anon_sym_x] = ACTIONS(59),
    [anon_sym_b] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(2),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(2),
    [sym_imap] = STATE(2),
    [sym_array] = STATE(2),
    [sym_string] = STATE(2),
    [sym_datetime] = STATE(2),
    [sym_boolean] = STATE(2),
    [sym_hex_blob] = STATE(2),
    [sym_esc_blob] = STATE(2),
    [aux_sym_meta_map_repeat1] = STATE(5),
    [aux_sym_array_repeat1] = STATE(2),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(69),
    [sym_float] = ACTIONS(69),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(71),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(3),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(3),
    [sym_imap] = STATE(3),
    [sym_array] = STATE(3),
    [sym_string] = STATE(3),
    [sym_datetime] = STATE(3),
    [sym_boolean] = STATE(3),
    [sym_hex_blob] = STATE(3),
    [sym_esc_blob] = STATE(3),
    [aux_sym_meta_map_repeat1] = STATE(6),
    [aux_sym_array_repeat1] = STATE(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(77),
    [sym_float] = ACTIONS(77),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(79),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(34),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(34),
    [sym_imap] = STATE(34),
    [sym_array] = STATE(34),
    [sym_string] = STATE(34),
    [sym_datetime] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_hex_blob] = STATE(34),
    [sym_esc_blob] = STATE(34),
    [aux_sym_meta_map_repeat1] = STATE(24),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(87),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__value] = STATE(34),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(34),
    [sym_imap] = STATE(34),
    [sym_array] = STATE(34),
    [sym_string] = STATE(34),
    [sym_datetime] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_hex_blob] = STATE(34),
    [sym_esc_blob] = STATE(34),
    [aux_sym_meta_map_repeat1] = STATE(24),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(87),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__value] = STATE(34),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(34),
    [sym_imap] = STATE(34),
    [sym_array] = STATE(34),
    [sym_string] = STATE(34),
    [sym_datetime] = STATE(34),
    [sym_boolean] = STATE(34),
    [sym_hex_blob] = STATE(34),
    [sym_esc_blob] = STATE(34),
    [aux_sym_meta_map_repeat1] = STATE(24),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(85),
    [sym_float] = ACTIONS(85),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(87),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__value] = STATE(4),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(4),
    [sym_imap] = STATE(4),
    [sym_array] = STATE(4),
    [sym_string] = STATE(4),
    [sym_datetime] = STATE(4),
    [sym_boolean] = STATE(4),
    [sym_hex_blob] = STATE(4),
    [sym_esc_blob] = STATE(4),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(91),
    [sym_float] = ACTIONS(91),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(93),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__value] = STATE(70),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(70),
    [sym_imap] = STATE(70),
    [sym_array] = STATE(70),
    [sym_string] = STATE(70),
    [sym_datetime] = STATE(70),
    [sym_boolean] = STATE(70),
    [sym_hex_blob] = STATE(70),
    [sym_esc_blob] = STATE(70),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(95),
    [sym_float] = ACTIONS(95),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(97),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__value] = STATE(71),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(71),
    [sym_imap] = STATE(71),
    [sym_array] = STATE(71),
    [sym_string] = STATE(71),
    [sym_datetime] = STATE(71),
    [sym_boolean] = STATE(71),
    [sym_hex_blob] = STATE(71),
    [sym_esc_blob] = STATE(71),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(99),
    [sym_float] = ACTIONS(99),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(101),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__value] = STATE(66),
    [sym_meta_map] = STATE(12),
    [sym_map] = STATE(66),
    [sym_imap] = STATE(66),
    [sym_array] = STATE(66),
    [sym_string] = STATE(66),
    [sym_datetime] = STATE(66),
    [sym_boolean] = STATE(66),
    [sym_hex_blob] = STATE(66),
    [sym_esc_blob] = STATE(66),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_i] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(103),
    [sym_float] = ACTIONS(103),
    [anon_sym_d] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [sym_null] = ACTIONS(105),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_b] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_i,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_d,
    ACTIONS(23), 1,
      anon_sym_x,
    ACTIONS(25), 1,
      anon_sym_b,
    ACTIONS(109), 1,
      sym_null,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(107), 2,
      sym_number,
      sym_float,
    STATE(31), 8,
      sym_map,
      sym_imap,
      sym_array,
      sym_string,
      sym_datetime,
      sym_boolean,
      sym_hex_blob,
      sym_esc_blob,
  [46] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      sym_number,
      sym_float,
    ACTIONS(111), 17,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [73] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      sym_number,
      sym_float,
    ACTIONS(115), 17,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      sym_number,
      sym_float,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_number,
      sym_float,
    ACTIONS(123), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_number,
      sym_float,
    ACTIONS(127), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym_number,
      sym_float,
    ACTIONS(131), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym_number,
      sym_float,
    ACTIONS(135), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      sym_number,
      sym_float,
    ACTIONS(139), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      sym_number,
      sym_float,
    ACTIONS(143), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      sym_number,
      sym_float,
    ACTIONS(147), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      sym_number,
      sym_float,
    ACTIONS(151), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [334] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    ACTIONS(160), 2,
      sym_number,
      sym_float,
    ACTIONS(155), 14,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      sym_number,
      sym_float,
    ACTIONS(162), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      sym_number,
      sym_float,
    ACTIONS(166), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym_number,
      sym_float,
    ACTIONS(170), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 2,
      sym_number,
      sym_float,
    ACTIONS(174), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      sym_number,
      sym_float,
    ACTIONS(178), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      sym_number,
      sym_float,
    ACTIONS(182), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      sym_number,
      sym_float,
    ACTIONS(186), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 2,
      sym_number,
      sym_float,
    ACTIONS(190), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      sym_number,
      sym_float,
    ACTIONS(194), 16,
      ts_builtin_sym_end,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      sym_number,
      sym_float,
    ACTIONS(42), 13,
      anon_sym_LT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      sym_number,
      sym_float,
    ACTIONS(200), 10,
      anon_sym_LBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      sym_number,
      sym_float,
    ACTIONS(204), 10,
      anon_sym_LBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 2,
      sym_number,
      sym_float,
    ACTIONS(208), 10,
      anon_sym_LBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      sym_number,
      sym_float,
    ACTIONS(212), 10,
      anon_sym_LBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      sym_number,
      sym_float,
    ACTIONS(216), 10,
      anon_sym_LBRACE,
      anon_sym_i,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_d,
      anon_sym_true,
      anon_sym_false,
      sym_null,
      anon_sym_x,
      anon_sym_b,
  [721] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_GT,
    STATE(42), 1,
      aux_sym_meta_map_repeat2,
    STATE(43), 1,
      aux_sym_meta_map_repeat1,
    STATE(64), 1,
      sym__meta_pair,
    STATE(79), 1,
      sym_string,
    ACTIONS(224), 2,
      sym_number,
      sym_float,
  [750] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_GT,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(41), 1,
      aux_sym_meta_map_repeat2,
    STATE(45), 1,
      aux_sym_meta_map_repeat1,
    STATE(64), 1,
      sym__meta_pair,
    STATE(79), 1,
      sym_string,
    ACTIONS(234), 2,
      sym_number,
      sym_float,
  [779] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_GT,
    STATE(41), 1,
      aux_sym_meta_map_repeat2,
    STATE(44), 1,
      aux_sym_meta_map_repeat1,
    STATE(64), 1,
      sym__meta_pair,
    STATE(79), 1,
      sym_string,
    ACTIONS(224), 2,
      sym_number,
      sym_float,
  [808] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_GT,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(62), 1,
      sym__meta_pair,
    STATE(79), 1,
      sym_string,
    ACTIONS(224), 2,
      sym_number,
      sym_float,
  [834] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_GT,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(62), 1,
      sym__meta_pair,
    STATE(79), 1,
      sym_string,
    ACTIONS(224), 2,
      sym_number,
      sym_float,
  [860] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(62), 1,
      sym__meta_pair,
    STATE(79), 1,
      sym_string,
    ACTIONS(224), 2,
      sym_number,
      sym_float,
  [883] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_meta_map_repeat1,
    STATE(74), 1,
      sym_string,
    STATE(51), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_meta_map_repeat1,
    ACTIONS(254), 2,
      sym_number,
      sym_float,
    STATE(47), 2,
      sym_ipair,
      aux_sym_imap_repeat1,
  [927] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_meta_map_repeat1,
    STATE(74), 1,
      sym_string,
    STATE(46), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_meta_map_repeat1,
    ACTIONS(265), 2,
      sym_number,
      sym_float,
    STATE(50), 2,
      sym_ipair,
      aux_sym_imap_repeat1,
  [971] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      aux_sym_meta_map_repeat1,
    ACTIONS(265), 2,
      sym_number,
      sym_float,
    STATE(47), 2,
      sym_ipair,
      aux_sym_imap_repeat1,
  [992] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_meta_map_repeat1,
    STATE(74), 1,
      sym_string,
    STATE(51), 2,
      sym_pair,
      aux_sym_map_repeat1,
  [1015] = 4,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      sym_comment,
    STATE(59), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
    ACTIONS(281), 3,
      sym_string_content,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
  [1031] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_GT,
    STATE(40), 1,
      sym__meta_pair,
    STATE(79), 1,
      sym_string,
    ACTIONS(224), 2,
      sym_number,
      sym_float,
  [1051] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(72), 1,
      sym_pair,
    STATE(74), 1,
      sym_string,
  [1073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(69), 1,
      sym_ipair,
    ACTIONS(265), 2,
      sym_number,
      sym_float,
  [1093] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(72), 1,
      sym_pair,
    STATE(74), 1,
      sym_string,
  [1115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(69), 1,
      sym_ipair,
    ACTIONS(265), 2,
      sym_number,
      sym_float,
  [1135] = 4,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    STATE(58), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
    ACTIONS(293), 3,
      sym_string_content,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
  [1151] = 4,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    STATE(58), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
    ACTIONS(298), 3,
      sym_string_content,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
  [1167] = 4,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    STATE(61), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
    ACTIONS(302), 3,
      sym_string_content,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
  [1183] = 4,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    STATE(58), 2,
      sym__escape_sequence,
      aux_sym_string_repeat1,
    ACTIONS(298), 3,
      sym_string_content,
      aux_sym__escape_sequence_token1,
      sym_escape_sequence,
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      sym_number,
      sym_float,
    ACTIONS(306), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DQUOTE,
  [1212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(69), 1,
      sym_ipair,
    ACTIONS(265), 2,
      sym_number,
      sym_float,
  [1229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      sym_number,
      sym_float,
    ACTIONS(310), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DQUOTE,
  [1242] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_meta_map_repeat1,
    STATE(72), 1,
      sym_pair,
    STATE(74), 1,
      sym_string,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      sym_number,
      sym_float,
    ACTIONS(314), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DQUOTE,
  [1274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(49), 1,
      sym_ipair,
    ACTIONS(265), 2,
      sym_number,
      sym_float,
  [1288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_pair,
    STATE(74), 1,
      sym_string,
  [1304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(322), 2,
      sym_number,
      sym_float,
  [1316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(326), 2,
      sym_number,
      sym_float,
  [1328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
  [1346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_datetime_token1,
  [1353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COLON,
  [1360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON,
  [1367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
  [1374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
  [1381] = 2,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_hex_blob_token1,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COLON,
  [1395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
  [1402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
  [1409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
  [1416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 46,
  [SMALL_STATE(14)] = 73,
  [SMALL_STATE(15)] = 100,
  [SMALL_STATE(16)] = 126,
  [SMALL_STATE(17)] = 152,
  [SMALL_STATE(18)] = 178,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 230,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 308,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 364,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 416,
  [SMALL_STATE(28)] = 442,
  [SMALL_STATE(29)] = 468,
  [SMALL_STATE(30)] = 494,
  [SMALL_STATE(31)] = 520,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 572,
  [SMALL_STATE(34)] = 598,
  [SMALL_STATE(35)] = 621,
  [SMALL_STATE(36)] = 641,
  [SMALL_STATE(37)] = 661,
  [SMALL_STATE(38)] = 681,
  [SMALL_STATE(39)] = 701,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 750,
  [SMALL_STATE(42)] = 779,
  [SMALL_STATE(43)] = 808,
  [SMALL_STATE(44)] = 834,
  [SMALL_STATE(45)] = 860,
  [SMALL_STATE(46)] = 883,
  [SMALL_STATE(47)] = 906,
  [SMALL_STATE(48)] = 927,
  [SMALL_STATE(49)] = 950,
  [SMALL_STATE(50)] = 971,
  [SMALL_STATE(51)] = 992,
  [SMALL_STATE(52)] = 1015,
  [SMALL_STATE(53)] = 1031,
  [SMALL_STATE(54)] = 1051,
  [SMALL_STATE(55)] = 1073,
  [SMALL_STATE(56)] = 1093,
  [SMALL_STATE(57)] = 1115,
  [SMALL_STATE(58)] = 1135,
  [SMALL_STATE(59)] = 1151,
  [SMALL_STATE(60)] = 1167,
  [SMALL_STATE(61)] = 1183,
  [SMALL_STATE(62)] = 1199,
  [SMALL_STATE(63)] = 1212,
  [SMALL_STATE(64)] = 1229,
  [SMALL_STATE(65)] = 1242,
  [SMALL_STATE(66)] = 1261,
  [SMALL_STATE(67)] = 1274,
  [SMALL_STATE(68)] = 1288,
  [SMALL_STATE(69)] = 1304,
  [SMALL_STATE(70)] = 1316,
  [SMALL_STATE(71)] = 1328,
  [SMALL_STATE(72)] = 1337,
  [SMALL_STATE(73)] = 1346,
  [SMALL_STATE(74)] = 1353,
  [SMALL_STATE(75)] = 1360,
  [SMALL_STATE(76)] = 1367,
  [SMALL_STATE(77)] = 1374,
  [SMALL_STATE(78)] = 1381,
  [SMALL_STATE(79)] = 1388,
  [SMALL_STATE(80)] = 1395,
  [SMALL_STATE(81)] = 1402,
  [SMALL_STATE(82)] = 1409,
  [SMALL_STATE(83)] = 1416,
  [SMALL_STATE(84)] = 1423,
  [SMALL_STATE(85)] = 1430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(53),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(68),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(76),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(80),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(32),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(85),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(81),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 6),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc_blob, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc_blob, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_map_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_map_repeat1, 2), SHIFT_REPEAT(24),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_map_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_esc_blob, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_esc_blob, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_blob, 4),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_blob, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datetime, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_datetime, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imap, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_imap, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map, 4),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_map, 4, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_map, 4, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_map, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_map, 3, .production_id = 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_map, 4, .production_id = 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_map, 4, .production_id = 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_map, 5, .production_id = 4),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_map, 5, .production_id = 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_map, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_map, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_map_repeat2, 2, .production_id = 5), SHIFT_REPEAT(45),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_map_repeat2, 2, .production_id = 5),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_meta_map_repeat2, 2, .production_id = 5), SHIFT_REPEAT(60),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_map_repeat2, 2, .production_id = 5), SHIFT_REPEAT(79),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imap_repeat1, 2), SHIFT_REPEAT(63),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imap_repeat1, 2),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_imap_repeat1, 2), SHIFT_REPEAT(75),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(65),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_repeat1, 2), SHIFT_REPEAT(60),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(58),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_map_repeat2, 2, .production_id = 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_map_repeat2, 2, .production_id = 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_map_repeat2, 1, .production_id = 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_map_repeat2, 1, .production_id = 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__meta_pair, 3, .production_id = 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__meta_pair, 3, .production_id = 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_imap_repeat1, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ipair, 3, .production_id = 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ipair, 3, .production_id = 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cpon(void) {
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
