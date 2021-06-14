#ifndef SIREUM_H_org_sireum_MS_F55A18
#define SIREUM_H_org_sireum_MS_F55A18

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, Option[art.UPort]]

inline Option_6239DB MS_F55A18_at(MS_F55A18 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (Option_6239DB) &(this->value[(int8_t) idx]);
}

inline void MS_F55A18_up(MS_F55A18 this, Z i, Option_6239DB e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union Option_6239DB));
}

inline Z MS_F55A18_size(STACK_FRAME MS_F55A18 this) {
   return (Z) (this)->size;
}

inline Z MS_F55A18_zize(STACK_FRAME MS_F55A18 this) {
   return (Z) (this)->size;
}

inline B MS_F55A18_isEmpty(STACK_FRAME MS_F55A18 this) {
   return (this)->size == 0;
}

inline B MS_F55A18_nonEmpty(STACK_FRAME MS_F55A18 this) {
   return (this)->size != 0;
}

B MS_F55A18__eq(MS_F55A18 this, MS_F55A18 other);
void MS_F55A18_create(STACK_FRAME MS_F55A18 result, Z size, Option_6239DB dflt);
void MS_F55A18__append(STACK_FRAME MS_F55A18 result, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__prepend(STACK_FRAME MS_F55A18 result, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__appendAll(STACK_FRAME MS_F55A18 result, MS_F55A18 this, MS_F55A18 other);
void MS_F55A18__sub(STACK_FRAME MS_F55A18 result, MS_F55A18 this, Option_6239DB value);
void MS_F55A18__removeAll(STACK_FRAME MS_F55A18 result, MS_F55A18 this, MS_F55A18 other);
void MS_F55A18_cprint(MS_F55A18 this, B isOut);
void MS_F55A18_string_(STACK_FRAME String result, MS_F55A18 this);

inline B MS_F55A18__ne(MS_F55A18 this, MS_F55A18 other) {
  return !MS_F55A18__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif