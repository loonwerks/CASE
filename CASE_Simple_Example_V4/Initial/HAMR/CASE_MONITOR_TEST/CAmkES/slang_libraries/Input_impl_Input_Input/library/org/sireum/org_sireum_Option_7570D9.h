#ifndef SIREUM_H_org_sireum_Option_7570D9
#define SIREUM_H_org_sireum_Option_7570D9

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]

#define Option_7570D9__eq(this, other) Type__eq(this, other)
#define Option_7570D9__ne(this, other) (!Type__eq(this, other))
#define Option_7570D9_cprint(this, isOut) Type_cprint(this, isOut)
B Option_7570D9__is(STACK_FRAME void *this);
Option_7570D9 Option_7570D9__as(STACK_FRAME void *this);
inline void Option_7570D9_string_(STACK_FRAME String result, Option_7570D9 this) {
  Type_string_(CALLER result, this);
}

void Option_7570D9_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api result, Option_7570D9 this);

#ifdef __cplusplus
}
#endif

#endif