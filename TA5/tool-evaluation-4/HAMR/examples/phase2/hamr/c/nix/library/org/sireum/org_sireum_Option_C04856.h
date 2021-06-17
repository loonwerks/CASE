#ifndef SIREUM_H_org_sireum_Option_C04856
#define SIREUM_H_org_sireum_Option_C04856

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]

#define Option_C04856__eq(this, other) Type__eq(this, other)
#define Option_C04856__ne(this, other) (!Type__eq(this, other))
#define Option_C04856_cprint(this, isOut) Type_cprint(this, isOut)
B Option_C04856__is(STACK_FRAME void *this);
Option_C04856 Option_C04856__as(STACK_FRAME void *this);
inline void Option_C04856_string_(STACK_FRAME String result, Option_C04856 this) {
  Type_string_(CALLER result, this);
}

void Option_C04856_get_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api result, Option_C04856 this);

#ifdef __cplusplus
}
#endif

#endif