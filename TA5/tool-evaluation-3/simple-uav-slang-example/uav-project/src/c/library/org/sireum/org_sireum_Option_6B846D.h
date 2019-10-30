#ifndef SIREUM_H_org_sireum_Option_6B846D
#define SIREUM_H_org_sireum_Option_6B846D
#include <types.h>

// Option[ACT_Demo_Dec2018__camkes_X.SW.Mission]

#define Option_6B846D__eq(this, other) Type__eq(this, other)
#define Option_6B846D__ne(this, other) (!Type__eq(this, other))
#define Option_6B846D_cprint(this, isOut) Type_cprint(this, isOut)
B Option_6B846D__is(STACK_FRAME void *this);
Option_6B846D Option_6B846D__as(STACK_FRAME void *this);
static inline void Option_6B846D_string(STACK_FRAME String result, Option_6B846D this) {
  Type_string(CALLER result, this);
}

void Option_6B846D_get_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Mission result, Option_6B846D this);

#endif