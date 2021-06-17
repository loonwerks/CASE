#ifndef SIREUM_H_org_sireum_Option_9CA19A
#define SIREUM_H_org_sireum_Option_9CA19A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]

#define Option_9CA19A__eq(this, other) Type__eq(this, other)
#define Option_9CA19A__ne(this, other) (!Type__eq(this, other))
#define Option_9CA19A_cprint(this, isOut) Type_cprint(this, isOut)
B Option_9CA19A__is(STACK_FRAME void *this);
Option_9CA19A Option_9CA19A__as(STACK_FRAME void *this);
inline void Option_9CA19A_string_(STACK_FRAME String result, Option_9CA19A this) {
  Type_string_(CALLER result, this);
}

void Option_9CA19A_get_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api result, Option_9CA19A this);

#ifdef __cplusplus
}
#endif

#endif