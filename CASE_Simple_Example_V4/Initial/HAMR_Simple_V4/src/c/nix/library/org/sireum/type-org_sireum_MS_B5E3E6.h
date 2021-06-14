#ifndef SIREUM_TYPE_H_org_sireum_MS_B5E3E6
#define SIREUM_TYPE_H_org_sireum_MS_B5E3E6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[Z, IS[Z, (Z, Z)]]
#include <type-org_sireum_IS_AA0F82.h>

#define MaxMS_B5E3E6 16
#define MS_B5E3E6SizeT int8_t

typedef struct MS_B5E3E6 *MS_B5E3E6;
struct MS_B5E3E6 {
  TYPE type;
  MS_B5E3E6SizeT size;
  struct IS_AA0F82 value[MaxMS_B5E3E6];
};

#define DeclNewMS_B5E3E6(x) struct MS_B5E3E6 x = { .type = TMS_B5E3E6 }

#ifdef __cplusplus
}
#endif

#endif