#ifndef SIREUM_TYPE_H_org_sireum_Some_9DE0EF
#define SIREUM_TYPE_H_org_sireum_Some_9DE0EF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api.h>

typedef struct Some_9DE0EF *Some_9DE0EF;
struct Some_9DE0EF {
  TYPE type;
  struct HAMR_Simple_V4_SW_AttestationManager_Impl_Initialization_Api value;
};

#define DeclNewSome_9DE0EF(x) struct Some_9DE0EF x = { .type = TSome_9DE0EF }

#ifdef __cplusplus
}
#endif

#endif