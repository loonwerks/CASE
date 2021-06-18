#ifndef SIREUM_TYPE_H_org_sireum_Option_63CBE2
#define SIREUM_TYPE_H_org_sireum_Option_63CBE2

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_4BF8A4.h>
#include <type-org_sireum_Some_993707.h>

typedef union Option_63CBE2 *Option_63CBE2;
union Option_63CBE2 {
  TYPE type;
  struct None_4BF8A4 None_4BF8A4;
  struct Some_993707 Some_993707;
};

#define DeclNewOption_63CBE2(x) union Option_63CBE2 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif