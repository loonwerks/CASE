#ifndef SIREUM_H_org_sireum_Option_7BBFBE
#define SIREUM_H_org_sireum_Option_7BBFBE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[art.Bridge]

#define Option_7BBFBE__eq(this, other) Type__eq(this, other)
#define Option_7BBFBE__ne(this, other) (!Type__eq(this, other))
#define Option_7BBFBE_cprint(this, isOut) Type_cprint(this, isOut)
B Option_7BBFBE__is(STACK_FRAME void *this);
Option_7BBFBE Option_7BBFBE__as(STACK_FRAME void *this);
inline void Option_7BBFBE_string_(STACK_FRAME String result, Option_7BBFBE this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif