#ifndef SIREUM_H_org_sireum_Option_882048
#define SIREUM_H_org_sireum_Option_882048

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[Z]

#define Option_882048__eq(this, other) Type__eq(this, other)
#define Option_882048__ne(this, other) (!Type__eq(this, other))
#define Option_882048_cprint(this, isOut) Type_cprint(this, isOut)
B Option_882048__is(STACK_FRAME void *this);
Option_882048 Option_882048__as(STACK_FRAME void *this);
inline void Option_882048_string_(STACK_FRAME String result, Option_882048 this) {
  Type_string_(CALLER result, this);
}

Z Option_882048_get_(STACK_FRAME Option_882048 this);

#ifdef __cplusplus
}
#endif

#endif