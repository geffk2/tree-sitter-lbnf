function separator(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}

function separator_nonempty(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}

function terminator(rule, terminator) {
  return repeat(seq(rule, terminator))
}

function terminator_nonempty(rule, terminator) {
  return repeat1(seq(rule, terminator)) 
}

module.exports = grammar({
  name: "lbnf",

  extras: $ => [
      /\s/,
      $.comment,
    ],

  rules: {
    grammar: $ => repeat(seq($.def, repeat1(';'))),

    def: $ => choice(
      seq($.label, '.', $.cat, '::=', repeat(
        choice(
          $.string,
          $.cat
        )
      )),

      seq('comment', $.string),
      seq('comment', $.string, $.string),
      seq('internal', $.label, '.', $.cat, '::=', repeat(
        choice(
          $.string,
          $.cat
        )
      )),
      seq('token', $.ident, $.reg),
      seq('position', 'token', $.ident, $.reg),
      seq('entrypoints', repeat($.cat)),

      seq('separator', optional('nonempty'), $.cat, $.string),
      seq('terminator', optional('nonempty'), $.cat, $.string),

      seq('delimiters', $.cat, $.string, $.string, 
        optional(
          seq(
            choice(
              'terminator',
              'separator'
            ),
            $.string
          )
        ),
        optional('nonempty')),
      //
      seq('coercions', $.ident, $.integer),

      seq('rules', $.ident, '::=', separator_nonempty(
        choice(
          $.ident, $.string
        ), '|'
      )),

      seq('define', $.ident, repeat(separator($.ident, '')), '=', $.exp),

      seq('layout', repeat($.string)),
      seq('layout', 'stop', repeat($.string)),
      seq('layout', 'toplevel')
    ),

    // define expressions
    exp: $ =>
      choice(
        seq($.exp1,":",$.exp),
        $.exp1
      ),
    exp1: $ =>
      choice(
        seq($.ident,$.list_exp2),
        $.exp2
      ),
    exp2: $ =>
      choice(
        $.ident,
        $.integer,
        $.char,
        $.string,
        $.double,
        seq("[",$.list_exp,"]"),
        seq("(",$.exp,")")
      ),
    list_exp: $ =>
      choice(
        $.exp,
        seq($.exp,",",$.list_exp)
      ),
    list_exp2: $ =>
      choice(
        $.exp2,
        seq($.exp2,$.list_exp2)
      ),

    // exp: $ => separator(seq(
    //   $.exp1,
    //   repeat(':', $.exp1) 
    // ), ','),
    //
    // exp1: $ => choice(
    //   $.exp2,
    //   seq($.ident, repeat($.exp2))
    // ), 
    //
    // exp2: $ => separator_nonempty(
    //   choice(
    //     $.ident, 
    //     $.integer,
    //     $.char,
    //     $.string,
    //     $.double
    //   ), ''),

    cat: $ => separator(choice(
      seq('[', $.cat, ']'),
      $.ident
    ), ','),

    label: $ => choice(
      $.ident,
      '_',
      seq('[', ']'),
      seq('(', ':', ')'),
      seq('(', ':', '[', ']', ')')
    ),

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
    double: $ => /\d+\.\d+(e\-?\d+)?/,
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


