#ifndef SIREUM_TYPE_H_org_sireum_Option_9382FA
#define SIREUM_TYPE_H_org_sireum_Option_9382FA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]

#include <type-org_sireum_None_77A6BF.h>
#include <type-org_sireum_Some_6322F0.h>

typedef union Option_9382FA *Option_9382FA;
union Option_9382FA {
  TYPE type;
  struct None_77A6BF None_77A6BF;
  struct Some_6322F0 Some_6322F0;
};

#define DeclNewOption_9382FA(x) union Option_9382FA x = { 0 }

#ifdef __cplusplus
}
#endif

#endif