#ifndef SIREUM_TYPE_H_org_sireum_Option_3BD6B8
#define SIREUM_TYPE_H_org_sireum_Option_3BD6B8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]

#include <type-org_sireum_None_1328AE.h>
#include <type-org_sireum_Some_DBA49C.h>

typedef union Option_3BD6B8 *Option_3BD6B8;
union Option_3BD6B8 {
  TYPE type;
  struct None_1328AE None_1328AE;
  struct Some_DBA49C Some_DBA49C;
};

#define DeclNewOption_3BD6B8(x) union Option_3BD6B8 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif