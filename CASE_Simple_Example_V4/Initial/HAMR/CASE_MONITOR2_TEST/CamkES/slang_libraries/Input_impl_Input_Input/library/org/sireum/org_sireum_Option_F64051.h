#ifndef SIREUM_H_org_sireum_Option_F64051
#define SIREUM_H_org_sireum_Option_F64051

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]

#define Option_F64051__eq(this, other) Type__eq(this, other)
#define Option_F64051__ne(this, other) (!Type__eq(this, other))
#define Option_F64051_cprint(this, isOut) Type_cprint(this, isOut)
B Option_F64051__is(STACK_FRAME void *this);
Option_F64051 Option_F64051__as(STACK_FRAME void *this);
inline void Option_F64051_string_(STACK_FRAME String result, Option_F64051 this) {
  Type_string_(CALLER result, this);
}

void Option_F64051_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api result, Option_F64051 this);

#ifdef __cplusplus
}
#endif

#endif