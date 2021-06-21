#ifndef SIREUM_ZN_TYPE_H
#define SIREUM_ZN_TYPE_H

#include <inttypes.h>
#include <type.h>

typedef int64_t Z;

#define Z_C(n) INT64_C(n)

#define Z_Min Z_C(INT64_MIN)
#define Z_Max Z_C(INT64_MAX)

#define Z_F "%" PRId64 ""

#endif