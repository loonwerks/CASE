#ifndef SIREUM_TYPE_H_org_sireum_MOption_EA1D29
#define SIREUM_TYPE_H_org_sireum_MOption_EA1D29
#include <misc.h>

// MOption[art.Bridge]

#include <type-org_sireum_MNone_2A2E1D.h>
#include <type-org_sireum_MSome_D3D128.h>

typedef union MOption_EA1D29 *MOption_EA1D29;
union MOption_EA1D29 {
  TYPE type;
  struct MNone_2A2E1D MNone_2A2E1D;
  struct MSome_D3D128 MSome_D3D128;
};

#define DeclNewMOption_EA1D29(x) union MOption_EA1D29 x = { 0 }

#endif