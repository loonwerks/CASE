#ifndef SIREUM_TYPE_H_org_sireum_Some_FDA5C5
#define SIREUM_TYPE_H_org_sireum_Some_FDA5C5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_Filter_Impl_Operational_Api.h>

typedef struct Some_FDA5C5 *Some_FDA5C5;
struct Some_FDA5C5 {
  TYPE type;
  struct HAMR_Simple_V4_SW_Filter_Impl_Operational_Api value;
};

#define DeclNewSome_FDA5C5(x) struct Some_FDA5C5 x = { .type = TSome_FDA5C5 }

#ifdef __cplusplus
}
#endif

#endif