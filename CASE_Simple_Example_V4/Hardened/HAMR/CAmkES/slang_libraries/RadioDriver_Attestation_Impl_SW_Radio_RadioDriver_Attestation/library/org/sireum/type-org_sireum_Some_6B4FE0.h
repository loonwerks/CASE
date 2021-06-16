#ifndef SIREUM_TYPE_H_org_sireum_Some_6B4FE0
#define SIREUM_TYPE_H_org_sireum_Some_6B4FE0

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]
#include <type-HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api.h>

typedef struct Some_6B4FE0 *Some_6B4FE0;
struct Some_6B4FE0 {
  TYPE type;
  struct HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api value;
};

#define DeclNewSome_6B4FE0(x) struct Some_6B4FE0 x = { .type = TSome_6B4FE0 }

#ifdef __cplusplus
}
#endif

#endif