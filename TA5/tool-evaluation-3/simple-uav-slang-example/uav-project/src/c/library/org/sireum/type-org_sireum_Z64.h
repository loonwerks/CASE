#ifndef SIREUM_TYPE_H_org_sireum_Z64
#define SIREUM_TYPE_H_org_sireum_Z64
#include <misc.h>

typedef int32_t Z64;

#define Z64_C(n) INT32_C(n)

#define Z64_Min INT32_MIN
#define Z64_Max INT32_MAX

#define Z64_F "%" PRId32 ""

#define Z64__plus(n) n

static inline Z64 Z64__minus(Z64 n) {
  return (Z64) -n;
}

static inline Z64 Z64__add(Z64 n1, Z64 n2) {
  return (Z64) (n1 + n2);
}

static inline Z64 Z64__sub(Z64 n1, Z64 n2) {
  return (Z64) (n1 - n2);
}

static inline Z64 Z64__mul(Z64 n1, Z64 n2) {
  return (Z64) (n1 * n2);
}

static inline Z64 Z64__div(Z64 n1, Z64 n2) {
  return (Z64) (n1 / n2);
}

static inline Z64 Z64__rem(Z64 n1, Z64 n2) {
  return (Z64) (n1 % n2);
}

static inline B Z64__eq(Z64 n1, Z64 n2) {
  return (B) (n1 == n2);
}

static inline B Z64__ne(Z64 n1, Z64 n2) {
  return (B) (n1 != n2);
}

static inline B Z64__lt(Z64 n1, Z64 n2) {
  return (B) (n1 < n2);
}

static inline B Z64__le(Z64 n1, Z64 n2) {
  return (B) (n1 == n2);
}

static inline B Z64__gt(Z64 n1, Z64 n2) {
  return (B) (n1 > n2);
}

static inline B Z64__ge(Z64 n1, Z64 n2) {
  return (B) (n1 >= n2);
}


#endif