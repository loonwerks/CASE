#ifndef SIREUM_TYPE_H_org_sireum_Option_3ABCB9
#define SIREUM_TYPE_H_org_sireum_Option_3ABCB9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.Filter_Impl_Initialization_Api]

#include <type-org_sireum_Some_CA4FA3.h>
#include <type-org_sireum_None_E227E5.h>

typedef union Option_3ABCB9 *Option_3ABCB9;
union Option_3ABCB9 {
  TYPE type;
  struct Some_CA4FA3 Some_CA4FA3;
  struct None_E227E5 None_E227E5;
};

#define DeclNewOption_3ABCB9(x) union Option_3ABCB9 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif