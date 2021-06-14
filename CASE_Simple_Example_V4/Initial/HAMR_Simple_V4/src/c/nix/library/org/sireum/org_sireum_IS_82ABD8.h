#ifndef SIREUM_H_org_sireum_IS_82ABD8
#define SIREUM_H_org_sireum_IS_82ABD8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, Z]

inline Z IS_82ABD8_at(IS_82ABD8 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return this->value[(int8_t) idx];
}

inline void IS_82ABD8_up(IS_82ABD8 this, Z i, Z e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  this->value[(int8_t) idx] = e;
}

inline Z IS_82ABD8_size(STACK_FRAME IS_82ABD8 this) {
   return (Z) (this)->size;
}

inline Z IS_82ABD8_zize(STACK_FRAME IS_82ABD8 this) {
   return (Z) (this)->size;
}

inline B IS_82ABD8_isEmpty(STACK_FRAME IS_82ABD8 this) {
   return (this)->size == 0;
}

inline B IS_82ABD8_nonEmpty(STACK_FRAME IS_82ABD8 this) {
   return (this)->size != 0;
}

B IS_82ABD8__eq(IS_82ABD8 this, IS_82ABD8 other);
void IS_82ABD8_create(STACK_FRAME IS_82ABD8 result, Z size, Z dflt);
void IS_82ABD8__append(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, Z value);
void IS_82ABD8__prepend(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, Z value);
void IS_82ABD8__appendAll(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, IS_82ABD8 other);
void IS_82ABD8__sub(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, Z value);
void IS_82ABD8__removeAll(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, IS_82ABD8 other);
void IS_82ABD8_cprint(IS_82ABD8 this, B isOut);
void IS_82ABD8_string_(STACK_FRAME String result, IS_82ABD8 this);

inline B IS_82ABD8__ne(IS_82ABD8 this, IS_82ABD8 other) {
  return !IS_82ABD8__eq(this, other);
}

inline void IS_82ABD8_toMS(STACK_FRAME MS_30A5B4 result, IS_82ABD8 this) {
  STATIC_ASSERT(MaxMS_30A5B4 >= MaxIS_82ABD8, "Invalid cast from IS[Z, Z] to MS[...,...].");
  result->type = TMS_30A5B4;
  result->size = this->size;
  memcpy(&result->value, &this->value, this->size * sizeof(Z));
}

#ifdef __cplusplus
}
#endif

#endif