#ifndef SIREUM_TYPE_H_org_sireum_Option_9AD908
#define SIREUM_TYPE_H_org_sireum_Option_9AD908

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.UxAS_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_306A73.h>
#include <type-org_sireum_Some_5BDE4D.h>

typedef union Option_9AD908 *Option_9AD908;
union Option_9AD908 {
  TYPE type;
  struct None_306A73 None_306A73;
  struct Some_5BDE4D Some_5BDE4D;
};

#define DeclNewOption_9AD908(x) union Option_9AD908 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif