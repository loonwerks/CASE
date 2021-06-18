#ifndef SIREUM_TYPE_H_org_sireum_Option_6F37E4
#define SIREUM_TYPE_H_org_sireum_Option_6F37E4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_C554A3.h>
#include <type-org_sireum_Some_967389.h>

typedef union Option_6F37E4 *Option_6F37E4;
union Option_6F37E4 {
  TYPE type;
  struct None_C554A3 None_C554A3;
  struct Some_967389 Some_967389;
};

#define DeclNewOption_6F37E4(x) union Option_6F37E4 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif