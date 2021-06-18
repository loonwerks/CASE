#ifndef SIREUM_TYPE_H_org_sireum_Option_9CA19A
#define SIREUM_TYPE_H_org_sireum_Option_9CA19A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_3A40F5.h>
#include <type-org_sireum_Some_FCAC0B.h>

typedef union Option_9CA19A *Option_9CA19A;
union Option_9CA19A {
  TYPE type;
  struct None_3A40F5 None_3A40F5;
  struct Some_FCAC0B Some_FCAC0B;
};

#define DeclNewOption_9CA19A(x) union Option_9CA19A x = { 0 }

#ifdef __cplusplus
}
#endif

#endif