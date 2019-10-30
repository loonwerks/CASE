#ifndef SIREUM_H_org_sireum_IS_820232
#define SIREUM_H_org_sireum_IS_820232
#include <types.h>

// IS[Z, art.UPort]
B IS_820232__eq(IS_820232 this, IS_820232 other);
void IS_820232_create(STACK_FRAME IS_820232 result, Z size, art_UPort dflt);
void IS_820232_zreate(STACK_FRAME IS_820232 result, Z size, art_UPort dflt);
void IS_820232__append(STACK_FRAME IS_820232 result, IS_820232 this, art_UPort value);
void IS_820232__prepend(STACK_FRAME IS_820232 result, IS_820232 this, art_UPort value);
void IS_820232__appendAll(STACK_FRAME IS_820232 result, IS_820232 this, IS_820232 other);
void IS_820232__remove(STACK_FRAME IS_820232 result, IS_820232 this, art_UPort value);
void IS_820232__removeAll(STACK_FRAME IS_820232 result, IS_820232 this, IS_820232 other);
void IS_820232_cprint(IS_820232 this, B isOut);
void IS_820232_string(STACK_FRAME String result, IS_820232 this);

static inline B IS_820232__ne(IS_820232 this, IS_820232 other) {
  return !IS_820232__eq(this, other);
}


#endif