#ifndef SIREUM_H_org_sireum_Option_849849
#define SIREUM_H_org_sireum_Option_849849

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]

#define Option_849849__eq(this, other) Type__eq(this, other)
#define Option_849849__ne(this, other) (!Type__eq(this, other))
#define Option_849849_cprint(this, isOut) Type_cprint(this, isOut)
B Option_849849__is(STACK_FRAME void *this);
Option_849849 Option_849849__as(STACK_FRAME void *this);
inline void Option_849849_string_(STACK_FRAME String result, Option_849849 this) {
  Type_string_(CALLER result, this);
}

void Option_849849_get_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api result, Option_849849 this);

#ifdef __cplusplus
}
#endif

#endif