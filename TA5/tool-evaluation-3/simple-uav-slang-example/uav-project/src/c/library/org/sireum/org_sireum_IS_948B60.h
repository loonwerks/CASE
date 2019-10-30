#ifndef SIREUM_H_org_sireum_IS_948B60
#define SIREUM_H_org_sireum_IS_948B60
#include <types.h>

// IS[Z, String]
B IS_948B60__eq(IS_948B60 this, IS_948B60 other);
void IS_948B60_create(STACK_FRAME IS_948B60 result, Z size, String dflt);
void IS_948B60_zreate(STACK_FRAME IS_948B60 result, Z size, String dflt);
void IS_948B60__append(STACK_FRAME IS_948B60 result, IS_948B60 this, String value);
void IS_948B60__prepend(STACK_FRAME IS_948B60 result, IS_948B60 this, String value);
void IS_948B60__appendAll(STACK_FRAME IS_948B60 result, IS_948B60 this, IS_948B60 other);
void IS_948B60__remove(STACK_FRAME IS_948B60 result, IS_948B60 this, String value);
void IS_948B60__removeAll(STACK_FRAME IS_948B60 result, IS_948B60 this, IS_948B60 other);
void IS_948B60_cprint(IS_948B60 this, B isOut);
void IS_948B60_string(STACK_FRAME String result, IS_948B60 this);

static inline B IS_948B60__ne(IS_948B60 this, IS_948B60 other) {
  return !IS_948B60__eq(this, other);
}


#endif