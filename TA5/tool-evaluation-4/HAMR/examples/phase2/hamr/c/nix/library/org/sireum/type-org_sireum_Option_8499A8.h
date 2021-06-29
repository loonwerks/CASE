#ifndef SIREUM_TYPE_H_org_sireum_Option_8499A8
#define SIREUM_TYPE_H_org_sireum_Option_8499A8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]

#include <type-org_sireum_None_60EB73.h>
#include <type-org_sireum_Some_08A5F4.h>

typedef union Option_8499A8 *Option_8499A8;
union Option_8499A8 {
  TYPE type;
  struct None_60EB73 None_60EB73;
  struct Some_08A5F4 Some_08A5F4;
};

#define DeclNewOption_8499A8(x) union Option_8499A8 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif