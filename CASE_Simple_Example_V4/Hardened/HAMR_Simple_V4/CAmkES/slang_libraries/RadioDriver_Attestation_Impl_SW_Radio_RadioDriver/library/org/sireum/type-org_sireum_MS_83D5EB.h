#ifndef SIREUM_TYPE_H_org_sireum_MS_83D5EB
#define SIREUM_TYPE_H_org_sireum_MS_83D5EB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[Z, Option[art.Bridge]]
#include <type-org_sireum_Option_7BBFBE.h>

#define MaxMS_83D5EB 1
#define MS_83D5EBSizeT int8_t

typedef struct MS_83D5EB *MS_83D5EB;
struct MS_83D5EB {
  TYPE type;
  MS_83D5EBSizeT size;
  union Option_7BBFBE value[MaxMS_83D5EB];
};

#define DeclNewMS_83D5EB(x) struct MS_83D5EB x = { .type = TMS_83D5EB }

#ifdef __cplusplus
}
#endif

#endif