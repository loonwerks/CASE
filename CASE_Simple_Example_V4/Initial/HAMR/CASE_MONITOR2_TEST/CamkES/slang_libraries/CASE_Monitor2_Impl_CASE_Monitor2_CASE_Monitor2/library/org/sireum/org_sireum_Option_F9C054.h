#ifndef SIREUM_H_org_sireum_Option_F9C054
#define SIREUM_H_org_sireum_Option_F9C054

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]

#define Option_F9C054__eq(this, other) Type__eq(this, other)
#define Option_F9C054__ne(this, other) (!Type__eq(this, other))
#define Option_F9C054_cprint(this, isOut) Type_cprint(this, isOut)
B Option_F9C054__is(STACK_FRAME void *this);
Option_F9C054 Option_F9C054__as(STACK_FRAME void *this);
inline void Option_F9C054_string_(STACK_FRAME String result, Option_F9C054 this) {
  Type_string_(CALLER result, this);
}

void Option_F9C054_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api result, Option_F9C054 this);

#ifdef __cplusplus
}
#endif

#endif