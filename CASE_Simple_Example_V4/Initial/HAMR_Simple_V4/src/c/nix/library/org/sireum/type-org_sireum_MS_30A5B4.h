#ifndef SIREUM_TYPE_H_org_sireum_MS_30A5B4
#define SIREUM_TYPE_H_org_sireum_MS_30A5B4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[Z, Z]

#define MaxMS_30A5B4 16
#define MS_30A5B4SizeT int8_t

typedef struct MS_30A5B4 *MS_30A5B4;
struct MS_30A5B4 {
  TYPE type;
  MS_30A5B4SizeT size;
  Z value[MaxMS_30A5B4];
};

#define DeclNewMS_30A5B4(x) struct MS_30A5B4 x = { .type = TMS_30A5B4 }

#ifdef __cplusplus
}
#endif

#endif