#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_Command_Impl
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_Command_Impl
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.Command_Impl

#define ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_theMap_(this) ((ACT_Demo_Dec2018__camkes_X_SW_SW__Map) &(this)->theMap)
#define ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Pattern_(this) ((this)->Pattern)
#define ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_HMAC_(this) ((this)->HMAC)

B ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__ne(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) this)->type == TACT_Demo_Dec2018__camkes_X_SW_Command_Impl;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_Command_Impl ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.Command_Impl.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this, ACT_Demo_Dec2018__camkes_X_SW_SW__Map theMap, ACT_Demo_Dec2018__camkes_X_SW_FlightPattern Pattern, B HMAC);

#endif