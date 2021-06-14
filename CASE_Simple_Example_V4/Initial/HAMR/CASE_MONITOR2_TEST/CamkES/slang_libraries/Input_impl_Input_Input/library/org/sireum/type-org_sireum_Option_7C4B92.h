#ifndef SIREUM_TYPE_H_org_sireum_Option_7C4B92
#define SIREUM_TYPE_H_org_sireum_Option_7C4B92

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]

#include <type-org_sireum_None_9A887C.h>
#include <type-org_sireum_Some_CBF40F.h>

typedef union Option_7C4B92 *Option_7C4B92;
union Option_7C4B92 {
  TYPE type;
  struct None_9A887C None_9A887C;
  struct Some_CBF40F Some_CBF40F;
};

#define DeclNewOption_7C4B92(x) union Option_7C4B92 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif