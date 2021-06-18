#ifndef SIREUM_TYPE_H_org_sireum_Option_B4E093
#define SIREUM_TYPE_H_org_sireum_Option_B4E093

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_D64418.h>
#include <type-org_sireum_Some_CA0A4D.h>

typedef union Option_B4E093 *Option_B4E093;
union Option_B4E093 {
  TYPE type;
  struct None_D64418 None_D64418;
  struct Some_CA0A4D Some_CA0A4D;
};

#define DeclNewOption_B4E093(x) union Option_B4E093 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif