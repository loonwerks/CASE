#ifndef SIREUM_H_org_sireum_IS_820232
#define SIREUM_H_org_sireum_IS_820232

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, art.UPort]

inline art_UPort IS_820232_at(IS_820232 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (art_UPort) &(this->value[(int8_t) idx]);
}

inline void IS_820232_up(IS_820232 this, Z i, art_UPort e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union art_UPort));
}

inline Z IS_820232_size(STACK_FRAME IS_820232 this) {
   return (Z) (this)->size;
}

inline Z IS_820232_zize(STACK_FRAME IS_820232 this) {
   return (Z) (this)->size;
}

inline B IS_820232_isEmpty(STACK_FRAME IS_820232 this) {
   return (this)->size == 0;
}

inline B IS_820232_nonEmpty(STACK_FRAME IS_820232 this) {
   return (this)->size != 0;
}

B IS_820232__eq(IS_820232 this, IS_820232 other);
void IS_820232_create(STACK_FRAME IS_820232 result, Z size, art_UPort dflt);
void IS_820232__append(STACK_FRAME IS_820232 result, IS_820232 this, art_UPort value);
void IS_820232__prepend(STACK_FRAME IS_820232 result, IS_820232 this, art_UPort value);
void IS_820232__appendAll(STACK_FRAME IS_820232 result, IS_820232 this, IS_820232 other);
void IS_820232__sub(STACK_FRAME IS_820232 result, IS_820232 this, art_UPort value);
void IS_820232__removeAll(STACK_FRAME IS_820232 result, IS_820232 this, IS_820232 other);
void IS_820232_cprint(IS_820232 this, B isOut);
void IS_820232_string_(STACK_FRAME String result, IS_820232 this);

inline B IS_820232__ne(IS_820232 this, IS_820232 other) {
  return !IS_820232__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif