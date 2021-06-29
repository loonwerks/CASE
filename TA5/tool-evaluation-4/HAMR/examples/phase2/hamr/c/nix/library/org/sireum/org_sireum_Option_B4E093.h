#ifndef SIREUM_H_org_sireum_Option_B4E093
#define SIREUM_H_org_sireum_Option_B4E093

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]

#define Option_B4E093__eq(this, other) Type__eq(this, other)
#define Option_B4E093__ne(this, other) (!Type__eq(this, other))
#define Option_B4E093_cprint(this, isOut) Type_cprint(this, isOut)
B Option_B4E093__is(STACK_FRAME void *this);
Option_B4E093 Option_B4E093__as(STACK_FRAME void *this);
inline void Option_B4E093_string_(STACK_FRAME String result, Option_B4E093 this) {
  Type_string_(CALLER result, this);
}

void Option_B4E093_get_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api result, Option_B4E093 this);

#ifdef __cplusplus
}
#endif

#endif