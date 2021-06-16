#ifndef SIREUM_TYPE_H_org_sireum_Some_8753F1
#define SIREUM_TYPE_H_org_sireum_Some_8753F1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.AttestationGate_Impl_Operational_Api]
#include <type-HAMR_SW_AttestationGate_Impl_Operational_Api.h>

typedef struct Some_8753F1 *Some_8753F1;
struct Some_8753F1 {
  TYPE type;
  struct HAMR_SW_AttestationGate_Impl_Operational_Api value;
};

#define DeclNewSome_8753F1(x) struct Some_8753F1 x = { .type = TSome_8753F1 }

#ifdef __cplusplus
}
#endif

#endif