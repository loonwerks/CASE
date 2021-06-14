#ifndef SIREUM_H_org_sireum_IS_08117A
#define SIREUM_H_org_sireum_IS_08117A

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, art.UConnection]

inline art_UConnection IS_08117A_at(IS_08117A this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (art_UConnection) &(this->value[(int8_t) idx]);
}

inline void IS_08117A_up(IS_08117A this, Z i, art_UConnection e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union art_UConnection));
}

inline Z IS_08117A_size(STACK_FRAME IS_08117A this) {
   return (Z) (this)->size;
}

inline Z IS_08117A_zize(STACK_FRAME IS_08117A this) {
   return (Z) (this)->size;
}

inline B IS_08117A_isEmpty(STACK_FRAME IS_08117A this) {
   return (this)->size == 0;
}

inline B IS_08117A_nonEmpty(STACK_FRAME IS_08117A this) {
   return (this)->size != 0;
}

B IS_08117A__eq(IS_08117A this, IS_08117A other);
void IS_08117A_create(STACK_FRAME IS_08117A result, Z size, art_UConnection dflt);
void IS_08117A__append(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value);
void IS_08117A__prepend(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value);
void IS_08117A__appendAll(STACK_FRAME IS_08117A result, IS_08117A this, IS_08117A other);
void IS_08117A__sub(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value);
void IS_08117A__removeAll(STACK_FRAME IS_08117A result, IS_08117A this, IS_08117A other);
void IS_08117A_cprint(IS_08117A this, B isOut);
void IS_08117A_string_(STACK_FRAME String result, IS_08117A this);

inline B IS_08117A__ne(IS_08117A this, IS_08117A other) {
  return !IS_08117A__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif