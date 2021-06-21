#ifndef SIREUM_TYPE_H_org_sireum_Some_F9E3B8
#define SIREUM_TYPE_H_org_sireum_Some_F9E3B8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api.h>

typedef struct Some_F9E3B8 *Some_F9E3B8;
struct Some_F9E3B8 {
  TYPE type;
  struct HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api value;
};

#define DeclNewSome_F9E3B8(x) struct Some_F9E3B8 x = { .type = TSome_F9E3B8 }

#ifdef __cplusplus
}
#endif

#endif