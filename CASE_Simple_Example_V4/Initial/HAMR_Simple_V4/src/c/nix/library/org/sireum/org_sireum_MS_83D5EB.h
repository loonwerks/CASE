#ifndef SIREUM_H_org_sireum_MS_83D5EB
#define SIREUM_H_org_sireum_MS_83D5EB

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MS[Z, Option[art.Bridge]]

inline Option_7BBFBE MS_83D5EB_at(MS_83D5EB this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (Option_7BBFBE) &(this->value[(int8_t) idx]);
}

inline void MS_83D5EB_up(MS_83D5EB this, Z i, Option_7BBFBE e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union Option_7BBFBE));
}

inline Z MS_83D5EB_size(STACK_FRAME MS_83D5EB this) {
   return (Z) (this)->size;
}

inline Z MS_83D5EB_zize(STACK_FRAME MS_83D5EB this) {
   return (Z) (this)->size;
}

inline B MS_83D5EB_isEmpty(STACK_FRAME MS_83D5EB this) {
   return (this)->size == 0;
}

inline B MS_83D5EB_nonEmpty(STACK_FRAME MS_83D5EB this) {
   return (this)->size != 0;
}

B MS_83D5EB__eq(MS_83D5EB this, MS_83D5EB other);
void MS_83D5EB_create(STACK_FRAME MS_83D5EB result, Z size, Option_7BBFBE dflt);
void MS_83D5EB__append(STACK_FRAME MS_83D5EB result, MS_83D5EB this, Option_7BBFBE value);
void MS_83D5EB__prepend(STACK_FRAME MS_83D5EB result, MS_83D5EB this, Option_7BBFBE value);
void MS_83D5EB__appendAll(STACK_FRAME MS_83D5EB result, MS_83D5EB this, MS_83D5EB other);
void MS_83D5EB__sub(STACK_FRAME MS_83D5EB result, MS_83D5EB this, Option_7BBFBE value);
void MS_83D5EB__removeAll(STACK_FRAME MS_83D5EB result, MS_83D5EB this, MS_83D5EB other);
void MS_83D5EB_cprint(MS_83D5EB this, B isOut);
void MS_83D5EB_string_(STACK_FRAME String result, MS_83D5EB this);

inline B MS_83D5EB__ne(MS_83D5EB this, MS_83D5EB other) {
  return !MS_83D5EB__eq(this, other);
}


#ifdef __cplusplus
}
#endif

#endif