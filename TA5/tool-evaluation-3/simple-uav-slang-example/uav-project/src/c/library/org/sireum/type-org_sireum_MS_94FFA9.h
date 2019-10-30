#ifndef SIREUM_TYPE_H_org_sireum_MS_94FFA9
#define SIREUM_TYPE_H_org_sireum_MS_94FFA9
#include <misc.h>

// MS[Z, MOption[art.Bridge]]
#include <type-org_sireum_MOption_EA1D29.h>

#define MaxMS_94FFA9 24
#define MS_94FFA9SizeT int8_t

typedef struct MS_94FFA9 *MS_94FFA9;
struct MS_94FFA9 {
  TYPE type;
  int8_t size;
  union MOption_EA1D29 value[MaxMS_94FFA9];
};

#define DeclNewMS_94FFA9(x) struct MS_94FFA9 x = { .type = TMS_94FFA9 }

static inline Z MS_94FFA9_size(STACK_FRAME MS_94FFA9 this) {
   return (Z) (this)->size;
}

static inline Z MS_94FFA9_zize(STACK_FRAME MS_94FFA9 this) {
   return (Z) (this)->size;
}

#define MS_94FFA9_at(this, i) ((MOption_EA1D29) &((this)->value[(int8_t) (i)]))

#endif