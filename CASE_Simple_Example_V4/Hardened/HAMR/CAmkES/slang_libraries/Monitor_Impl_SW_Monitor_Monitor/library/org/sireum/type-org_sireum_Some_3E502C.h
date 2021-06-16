#ifndef SIREUM_TYPE_H_org_sireum_Some_3E502C
#define SIREUM_TYPE_H_org_sireum_Some_3E502C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.Monitor_Impl_Operational_Api]
#include <type-HAMR_SW_Monitor_Impl_Operational_Api.h>

typedef struct Some_3E502C *Some_3E502C;
struct Some_3E502C {
  TYPE type;
  struct HAMR_SW_Monitor_Impl_Operational_Api value;
};

#define DeclNewSome_3E502C(x) struct Some_3E502C x = { .type = TSome_3E502C }

#ifdef __cplusplus
}
#endif

#endif