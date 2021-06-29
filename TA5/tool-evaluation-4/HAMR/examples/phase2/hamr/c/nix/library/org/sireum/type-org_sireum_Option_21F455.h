#ifndef SIREUM_TYPE_H_org_sireum_Option_21F455
#define SIREUM_TYPE_H_org_sireum_Option_21F455

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]

#include <type-org_sireum_None_E7D454.h>
#include <type-org_sireum_Some_BAA603.h>

typedef union Option_21F455 *Option_21F455;
union Option_21F455 {
  TYPE type;
  struct None_E7D454 None_E7D454;
  struct Some_BAA603 Some_BAA603;
};

#define DeclNewOption_21F455(x) union Option_21F455 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif