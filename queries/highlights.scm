; Literals

(string) @string
(escape_sequence) @string.escape

(hex_blob
  "x" @symbol
  (_) @string)

(esc_blob
  "b" @symbol
  (_) @string)

(datetime
  "d" @symbol
  (_) @string.special)

(number) @number

(float) @float

(boolean) @boolean

(null) @constant.builtin

; Punctuation

[
  ","
  ":"
] @punctuation.delimiter

[ "{" "}" ] @punctuation.bracket

[ "[" "]" ] @punctuation.bracket

[ "<" ">" ] @punctuation.bracket

; Comments

(comment) @comment @spell

; Errors

(ERROR) @error
