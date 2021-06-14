#ifndef SIREUM_H_org_sireum_IS_AA0F82
#define SIREUM_H_org_sireum_IS_AA0F82

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, (Z, Z)]

inline Tuple2_EC3B57 IS_AA0F82_at(IS_AA0F82 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (Tuple2_EC3B57) &(this->value[(int8_t) idx]);
}

inline void IS_AA0F82_up(IS_AA0F82 this, Z i, Tuple2_EC3B57 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct Tuple2_EC3B57));
}

inline Z IS_AA0F82_size(STACK_FRAME IS_AA0F82 this) {
   return (Z) (this)->size;
}

inline Z IS_AA0F82_zize(STACK_FRAME IS_AA0F82 this) {
   return (Z) (this)->size;
}

inline B IS_AA0F82_isEmpty(STACK_FRAME IS_AA0F82 this) {
   return (this)->size == 0;
}

inline B IS_AA0F82_nonEmpty(STACK_FRAME IS_AA0F82 this) {
   return (this)->size != 0;
}

B IS_AA0F82__eq(IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82_create(STACK_FRAME IS_AA0F82 result, Z size, Tuple2_EC3B57 dflt);
void IS_AA0F82__append(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__prepend(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__appendAll(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82__sub(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value);
void IS_AA0F82__removeAll(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, IS_AA0F82 other);
void IS_AA0F82_cprint(IS_AA0F82 this, B isOut);
void IS_AA0F82_string_(STACK_FRAME String result, IS_AA0F82 this);

inline B IS_AA0F82__ne(IS_AA0F82 this, IS_AA0F82 other) {
  return !IS_AA0F82__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif