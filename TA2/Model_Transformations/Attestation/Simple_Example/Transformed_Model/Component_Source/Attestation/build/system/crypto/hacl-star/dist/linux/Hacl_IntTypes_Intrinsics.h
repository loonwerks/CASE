/* MIT License
 *
 * Copyright (c) 2016-2020 INRIA, CMU and Microsoft Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "libintvector.h"
#include "kremlin/internal/types.h"
#include "kremlin/lowstar_endianness.h"
#include <string.h>
#include "kremlin/internal/target.h"

#ifndef __Hacl_IntTypes_Intrinsics_H
#define __Hacl_IntTypes_Intrinsics_H

#include "Hacl_Kremlib.h"


static inline u64 Hacl_IntTypes_Intrinsics_add_carry_u64(u64 cin, u64 x, u64 y, u64 *result1)
{
  u64 res = x + cin + y;
  u64 c = (~FStar_UInt64_gte_mask(res, x) | (FStar_UInt64_eq_mask(res, x) & cin)) & (u64)1U;
  result1[0U] = res;
  return c;
}

static inline u64 Hacl_IntTypes_Intrinsics_sub_borrow_u64(u64 cin, u64 x, u64 y, u64 *result1)
{
  u64 res = x - y - cin;
  u64 eqlty = FStar_UInt64_eq_mask(res, x);
  u64
  c1 =
    ((FStar_UInt64_gte_mask(res, x) & ~FStar_UInt64_eq_mask(res, x)) | (eqlty & cin))
    & (u64)1U;
  result1[0U] = res;
  return c1;
}

#define __Hacl_IntTypes_Intrinsics_H_DEFINED
#endif
