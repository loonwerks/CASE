#ifndef SIREUM_H_org_sireum_Option_4B18FC
#define SIREUM_H_org_sireum_Option_4B18FC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]

#define Option_4B18FC__eq(this, other) Type__eq(this, other)
#define Option_4B18FC__ne(this, other) (!Type__eq(this, other))
#define Option_4B18FC_cprint(this, isOut) Type_cprint(this, isOut)
B Option_4B18FC__is(STACK_FRAME void *this);
Option_4B18FC Option_4B18FC__as(STACK_FRAME void *this);
inline void Option_4B18FC_string_(STACK_FRAME String result, Option_4B18FC this) {
  Type_string_(CALLER result, this);
}

void Option_4B18FC_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api result, Option_4B18FC this);

#ifdef __cplusplus
}
#endif

#endif