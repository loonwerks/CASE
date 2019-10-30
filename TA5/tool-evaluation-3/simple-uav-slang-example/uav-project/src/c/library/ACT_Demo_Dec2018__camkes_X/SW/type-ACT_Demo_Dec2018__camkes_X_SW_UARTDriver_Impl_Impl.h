#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl
#include <type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api.h>
#include <type-org_sireum_Z64.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl *ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl;
struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api api;
  Z64 i;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl(x) struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl x = { .type = TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl }


#endif