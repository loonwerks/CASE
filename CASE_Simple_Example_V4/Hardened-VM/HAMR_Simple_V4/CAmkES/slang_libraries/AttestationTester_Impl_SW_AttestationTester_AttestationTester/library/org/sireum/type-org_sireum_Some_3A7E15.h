#ifndef SIREUM_TYPE_H_org_sireum_Some_3A7E15
#define SIREUM_TYPE_H_org_sireum_Some_3A7E15

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api.h>

typedef struct Some_3A7E15 *Some_3A7E15;
struct Some_3A7E15 {
  TYPE type;
  struct HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api value;
};

#define DeclNewSome_3A7E15(x) struct Some_3A7E15 x = { .type = TSome_3A7E15 }

#ifdef __cplusplus
}
#endif

#endif