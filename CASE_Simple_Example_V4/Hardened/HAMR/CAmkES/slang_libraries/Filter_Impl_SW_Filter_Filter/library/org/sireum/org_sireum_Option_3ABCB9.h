#ifndef SIREUM_H_org_sireum_Option_3ABCB9
#define SIREUM_H_org_sireum_Option_3ABCB9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.Filter_Impl_Initialization_Api]

#define Option_3ABCB9__eq(this, other) Type__eq(this, other)
#define Option_3ABCB9__ne(this, other) (!Type__eq(this, other))
#define Option_3ABCB9_cprint(this, isOut) Type_cprint(this, isOut)
B Option_3ABCB9__is(STACK_FRAME void *this);
Option_3ABCB9 Option_3ABCB9__as(STACK_FRAME void *this);
inline void Option_3ABCB9_string_(STACK_FRAME String result, Option_3ABCB9 this) {
  Type_string_(CALLER result, this);
}

void Option_3ABCB9_get_(STACK_FRAME HAMR_SW_Filter_Impl_Initialization_Api result, Option_3ABCB9 this);

#ifdef __cplusplus
}
#endif

#endif