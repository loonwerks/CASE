#ifndef SIREUM_H_org_sireum_Option_EA4AEC
#define SIREUM_H_org_sireum_Option_EA4AEC

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api]

#define Option_EA4AEC__eq(this, other) Type__eq(this, other)
#define Option_EA4AEC__ne(this, other) (!Type__eq(this, other))
#define Option_EA4AEC_cprint(this, isOut) Type_cprint(this, isOut)
B Option_EA4AEC__is(STACK_FRAME void *this);
Option_EA4AEC Option_EA4AEC__as(STACK_FRAME void *this);
inline void Option_EA4AEC_string_(STACK_FRAME String result, Option_EA4AEC this) {
  Type_string_(CALLER result, this);
}

void Option_EA4AEC_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api result, Option_EA4AEC this);

#ifdef __cplusplus
}
#endif

#endif