#ifndef SIREUM_H_org_sireum_Nothing
#define SIREUM_H_org_sireum_Nothing
#include <types.h>

// Nothing

#define Nothing__eq(this, other) Type__eq(this, other)
#define Nothing__ne(this, other) (!Type__eq(this, other))
#define Nothing_cprint(this, isOut) Type_cprint(this, isOut)
B Nothing__is(STACK_FRAME void *this);
Nothing Nothing__as(STACK_FRAME void *this);
static inline void Nothing_string(STACK_FRAME String result, Nothing this) {
  Type_string(CALLER result, this);
}

#endif