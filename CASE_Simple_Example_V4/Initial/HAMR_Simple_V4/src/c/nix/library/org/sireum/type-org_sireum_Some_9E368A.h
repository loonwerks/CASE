#ifndef SIREUM_TYPE_H_org_sireum_Some_9E368A
#define SIREUM_TYPE_H_org_sireum_Some_9E368A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api.h>

typedef struct Some_9E368A *Some_9E368A;
struct Some_9E368A {
  TYPE type;
  struct HAMR_Simple_V4_SW_RadioDriver_Impl_Initialization_Api value;
};

#define DeclNewSome_9E368A(x) struct Some_9E368A x = { .type = TSome_9E368A }

#ifdef __cplusplus
}
#endif

#endif