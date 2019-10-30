#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_SW__Map
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_SW__Map
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.SW__Map

#define ACT_Demo_Dec2018__camkes_X_SW_SW__Map_value_(this) ((IS_5D0BE7) &(this)->value)

B ACT_Demo_Dec2018__camkes_X_SW_SW__Map__eq(ACT_Demo_Dec2018__camkes_X_SW_SW__Map this, ACT_Demo_Dec2018__camkes_X_SW_SW__Map other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_SW__Map__ne(ACT_Demo_Dec2018__camkes_X_SW_SW__Map this, ACT_Demo_Dec2018__camkes_X_SW_SW__Map other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_SW__Map__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_SW__Map_cprint(ACT_Demo_Dec2018__camkes_X_SW_SW__Map this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_SW__Map_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_SW__Map this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_SW__Map__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_SW__Map) this)->type == TACT_Demo_Dec2018__camkes_X_SW_SW__Map;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_SW__Map ACT_Demo_Dec2018__camkes_X_SW_SW__Map__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_SW__Map__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_SW__Map) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.SW__Map.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_SW__Map_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_SW__Map this, IS_5D0BE7 value);

#endif