#ifndef SIREUM_H_org_sireum_Option_6239DB
#define SIREUM_H_org_sireum_Option_6239DB
#include <types.h>

// Option[art.UPort]

#define Option_6239DB__eq(this, other) Type__eq(this, other)
#define Option_6239DB__ne(this, other) (!Type__eq(this, other))
#define Option_6239DB_cprint(this, isOut) Type_cprint(this, isOut)
B Option_6239DB__is(STACK_FRAME void *this);
Option_6239DB Option_6239DB__as(STACK_FRAME void *this);
static inline void Option_6239DB_string(STACK_FRAME String result, Option_6239DB this) {
  Type_string(CALLER result, this);
}

#endif