#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_EC3B57
#define SIREUM_TYPE_H_org_sireum_Tuple2_EC3B57

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// (Z, Z)

typedef struct Tuple2_EC3B57 *Tuple2_EC3B57;
struct Tuple2_EC3B57 {
  TYPE type;
  Z _1;
  Z _2;
};

#define DeclNewTuple2_EC3B57(x) struct Tuple2_EC3B57 x = { .type = TTuple2_EC3B57 }
#define Tuple2_EC3B57_size(this) Z_C(2)

#ifdef __cplusplus
}
#endif

#endif