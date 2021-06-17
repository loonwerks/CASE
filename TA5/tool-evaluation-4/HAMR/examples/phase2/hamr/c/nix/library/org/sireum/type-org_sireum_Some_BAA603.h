#ifndef SIREUM_TYPE_H_org_sireum_Some_BAA603
#define SIREUM_TYPE_H_org_sireum_Some_BAA603

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.Drivers.UARTDriver_Impl_Initialization_Api]
#include <type-hamr_Drivers_UARTDriver_Impl_Initialization_Api.h>

typedef struct Some_BAA603 *Some_BAA603;
struct Some_BAA603 {
  TYPE type;
  struct hamr_Drivers_UARTDriver_Impl_Initialization_Api value;
};

#define DeclNewSome_BAA603(x) struct Some_BAA603 x = { .type = TSome_BAA603 }

#ifdef __cplusplus
}
#endif

#endif