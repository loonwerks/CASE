#ifndef SIREUM_H_org_sireum_MS_E444B2
#define SIREUM_H_org_sireum_MS_E444B2

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, IS[Z, Z]]

inline IS_82ABD8 MS_E444B2_at(MS_E444B2 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (IS_82ABD8) &(this->value[(int8_t) idx]);
}

inline void MS_E444B2_up(MS_E444B2 this, Z i, IS_82ABD8 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct IS_82ABD8));
}

inline Z MS_E444B2_size(STACK_FRAME MS_E444B2 this) {
   return (Z) (this)->size;
}

inline Z MS_E444B2_zize(STACK_FRAME MS_E444B2 this) {
   return (Z) (this)->size;
}

inline B MS_E444B2_isEmpty(STACK_FRAME MS_E444B2 this) {
   return (this)->size == 0;
}

inline B MS_E444B2_nonEmpty(STACK_FRAME MS_E444B2 this) {
   return (this)->size != 0;
}

B MS_E444B2__eq(MS_E444B2 this, MS_E444B2 other);
void MS_E444B2_create(STACK_FRAME MS_E444B2 result, Z size, IS_82ABD8 dflt);
void MS_E444B2__append(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__prepend(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__appendAll(STACK_FRAME MS_E444B2 result, MS_E444B2 this, MS_E444B2 other);
void MS_E444B2__sub(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value);
void MS_E444B2__removeAll(STACK_FRAME MS_E444B2 result, MS_E444B2 this, MS_E444B2 other);
void MS_E444B2_cprint(MS_E444B2 this, B isOut);
void MS_E444B2_string_(STACK_FRAME String result, MS_E444B2 this);

inline B MS_E444B2__ne(MS_E444B2 this, MS_E444B2 other) {
  return !MS_E444B2__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif