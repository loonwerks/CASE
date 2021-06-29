#ifndef SIREUM_H_org_sireum_Option_63CBE2
#define SIREUM_H_org_sireum_Option_63CBE2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]

#define Option_63CBE2__eq(this, other) Type__eq(this, other)
#define Option_63CBE2__ne(this, other) (!Type__eq(this, other))
#define Option_63CBE2_cprint(this, isOut) Type_cprint(this, isOut)
B Option_63CBE2__is(STACK_FRAME void *this);
Option_63CBE2 Option_63CBE2__as(STACK_FRAME void *this);
inline void Option_63CBE2_string_(STACK_FRAME String result, Option_63CBE2 this) {
  Type_string_(CALLER result, this);
}

void Option_63CBE2_get_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api result, Option_63CBE2 this);

#ifdef __cplusplus
}
#endif

#endif