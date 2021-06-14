#ifndef SIREUM_H_org_sireum_Option_EE5DBF
#define SIREUM_H_org_sireum_Option_EE5DBF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]

#define Option_EE5DBF__eq(this, other) Type__eq(this, other)
#define Option_EE5DBF__ne(this, other) (!Type__eq(this, other))
#define Option_EE5DBF_cprint(this, isOut) Type_cprint(this, isOut)
B Option_EE5DBF__is(STACK_FRAME void *this);
Option_EE5DBF Option_EE5DBF__as(STACK_FRAME void *this);
inline void Option_EE5DBF_string_(STACK_FRAME String result, Option_EE5DBF this) {
  Type_string_(CALLER result, this);
}

void Option_EE5DBF_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api result, Option_EE5DBF this);

#ifdef __cplusplus
}
#endif

#endif