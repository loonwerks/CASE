let _ = print_string "#ifdef __GNUC__\n"
let _ = print_string "#pragma once\n"
let _ = print_string "#include <inttypes.h>\n\n"

let _ = Vale_Inline_X64_Fadd_inline.add1_code_inline ()
let _ = Vale_Inline_X64_Fadd_inline.fadd_code_inline ()
let _ = Vale_Inline_X64_Fadd_inline.fsub_code_inline ()
let _ = Vale_Inline_X64_Fmul_inline.fmul_code_inline ()
let _ = Vale_Inline_X64_Fmul_inline.fmul2_code_inline ()
let _ = Vale_Inline_X64_Fmul_inline.fmul1_code_inline ()
let _ = Vale_Inline_X64_Fswap_inline.cswap2_code_inline ()
let _ = Vale_Inline_X64_Fsqr_inline.fsqr_code_inline ()
let _ = Vale_Inline_X64_Fsqr_inline.fsqr2_code_inline ()

let _ = print_string "#endif"

