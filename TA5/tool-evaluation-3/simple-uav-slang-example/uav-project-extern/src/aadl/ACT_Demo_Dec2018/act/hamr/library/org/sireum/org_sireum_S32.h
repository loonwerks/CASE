#ifndef SIREUM_H_org_sireum_S32
#define SIREUM_H_org_sireum_S32
#include <types.h>

#include <assert.h>

#define S32_range(n) n;
inline S32 S32__plus(S32 n) {
  return S32_range(n);
}

inline S32 S32__minus(S32 n) {
  return S32_range((S32) -n);
}

inline S32 S32__add(S32 n1, S32 n2) {
  return S32_range((S32) (n1 + n2));
}

inline S32 S32__sub(S32 n1, S32 n2) {
  return S32_range((S32) (n1 - n2));
}

inline S32 S32__mul(S32 n1, S32 n2) {
  return S32_range((S32) (n1 * n2));
}

inline S32 S32__div(S32 n1, S32 n2) {
  return S32_range((S32) (n1 / n2));
}

inline S32 S32__rem(S32 n1, S32 n2) {
  return S32_range((S32) (n1 % n2));
}

inline B S32__eq(S32 n1, S32 n2) {
  return (B) (n1 == n2);
}

inline B S32__ne(S32 n1, S32 n2) {
  return (B) (n1 != n2);
}

inline B S32__lt(S32 n1, S32 n2) {
  return (B) (n1 < n2);
}

inline B S32__le(S32 n1, S32 n2) {
  return (B) (n1 <= n2);
}

inline B S32__gt(S32 n1, S32 n2) {
  return (B) (n1 > n2);
}

inline B S32__ge(S32 n1, S32 n2) {
  return (B) (n1 >= n2);
}

inline S32 S32__complement(S32 n) {
  uint32_t un = (uint32_t) n;
  return (S32) ~un;
}

inline S32 S32__shl(S32 n1, S32 n2) {
  uint32_t un1 = (uint32_t) n1;
  uint32_t un2 = (uint32_t) n2;
  return S32_range((S32) (un1 << un2));
}

inline S32 S32__shr(S32 n1, S32 n2) {
  uint32_t un1 = (uint32_t) n1;
  uint32_t un2 = (uint32_t) n2;
  return S32_range((S32) (un1 >> un2));
}

inline S32 S32__ushr(S32 n1, S32 n2) {
  uint32_t un1 = (uint32_t) n1;
  uint32_t un2 = (uint32_t) n2;
  return S32_range((S32) (un1 >> un2));
}

inline S32 S32__and(S32 n1, S32 n2) {
  uint32_t un1 = (uint32_t) n1;
  uint32_t un2 = (uint32_t) n2;
  return S32_range((S32) (un1 & un2));
}

inline S32 S32__or(S32 n1, S32 n2) {
  uint32_t un1 = (uint32_t) n1;
  uint32_t un2 = (uint32_t) n2;
  return S32_range((S32) (un1 | un2));
}

inline S32 S32__xor(S32 n1, S32 n2) {
  uint32_t un1 = (uint32_t) n1;
  uint32_t un2 = (uint32_t) n2;
  return S32_range((S32) (un1 ^ un2));
}

#ifdef SIREUM_NO_PRINT
#define S32_cprint(this, isOut)
#else
#define S32_cprint(this, isOut) { if (isOut) printf(S32_F, this); else fprintf(stderr, S32_F, this); }
#endif
void S32_string_(STACK_FRAME String result, S32 this);

#endif