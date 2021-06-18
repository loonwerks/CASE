#ifndef SIREUM_H_org_sireum_Option_C622DB
#define SIREUM_H_org_sireum_Option_C622DB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Option[art.Empty]

#define Option_C622DB__eq(this, other) Type__eq(this, other)
#define Option_C622DB__ne(this, other) (!Type__eq(this, other))
#define Option_C622DB_cprint(this, isOut) Type_cprint(this, isOut)
B Option_C622DB__is(STACK_FRAME void *this);
Option_C622DB Option_C622DB__as(STACK_FRAME void *this);
inline void Option_C622DB_string_(STACK_FRAME String result, Option_C622DB this) {
  Type_string_(CALLER result, this);
}

#ifdef __cplusplus
}
#endif

#endif