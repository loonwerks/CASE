#ifndef SIREUM_TYPE_H_org_sireum_Some_B273EC
#define SIREUM_TYPE_H_org_sireum_Some_B273EC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api.h>

typedef struct Some_B273EC *Some_B273EC;
struct Some_B273EC {
  TYPE type;
  struct HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api value;
};

#define DeclNewSome_B273EC(x) struct Some_B273EC x = { .type = TSome_B273EC }

#ifdef __cplusplus
}
#endif

#endif