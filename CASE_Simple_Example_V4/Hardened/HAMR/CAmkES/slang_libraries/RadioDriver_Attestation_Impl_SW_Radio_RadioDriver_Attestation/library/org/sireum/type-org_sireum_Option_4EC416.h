#ifndef SIREUM_TYPE_H_org_sireum_Option_4EC416
#define SIREUM_TYPE_H_org_sireum_Option_4EC416

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]

#include <type-org_sireum_Some_51939A.h>
#include <type-org_sireum_None_C931A3.h>

typedef union Option_4EC416 *Option_4EC416;
union Option_4EC416 {
  TYPE type;
  struct Some_51939A Some_51939A;
  struct None_C931A3 None_C931A3;
};

#define DeclNewOption_4EC416(x) union Option_4EC416 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif