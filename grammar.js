

module.exports = grammar({
  name: "lbnf",

  extras: $ => [
      /\s/,
      $.comment,
    ],

  rules: {
    grammar: $ => repeat(seq($.def, ';')),

    def: $ => choice(
      seq($.label, '.', $.cat, '::=', repeat($.item)),
      seq('comment', $.string),
      seq('comment', $.string, $.string),
      seq('internal', $.label, '.', $.cat, '::=', repeat($.item)),
      seq('token', $.ident, $.reg),
      seq('position', 'token', $.ident, $.reg),
      seq('entrypoints', seperate1($.ident)),
      seq('separator', optional('nonempty'), $.cat, $.string),
      seq('terminator', optional('nonempty'), $.cat, $.string),
      seq('coercions', $.ident, $.integer),
      seq('rules', $.ident, '::=', seperate1(repeat($.item), '|')),
      seq('layout', seperate1($.string)),
      seq('layout', 'stop', seperate1($.string)),
      seq('layout', 'toplevel')
    ),
    item: $ => choice(
      $.string,
      $.cat
    ),
    cat: $ => choice(
      seq('[', $.cat, ']'),
      $.ident
    ),
    label: $ => choice(
      $.label_id,
      seq($.label_id, repeat($.prof_item)),
      seq($.label_id, $.label_id, repeat($.prof_item))
    ),
    label_id: $ => choice(
      $.ident,
      '_',
      seq('[', ']'),
      seq('(', ':', ')'),
      seq('(', ':', '[', ']', ')')
    ),
    prof_item: $ => seq('(', '[', seperate($.int_list), ']', ',', '[', seperate($.integer), ']', ')'),
    int_list: $ => seq('[', seperate($.integer), ']'),
    reg2: $ => choice(
      seq($.reg2, $.reg3),
      $.reg3
    ),
    reg1: $ => choice(
      seq($.reg1, '|', $.reg2),
      seq($.reg2, '-', $.reg2),
      $.reg2
    ),
    reg3: $ => choice(
      seq($.reg3, '*'),
      seq($.reg3, '+'),
      seq($.reg3, '?'),
      'eps',
      $.char,
      seq('[', $.string, ']'),
      seq('{', $.string, '}'),
      'digit',
      'letter',
      'upper',
      'lower',
      'char',
      seq('(', $.reg, ')'),
    ),
    reg: $ => $.reg1,

    integer: $ => /\d+/,
    char: $ => seq(
      '\'',
      choice(
        $.escape_sequence,
        token.immediate(/[^\n']/)
      ),
      '\''
    ),
    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence
      )),
      '"'
    ),
    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),
    // char: $ => token(seq('\'', /([^'\n]|\\(.|\n))/, '\'')),
    // string: $ => token(seq('"', /([^"\n]|\\(.|\n))*/, '"')),
    ident: $ => /[a-zA-Z]\w*/,

    comment: $ => token(choice(
      seq('--', /.*/),
      seq('{-', repeat(choice(/[^-]/, /-[^}]/)), '-}')
    )),
  }
});

function seperate(rule, separator=',') {
  return optional(seperate1(rule, separator))
}
function seperate1(rule, separator=',') {
  return seq(rule, repeat(seq(separator, rule)))
}
