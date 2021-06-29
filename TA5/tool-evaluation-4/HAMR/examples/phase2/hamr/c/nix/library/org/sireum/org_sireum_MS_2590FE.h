#ifndef SIREUM_H_org_sireum_MS_2590FE
#define SIREUM_H_org_sireum_MS_2590FE

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, Option[art.DataContent]]

inline Option_8E9F45 MS_2590FE_at(MS_2590FE this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (Option_8E9F45) &(this->value[(int8_t) idx]);
}

inline void MS_2590FE_up(MS_2590FE this, Z i, Option_8E9F45 e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union Option_8E9F45));
}

inline Z MS_2590FE_size(STACK_FRAME MS_2590FE this) {
   return (Z) (this)->size;
}

inline Z MS_2590FE_zize(STACK_FRAME MS_2590FE this) {
   return (Z) (this)->size;
}

inline B MS_2590FE_isEmpty(STACK_FRAME MS_2590FE this) {
   return (this)->size == 0;
}

inline B MS_2590FE_nonEmpty(STACK_FRAME MS_2590FE this) {
   return (this)->size != 0;
}

B MS_2590FE__eq(MS_2590FE this, MS_2590FE other);
void MS_2590FE_create(STACK_FRAME MS_2590FE result, Z size, Option_8E9F45 dflt);
void MS_2590FE__append(STACK_FRAME MS_2590FE result, MS_2590FE this, Option_8E9F45 value);
void MS_2590FE__prepend(STACK_FRAME MS_2590FE result, MS_2590FE this, Option_8E9F45 value);
void MS_2590FE__appendAll(STACK_FRAME MS_2590FE result, MS_2590FE this, MS_2590FE other);
void MS_2590FE__sub(STACK_FRAME MS_2590FE result, MS_2590FE this, Option_8E9F45 value);
void MS_2590FE__removeAll(STACK_FRAME MS_2590FE result, MS_2590FE this, MS_2590FE other);
void MS_2590FE_cprint(MS_2590FE this, B isOut);
void MS_2590FE_string_(STACK_FRAME String result, MS_2590FE this);

inline B MS_2590FE__ne(MS_2590FE this, MS_2590FE other) {
  return !MS_2590FE__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif