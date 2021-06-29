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

#include "evercrypt_targetconfig.h"
#include "libintvector.h"
#include "kremlin/internal/types.h"
#include "kremlin/lowstar_endianness.h"
#include <string.h>
#include "kremlin/internal/target.h"

#ifndef __Hacl_Streaming_SHA2_256_H
#define __Hacl_Streaming_SHA2_256_H

#include "Hacl_Hash.h"


/* SNIPPET_START: Hacl_Streaming_Functor_state_s___uint32_t____ */

typedef struct Hacl_Streaming_Functor_state_s___uint32_t_____s
Hacl_Streaming_Functor_state_s___uint32_t____;

/* SNIPPET_END: Hacl_Streaming_Functor_state_s___uint32_t____ */

/* SNIPPET_START: Hacl_Streaming_SHA2_256_create_in */

Hacl_Streaming_Functor_state_s___uint32_t____ *Hacl_Streaming_SHA2_256_create_in();

/* SNIPPET_END: Hacl_Streaming_SHA2_256_create_in */

/* SNIPPET_START: Hacl_Streaming_SHA2_256_init */

void Hacl_Streaming_SHA2_256_init(Hacl_Streaming_Functor_state_s___uint32_t____ *s);

/* SNIPPET_END: Hacl_Streaming_SHA2_256_init */

/* SNIPPET_START: Hacl_Streaming_SHA2_256_update */

void
Hacl_Streaming_SHA2_256_update(
  Hacl_Streaming_Functor_state_s___uint32_t____ *p,
  uint8_t *data,
  uint32_t len
);

/* SNIPPET_END: Hacl_Streaming_SHA2_256_update */

/* SNIPPET_START: Hacl_Streaming_SHA2_256_finish */

void
Hacl_Streaming_SHA2_256_finish(Hacl_Streaming_Functor_state_s___uint32_t____ *p, uint8_t *dst);

/* SNIPPET_END: Hacl_Streaming_SHA2_256_finish */

/* SNIPPET_START: Hacl_Streaming_SHA2_256_free */

void Hacl_Streaming_SHA2_256_free(Hacl_Streaming_Functor_state_s___uint32_t____ *s);

/* SNIPPET_END: Hacl_Streaming_SHA2_256_free */

#define __Hacl_Streaming_SHA2_256_H_DEFINED
#endif
