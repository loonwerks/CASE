#ifndef SIREUM_H_org_sireum_Option_54EF1B
#define SIREUM_H_org_sireum_Option_54EF1B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]

#define Option_54EF1B__eq(this, other) Type__eq(this, other)
#define Option_54EF1B__ne(this, other) (!Type__eq(this, other))
#define Option_54EF1B_cprint(this, isOut) Type_cprint(this, isOut)
B Option_54EF1B__is(STACK_FRAME void *this);
Option_54EF1B Option_54EF1B__as(STACK_FRAME void *this);
inline void Option_54EF1B_string_(STACK_FRAME String result, Option_54EF1B this) {
  Type_string_(CALLER result, this);
}

void Option_54EF1B_get_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api result, Option_54EF1B this);

#ifdef __cplusplus
}
#endif

#endif