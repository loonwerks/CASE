#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64_Payload

#define ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_value_(this) ((ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) &(this)->value)

B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__eq(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload other);
static inline B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__ne(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload other) {
  return !ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_cprint(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this, B isOut);
void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this);

static inline B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload) this)->type == TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload;
}

static inline ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64_Payload.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 value);

#endif