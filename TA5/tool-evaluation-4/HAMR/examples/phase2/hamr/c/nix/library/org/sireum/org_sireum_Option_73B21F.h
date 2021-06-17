#ifndef SIREUM_H_org_sireum_Option_73B21F
#define SIREUM_H_org_sireum_Option_73B21F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.UxAS_thr_Impl_Operational_Api]

#define Option_73B21F__eq(this, other) Type__eq(this, other)
#define Option_73B21F__ne(this, other) (!Type__eq(this, other))
#define Option_73B21F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_73B21F__is(STACK_FRAME void *this);
Option_73B21F Option_73B21F__as(STACK_FRAME void *this);
inline void Option_73B21F_string_(STACK_FRAME String result, Option_73B21F this) {
  Type_string_(CALLER result, this);
}

void Option_73B21F_get_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api result, Option_73B21F this);

#ifdef __cplusplus
}
#endif

#endif