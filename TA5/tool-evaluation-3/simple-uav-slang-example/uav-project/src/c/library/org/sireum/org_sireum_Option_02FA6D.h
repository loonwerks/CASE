#ifndef SIREUM_H_org_sireum_Option_02FA6D
#define SIREUM_H_org_sireum_Option_02FA6D
#include <types.h>

// Option[(Z, art.DataContent)]

#define Option_02FA6D__eq(this, other) Type__eq(this, other)
#define Option_02FA6D__ne(this, other) (!Type__eq(this, other))
#define Option_02FA6D_cprint(this, isOut) Type_cprint(this, isOut)
B Option_02FA6D__is(STACK_FRAME void *this);
Option_02FA6D Option_02FA6D__as(STACK_FRAME void *this);
static inline void Option_02FA6D_string(STACK_FRAME String result, Option_02FA6D this) {
  Type_string(CALLER result, this);
}

B Option_02FA6D_isEmpty_(STACK_FRAME Option_02FA6D this);

#endif