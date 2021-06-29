#ifndef SIREUM_H_org_sireum_IS_948B60
#define SIREUM_H_org_sireum_IS_948B60

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// IS[Z, String]

inline String IS_948B60_at(IS_948B60 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (String) &(this->value[(int8_t) idx]);
}

inline void IS_948B60_up(IS_948B60 this, Z i, String e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(struct StaticString));
}

inline Z IS_948B60_size(STACK_FRAME IS_948B60 this) {
   return (Z) (this)->size;
}

inline Z IS_948B60_zize(STACK_FRAME IS_948B60 this) {
   return (Z) (this)->size;
}

inline B IS_948B60_isEmpty(STACK_FRAME IS_948B60 this) {
   return (this)->size == 0;
}

inline B IS_948B60_nonEmpty(STACK_FRAME IS_948B60 this) {
   return (this)->size != 0;
}

B IS_948B60__eq(IS_948B60 this, IS_948B60 other);
void IS_948B60_create(STACK_FRAME IS_948B60 result, Z size, String dflt);
void IS_948B60__append(STACK_FRAME IS_948B60 result, IS_948B60 this, String value);
void IS_948B60__prepend(STACK_FRAME IS_948B60 result, IS_948B60 this, String value);
void IS_948B60__appendAll(STACK_FRAME IS_948B60 result, IS_948B60 this, IS_948B60 other);
void IS_948B60__sub(STACK_FRAME IS_948B60 result, IS_948B60 this, String value);
void IS_948B60__removeAll(STACK_FRAME IS_948B60 result, IS_948B60 this, IS_948B60 other);
void IS_948B60_cprint(IS_948B60 this, B isOut);
void IS_948B60_string_(STACK_FRAME String result, IS_948B60 this);

inline B IS_948B60__ne(IS_948B60 this, IS_948B60 other) {
  return !IS_948B60__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif