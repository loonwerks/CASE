#ifndef SIREUM_TYPE_H_org_sireum_Some_4F9B23
#define SIREUM_TYPE_H_org_sireum_Some_4F9B23

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.AttestationTester_Impl_Initialization_Api]
#include <type-HAMR_SW_AttestationTester_Impl_Initialization_Api.h>

typedef struct Some_4F9B23 *Some_4F9B23;
struct Some_4F9B23 {
  TYPE type;
  struct HAMR_SW_AttestationTester_Impl_Initialization_Api value;
};

#define DeclNewSome_4F9B23(x) struct Some_4F9B23 x = { .type = TSome_4F9B23 }

#ifdef __cplusplus
}
#endif

#endif