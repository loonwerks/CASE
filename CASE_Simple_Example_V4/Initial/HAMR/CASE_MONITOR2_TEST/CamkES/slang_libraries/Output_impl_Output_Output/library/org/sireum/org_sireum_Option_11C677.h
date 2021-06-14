#ifndef SIREUM_H_org_sireum_Option_11C677
#define SIREUM_H_org_sireum_Option_11C677

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api]

#define Option_11C677__eq(this, other) Type__eq(this, other)
#define Option_11C677__ne(this, other) (!Type__eq(this, other))
#define Option_11C677_cprint(this, isOut) Type_cprint(this, isOut)
B Option_11C677__is(STACK_FRAME void *this);
Option_11C677 Option_11C677__as(STACK_FRAME void *this);
inline void Option_11C677_string_(STACK_FRAME String result, Option_11C677 this) {
  Type_string_(CALLER result, this);
}

void Option_11C677_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api result, Option_11C677 this);

#ifdef __cplusplus
}
#endif

#endif