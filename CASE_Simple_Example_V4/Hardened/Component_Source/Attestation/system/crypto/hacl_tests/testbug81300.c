// This file is taken from the HACL* configuration shell script, in the "check_no_bug81300" function
// https://github.com/project-everest/hacl-star/blob/50db8e4147258a5dc8e18c940c1b045ce5558723/dist/configure

#include <inttypes.h>
#include <stdio.h>
#include <string.h>
#include <lib_intrinsics.h>
uint64_t add4_variables(uint64_t *x, uint64_t y0) {
  uint64_t *r2 = x + 2;
  uint64_t *r3 = x + 3;
  uint64_t cc = Lib_IntTypes_Intrinsics_add_carry_u64(0, x[0], y0, x);
  uint64_t cc1 = Lib_IntTypes_Intrinsics_add_carry_u64(cc, 1, 0, x);
  uint64_t cc2 = Lib_IntTypes_Intrinsics_add_carry_u64(1, 0, 0, r2);
  uint64_t cc3 = Lib_IntTypes_Intrinsics_add_carry_u64(cc2, x[3], y0, r3);
  return cc3;
}
uint64_t sub4(uint64_t *x, uint64_t *y, uint64_t *result) {
  uint64_t *r3 = result + 3;
  uint64_t cc3 = Lib_IntTypes_Intrinsics_sub_borrow_u64(1, x[3], y[3], r3);
  return cc3;
}
void p256_sub(uint64_t *arg1, uint64_t *arg2, uint64_t *out) {
  uint64_t t = sub4(arg1, arg2, out);
  uint64_t c = add4_variables(out, t);
  (void)c;
}
int main() {
  uint64_t *a = (uint64_t *) malloc(sizeof(uint64_t) * 4);
  memset(a, 0, 32);
  uint64_t *b = (uint64_t *) malloc(sizeof(uint64_t) * 4);
  memset(b, 0, 32);
  uint64_t *c = (uint64_t *) malloc(sizeof(uint64_t) * 4);
  memset(c, 0, 32);
  a[3] = 16561854653415423667ul;
  b[3] = 16275405352713846784ul;
  p256_sub(a, b, c);
  printf("result == %"PRIu64" \n", c[3]);
  return 0;
}
