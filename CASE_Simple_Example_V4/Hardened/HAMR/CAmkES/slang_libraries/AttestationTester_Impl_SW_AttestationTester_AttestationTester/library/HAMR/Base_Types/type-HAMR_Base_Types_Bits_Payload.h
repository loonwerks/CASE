#ifndef SIREUM_TYPE_H_HAMR_Base_Types_Bits_Payload
#define SIREUM_TYPE_H_HAMR_Base_Types_Bits_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR.Base_Types.Bits_Payload
#include <type-org_sireum_IS_C4F575.h>

typedef struct HAMR_Base_Types_Bits_Payload *HAMR_Base_Types_Bits_Payload;
struct HAMR_Base_Types_Bits_Payload {
  TYPE type;
  struct IS_C4F575 value;
};

#define DeclNewHAMR_Base_Types_Bits_Payload(x) struct HAMR_Base_Types_Bits_Payload x = { .type = THAMR_Base_Types_Bits_Payload }

#ifdef __cplusplus
}
#endif

#endif