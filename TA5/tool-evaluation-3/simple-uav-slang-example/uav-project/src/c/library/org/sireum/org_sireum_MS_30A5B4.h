#ifndef SIREUM_H_org_sireum_MS_30A5B4
#define SIREUM_H_org_sireum_MS_30A5B4
#include <types.h>

// MS[Z, Z]
B MS_30A5B4__eq(MS_30A5B4 this, MS_30A5B4 other);
void MS_30A5B4_create(STACK_FRAME MS_30A5B4 result, Z size, Z dflt);
void MS_30A5B4_zreate(STACK_FRAME MS_30A5B4 result, Z size, Z dflt);
void MS_30A5B4__append(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value);
void MS_30A5B4__prepend(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value);
void MS_30A5B4__appendAll(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, MS_30A5B4 other);
void MS_30A5B4__remove(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value);
void MS_30A5B4__removeAll(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, MS_30A5B4 other);
void MS_30A5B4_cprint(MS_30A5B4 this, B isOut);
void MS_30A5B4_string(STACK_FRAME String result, MS_30A5B4 this);

static inline B MS_30A5B4__ne(MS_30A5B4 this, MS_30A5B4 other) {
  return !MS_30A5B4__eq(this, other);
}

static inline void MS_30A5B4_toIS(STACK_FRAME IS_82ABD8 result, MS_30A5B4 this) {
  STATIC_ASSERT(MaxIS_82ABD8 >= MaxMS_30A5B4, "Invalid cast from MS[Z, Z] to IS[...,...].");
  result->type = TIS_82ABD8;
  result->size = this->size;
  memcpy(&result->value, &this->value, this->size * sizeof(Z));
}

#endif