#ifndef SIREUM_H_org_sireum_Option_31DBF5
#define SIREUM_H_org_sireum_Option_31DBF5

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]

#define Option_31DBF5__eq(this, other) Type__eq(this, other)
#define Option_31DBF5__ne(this, other) (!Type__eq(this, other))
#define Option_31DBF5_cprint(this, isOut) Type_cprint(this, isOut)
B Option_31DBF5__is(STACK_FRAME void *this);
Option_31DBF5 Option_31DBF5__as(STACK_FRAME void *this);
inline void Option_31DBF5_string_(STACK_FRAME String result, Option_31DBF5 this) {
  Type_string_(CALLER result, this);
}

void Option_31DBF5_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api result, Option_31DBF5 this);

#ifdef __cplusplus
}
#endif

#endif