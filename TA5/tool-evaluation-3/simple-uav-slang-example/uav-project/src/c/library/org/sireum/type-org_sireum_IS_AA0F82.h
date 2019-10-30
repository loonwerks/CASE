#ifndef SIREUM_TYPE_H_org_sireum_IS_AA0F82
#define SIREUM_TYPE_H_org_sireum_IS_AA0F82
#include <misc.h>

// IS[Z, (Z, Z)]
#include <type-org_sireum_Tuple2_EC3B57.h>

#define MaxIS_AA0F82 24
#define IS_AA0F82SizeT int8_t

typedef struct IS_AA0F82 *IS_AA0F82;
struct IS_AA0F82 {
  TYPE type;
  int8_t size;
  struct Tuple2_EC3B57 value[MaxIS_AA0F82];
};

#define DeclNewIS_AA0F82(x) struct IS_AA0F82 x = { .type = TIS_AA0F82 }

static inline Z IS_AA0F82_size(STACK_FRAME IS_AA0F82 this) {
   return (Z) (this)->size;
}

static inline Z IS_AA0F82_zize(STACK_FRAME IS_AA0F82 this) {
   return (Z) (this)->size;
}

#define IS_AA0F82_at(this, i) ((Tuple2_EC3B57) &((this)->value[(int8_t) (i)]))

#endif