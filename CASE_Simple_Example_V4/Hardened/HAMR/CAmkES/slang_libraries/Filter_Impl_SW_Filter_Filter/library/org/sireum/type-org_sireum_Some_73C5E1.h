#ifndef SIREUM_TYPE_H_org_sireum_Some_73C5E1
#define SIREUM_TYPE_H_org_sireum_Some_73C5E1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.Filter_Impl_Operational_Api]
#include <type-HAMR_SW_Filter_Impl_Operational_Api.h>

typedef struct Some_73C5E1 *Some_73C5E1;
struct Some_73C5E1 {
  TYPE type;
  struct HAMR_SW_Filter_Impl_Operational_Api value;
};

#define DeclNewSome_73C5E1(x) struct Some_73C5E1 x = { .type = TSome_73C5E1 }

#ifdef __cplusplus
}
#endif

#endif