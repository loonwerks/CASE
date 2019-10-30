#ifndef SIREUM_TYPE_H_org_sireum_MS_2590FE
#define SIREUM_TYPE_H_org_sireum_MS_2590FE
#include <misc.h>

// MS[Z, Option[art.DataContent]]
#include <type-org_sireum_Option_8E9F45.h>

#define MaxMS_2590FE 24
#define MS_2590FESizeT int8_t

typedef struct MS_2590FE *MS_2590FE;
struct MS_2590FE {
  TYPE type;
  int8_t size;
  union Option_8E9F45 value[MaxMS_2590FE];
};

#define DeclNewMS_2590FE(x) struct MS_2590FE x = { .type = TMS_2590FE }

static inline Z MS_2590FE_size(STACK_FRAME MS_2590FE this) {
   return (Z) (this)->size;
}

static inline Z MS_2590FE_zize(STACK_FRAME MS_2590FE this) {
   return (Z) (this)->size;
}

#define MS_2590FE_at(this, i) ((Option_8E9F45) &((this)->value[(int8_t) (i)]))

#endif