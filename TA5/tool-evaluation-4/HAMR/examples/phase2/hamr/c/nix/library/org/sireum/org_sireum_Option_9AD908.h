#ifndef SIREUM_H_org_sireum_Option_9AD908
#define SIREUM_H_org_sireum_Option_9AD908

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.UxAS_thr_Impl_Initialization_Api]

#define Option_9AD908__eq(this, other) Type__eq(this, other)
#define Option_9AD908__ne(this, other) (!Type__eq(this, other))
#define Option_9AD908_cprint(this, isOut) Type_cprint(this, isOut)
B Option_9AD908__is(STACK_FRAME void *this);
Option_9AD908 Option_9AD908__as(STACK_FRAME void *this);
inline void Option_9AD908_string_(STACK_FRAME String result, Option_9AD908 this) {
  Type_string_(CALLER result, this);
}

void Option_9AD908_get_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api result, Option_9AD908 this);

#ifdef __cplusplus
}
#endif

#endif