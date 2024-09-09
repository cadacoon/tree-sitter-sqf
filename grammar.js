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
      seq(repeat(seq($.statement, ";")), $.statement, optional(";")),
    statement: ($) =>
      choice(
        $.statement_block,
        $.nular_expression,
        $.unary_expression,
        $.binary_expression,
      ),
    statement_block: ($) => seq("{", $.statements, "}"),

    nular_expression: ($) =>
      choice($.identifier, $.number_literal, $.string_literal),
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number_literal: ($) => /[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)?/,
    string_literal: ($) =>
      choice(seq("'", $.string_content, "'"), seq('"', $.string_content, '"')),
    string_content: (_) => token(prec(-1, /([^"`$\\\r\n]|\\(.|\r?\n))+/)),

    unary_expression: ($) =>
      prec.left(
        PREC.UNARY,
        seq(
          field("operator", choice("+", "-", "!", "not", $.identifier)),
          field("argument", $.statement),
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
            precedence,
            seq(
              field("left", $.statement),
              field("operator", operator),
              field("right", $.statement),
            ),
          );
        }),
      );
    },

    assignment_expression: ($) =>
      prec.right(
        PREC.ASSIGNMENT,
        seq(
          field("left", $.identifier),
          field("operator", "="),
          field("right", $.statement),
        ),
      ),

    comment: (_) =>
      token(
        choice(
          seq("//", /(\\+(.|\r?\n)|[^\\\n])*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),
  },
});
