#ifndef SIREUM_TYPE_H_org_sireum_MS_E444B2
#define SIREUM_TYPE_H_org_sireum_MS_E444B2
#include <misc.h>

// MS[Z, IS[Z, Z]]
#include <type-org_sireum_IS_82ABD8.h>

#define MaxMS_E444B2 24
#define MS_E444B2SizeT int8_t

typedef struct MS_E444B2 *MS_E444B2;
struct MS_E444B2 {
  TYPE type;
  int8_t size;
  struct IS_82ABD8 value[MaxMS_E444B2];
};

#define DeclNewMS_E444B2(x) struct MS_E444B2 x = { .type = TMS_E444B2 }

static inline Z MS_E444B2_size(STACK_FRAME MS_E444B2 this) {
   return (Z) (this)->size;
}

static inline Z MS_E444B2_zize(STACK_FRAME MS_E444B2 this) {
   return (Z) (this)->size;
}

#define MS_E444B2_at(this, i) ((IS_82ABD8) &((this)->value[(int8_t) (i)]))

#endif