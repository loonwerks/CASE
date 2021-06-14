#ifndef SIREUM_H_org_sireum_IS_C4F575
#define SIREUM_H_org_sireum_IS_C4F575

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, B]

inline B IS_C4F575_at(IS_C4F575 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  U8 mask = (U8) (1 << (idx % 8));
  return (B) (this->value[idx / 8] & mask ? 1 : 0);
}

inline void IS_C4F575_up(IS_C4F575 this, Z i, B e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  U8 mask = ((U8) (1 << idx % 8));
  if (e) {
    this->value[idx / 8] |= mask;
  } else {
    this->value[idx / 8] &= ~mask;
  }
}

inline Z IS_C4F575_size(STACK_FRAME IS_C4F575 this) {
   return (Z) (this)->size;
}

inline Z IS_C4F575_zize(STACK_FRAME IS_C4F575 this) {
   return (Z) (this)->size;
}

inline B IS_C4F575_isEmpty(STACK_FRAME IS_C4F575 this) {
   return (this)->size == 0;
}

inline B IS_C4F575_nonEmpty(STACK_FRAME IS_C4F575 this) {
   return (this)->size != 0;
}

B IS_C4F575__eq(IS_C4F575 this, IS_C4F575 other);
void IS_C4F575_create(STACK_FRAME IS_C4F575 result, Z size, B dflt);
void IS_C4F575__append(STACK_FRAME IS_C4F575 result, IS_C4F575 this, B value);
void IS_C4F575__prepend(STACK_FRAME IS_C4F575 result, IS_C4F575 this, B value);
void IS_C4F575__appendAll(STACK_FRAME IS_C4F575 result, IS_C4F575 this, IS_C4F575 other);
void IS_C4F575__sub(STACK_FRAME IS_C4F575 result, IS_C4F575 this, B value);
void IS_C4F575__removeAll(STACK_FRAME IS_C4F575 result, IS_C4F575 this, IS_C4F575 other);
void IS_C4F575_cprint(IS_C4F575 this, B isOut);
void IS_C4F575_string_(STACK_FRAME String result, IS_C4F575 this);

inline B IS_C4F575__ne(IS_C4F575 this, IS_C4F575 other) {
  return !IS_C4F575__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif