#pragma once

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include "counter.h"


/**
 * Assuming the following strings are never present within the combined string
 * containing payload size, payload and payload checksum:
 *
 *     "+="
 *     "=+"
 *     "#@"
 *     "@#"
 *     "!%"
 *     "%!"
 *     "?^"
 *     "^?"
 *
 *  8-character markers:
 *
 *     "+=+=+=+=123#@#@#@#@"          lmcpObjPayloadSize
 *     "#@#@#@#@abcxyz123!%!%!%!%"    rawPayload
 *     "!%!%!%!%789?^?^?^?^"          lmcpObjPayloadChksum
 *     "+=+=+=+=123#@#@#@#@abcxyz123!%!%!%!%789?^?^?^?^" lmcpObjPayloadSize, rawPayload and lmcpObjPayloadChksum (combined int
 */


/*
 * Odd things will happen the internal counters wrap at a point where the ring is not also wrapping.
 * Make sure the counter wrap is a multiple of the ring size.  That is, stick to powers of 2.
 */
#define SENTINEL_SERIAL_BUFFER_RING_SIZE (0x10000)


typedef struct sentinel_serial_buffer {
  _Atomic counter_t write_counter;
  _Atomic counter_t read_counter;
  uint8_t data[SENTINEL_SERIAL_BUFFER_RING_SIZE];
} sentinel_serial_buffer_t;


struct sentinel_serial_buffer *sentinel_serial_buffer_alloc();


void sentinel_serial_buffer_free(struct sentinel_serial_buffer *ctx);


uint32_t sentinel_serial_buffer_calculate_checksum(const uint8_t *buffer, size_t length);


bool sentinel_serial_buffer_sentinelize_string(uint8_t *dest_buffer, size_t dest_size, const uint8_t *src_buffer, size_t length);


bool sentinel_serial_buffer_append_sentinelized_string(struct sentinel_serial_buffer *ctx, const uint8_t *buffer, size_t length);


bool sentinel_serial_buffer_append_char(struct sentinel_serial_buffer *ctx, uint8_t c);


ssize_t sentinel_serial_buffer_get_next_payload_string(struct sentinel_serial_buffer *ctx, uint8_t *buffer, size_t buffer_size);


bool sentinel_serial_buffer_get_next_char(struct sentinel_serial_buffer *ctx, uint8_t *c);
