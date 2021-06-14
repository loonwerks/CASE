#ifndef SIREUM_H_org_sireum_Option_5DEDCA
#define SIREUM_H_org_sireum_Option_5DEDCA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]

#define Option_5DEDCA__eq(this, other) Type__eq(this, other)
#define Option_5DEDCA__ne(this, other) (!Type__eq(this, other))
#define Option_5DEDCA_cprint(this, isOut) Type_cprint(this, isOut)
B Option_5DEDCA__is(STACK_FRAME void *this);
Option_5DEDCA Option_5DEDCA__as(STACK_FRAME void *this);
inline void Option_5DEDCA_string_(STACK_FRAME String result, Option_5DEDCA this) {
  Type_string_(CALLER result, this);
}

void Option_5DEDCA_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api result, Option_5DEDCA this);

#ifdef __cplusplus
}
#endif

#endif