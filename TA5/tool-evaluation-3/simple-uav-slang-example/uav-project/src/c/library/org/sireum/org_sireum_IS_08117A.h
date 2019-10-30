#ifndef SIREUM_H_org_sireum_IS_08117A
#define SIREUM_H_org_sireum_IS_08117A
#include <types.h>

// IS[Z, art.UConnection]
B IS_08117A__eq(IS_08117A this, IS_08117A other);
void IS_08117A_create(STACK_FRAME IS_08117A result, Z size, art_UConnection dflt);
void IS_08117A_zreate(STACK_FRAME IS_08117A result, Z size, art_UConnection dflt);
void IS_08117A__append(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value);
void IS_08117A__prepend(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value);
void IS_08117A__appendAll(STACK_FRAME IS_08117A result, IS_08117A this, IS_08117A other);
void IS_08117A__remove(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value);
void IS_08117A__removeAll(STACK_FRAME IS_08117A result, IS_08117A this, IS_08117A other);
void IS_08117A_cprint(IS_08117A this, B isOut);
void IS_08117A_string(STACK_FRAME String result, IS_08117A this);

static inline B IS_08117A__ne(IS_08117A this, IS_08117A other) {
  return !IS_08117A__eq(this, other);
}


#endif