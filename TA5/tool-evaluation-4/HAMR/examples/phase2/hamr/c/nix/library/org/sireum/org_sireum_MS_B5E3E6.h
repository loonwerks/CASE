#ifndef SIREUM_H_org_sireum_MS_B5E3E6
#define SIREUM_H_org_sireum_MS_B5E3E6

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, IS[Z, (Z, Z)]]

inline IS_AA0F82 MS_B5E3E6_at(MS_B5E3E6 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (IS_AA0F82) &(this->value[(int8_t) idx]);
}

inline void MS_B5E3E6_up(MS_B5E3E6 this, Z i, IS_AA0F82 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct IS_AA0F82));
}

inline Z MS_B5E3E6_size(STACK_FRAME MS_B5E3E6 this) {
   return (Z) (this)->size;
}

inline Z MS_B5E3E6_zize(STACK_FRAME MS_B5E3E6 this) {
   return (Z) (this)->size;
}

inline B MS_B5E3E6_isEmpty(STACK_FRAME MS_B5E3E6 this) {
   return (this)->size == 0;
}

inline B MS_B5E3E6_nonEmpty(STACK_FRAME MS_B5E3E6 this) {
   return (this)->size != 0;
}

B MS_B5E3E6__eq(MS_B5E3E6 this, MS_B5E3E6 other);
void MS_B5E3E6_create(STACK_FRAME MS_B5E3E6 result, Z size, IS_AA0F82 dflt);
void MS_B5E3E6__append(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, IS_AA0F82 value);
void MS_B5E3E6__prepend(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, IS_AA0F82 value);
void MS_B5E3E6__appendAll(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, MS_B5E3E6 other);
void MS_B5E3E6__sub(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, IS_AA0F82 value);
void MS_B5E3E6__removeAll(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, MS_B5E3E6 other);
void MS_B5E3E6_cprint(MS_B5E3E6 this, B isOut);
void MS_B5E3E6_string_(STACK_FRAME String result, MS_B5E3E6 this);

inline B MS_B5E3E6__ne(MS_B5E3E6 this, MS_B5E3E6 other) {
  return !MS_B5E3E6__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif