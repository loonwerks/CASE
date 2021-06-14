#ifndef SIREUM_H_org_sireum_Option_68B166
#define SIREUM_H_org_sireum_Option_68B166

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api]

#define Option_68B166__eq(this, other) Type__eq(this, other)
#define Option_68B166__ne(this, other) (!Type__eq(this, other))
#define Option_68B166_cprint(this, isOut) Type_cprint(this, isOut)
B Option_68B166__is(STACK_FRAME void *this);
Option_68B166 Option_68B166__as(STACK_FRAME void *this);
inline void Option_68B166_string_(STACK_FRAME String result, Option_68B166 this) {
  Type_string_(CALLER result, this);
}

void Option_68B166_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api result, Option_68B166 this);

#ifdef __cplusplus
}
#endif

#endif