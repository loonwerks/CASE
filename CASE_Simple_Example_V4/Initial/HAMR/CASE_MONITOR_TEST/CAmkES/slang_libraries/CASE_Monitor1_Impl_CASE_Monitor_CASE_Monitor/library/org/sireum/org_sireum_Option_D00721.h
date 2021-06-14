#ifndef SIREUM_H_org_sireum_Option_D00721
#define SIREUM_H_org_sireum_Option_D00721

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

#define Option_D00721__eq(this, other) Type__eq(this, other)
#define Option_D00721__ne(this, other) (!Type__eq(this, other))
#define Option_D00721_cprint(this, isOut) Type_cprint(this, isOut)
B Option_D00721__is(STACK_FRAME void *this);
Option_D00721 Option_D00721__as(STACK_FRAME void *this);
inline void Option_D00721_string_(STACK_FRAME String result, Option_D00721 this) {
  Type_string_(CALLER result, this);
}

void Option_D00721_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api result, Option_D00721 this);

#ifdef __cplusplus
}
#endif

#endif