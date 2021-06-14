#ifndef SIREUM_TYPE_H_org_sireum_Option_D00721
#define SIREUM_TYPE_H_org_sireum_Option_D00721

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

#include <type-org_sireum_None_1E51A3.h>
#include <type-org_sireum_Some_A6A622.h>

typedef union Option_D00721 *Option_D00721;
union Option_D00721 {
  TYPE type;
  struct None_1E51A3 None_1E51A3;
  struct Some_A6A622 Some_A6A622;
};

#define DeclNewOption_D00721(x) union Option_D00721 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif