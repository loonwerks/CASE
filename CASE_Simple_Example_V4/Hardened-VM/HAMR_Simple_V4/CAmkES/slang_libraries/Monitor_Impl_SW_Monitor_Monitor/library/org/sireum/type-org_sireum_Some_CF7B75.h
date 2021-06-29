#ifndef SIREUM_TYPE_H_org_sireum_Some_CF7B75
#define SIREUM_TYPE_H_org_sireum_Some_CF7B75

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api.h>

typedef struct Some_CF7B75 *Some_CF7B75;
struct Some_CF7B75 {
  TYPE type;
  struct HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api value;
};

#define DeclNewSome_CF7B75(x) struct Some_CF7B75 x = { .type = TSome_CF7B75 }

#ifdef __cplusplus
}
#endif

#endif