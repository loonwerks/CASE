#ifndef SIREUM_TYPE_H_org_sireum_Some_262A95
#define SIREUM_TYPE_H_org_sireum_Some_262A95

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api.h>

typedef struct Some_262A95 *Some_262A95;
struct Some_262A95 {
  TYPE type;
  struct HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api value;
};

#define DeclNewSome_262A95(x) struct Some_262A95 x = { .type = TSome_262A95 }

#ifdef __cplusplus
}
#endif

#endif