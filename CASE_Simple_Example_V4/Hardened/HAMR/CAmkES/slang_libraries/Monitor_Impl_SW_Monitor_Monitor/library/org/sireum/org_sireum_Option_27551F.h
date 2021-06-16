#ifndef SIREUM_H_org_sireum_Option_27551F
#define SIREUM_H_org_sireum_Option_27551F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR.SW.Monitor_Impl_Initialization_Api]

#define Option_27551F__eq(this, other) Type__eq(this, other)
#define Option_27551F__ne(this, other) (!Type__eq(this, other))
#define Option_27551F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_27551F__is(STACK_FRAME void *this);
Option_27551F Option_27551F__as(STACK_FRAME void *this);
inline void Option_27551F_string_(STACK_FRAME String result, Option_27551F this) {
  Type_string_(CALLER result, this);
}

void Option_27551F_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api result, Option_27551F this);

#ifdef __cplusplus
}
#endif

#endif