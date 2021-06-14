#ifndef SIREUM_TYPE_H_org_sireum_Option_7570D9
#define SIREUM_TYPE_H_org_sireum_Option_7570D9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]

#include <type-org_sireum_None_04B2B5.h>
#include <type-org_sireum_Some_ED6B7D.h>

typedef union Option_7570D9 *Option_7570D9;
union Option_7570D9 {
  TYPE type;
  struct None_04B2B5 None_04B2B5;
  struct Some_ED6B7D Some_ED6B7D;
};

#define DeclNewOption_7570D9(x) union Option_7570D9 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif