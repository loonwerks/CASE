#ifndef SIREUM_H_org_sireum_Nothing
#define SIREUM_H_org_sireum_Nothing

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Nothing

#define Nothing__eq(this, other) Type__eq(this, other)
#define Nothing__ne(this, other) (!Type__eq(this, other))
#define Nothing_cprint(this, isOut) Type_cprint(this, isOut)
B Nothing__is(STACK_FRAME void *this);
Nothing Nothing__as(STACK_FRAME void *this);
inline void Nothing_string_(STACK_FRAME String result, Nothing this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif