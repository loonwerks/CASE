#ifndef SIREUM_H_org_sireum_Option_A9BD80
#define SIREUM_H_org_sireum_Option_A9BD80

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

#define Option_A9BD80__eq(this, other) Type__eq(this, other)
#define Option_A9BD80__ne(this, other) (!Type__eq(this, other))
#define Option_A9BD80_cprint(this, isOut) Type_cprint(this, isOut)
B Option_A9BD80__is(STACK_FRAME void *this);
Option_A9BD80 Option_A9BD80__as(STACK_FRAME void *this);
inline void Option_A9BD80_string_(STACK_FRAME String result, Option_A9BD80 this) {
  Type_string_(CALLER result, this);
}

void Option_A9BD80_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api result, Option_A9BD80 this);

#ifdef __cplusplus
}
#endif

#endif