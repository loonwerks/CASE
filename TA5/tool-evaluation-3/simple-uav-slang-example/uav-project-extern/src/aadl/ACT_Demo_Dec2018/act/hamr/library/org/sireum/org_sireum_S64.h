#ifndef SIREUM_H_org_sireum_S64
#define SIREUM_H_org_sireum_S64
#include <types.h>

#include <assert.h>

#define S64_range(n) n;
inline S64 S64__plus(S64 n) {
  return S64_range(n);
}

inline S64 S64__minus(S64 n) {
  return S64_range((S64) -n);
}

inline S64 S64__add(S64 n1, S64 n2) {
  return S64_range((S64) (n1 + n2));
}

inline S64 S64__sub(S64 n1, S64 n2) {
  return S64_range((S64) (n1 - n2));
}

inline S64 S64__mul(S64 n1, S64 n2) {
  return S64_range((S64) (n1 * n2));
}

inline S64 S64__div(S64 n1, S64 n2) {
  return S64_range((S64) (n1 / n2));
}

inline S64 S64__rem(S64 n1, S64 n2) {
  return S64_range((S64) (n1 % n2));
}

inline B S64__eq(S64 n1, S64 n2) {
  return (B) (n1 == n2);
}

inline B S64__ne(S64 n1, S64 n2) {
  return (B) (n1 != n2);
}

inline B S64__lt(S64 n1, S64 n2) {
  return (B) (n1 < n2);
}

inline B S64__le(S64 n1, S64 n2) {
  return (B) (n1 <= n2);
}

inline B S64__gt(S64 n1, S64 n2) {
  return (B) (n1 > n2);
}

inline B S64__ge(S64 n1, S64 n2) {
  return (B) (n1 >= n2);
}

inline S64 S64__complement(S64 n) {
  uint64_t un = (uint64_t) n;
  return (S64) ~un;
}

inline S64 S64__shl(S64 n1, S64 n2) {
  uint64_t un1 = (uint64_t) n1;
  uint64_t un2 = (uint64_t) n2;
  return S64_range((S64) (un1 << un2));
}

inline S64 S64__shr(S64 n1, S64 n2) {
  uint64_t un1 = (uint64_t) n1;
  uint64_t un2 = (uint64_t) n2;
  return S64_range((S64) (un1 >> un2));
}

inline S64 S64__ushr(S64 n1, S64 n2) {
  uint64_t un1 = (uint64_t) n1;
  uint64_t un2 = (uint64_t) n2;
  return S64_range((S64) (un1 >> un2));
}

inline S64 S64__and(S64 n1, S64 n2) {
  uint64_t un1 = (uint64_t) n1;
  uint64_t un2 = (uint64_t) n2;
  return S64_range((S64) (un1 & un2));
}

inline S64 S64__or(S64 n1, S64 n2) {
  uint64_t un1 = (uint64_t) n1;
  uint64_t un2 = (uint64_t) n2;
  return S64_range((S64) (un1 | un2));
}

inline S64 S64__xor(S64 n1, S64 n2) {
  uint64_t un1 = (uint64_t) n1;
  uint64_t un2 = (uint64_t) n2;
  return S64_range((S64) (un1 ^ un2));
}

#ifdef SIREUM_NO_PRINT
#define S64_cprint(this, isOut)
#else
#define S64_cprint(this, isOut) { if (isOut) printf(S64_F, this); else fprintf(stderr, S64_F, this); }
#endif
void S64_string_(STACK_FRAME String result, S64 this);

#endif