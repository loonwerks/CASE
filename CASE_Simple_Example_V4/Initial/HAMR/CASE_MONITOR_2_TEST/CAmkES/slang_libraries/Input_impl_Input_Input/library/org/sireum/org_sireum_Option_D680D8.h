#ifndef SIREUM_H_org_sireum_Option_D680D8
#define SIREUM_H_org_sireum_Option_D680D8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]

#define Option_D680D8__eq(this, other) Type__eq(this, other)
#define Option_D680D8__ne(this, other) (!Type__eq(this, other))
#define Option_D680D8_cprint(this, isOut) Type_cprint(this, isOut)
B Option_D680D8__is(STACK_FRAME void *this);
Option_D680D8 Option_D680D8__as(STACK_FRAME void *this);
inline void Option_D680D8_string_(STACK_FRAME String result, Option_D680D8 this) {
  Type_string_(CALLER result, this);
}

void Option_D680D8_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api result, Option_D680D8 this);

#ifdef __cplusplus
}
#endif

#endif