#ifndef SIREUM_TYPE_H_org_sireum_Option_CEC5BB
#define SIREUM_TYPE_H_org_sireum_Option_CEC5BB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]

#include <type-org_sireum_Some_F9E3B8.h>
#include <type-org_sireum_None_39F351.h>

typedef union Option_CEC5BB *Option_CEC5BB;
union Option_CEC5BB {
  TYPE type;
  struct Some_F9E3B8 Some_F9E3B8;
  struct None_39F351 None_39F351;
};

#define DeclNewOption_CEC5BB(x) union Option_CEC5BB x = { 0 }

#ifdef __cplusplus
}
#endif

#endif