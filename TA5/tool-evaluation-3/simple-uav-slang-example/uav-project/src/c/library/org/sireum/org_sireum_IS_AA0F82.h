#ifndef SIREUM_H_org_sireum_IS_AA0F82
#define SIREUM_H_org_sireum_IS_AA0F82
#include <types.h>

// IS[Z, (Z, Z)]
B IS_AA0F82__eq(IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82_create(STACK_FRAME IS_AA0F82 result, Z size, Tuple2_EC3B57 dflt);
void IS_AA0F82_zreate(STACK_FRAME IS_AA0F82 result, Z size, Tuple2_EC3B57 dflt);
void IS_AA0F82__append(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__prepend(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__appendAll(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82__remove(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__removeAll(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82_cprint(IS_AA0F82 this, B isOut);
void IS_AA0F82_string(STACK_FRAME String result, IS_AA0F82 this);

static inline B IS_AA0F82__ne(IS_AA0F82 this, IS_AA0F82 other) {
  return !IS_AA0F82__eq(this, other);
}


#endif