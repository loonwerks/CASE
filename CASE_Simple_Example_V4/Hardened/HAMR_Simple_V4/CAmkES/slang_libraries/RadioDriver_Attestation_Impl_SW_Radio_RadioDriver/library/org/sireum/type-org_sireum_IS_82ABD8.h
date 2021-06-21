#ifndef SIREUM_TYPE_H_org_sireum_IS_82ABD8
#define SIREUM_TYPE_H_org_sireum_IS_82ABD8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, Z]

#define MaxIS_82ABD8 16
#define IS_82ABD8SizeT int8_t

typedef struct IS_82ABD8 *IS_82ABD8;
struct IS_82ABD8 {
  TYPE type;
  IS_82ABD8SizeT size;
  Z value[MaxIS_82ABD8];
};

#define DeclNewIS_82ABD8(x) struct IS_82ABD8 x = { .type = TIS_82ABD8 }

#ifdef __cplusplus
}
#endif

#endif