#ifndef SIREUM_TYPE_H_org_sireum_Some_51939A
#define SIREUM_TYPE_H_org_sireum_Some_51939A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]
#include <type-HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api.h>

typedef struct Some_51939A *Some_51939A;
struct Some_51939A {
  TYPE type;
  struct HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api value;
};

#define DeclNewSome_51939A(x) struct Some_51939A x = { .type = TSome_51939A }

#ifdef __cplusplus
}
#endif

#endif