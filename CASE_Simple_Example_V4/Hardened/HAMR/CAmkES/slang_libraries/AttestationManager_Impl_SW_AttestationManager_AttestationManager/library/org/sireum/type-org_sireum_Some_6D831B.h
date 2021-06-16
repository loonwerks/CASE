#ifndef SIREUM_TYPE_H_org_sireum_Some_6D831B
#define SIREUM_TYPE_H_org_sireum_Some_6D831B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.AttestationManager_Impl_Operational_Api]
#include <type-HAMR_SW_AttestationManager_Impl_Operational_Api.h>

typedef struct Some_6D831B *Some_6D831B;
struct Some_6D831B {
  TYPE type;
  struct HAMR_SW_AttestationManager_Impl_Operational_Api value;
};

#define DeclNewSome_6D831B(x) struct Some_6D831B x = { .type = TSome_6D831B }

#ifdef __cplusplus
}
#endif

#endif