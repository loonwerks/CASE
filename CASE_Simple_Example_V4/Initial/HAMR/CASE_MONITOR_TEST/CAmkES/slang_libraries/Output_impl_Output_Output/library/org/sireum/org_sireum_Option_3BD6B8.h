#ifndef SIREUM_H_org_sireum_Option_3BD6B8
#define SIREUM_H_org_sireum_Option_3BD6B8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]

#define Option_3BD6B8__eq(this, other) Type__eq(this, other)
#define Option_3BD6B8__ne(this, other) (!Type__eq(this, other))
#define Option_3BD6B8_cprint(this, isOut) Type_cprint(this, isOut)
B Option_3BD6B8__is(STACK_FRAME void *this);
Option_3BD6B8 Option_3BD6B8__as(STACK_FRAME void *this);
inline void Option_3BD6B8_string_(STACK_FRAME String result, Option_3BD6B8 this) {
  Type_string_(CALLER result, this);
}

void Option_3BD6B8_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api result, Option_3BD6B8 this);

#ifdef __cplusplus
}
#endif

#endif