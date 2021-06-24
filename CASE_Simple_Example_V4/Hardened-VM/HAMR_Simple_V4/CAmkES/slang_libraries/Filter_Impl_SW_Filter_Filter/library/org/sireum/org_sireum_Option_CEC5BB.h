#ifndef SIREUM_H_org_sireum_Option_CEC5BB
#define SIREUM_H_org_sireum_Option_CEC5BB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]

#define Option_CEC5BB__eq(this, other) Type__eq(this, other)
#define Option_CEC5BB__ne(this, other) (!Type__eq(this, other))
#define Option_CEC5BB_cprint(this, isOut) Type_cprint(this, isOut)
B Option_CEC5BB__is(STACK_FRAME void *this);
Option_CEC5BB Option_CEC5BB__as(STACK_FRAME void *this);
inline void Option_CEC5BB_string_(STACK_FRAME String result, Option_CEC5BB this) {
  Type_string_(CALLER result, this);
}

void Option_CEC5BB_get_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api result, Option_CEC5BB this);

#ifdef __cplusplus
}
#endif

#endif