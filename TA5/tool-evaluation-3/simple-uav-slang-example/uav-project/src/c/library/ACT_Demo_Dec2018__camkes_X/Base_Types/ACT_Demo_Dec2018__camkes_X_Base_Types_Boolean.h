#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean

#define ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_value_(this) ((this)->value)

B ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__eq(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean other);
static inline B ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__ne(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean other) {
  return !ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_cprint(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this, B isOut);
void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this);

static inline B ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) this)->type == TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean;
}

static inline ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this, B value);

#endif