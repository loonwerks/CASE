#ifndef SIREUM_H_org_sireum_Option_9DEC86
#define SIREUM_H_org_sireum_Option_9DEC86

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]

#define Option_9DEC86__eq(this, other) Type__eq(this, other)
#define Option_9DEC86__ne(this, other) (!Type__eq(this, other))
#define Option_9DEC86_cprint(this, isOut) Type_cprint(this, isOut)
B Option_9DEC86__is(STACK_FRAME void *this);
Option_9DEC86 Option_9DEC86__as(STACK_FRAME void *this);
inline void Option_9DEC86_string_(STACK_FRAME String result, Option_9DEC86 this) {
  Type_string_(CALLER result, this);
}

void Option_9DEC86_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api result, Option_9DEC86 this);

#ifdef __cplusplus
}
#endif

#endif