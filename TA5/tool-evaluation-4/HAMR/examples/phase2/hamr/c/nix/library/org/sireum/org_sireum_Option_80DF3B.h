#ifndef SIREUM_H_org_sireum_Option_80DF3B
#define SIREUM_H_org_sireum_Option_80DF3B

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]

#define Option_80DF3B__eq(this, other) Type__eq(this, other)
#define Option_80DF3B__ne(this, other) (!Type__eq(this, other))
#define Option_80DF3B_cprint(this, isOut) Type_cprint(this, isOut)
B Option_80DF3B__is(STACK_FRAME void *this);
Option_80DF3B Option_80DF3B__as(STACK_FRAME void *this);
inline void Option_80DF3B_string_(STACK_FRAME String result, Option_80DF3B this) {
  Type_string_(CALLER result, this);
}

void Option_80DF3B_get_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api result, Option_80DF3B this);

#ifdef __cplusplus
}
#endif

#endif