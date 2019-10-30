#ifndef SIREUM_H_org_sireum_MS_F55A18
#define SIREUM_H_org_sireum_MS_F55A18
#include <types.h>

// MS[Z, Option[art.UPort]]
B MS_F55A18__eq(MS_F55A18 this, MS_F55A18 other);
void MS_F55A18_create(STACK_FRAME MS_F55A18 result, Z size, Option_6239DB dflt);
void MS_F55A18_zreate(STACK_FRAME MS_F55A18 result, Z size, Option_6239DB dflt);
void MS_F55A18__append(STACK_FRAME MS_F55A18 result, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__prepend(STACK_FRAME MS_F55A18 result, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__appendAll(STACK_FRAME MS_F55A18 result, MS_F55A18 this, MS_F55A18 other);
void MS_F55A18__remove(STACK_FRAME MS_F55A18 result, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__removeAll(STACK_FRAME MS_F55A18 result, MS_F55A18 this, MS_F55A18 other);
void MS_F55A18_cprint(MS_F55A18 this, B isOut);
void MS_F55A18_string(STACK_FRAME String result, MS_F55A18 this);

static inline B MS_F55A18__ne(MS_F55A18 this, MS_F55A18 other) {
  return !MS_F55A18__eq(this, other);
}


#endif