#ifndef SIREUM_TYPE_H_org_sireum_IS_948B60
#define SIREUM_TYPE_H_org_sireum_IS_948B60
#include <misc.h>

// IS[Z, String]

#define MaxIS_948B60 24
#define IS_948B60SizeT int8_t

typedef struct IS_948B60 *IS_948B60;
struct IS_948B60 {
  TYPE type;
  int8_t size;
  struct StaticString value[MaxIS_948B60];
};

#define DeclNewIS_948B60(x) struct IS_948B60 x = { .type = TIS_948B60 }

static inline Z IS_948B60_size(STACK_FRAME IS_948B60 this) {
   return (Z) (this)->size;
}

static inline Z IS_948B60_zize(STACK_FRAME IS_948B60 this) {
   return (Z) (this)->size;
}

#define IS_948B60_at(this, i) ((String) &((this)->value[(int8_t) (i)]))

#endif