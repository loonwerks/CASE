#ifndef SIREUM_H_org_sireum_MS_94FFA9
#define SIREUM_H_org_sireum_MS_94FFA9
#include <types.h>

// MS[Z, MOption[art.Bridge]]

inline MOption_EA1D29 MS_94FFA9_at(MS_94FFA9 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (MOption_EA1D29) &(this->value[(int8_t) idx]);
}

inline void MS_94FFA9_up(MS_94FFA9 this, Z i, MOption_EA1D29 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union MOption_EA1D29));
}

inline Z MS_94FFA9_size(STACK_FRAME MS_94FFA9 this) {
   return (Z) (this)->size;
}

inline Z MS_94FFA9_zize(STACK_FRAME MS_94FFA9 this) {
   return (Z) (this)->size;
}

inline B MS_94FFA9_isEmpty(STACK_FRAME MS_94FFA9 this) {
   return (this)->size == 0;
}

inline B MS_94FFA9_nonEmpty(STACK_FRAME MS_94FFA9 this) {
   return (this)->size != 0;
}

B MS_94FFA9__eq(MS_94FFA9 this, MS_94FFA9 other);
void MS_94FFA9_create(STACK_FRAME MS_94FFA9 result, Z size, MOption_EA1D29 dflt);
void MS_94FFA9_zreate(STACK_FRAME MS_94FFA9 result, Z size, MOption_EA1D29 dflt);
void MS_94FFA9__append(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MOption_EA1D29 value);
void MS_94FFA9__prepend(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MOption_EA1D29 value);
void MS_94FFA9__appendAll(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MS_94FFA9 other);
void MS_94FFA9__sub(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MOption_EA1D29 value);
void MS_94FFA9__removeAll(STACK_FRAME MS_94FFA9 result, MS_94FFA9 this, MS_94FFA9 other);
void MS_94FFA9_cprint(MS_94FFA9 this, B isOut);
void MS_94FFA9_string_(STACK_FRAME String result, MS_94FFA9 this);

inline B MS_94FFA9__ne(MS_94FFA9 this, MS_94FFA9 other) {
  return !MS_94FFA9__eq(this, other);
}


#endif