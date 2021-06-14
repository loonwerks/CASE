#ifndef SIREUM_TYPE_H_org_sireum_Option_31DBF5
#define SIREUM_TYPE_H_org_sireum_Option_31DBF5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]

#include <type-org_sireum_Some_BD30E2.h>
#include <type-org_sireum_None_599856.h>

typedef union Option_31DBF5 *Option_31DBF5;
union Option_31DBF5 {
  TYPE type;
  struct Some_BD30E2 Some_BD30E2;
  struct None_599856 None_599856;
};

#define DeclNewOption_31DBF5(x) union Option_31DBF5 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif