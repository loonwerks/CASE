#ifndef SIREUM_TYPE_H_org_sireum_Some_74DA67
#define SIREUM_TYPE_H_org_sireum_Some_74DA67

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.Drivers.UARTDriver_Impl_Operational_Api]
#include <type-hamr_Drivers_UARTDriver_Impl_Operational_Api.h>

typedef struct Some_74DA67 *Some_74DA67;
struct Some_74DA67 {
  TYPE type;
  struct hamr_Drivers_UARTDriver_Impl_Operational_Api value;
};

#define DeclNewSome_74DA67(x) struct Some_74DA67 x = { .type = TSome_74DA67 }

#ifdef __cplusplus
}
#endif

#endif