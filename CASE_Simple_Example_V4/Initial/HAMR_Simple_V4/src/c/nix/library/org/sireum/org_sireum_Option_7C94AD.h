#ifndef SIREUM_H_org_sireum_Option_7C94AD
#define SIREUM_H_org_sireum_Option_7C94AD

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]

#define Option_7C94AD__eq(this, other) Type__eq(this, other)
#define Option_7C94AD__ne(this, other) (!Type__eq(this, other))
#define Option_7C94AD_cprint(this, isOut) Type_cprint(this, isOut)
B Option_7C94AD__is(STACK_FRAME void *this);
Option_7C94AD Option_7C94AD__as(STACK_FRAME void *this);
inline void Option_7C94AD_string_(STACK_FRAME String result, Option_7C94AD this) {
  Type_string_(CALLER result, this);
}

void Option_7C94AD_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api result, Option_7C94AD this);

#ifdef __cplusplus
}
#endif

#endif