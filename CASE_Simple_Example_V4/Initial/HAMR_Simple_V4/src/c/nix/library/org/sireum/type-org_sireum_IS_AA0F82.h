#ifndef SIREUM_TYPE_H_org_sireum_IS_AA0F82
#define SIREUM_TYPE_H_org_sireum_IS_AA0F82

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, (Z, Z)]
#include <type-org_sireum_Tuple2_EC3B57.h>

#define MaxIS_AA0F82 16
#define IS_AA0F82SizeT int8_t

typedef struct IS_AA0F82 *IS_AA0F82;
struct IS_AA0F82 {
  TYPE type;
  IS_AA0F82SizeT size;
  struct Tuple2_EC3B57 value[MaxIS_AA0F82];
};

#define DeclNewIS_AA0F82(x) struct IS_AA0F82 x = { .type = TIS_AA0F82 }

#ifdef __cplusplus
}
#endif

#endif