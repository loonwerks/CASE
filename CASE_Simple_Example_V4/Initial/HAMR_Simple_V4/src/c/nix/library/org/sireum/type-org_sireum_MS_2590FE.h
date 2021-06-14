#ifndef SIREUM_TYPE_H_org_sireum_MS_2590FE
#define SIREUM_TYPE_H_org_sireum_MS_2590FE

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[Z, Option[art.DataContent]]
#include <type-org_sireum_Option_8E9F45.h>

#define MaxMS_2590FE 16
#define MS_2590FESizeT int8_t

typedef struct MS_2590FE *MS_2590FE;
struct MS_2590FE {
  TYPE type;
  MS_2590FESizeT size;
  union Option_8E9F45 value[MaxMS_2590FE];
};

#define DeclNewMS_2590FE(x) struct MS_2590FE x = { .type = TMS_2590FE }

#ifdef __cplusplus
}
#endif

#endif