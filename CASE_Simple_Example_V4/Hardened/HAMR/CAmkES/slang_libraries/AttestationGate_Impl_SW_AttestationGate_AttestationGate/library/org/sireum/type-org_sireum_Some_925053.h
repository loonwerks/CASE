#ifndef SIREUM_TYPE_H_org_sireum_Some_925053
#define SIREUM_TYPE_H_org_sireum_Some_925053

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.AttestationGate_Impl_Initialization_Api]
#include <type-HAMR_SW_AttestationGate_Impl_Initialization_Api.h>

typedef struct Some_925053 *Some_925053;
struct Some_925053 {
  TYPE type;
  struct HAMR_SW_AttestationGate_Impl_Initialization_Api value;
};

#define DeclNewSome_925053(x) struct Some_925053 x = { .type = TSome_925053 }

#ifdef __cplusplus
}
#endif

#endif