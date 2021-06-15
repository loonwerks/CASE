#ifndef SIREUM_TYPE_H_org_sireum_Some_88F02A
#define SIREUM_TYPE_H_org_sireum_Some_88F02A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.AttestationManager_Impl_Initialization_Api]
#include <type-HAMR_SW_AttestationManager_Impl_Initialization_Api.h>

typedef struct Some_88F02A *Some_88F02A;
struct Some_88F02A {
  TYPE type;
  struct HAMR_SW_AttestationManager_Impl_Initialization_Api value;
};

#define DeclNewSome_88F02A(x) struct Some_88F02A x = { .type = TSome_88F02A }

#ifdef __cplusplus
}
#endif

#endif