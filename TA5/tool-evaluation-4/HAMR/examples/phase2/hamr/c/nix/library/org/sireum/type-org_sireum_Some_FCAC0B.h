#ifndef SIREUM_TYPE_H_org_sireum_Some_FCAC0B
#define SIREUM_TYPE_H_org_sireum_Some_FCAC0B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]
#include <type-hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api.h>

typedef struct Some_FCAC0B *Some_FCAC0B;
struct Some_FCAC0B {
  TYPE type;
  struct hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api value;
};

#define DeclNewSome_FCAC0B(x) struct Some_FCAC0B x = { .type = TSome_FCAC0B }

#ifdef __cplusplus
}
#endif

#endif