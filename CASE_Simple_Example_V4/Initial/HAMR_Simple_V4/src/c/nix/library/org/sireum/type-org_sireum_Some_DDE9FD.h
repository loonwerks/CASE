#ifndef SIREUM_TYPE_H_org_sireum_Some_DDE9FD
#define SIREUM_TYPE_H_org_sireum_Some_DDE9FD

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api.h>

typedef struct Some_DDE9FD *Some_DDE9FD;
struct Some_DDE9FD {
  TYPE type;
  struct HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api value;
};

#define DeclNewSome_DDE9FD(x) struct Some_DDE9FD x = { .type = TSome_DDE9FD }

#ifdef __cplusplus
}
#endif

#endif