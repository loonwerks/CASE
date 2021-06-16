#ifndef SIREUM_TYPE_H_org_sireum_Some_E55508
#define SIREUM_TYPE_H_org_sireum_Some_E55508

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.AttestationTester_Impl_Operational_Api]
#include <type-HAMR_SW_AttestationTester_Impl_Operational_Api.h>

typedef struct Some_E55508 *Some_E55508;
struct Some_E55508 {
  TYPE type;
  struct HAMR_SW_AttestationTester_Impl_Operational_Api value;
};

#define DeclNewSome_E55508(x) struct Some_E55508 x = { .type = TSome_E55508 }

#ifdef __cplusplus
}
#endif

#endif