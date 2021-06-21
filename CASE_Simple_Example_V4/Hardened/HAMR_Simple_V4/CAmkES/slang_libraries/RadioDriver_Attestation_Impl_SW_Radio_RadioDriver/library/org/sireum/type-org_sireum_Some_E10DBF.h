#ifndef SIREUM_TYPE_H_org_sireum_Some_E10DBF
#define SIREUM_TYPE_H_org_sireum_Some_E10DBF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api.h>

typedef struct Some_E10DBF *Some_E10DBF;
struct Some_E10DBF {
  TYPE type;
  struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api value;
};

#define DeclNewSome_E10DBF(x) struct Some_E10DBF x = { .type = TSome_E10DBF }

#ifdef __cplusplus
}
#endif

#endif