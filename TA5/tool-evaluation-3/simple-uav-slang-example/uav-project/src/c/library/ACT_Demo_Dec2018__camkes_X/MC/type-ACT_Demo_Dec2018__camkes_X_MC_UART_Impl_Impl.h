#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Impl
#include <type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api.h>

typedef struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl *ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl;
struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api api;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl(x) struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl x = { .type = TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl }


#endif