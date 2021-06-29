#ifndef SIREUM_TYPE_H_org_sireum_Some_CFA8D1
#define SIREUM_TYPE_H_org_sireum_Some_CFA8D1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api.h>

typedef struct Some_CFA8D1 *Some_CFA8D1;
struct Some_CFA8D1 {
  TYPE type;
  struct HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api value;
};

#define DeclNewSome_CFA8D1(x) struct Some_CFA8D1 x = { .type = TSome_CFA8D1 }

#ifdef __cplusplus
}
#endif

#endif