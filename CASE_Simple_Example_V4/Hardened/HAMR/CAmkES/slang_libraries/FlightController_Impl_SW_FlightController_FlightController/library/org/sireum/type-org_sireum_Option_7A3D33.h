#ifndef SIREUM_TYPE_H_org_sireum_Option_7A3D33
#define SIREUM_TYPE_H_org_sireum_Option_7A3D33

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.FlightController_Impl_Initialization_Api]

#include <type-org_sireum_Some_E082A6.h>
#include <type-org_sireum_None_D43E83.h>

typedef union Option_7A3D33 *Option_7A3D33;
union Option_7A3D33 {
  TYPE type;
  struct Some_E082A6 Some_E082A6;
  struct None_D43E83 None_D43E83;
};

#define DeclNewOption_7A3D33(x) union Option_7A3D33 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif