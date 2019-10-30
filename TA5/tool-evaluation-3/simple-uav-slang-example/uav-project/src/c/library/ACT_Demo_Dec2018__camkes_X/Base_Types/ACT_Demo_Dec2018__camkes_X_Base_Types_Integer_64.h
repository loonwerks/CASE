#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64

#define ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_value_(this) ((this)->value)

B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__eq(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 other);
static inline B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__ne(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 other) {
  return !ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_cprint(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this, B isOut);
void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this);

static inline B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) this)->type == TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64;
}

static inline ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this, Z64 value);

#endif