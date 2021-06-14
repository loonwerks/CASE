#ifndef SIREUM_TYPE_H_org_sireum_Option_F9C054
#define SIREUM_TYPE_H_org_sireum_Option_F9C054

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]

#include <type-org_sireum_None_EC3D0D.h>
#include <type-org_sireum_Some_2D0976.h>

typedef union Option_F9C054 *Option_F9C054;
union Option_F9C054 {
  TYPE type;
  struct None_EC3D0D None_EC3D0D;
  struct Some_2D0976 Some_2D0976;
};

#define DeclNewOption_F9C054(x) union Option_F9C054 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif