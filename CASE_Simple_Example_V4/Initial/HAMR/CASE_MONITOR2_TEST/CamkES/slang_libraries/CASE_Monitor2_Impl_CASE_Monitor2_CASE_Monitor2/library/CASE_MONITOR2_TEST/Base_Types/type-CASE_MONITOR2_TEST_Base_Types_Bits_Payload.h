#ifndef SIREUM_TYPE_H_CASE_MONITOR2_TEST_Base_Types_Bits_Payload
#define SIREUM_TYPE_H_CASE_MONITOR2_TEST_Base_Types_Bits_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// CASE_MONITOR2_TEST.Base_Types.Bits_Payload
#include <type-org_sireum_IS_C4F575.h>

typedef struct CASE_MONITOR2_TEST_Base_Types_Bits_Payload *CASE_MONITOR2_TEST_Base_Types_Bits_Payload;
struct CASE_MONITOR2_TEST_Base_Types_Bits_Payload {
  TYPE type;
  struct IS_C4F575 value;
};

#define DeclNewCASE_MONITOR2_TEST_Base_Types_Bits_Payload(x) struct CASE_MONITOR2_TEST_Base_Types_Bits_Payload x = { .type = TCASE_MONITOR2_TEST_Base_Types_Bits_Payload }

#ifdef __cplusplus
}
#endif

#endif