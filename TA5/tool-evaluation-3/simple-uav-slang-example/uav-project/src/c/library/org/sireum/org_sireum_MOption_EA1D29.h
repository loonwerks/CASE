#ifndef SIREUM_H_org_sireum_MOption_EA1D29
#define SIREUM_H_org_sireum_MOption_EA1D29
#include <types.h>

// MOption[art.Bridge]

#define MOption_EA1D29__eq(this, other) Type__eq(this, other)
#define MOption_EA1D29__ne(this, other) (!Type__eq(this, other))
#define MOption_EA1D29_cprint(this, isOut) Type_cprint(this, isOut)
B MOption_EA1D29__is(STACK_FRAME void *this);
MOption_EA1D29 MOption_EA1D29__as(STACK_FRAME void *this);
static inline void MOption_EA1D29_string(STACK_FRAME String result, MOption_EA1D29 this) {
  Type_string(CALLER result, this);
}

#endif