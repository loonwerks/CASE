#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_Mission
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_Mission
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.Mission

#define ACT_Demo_Dec2018__camkes_X_SW_Mission_value_(this) ((IS_5D0BE7) &(this)->value)

B ACT_Demo_Dec2018__camkes_X_SW_Mission__eq(ACT_Demo_Dec2018__camkes_X_SW_Mission this, ACT_Demo_Dec2018__camkes_X_SW_Mission other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_Mission__ne(ACT_Demo_Dec2018__camkes_X_SW_Mission this, ACT_Demo_Dec2018__camkes_X_SW_Mission other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_Mission__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_Mission_cprint(ACT_Demo_Dec2018__camkes_X_SW_Mission this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_Mission_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Mission this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_Mission__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_Mission) this)->type == TACT_Demo_Dec2018__camkes_X_SW_Mission;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_Mission ACT_Demo_Dec2018__camkes_X_SW_Mission__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_Mission__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_Mission) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.Mission.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_Mission_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Mission this, IS_5D0BE7 value);

#endif