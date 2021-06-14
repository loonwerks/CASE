#ifndef SIREUM_H_org_sireum_Option_7C4B92
#define SIREUM_H_org_sireum_Option_7C4B92

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]

#define Option_7C4B92__eq(this, other) Type__eq(this, other)
#define Option_7C4B92__ne(this, other) (!Type__eq(this, other))
#define Option_7C4B92_cprint(this, isOut) Type_cprint(this, isOut)
B Option_7C4B92__is(STACK_FRAME void *this);
Option_7C4B92 Option_7C4B92__as(STACK_FRAME void *this);
inline void Option_7C4B92_string_(STACK_FRAME String result, Option_7C4B92 this) {
  Type_string_(CALLER result, this);
}

void Option_7C4B92_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api result, Option_7C4B92 this);

#ifdef __cplusplus
}
#endif

#endif