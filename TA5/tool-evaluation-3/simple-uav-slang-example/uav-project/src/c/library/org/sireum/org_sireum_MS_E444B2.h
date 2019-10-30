#ifndef SIREUM_H_org_sireum_MS_E444B2
#define SIREUM_H_org_sireum_MS_E444B2
#include <types.h>

// MS[Z, IS[Z, Z]]
B MS_E444B2__eq(MS_E444B2 this, MS_E444B2 other);
void MS_E444B2_create(STACK_FRAME MS_E444B2 result, Z size, IS_82ABD8 dflt);
void MS_E444B2_zreate(STACK_FRAME MS_E444B2 result, Z size, IS_82ABD8 dflt);
void MS_E444B2__append(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__prepend(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__appendAll(STACK_FRAME MS_E444B2 result, MS_E444B2 this, MS_E444B2 other);
void MS_E444B2__remove(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__removeAll(STACK_FRAME MS_E444B2 result, MS_E444B2 this, MS_E444B2 other);
void MS_E444B2_cprint(MS_E444B2 this, B isOut);
void MS_E444B2_string(STACK_FRAME String result, MS_E444B2 this);

static inline B MS_E444B2__ne(MS_E444B2 this, MS_E444B2 other) {
  return !MS_E444B2__eq(this, other);
}


#endif