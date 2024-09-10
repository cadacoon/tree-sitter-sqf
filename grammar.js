/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  ASSIGNMENT: -1,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  RELATIONAL: 3,
  BINARY: 4,
  ELSE: 5,
  ADD: 6,
  MULTIPLY: 7,
  POWER: 8,
  HASH: 9,
  UNARY: 10,
  NULAR: 11,
};

module.exports = grammar({
  name: "sqf",

  extras: ($) => [$.comment, /\s/, /\\\r?\n/, /\\( |\t|\v|\f)/],

  rules: {
    source_file: ($) => $.statements,

    statements: ($) =>
      seq(
        repeat(choice($.preproc, seq($.expression, ";"))),
        choice($.preproc, seq($.expression, optional(";"))),
      ),
    statement_block: ($) => seq("{", $.statements, "}"),

    expression: ($) =>
      choice(
        $.statement_block,
        $.assignment_expression,
        $.nular_expression,
        $.unary_expression,
        $.binary_expression,
        $.parenthesized_expression,
        $.number,
        $.string,
        $.array,
      ),
    parenthesized_expression: ($) => seq("(", $.expression, ")"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?/,
    string: ($) =>
      choice(seq("'", $.string_content, "'"), seq('"', $.string_content, '"')),
    string_content: (_) => token(prec(-1, /(?:[^"\\]|\\.)*/)),
    array: ($) => seq("[", commaSep(optional($.expression)), "]"),

    assignment_expression: ($) =>
      prec.right(
        PREC.ASSIGNMENT,
        seq(
          field("left", $.identifier),
          field("operator", "="),
          field("right", $.expression),
        ),
      ),

    nular_expression: ($) => prec(PREC.NULAR, $.identifier),

    unary_expression: ($) =>
      prec.left(
        PREC.UNARY,
        seq(
          field("operator", choice("+", "-", "!", "not", $.identifier)),
          field("argument", $.expression),
        ),
      ),

    binary_expression: ($) => {
      const table = [
        ["||", PREC.LOGICAL_OR],
        ["or", PREC.LOGICAL_OR],
        ["&&", PREC.LOGICAL_AND],
        ["and", PREC.LOGICAL_AND],
        ["==", PREC.RELATIONAL],
        ["!=", PREC.RELATIONAL],
        [">", PREC.RELATIONAL],
        [">=", PREC.RELATIONAL],
        ["<=", PREC.RELATIONAL],
        ["<", PREC.RELATIONAL],
        [$.identifier, PREC.BINARY],
        ["else", PREC.ELSE],
        ["+", PREC.ADD],
        ["-", PREC.ADD],
        ["min", PREC.ADD],
        ["max", PREC.ADD],
        ["*", PREC.MULTIPLY],
        ["/", PREC.MULTIPLY],
        ["%", PREC.MULTIPLY],
        ["mod", PREC.ADD],
        ["atan2", PREC.ADD],
        ["^", PREC.POWER],
        ["#", PREC.HASH],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            // @ts-ignore
            precedence,
            seq(
              field("left", $.expression),
              // @ts-ignore
              field("operator", operator),
              field("right", $.expression),
            ),
          );
        }),
      );
    },

    preproc: ($) =>
      choice(
        $.preproc_if,
        $.preproc_ifdef,
        $.preproc_include,
        $.preproc_def,
        $.preproc_def_fun,
        $.preproc_call,
      ),

    preproc_if: ($) =>
      seq(
        "#if",
        field("condition", $.preproc_expression),
        "\n",
        repeat($.expression),
        field(
          "alternative",
          optional(choice($.preproc_else, $.preproc_elif, $.preproc_elifdef)),
        ),
        "#endif",
      ),
    preproc_ifdef: ($) =>
      seq(
        choice("#ifdef", "#ifndef"),
        field("name", $.identifier),
        repeat($.expression),
        field(
          "alternative",
          optional(choice($.preproc_else, $.preproc_elif, $.preproc_elifdef)),
        ),
        "#endif",
      ),
    preproc_else: ($) => seq("#else", repeat($.expression)),
    preproc_elif: ($) =>
      seq(
        "#elif",
        field("condition", $.preproc_expression),
        "\n",
        repeat($.expression),
        field(
          "alternative",
          optional(choice($.preproc_else, $.preproc_elif, $.preproc_elifdef)),
        ),
      ),
    preproc_elifdef: ($) =>
      seq(
        choice("#elifdef", "#elifndef"),
        field("name", $.identifier),
        repeat($.expression),
        field(
          "alternative",
          optional(choice($.preproc_else, $.preproc_elif, $.preproc_elifdef)),
        ),
      ),
    preproc_include: ($) =>
      seq("#include", field("path", $.string), token.immediate(/\r?\n/)),
    preproc_def: ($) =>
      seq(
        "#define",
        field("name", $.identifier),
        field("value", optional($.preproc_arg)),
        token.immediate(/\r?\n/),
      ),
    preproc_def_fun: ($) =>
      seq(
        "#define",
        field("name", $.identifier),
        field("parameters", $.preproc_params),
        field("value", optional($.preproc_arg)),
        token.immediate(/\r?\n/),
      ),
    preproc_call: ($) =>
      seq(
        field("directive", $.preproc_directive),
        field("argument", optional($.preproc_arg)),
        token.immediate(/\r?\n/),
      ),

    preproc_expression: ($) =>
      choice(
        $.identifier,
        alias($.preproc_call_expression, $.call_expression),
        $.number,
        $.string,
        alias($.preproc_unary_expression, $.unary_expression),
        alias($.preproc_binary_expression, $.binary_expression),
        alias($.preproc_parenthesized_expression, $.parenthesized_expression),
      ),
    preproc_parenthesized_expression: ($) =>
      seq("(", $.preproc_expression, ")"),

    preproc_params: ($) =>
      seq(token.immediate("("), commaSep(choice($.identifier, "...")), ")"),
    preproc_arg: (_) => token(prec(-1, /\S([^/\n]|\/[^*]|\\\r?\n)*/)),
    preproc_directive: (_) => /#[ \t]*[a-zA-Z0-9]\w*/,

    preproc_call_expression: ($) =>
      prec(
        15,
        seq(
          field("function", $.identifier),
          field("arguments", alias($.preproc_argument_list, $.argument_list)),
        ),
      ),

    preproc_argument_list: ($) => seq("(", commaSep($.preproc_expression), ")"),

    preproc_unary_expression: ($) =>
      prec.left(
        14,
        seq(
          field("operator", choice("!", "~", "-", "+")),
          field("argument", $.preproc_expression),
        ),
      ),

    preproc_binary_expression: ($) => {
      const table = [
        ["+", 10],
        ["-", 10],
        ["*", 11],
        ["/", 11],
        ["%", 11],
        ["||", 1],
        ["&&", 2],
        ["|", 3],
        ["^", 4],
        ["&", 5],
        ["==", 6],
        ["!=", 6],
        [">", 7],
        [">=", 7],
        ["<=", 7],
        ["<", 7],
        ["<<", 9],
        [">>", 9],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field("left", $.preproc_expression),
              // @ts-ignore
              field("operator", operator),
              field("right", $.preproc_expression),
            ),
          );
        }),
      );
    },

    comment: (_) =>
      token(
        choice(
          seq("//", /(\\+(.|\r?\n)|[^\\\n])*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),
  },
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
