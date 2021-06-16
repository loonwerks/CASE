#ifndef SIREUM_H_org_sireum_IS_7E8796
#define SIREUM_H_org_sireum_IS_7E8796

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, art.Bridge]

inline art_Bridge IS_7E8796_at(IS_7E8796 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (art_Bridge) &(this->value[(int8_t) idx]);
}

inline void IS_7E8796_up(IS_7E8796 this, Z i, art_Bridge e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union art_Bridge));
}

inline Z IS_7E8796_size(STACK_FRAME IS_7E8796 this) {
   return (Z) (this)->size;
}

inline Z IS_7E8796_zize(STACK_FRAME IS_7E8796 this) {
   return (Z) (this)->size;
}

inline B IS_7E8796_isEmpty(STACK_FRAME IS_7E8796 this) {
   return (this)->size == 0;
}

inline B IS_7E8796_nonEmpty(STACK_FRAME IS_7E8796 this) {
   return (this)->size != 0;
}

B IS_7E8796__eq(IS_7E8796 this, IS_7E8796 other);
void IS_7E8796_create(STACK_FRAME IS_7E8796 result, Z size, art_Bridge dflt);
void IS_7E8796__append(STACK_FRAME IS_7E8796 result, IS_7E8796 this, art_Bridge value);
void IS_7E8796__prepend(STACK_FRAME IS_7E8796 result, IS_7E8796 this, art_Bridge value);
void IS_7E8796__appendAll(STACK_FRAME IS_7E8796 result, IS_7E8796 this, IS_7E8796 other);
void IS_7E8796__sub(STACK_FRAME IS_7E8796 result, IS_7E8796 this, art_Bridge value);
void IS_7E8796__removeAll(STACK_FRAME IS_7E8796 result, IS_7E8796 this, IS_7E8796 other);
void IS_7E8796_cprint(IS_7E8796 this, B isOut);
void IS_7E8796_string_(STACK_FRAME String result, IS_7E8796 this);

inline B IS_7E8796__ne(IS_7E8796 this, IS_7E8796 other) {
  return !IS_7E8796__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif