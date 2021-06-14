#ifndef SIREUM_TYPE_H_org_sireum_Option_A9BD80
#define SIREUM_TYPE_H_org_sireum_Option_A9BD80

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

#include <type-org_sireum_None_8805C8.h>
#include <type-org_sireum_Some_2E1D55.h>

typedef union Option_A9BD80 *Option_A9BD80;
union Option_A9BD80 {
  TYPE type;
  struct None_8805C8 None_8805C8;
  struct Some_2E1D55 Some_2E1D55;
};

#define DeclNewOption_A9BD80(x) union Option_A9BD80 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif