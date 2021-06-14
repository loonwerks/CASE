#ifndef SIREUM_H_org_sireum_Option_ADA761
#define SIREUM_H_org_sireum_Option_ADA761

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

#define Option_ADA761__eq(this, other) Type__eq(this, other)
#define Option_ADA761__ne(this, other) (!Type__eq(this, other))
#define Option_ADA761_cprint(this, isOut) Type_cprint(this, isOut)
B Option_ADA761__is(STACK_FRAME void *this);
Option_ADA761 Option_ADA761__as(STACK_FRAME void *this);
inline void Option_ADA761_string_(STACK_FRAME String result, Option_ADA761 this) {
  Type_string_(CALLER result, this);
}

void Option_ADA761_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api result, Option_ADA761 this);

#ifdef __cplusplus
}
#endif

#endif