#ifndef SIREUM_H_org_sireum_U8
#define SIREUM_H_org_sireum_U8

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

#include <lib.h>

#define U8_range(n) n;
inline U8 U8__plus(U8 n) {
  return U8_range(n);
}

inline U8 U8__minus(U8 n) {
  return U8_range((U8) -n);
}

inline U8 U8__add(U8 n1, U8 n2) {
  return U8_range((U8) (n1 + n2));
}

inline U8 U8__sub(U8 n1, U8 n2) {
  return U8_range((U8) (n1 - n2));
}

inline U8 U8__mul(U8 n1, U8 n2) {
  return U8_range((U8) (n1 * n2));
}

inline U8 U8__div(U8 n1, U8 n2) {
  return U8_range((U8) (n1 / n2));
}

inline U8 U8__rem(U8 n1, U8 n2) {
  return U8_range((U8) (n1 % n2));
}

inline B U8__eq(U8 n1, U8 n2) {
  return (B) (n1 == n2);
}

inline B U8__ne(U8 n1, U8 n2) {
  return (B) (n1 != n2);
}

inline B U8__lt(U8 n1, U8 n2) {
  return (B) (n1 < n2);
}

inline B U8__le(U8 n1, U8 n2) {
  return (B) (n1 <= n2);
}

inline B U8__gt(U8 n1, U8 n2) {
  return (B) (n1 > n2);
}

inline B U8__ge(U8 n1, U8 n2) {
  return (B) (n1 >= n2);
}

inline U8 U8__complement(U8 n) {
  return U8_range((U8) ~n);
}

inline U8 U8__shl(U8 n1, U8 n2) {
  return U8_range((U8) (n1 << n2));
}

inline U8 U8__shr(U8 n1, U8 n2) {
  return U8_range((U8) (n1 >> n2));
}

inline U8 U8__ushr(U8 n1, U8 n2) {
  return U8_range((U8) (n1 >> n2));
}

inline U8 U8__and(U8 n1, U8 n2) {
  return U8_range((U8) (n1 & n2));
}

inline U8 U8__or(U8 n1, U8 n2) {
  return U8_range((U8) (n1 | n2));
}

inline U8 U8__xor(U8 n1, U8 n2) {
  return U8_range((U8) (n1 ^ n2));
}

#ifdef SIREUM_NO_PRINT
#define U8_cprint(this, isOut)
#else
#define U8_cprint(this, isOut) { if (isOut) printf(U8_F, this); else fprintf(stderr, U8_F, this); }
#endif
void U8_string_(STACK_FRAME String result, U8 this);

#ifdef __cplusplus
}
#endif

#endif