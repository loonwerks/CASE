#ifndef SIREUM_TYPE_H_org_sireum_Option_D680D8
#define SIREUM_TYPE_H_org_sireum_Option_D680D8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]

#include <type-org_sireum_Some_C9A1C9.h>
#include <type-org_sireum_None_9BC69E.h>

typedef union Option_D680D8 *Option_D680D8;
union Option_D680D8 {
  TYPE type;
  struct Some_C9A1C9 Some_C9A1C9;
  struct None_9BC69E None_9BC69E;
};

#define DeclNewOption_D680D8(x) union Option_D680D8 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif