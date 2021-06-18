#ifndef SIREUM_TYPE_H_org_sireum_Option_AE3831
#define SIREUM_TYPE_H_org_sireum_Option_AE3831

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.Drivers.UARTDriver_Impl_Operational_Api]

#include <type-org_sireum_None_A929A3.h>
#include <type-org_sireum_Some_74DA67.h>

typedef union Option_AE3831 *Option_AE3831;
union Option_AE3831 {
  TYPE type;
  struct None_A929A3 None_A929A3;
  struct Some_74DA67 Some_74DA67;
};

#define DeclNewOption_AE3831(x) union Option_AE3831 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif