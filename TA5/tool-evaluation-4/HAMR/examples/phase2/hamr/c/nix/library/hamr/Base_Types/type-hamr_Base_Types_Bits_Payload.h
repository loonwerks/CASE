#ifndef SIREUM_TYPE_H_hamr_Base_Types_Bits_Payload
#define SIREUM_TYPE_H_hamr_Base_Types_Bits_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// hamr.Base_Types.Bits_Payload
#include <type-org_sireum_IS_C4F575.h>

typedef struct hamr_Base_Types_Bits_Payload *hamr_Base_Types_Bits_Payload;
struct hamr_Base_Types_Bits_Payload {
  TYPE type;
  struct IS_C4F575 value;
};

#define DeclNewhamr_Base_Types_Bits_Payload(x) struct hamr_Base_Types_Bits_Payload x = { .type = Thamr_Base_Types_Bits_Payload }

#ifdef __cplusplus
}
#endif

#endif