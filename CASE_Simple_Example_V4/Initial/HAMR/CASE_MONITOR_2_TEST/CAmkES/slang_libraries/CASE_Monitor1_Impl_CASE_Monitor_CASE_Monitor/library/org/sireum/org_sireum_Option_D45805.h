#ifndef SIREUM_H_org_sireum_Option_D45805
#define SIREUM_H_org_sireum_Option_D45805

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

#define Option_D45805__eq(this, other) Type__eq(this, other)
#define Option_D45805__ne(this, other) (!Type__eq(this, other))
#define Option_D45805_cprint(this, isOut) Type_cprint(this, isOut)
B Option_D45805__is(STACK_FRAME void *this);
Option_D45805 Option_D45805__as(STACK_FRAME void *this);
inline void Option_D45805_string_(STACK_FRAME String result, Option_D45805 this) {
  Type_string_(CALLER result, this);
}

void Option_D45805_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api result, Option_D45805 this);

#ifdef __cplusplus
}
#endif

#endif