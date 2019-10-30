#ifndef SIREUM_TYPE_H_org_sireum_MSome_D3D128
#define SIREUM_TYPE_H_org_sireum_MSome_D3D128
#include <misc.h>

// MSome[art.Bridge]
#include <type-art_Bridge.h>

typedef struct MSome_D3D128 *MSome_D3D128;
struct MSome_D3D128 {
  TYPE type;
  union art_Bridge value;
};

#define DeclNewMSome_D3D128(x) struct MSome_D3D128 x = { .type = TMSome_D3D128 }


#endif