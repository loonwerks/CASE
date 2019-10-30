#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Impl

#define ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl_api_(this) ((ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api) &(this)->api)

B ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl__eq(ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl other);
static inline B ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl__ne(ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl other) {
  return !ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl_cprint(ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl this, B isOut);
void ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl this);

static inline B ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl) this)->type == TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl;
}

static inline ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Impl.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api api);

#endif