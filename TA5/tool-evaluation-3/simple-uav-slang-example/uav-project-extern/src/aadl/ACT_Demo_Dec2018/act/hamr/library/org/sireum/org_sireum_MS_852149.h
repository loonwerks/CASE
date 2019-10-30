#ifndef SIREUM_H_org_sireum_MS_852149
#define SIREUM_H_org_sireum_MS_852149
#include <types.h>

// MS[Z, art.Bridge]

inline art_Bridge MS_852149_at(MS_852149 this, Z i) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  return (art_Bridge) &(this->value[(int8_t) idx]);
}

inline void MS_852149_up(MS_852149 this, Z i, art_Bridge e) {
  intmax_t idx = i;
  #ifdef SIREUM_BOUND_CHECK
  assert (0 <= idx && idx < this->size);
  #endif
  Type_assign(&this->value[(int8_t) idx], e, sizeof(union art_Bridge));
}

inline Z MS_852149_size(STACK_FRAME MS_852149 this) {
   return (Z) (this)->size;
}

inline Z MS_852149_zize(STACK_FRAME MS_852149 this) {
   return (Z) (this)->size;
}

inline B MS_852149_isEmpty(STACK_FRAME MS_852149 this) {
   return (this)->size == 0;
}

inline B MS_852149_nonEmpty(STACK_FRAME MS_852149 this) {
   return (this)->size != 0;
}

B MS_852149__eq(MS_852149 this, MS_852149 other);
void MS_852149_create(STACK_FRAME MS_852149 result, Z size, art_Bridge dflt);
void MS_852149_zreate(STACK_FRAME MS_852149 result, Z size, art_Bridge dflt);
void MS_852149__append(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value);
void MS_852149__prepend(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value);
void MS_852149__appendAll(STACK_FRAME MS_852149 result, MS_852149 this, MS_852149 other);
void MS_852149__sub(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value);
void MS_852149__removeAll(STACK_FRAME MS_852149 result, MS_852149 this, MS_852149 other);
void MS_852149_cprint(MS_852149 this, B isOut);
void MS_852149_string_(STACK_FRAME String result, MS_852149 this);

inline B MS_852149__ne(MS_852149 this, MS_852149 other) {
  return !MS_852149__eq(this, other);
}


#endif