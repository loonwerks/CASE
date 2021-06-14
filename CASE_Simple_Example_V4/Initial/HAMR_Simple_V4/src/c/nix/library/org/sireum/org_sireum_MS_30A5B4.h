#ifndef SIREUM_H_org_sireum_MS_30A5B4
#define SIREUM_H_org_sireum_MS_30A5B4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, Z]

inline Z MS_30A5B4_at(MS_30A5B4 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return this->value[(int8_t) idx];
}

inline void MS_30A5B4_up(MS_30A5B4 this, Z i, Z e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  this->value[(int8_t) idx] = e;
}

inline Z MS_30A5B4_size(STACK_FRAME MS_30A5B4 this) {
   return (Z) (this)->size;
}

inline Z MS_30A5B4_zize(STACK_FRAME MS_30A5B4 this) {
   return (Z) (this)->size;
}

inline B MS_30A5B4_isEmpty(STACK_FRAME MS_30A5B4 this) {
   return (this)->size == 0;
}

inline B MS_30A5B4_nonEmpty(STACK_FRAME MS_30A5B4 this) {
   return (this)->size != 0;
}

B MS_30A5B4__eq(MS_30A5B4 this, MS_30A5B4 other);
void MS_30A5B4_create(STACK_FRAME MS_30A5B4 result, Z size, Z dflt);
void MS_30A5B4__append(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value);
void MS_30A5B4__prepend(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value);
void MS_30A5B4__appendAll(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, MS_30A5B4 other);
void MS_30A5B4__sub(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value);
void MS_30A5B4__removeAll(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, MS_30A5B4 other);
void MS_30A5B4_cprint(MS_30A5B4 this, B isOut);
void MS_30A5B4_string_(STACK_FRAME String result, MS_30A5B4 this);

inline B MS_30A5B4__ne(MS_30A5B4 this, MS_30A5B4 other) {
  return !MS_30A5B4__eq(this, other);
}

inline void MS_30A5B4_toIS(STACK_FRAME IS_82ABD8 result, MS_30A5B4 this) {
  STATIC_ASSERT(MaxIS_82ABD8 >= MaxMS_30A5B4, "Invalid cast from MS[Z, Z] to IS[...,...].");
  result->type = TIS_82ABD8;
  result->size = this->size;
  memcpy(&result->value, &this->value, this->size * sizeof(Z));
}

#ifdef __cplusplus
}
#endif

#endif