#ifndef SIREUM_ZN_TYPE_H
#define SIREUM_ZN_TYPE_H

#include <inttypes.h>
#include <type.h>

typedef int32_t Z;

#define Z_C(n) INT32_C(n)

#define Z_Min Z_C(INT32_MIN)
#define Z_Max Z_C(INT32_MAX)

#define Z_F "%" PRId32 ""

#endif