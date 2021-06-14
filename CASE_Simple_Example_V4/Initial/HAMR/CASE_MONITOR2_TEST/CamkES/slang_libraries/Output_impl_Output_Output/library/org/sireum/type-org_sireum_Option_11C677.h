#ifndef SIREUM_TYPE_H_org_sireum_Option_11C677
#define SIREUM_TYPE_H_org_sireum_Option_11C677

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api]

#include <type-org_sireum_None_3790E6.h>
#include <type-org_sireum_Some_2C70A4.h>

typedef union Option_11C677 *Option_11C677;
union Option_11C677 {
  TYPE type;
  struct None_3790E6 None_3790E6;
  struct Some_2C70A4 Some_2C70A4;
};

#define DeclNewOption_11C677(x) union Option_11C677 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif