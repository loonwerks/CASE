#ifndef SIREUM_H_org_sireum_Option_6F33AF
#define SIREUM_H_org_sireum_Option_6F33AF

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]

#define Option_6F33AF__eq(this, other) Type__eq(this, other)
#define Option_6F33AF__ne(this, other) (!Type__eq(this, other))
#define Option_6F33AF_cprint(this, isOut) Type_cprint(this, isOut)
B Option_6F33AF__is(STACK_FRAME void *this);
Option_6F33AF Option_6F33AF__as(STACK_FRAME void *this);
inline void Option_6F33AF_string_(STACK_FRAME String result, Option_6F33AF this) {
  Type_string_(CALLER result, this);
}

void Option_6F33AF_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api result, Option_6F33AF this);

#ifdef __cplusplus
}
#endif

#endif