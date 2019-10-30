#ifndef SIREUM_H_org_sireum_Option_8E9F45
#define SIREUM_H_org_sireum_Option_8E9F45
#include <types.h>

// Option[art.DataContent]

#define Option_8E9F45__eq(this, other) Type__eq(this, other)
#define Option_8E9F45__ne(this, other) (!Type__eq(this, other))
#define Option_8E9F45_cprint(this, isOut) Type_cprint(this, isOut)
B Option_8E9F45__is(STACK_FRAME void *this);
Option_8E9F45 Option_8E9F45__as(STACK_FRAME void *this);
static inline void Option_8E9F45_string(STACK_FRAME String result, Option_8E9F45 this) {
  Type_string(CALLER result, this);
}

B Option_8E9F45_nonEmpty_(STACK_FRAME Option_8E9F45 this);

#endif