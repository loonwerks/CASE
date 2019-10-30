#ifndef SIREUM_H_org_sireum_MS_94FFA9
#define SIREUM_H_org_sireum_MS_94FFA9
#include <types.h>

// MS[Z, MOption[art.Bridge]]
B MS_94FFA9__eq(MS_94FFA9 this, MS_94FFA9 other);
void MS_94FFA9_create(STACK_FRAME MS_94FFA9 result, Z size, MOption_EA1D29 dflt);
void MS_94FFA9_zreate(STACK_FRAME MS_94FFA9 result, Z size, MOption_EA1D29 dflt);
void MS_94FFA9__append(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MOption_EA1D29 value);
void MS_94FFA9__prepend(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MOption_EA1D29 value);
void MS_94FFA9__appendAll(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MS_94FFA9 other);
void MS_94FFA9__remove(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MOption_EA1D29 value);
void MS_94FFA9__removeAll(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MS_94FFA9 other);
void MS_94FFA9_cprint(MS_94FFA9 this, B isOut);
void MS_94FFA9_string(STACK_FRAME String result, MS_94FFA9 this);

static inline B MS_94FFA9__ne(MS_94FFA9 this, MS_94FFA9 other) {
  return !MS_94FFA9__eq(this, other);
}


#endif