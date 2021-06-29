#ifndef SIREUM_H_org_sireum_Option_99834F
#define SIREUM_H_org_sireum_Option_99834F

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]

#define Option_99834F__eq(this, other) Type__eq(this, other)
#define Option_99834F__ne(this, other) (!Type__eq(this, other))
#define Option_99834F_cprint(this, isOut) Type_cprint(this, isOut)
B Option_99834F__is(STACK_FRAME void *this);
Option_99834F Option_99834F__as(STACK_FRAME void *this);
inline void Option_99834F_string_(STACK_FRAME String result, Option_99834F this) {
  Type_string_(CALLER result, this);
}

void Option_99834F_get_(STACK_FRAME HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api result, Option_99834F this);

#ifdef __cplusplus
}
#endif

#endif