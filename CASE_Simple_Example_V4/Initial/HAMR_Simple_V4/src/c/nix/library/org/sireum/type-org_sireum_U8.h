#ifndef SIREUM_TYPE_H_org_sireum_U8
#define SIREUM_TYPE_H_org_sireum_U8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

typedef uint8_t U8;

#define U8_C(n) UINT8_C(n)

#define U8_Min UINT8_C(0)
#define U8_Max UINT8_MAX

#define U8_F "%02" PRIX8 ""

#ifdef __cplusplus
}
#endif

#endif