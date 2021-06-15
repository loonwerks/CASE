#ifndef SIREUM_TYPE_H_org_sireum_Some_CA4FA3
#define SIREUM_TYPE_H_org_sireum_Some_CA4FA3

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.Filter_Impl_Initialization_Api]
#include <type-HAMR_SW_Filter_Impl_Initialization_Api.h>

typedef struct Some_CA4FA3 *Some_CA4FA3;
struct Some_CA4FA3 {
  TYPE type;
  struct HAMR_SW_Filter_Impl_Initialization_Api value;
};

#define DeclNewSome_CA4FA3(x) struct Some_CA4FA3 x = { .type = TSome_CA4FA3 }

#ifdef __cplusplus
}
#endif

#endif