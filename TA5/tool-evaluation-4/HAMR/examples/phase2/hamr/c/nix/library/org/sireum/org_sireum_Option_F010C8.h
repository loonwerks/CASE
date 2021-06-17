#ifndef SIREUM_H_org_sireum_Option_F010C8
#define SIREUM_H_org_sireum_Option_F010C8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]

#define Option_F010C8__eq(this, other) Type__eq(this, other)
#define Option_F010C8__ne(this, other) (!Type__eq(this, other))
#define Option_F010C8_cprint(this, isOut) Type_cprint(this, isOut)
B Option_F010C8__is(STACK_FRAME void *this);
Option_F010C8 Option_F010C8__as(STACK_FRAME void *this);
inline void Option_F010C8_string_(STACK_FRAME String result, Option_F010C8 this) {
  Type_string_(CALLER result, this);
}

void Option_F010C8_get_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api result, Option_F010C8 this);

#ifdef __cplusplus
}
#endif

#endif