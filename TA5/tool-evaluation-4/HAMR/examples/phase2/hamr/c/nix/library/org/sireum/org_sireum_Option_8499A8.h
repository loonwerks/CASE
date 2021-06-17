#ifndef SIREUM_H_org_sireum_Option_8499A8
#define SIREUM_H_org_sireum_Option_8499A8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]

#define Option_8499A8__eq(this, other) Type__eq(this, other)
#define Option_8499A8__ne(this, other) (!Type__eq(this, other))
#define Option_8499A8_cprint(this, isOut) Type_cprint(this, isOut)
B Option_8499A8__is(STACK_FRAME void *this);
Option_8499A8 Option_8499A8__as(STACK_FRAME void *this);
inline void Option_8499A8_string_(STACK_FRAME String result, Option_8499A8 this) {
  Type_string_(CALLER result, this);
}

void Option_8499A8_get_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api result, Option_8499A8 this);

#ifdef __cplusplus
}
#endif

#endif