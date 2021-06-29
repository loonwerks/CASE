#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#include "counter.h"
#include "hexdump.h"
#include "sentinel_serial_buffer.h"


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


#define PAYLOAD_SIZE_BUFFER_SIZE 32
#define CHECKSUM_BUFFER_SIZE 32

#define DUMP_LINE_LENGTH 32
#define MAX_DUMP_SIZE (2 * DUMP_LINE_LENGTH)

static const uint8_t serial_sentinel_before_payload_size[] = { '+', '=', '+', '=', '+', '=', '+', '=' };


static const uint8_t serial_sentinel_after_payload_size[] = { '#', '@', '#', '@', '#', '@', '#', '@' };


static const uint8_t serial_sentinel_before_checksum[] = { '!', '%', '!', '%', '!', '%', '!', '%' };


static const uint8_t serial_sentinel_after_checksum[] = { '?', '^', '?', '^', '?', '^', '?', '^' };


struct sentinel_serial_buffer *sentinel_serial_buffer_alloc() {
  return (struct sentinel_serial_buffer *) calloc(1, sizeof(struct sentinel_serial_buffer));
}


void sentinel_serial_buffer_free(struct sentinel_serial_buffer *ctx) {
  free(ctx);
}


uint32_t sentinel_serial_buffer_calculate_checksum(const uint8_t *buffer, size_t length) {
  uint32_t checksum = 0;
  for (size_t index = 0; index < length; ++index) {
    checksum += (uint32_t) buffer[index];
  }
  return checksum;
}


bool sentinel_serial_buffer_sentinelize_string(uint8_t *dest_buffer, size_t dest_size,
					       const uint8_t *src_buffer, size_t length) {
  uint8_t payload_size_buffer[32] = { 0 };
  snprintf((char *) payload_size_buffer, sizeof(payload_size_buffer), "%zu", length);
  size_t payload_size_length = strnlen(payload_size_buffer, sizeof(payload_size_buffer));

  uint8_t payload_checksum_buffer[32] = { 0 };
  uint32_t payload_checksum  = sentinel_serial_buffer_calculate_checksum(src_buffer, length);
  snprintf((char *) payload_checksum_buffer, sizeof(payload_checksum_buffer), "%u", payload_checksum);
  size_t payload_checksum_length = strnlen(payload_checksum_buffer, sizeof(payload_checksum_buffer));

  size_t sentinelized_length = length
    + sizeof(serial_sentinel_before_payload_size)
    + payload_size_length
    + sizeof(serial_sentinel_after_payload_size)
    + sizeof(serial_sentinel_before_checksum)
    + payload_checksum_length
    + sizeof(serial_sentinel_after_checksum);

  if (sentinelized_length < dest_size) {

    // Sentinel before payload size
    size_t write_index = 0;
    for (size_t index = 0; index < sizeof(serial_sentinel_before_payload_size); ++index, ++write_index) {
      dest_buffer[write_index] = serial_sentinel_before_payload_size[index];
    }

    // Payload size
    for (size_t index = 0; index < payload_size_length; ++index, ++write_index) {
      dest_buffer[write_index] = payload_size_buffer[index];
    }

    // Sentinel after payload size
    for (size_t index = 0; index < sizeof(serial_sentinel_after_payload_size); ++index, ++write_index) {
      dest_buffer[write_index] = serial_sentinel_after_payload_size[index];
    }

      // Data payload
    for (size_t index = 0; index < length; ++index, ++write_index) {
      dest_buffer[write_index] = src_buffer[index];
    }

    // Sentinel before checksum
    for (size_t index = 0; index < sizeof(serial_sentinel_before_checksum); ++index, ++write_index) {
      dest_buffer[write_index] = serial_sentinel_before_checksum[index];
    }

    // Checksum
    for (size_t index = 0; index < payload_checksum_length; ++index, ++write_index) {
      dest_buffer[write_index] = payload_checksum_buffer[index];      
    }

    // Sentinel after checksum
    for (size_t index = 0; index < sizeof(serial_sentinel_after_checksum); ++index, ++write_index) {
      dest_buffer[write_index] = serial_sentinel_after_checksum[index];
    }

    return true;

  } else {
    fprintf(stdout, "apss ssb se str: payload too large: payload %zu, sentinalized %zu, buffer %zu\n",
	    length, sentinelized_length, dest_size);
    fflush(stdout);
  }

  return false;
}


bool sentinel_serial_buffer_append_sentinelized_string(struct sentinel_serial_buffer *ctx,
						       const uint8_t *buffer, size_t length) {
  uint8_t payload_size_buffer[32] = { 0 };
  snprintf((char *) payload_size_buffer, sizeof(payload_size_buffer), "%zu", length);
  size_t payload_size_length = strnlen(payload_size_buffer, sizeof(payload_size_buffer));

  uint8_t payload_checksum_buffer[32] = { 0 };
  uint32_t payload_checksum  = sentinel_serial_buffer_calculate_checksum(buffer, length);
  snprintf((char *) payload_checksum_buffer, sizeof(payload_checksum_buffer), "%u", payload_checksum);
  size_t payload_checksum_length = strnlen(payload_checksum_buffer, sizeof(payload_checksum_buffer));

  size_t sentinelized_length = length
    + sizeof(serial_sentinel_before_payload_size)
    + payload_size_length
    + sizeof(serial_sentinel_after_payload_size)
    + sizeof(serial_sentinel_before_checksum)
    + payload_checksum_length
    + sizeof(serial_sentinel_after_checksum);

  counter_t original_write_counter = ctx->write_counter;
  counter_t *p_write_counter = (counter_t *) &(ctx->write_counter);
  counter_t read_counter = ctx->read_counter;

  // Acquire memory fence - ensure read of ctx->read_counter BEFORE reading data  
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  size_t capacity_remaining = SENTINEL_SERIAL_BUFFER_RING_SIZE - (ctx->write_counter - read_counter);

  // Strictly less because one element is always considered "dirty"
  if (sentinelized_length < capacity_remaining) {
    counter_t write_index = ctx->write_counter;

    // Sentinel before payload size
    for (size_t index = 0; index < sizeof(serial_sentinel_before_payload_size); ++index, ++write_index) {
      ctx->data[write_index % SENTINEL_SERIAL_BUFFER_RING_SIZE] = serial_sentinel_before_payload_size[index];
    }

    // Payload size
    for (size_t index = 0; index < payload_size_length; ++index, ++write_index) {
      ctx->data[write_index % SENTINEL_SERIAL_BUFFER_RING_SIZE] = payload_size_buffer[index];
    }

    // Sentinel after payload size
    for (size_t index = 0; index < sizeof(serial_sentinel_after_payload_size); ++index, ++write_index) {
      ctx->data[write_index % SENTINEL_SERIAL_BUFFER_RING_SIZE] = serial_sentinel_after_payload_size[index];
    }

    // Data payload
    for (size_t index = 0; index < length; ++index, ++write_index) {
      ctx->data[write_index % SENTINEL_SERIAL_BUFFER_RING_SIZE] = buffer[index];
    }

    // Sentinel before checksum
    for (size_t index = 0; index < sizeof(serial_sentinel_before_checksum); ++index, ++write_index) {
      ctx->data[write_index % SENTINEL_SERIAL_BUFFER_RING_SIZE] = serial_sentinel_before_checksum[index];
    }

    // Checksum
    for (size_t index = 0; index < payload_checksum_length; ++index, ++write_index) {
      ctx->data[write_index % SENTINEL_SERIAL_BUFFER_RING_SIZE] = payload_checksum_buffer[index];      
    }

    // Sentinel after checksum
    for (size_t index = 0; index < sizeof(serial_sentinel_after_checksum); ++index, ++write_index) {
      ctx->data[write_index % SENTINEL_SERIAL_BUFFER_RING_SIZE] = serial_sentinel_after_checksum[index];
    }

    // Release memory fence - ensure that data write above completes BEFORE we advance ctx->write_counter
    __atomic_thread_fence(__ATOMIC_RELEASE);
    *p_write_counter = write_index;

    // fprintf(stdout, "SSB sending %zu octets (%zu octets sentinelized):\n", length, sentinelized_length);
    // hexdump_ring("    ", DUMP_LINE_LENGTH, &ctx->data[0], SENTINEL_SERIAL_BUFFER_RING_SIZE,
    //              ((size_t) original_write_counter % SENTINEL_SERIAL_BUFFER_RING_SIZE),
    //              (sentinelized_length < MAX_DUMP_SIZE) ? sentinelized_length : MAX_DUMP_SIZE);
    // fflush(stdout);
    
    return true;

  } else {
    fprintf(stdout, "apss ssb append se str: payload too large: payload %zu, sentinalized %zu, remaining %zu\n",
	    length, sentinelized_length, capacity_remaining);
    fflush(stdout);
  }

  return false;
}


bool sentinel_serial_buffer_append_char(struct sentinel_serial_buffer *ctx, uint8_t c) {
  counter_t *p_write_counter = (counter_t *) &(ctx->write_counter);
  counter_t read_counter = ctx->read_counter;
  // Acquire memory fence - ensure read of ctx->read_counter BEFORE reading data  
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  size_t capacity_remaining = SENTINEL_SERIAL_BUFFER_RING_SIZE - (*p_write_counter - read_counter);
  // Strictly less because one element is always considered "dirty"
  if (1 < capacity_remaining) {
    ctx->data[(*p_write_counter) % SENTINEL_SERIAL_BUFFER_RING_SIZE] = c;
    // Release memory fence - ensure that data write above completes BEFORE we advance ctx->write_counter
    __atomic_thread_fence(__ATOMIC_RELEASE);
    ++(*p_write_counter);
    return true;
  }
  return false;
}


bool sentinel_serial_buffer_find_sentinel_in_ring(const uint8_t *buffer, size_t buffer_size,
						  counter_t read_counter, counter_t write_counter,
						  const uint8_t *sentinel, size_t sentinel_length,
						  counter_t *position) {
  int found = false;
  counter_t search_counter = read_counter + *position;

  /*
  fprintf(stdout, "apss ssb find: buffer %p, sz %zu, read %llu, write %llu, sentinel %p, len %zu, pos %llu\n",
	  buffer, buffer_size, read_counter, write_counter, sentinel, sentinel_length, *position);
  hexdump("    ", DUMP_LINE_LENGTH, buffer, 1024);
  fflush(stdout);
  */
  
  for (; !found && search_counter < write_counter; ++search_counter) {
    for (counter_t symbols_found = 0;
	 !found && search_counter < write_counter && symbols_found < sentinel_length
	   && sentinel[symbols_found] == buffer[(search_counter + symbols_found) % buffer_size]; ) {
      ++symbols_found;
      if (symbols_found == sentinel_length) {
	*position = search_counter - read_counter;
	found = true;
      }
    }
  }

  return found;
}


unsigned long sentinel_serial_buffer_ring_strtoul(const uint8_t *buffer, size_t buffer_size,
						  size_t start_offset, size_t end_offset) {
  unsigned long base = 10;
  size_t decode_length = end_offset - start_offset;
  // Allow leading spaces
  while (decode_length > 0 && buffer[start_offset % buffer_size] == ' ') {
    ++start_offset;
    --decode_length;
  }
  // Ignore leading minus sign
  if (decode_length > 0 && buffer[start_offset % buffer_size] == '-') {
    ++start_offset;
    --decode_length;
  }
  // Detect base
  if (decode_length > 1 && buffer[start_offset % buffer_size] == '0') {
    if (decode_length > 2 && buffer[(start_offset + 1) % buffer_size] == 'x') {
      base = 16;
      start_offset += 2;
      decode_length -= 2;
    } else {
      base = 8;
      start_offset += 1;
      decode_length -= 1;
    }
  }
  // Decode digits
  unsigned long result = 0;
  errno = 0;
  for (size_t index = 0; index < decode_length; ++index) {
    if (result > (UINT_MAX / base)) {
      errno = ERANGE;
      break;
    }
    uint8_t val = buffer[(start_offset + index) % buffer_size];
    if (base == 8) {
      if ('0' <= val && val <= '7') {
	result = (result * base) + (unsigned long) (val - '0');
      } else {
	errno = EINVAL;
	break;
      }
    } else if (base == 16) {
      if ('0' <= val && val <= '9') {
	result = (result * base) + (unsigned long) (val - '0');
      } else if ('a' <= val && val <= 'f') {
	result = (result * base) + (unsigned long) (val - 'a' + 10);
      } else if ('A' <= val && val <= 'F') {
	result = (result * base) + (unsigned long) (val - 'A' + 10);
      } else {
	errno = EINVAL;
	break;
      }
    } else /* base == 10) */ {
      if ('0' <= val && val <= '9') {
	result = (result * base) + (unsigned long) (val - '0');
      } else {
	errno = EINVAL;
	break;
      }
    }
  }
  return result;
}


ssize_t sentinel_serial_buffer_get_next_payload_string(struct sentinel_serial_buffer *ctx,
						       uint8_t *buffer, size_t buffer_size) {
  ssize_t result = 0;

  /*
  fprintf(stdout, "apss ssb get payload: ctx %p, buffer %p, sz %zu\n", ctx, buffer, buffer_size);
  hexdump("    ", DUMP_LINE_LENGTH, &ctx->data[0], 1024);
  fflush(stdout);
  */
  
  // Get a copy of write_counter so we can see if it changes durring read
  counter_t *p_read_counter = (counter_t *) &(ctx->read_counter);
  counter_t original_write_counter = ctx->write_counter;
  // Acquire memory fence - ensure read of ctx->write_counter BEFORE reading data
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  counter_t original_read_counter = *p_read_counter;

  /*
  fprintf(stdout, "apss ssb get payload: write %llu, read %llu\n", original_write_counter, original_read_counter);
  fflush(stdout);
  */
  
  counter_t before_payload_size_offset = 0;
  if (!sentinel_serial_buffer_find_sentinel_in_ring(ctx->data, SENTINEL_SERIAL_BUFFER_RING_SIZE,
						    original_read_counter, original_write_counter,
						    serial_sentinel_before_payload_size,
						    sizeof(serial_sentinel_before_payload_size),
						    &before_payload_size_offset)) {
    errno = EAGAIN;
    return -1;
  }

  counter_t after_payload_size_offset = before_payload_size_offset + sizeof(serial_sentinel_before_payload_size);
  if (!sentinel_serial_buffer_find_sentinel_in_ring(ctx->data, SENTINEL_SERIAL_BUFFER_RING_SIZE,
						    original_read_counter, original_write_counter,
						    serial_sentinel_after_payload_size,
						    sizeof(serial_sentinel_after_payload_size),
						    &after_payload_size_offset)) {
    errno = EAGAIN;
    return -1;
  }

  counter_t before_checksum_offset = after_payload_size_offset + sizeof(serial_sentinel_after_payload_size);;
  if (!sentinel_serial_buffer_find_sentinel_in_ring(ctx->data, SENTINEL_SERIAL_BUFFER_RING_SIZE,
						    original_read_counter, original_write_counter,
						    serial_sentinel_before_checksum,
						    sizeof(serial_sentinel_before_checksum),
						    &before_checksum_offset)) {
    errno = EAGAIN;
    return -1;
  }

  counter_t after_checksum_offset = before_checksum_offset + sizeof(serial_sentinel_before_checksum);
  if (!sentinel_serial_buffer_find_sentinel_in_ring(ctx->data, SENTINEL_SERIAL_BUFFER_RING_SIZE,
						    original_read_counter, original_write_counter,
						    serial_sentinel_after_checksum,
						    sizeof(serial_sentinel_after_checksum),
						    &after_checksum_offset)) {
    errno = EAGAIN;
    return -1;
  }

  /*
  fprintf(stdout, "apss ssb get payload: b-zs %llu, a-sz %llu, b-csum %llu, a-csum %llu\n",
	  before_payload_size_offset, after_payload_size_offset, before_checksum_offset, after_checksum_offset);
  fflush(stdout);
  */
  
  counter_t octets_to_copy = before_checksum_offset - (after_payload_size_offset + sizeof(serial_sentinel_after_payload_size));
  for (counter_t index = 0; index < octets_to_copy; ++index) {
    buffer[index] =
      ctx->data[(original_read_counter + after_payload_size_offset + sizeof(serial_sentinel_after_payload_size) + index)
		% SENTINEL_SERIAL_BUFFER_RING_SIZE];
  }

  // Release memory fence - ensure copy operation complete BEFORE updating read counter
  __atomic_thread_fence(__ATOMIC_RELEASE);
  *p_read_counter = original_read_counter + after_checksum_offset + sizeof(serial_sentinel_after_checksum);

  size_t payload_size =
    (size_t) sentinel_serial_buffer_ring_strtoul(ctx->data, SENTINEL_SERIAL_BUFFER_RING_SIZE,
						 original_read_counter
						 + before_payload_size_offset + sizeof(serial_sentinel_before_payload_size),
						 original_read_counter + after_payload_size_offset);
  /*
  fprintf(stdout, "apss ssb get payload: payload size %zu, errno %d: %s\n",
	  payload_size, errno, strerror(errno));
  fflush(stdout);
  */
  if (errno) {
    errno = EINVAL;
    return -1;
  }

  uint32_t expected_checksum =
    (size_t) sentinel_serial_buffer_ring_strtoul(ctx->data, SENTINEL_SERIAL_BUFFER_RING_SIZE,
						 original_read_counter
						 + before_checksum_offset + sizeof(serial_sentinel_before_checksum),
						 original_read_counter + after_checksum_offset);
  /*
  fprintf(stdout, "apss ssb get payload: expected checksum %lu, errno %d: %s\n",
	  expected_checksum, errno, strerror(errno));
  fflush(stdout);
  */
  if (errno) {
    errno = EIO;
    return -1;
  }

  if (payload_size > buffer_size) {
    errno = EFAULT;
    return -1;
  }

  uint32_t computed_checksum = sentinel_serial_buffer_calculate_checksum(buffer, payload_size);
  /*
  fprintf(stdout, "apss ssb get payload: computed checksum %lu, errno %d: %s\n",
	  computed_checksum, errno, strerror(errno));
  fflush(stdout);
  hexdump("    ", DUMP_LINE_LENGTH, buffer, payload_size);
  */
  if (expected_checksum != computed_checksum) {
    errno = EIO;
    return -1;
  }

  errno = 0;
  return payload_size;
}


bool sentinel_serial_buffer_get_next_char(struct sentinel_serial_buffer *ctx, uint8_t *c) {
  bool result = false;

  // Get a copy of write_counter so we can see if it changes durring read
  counter_t *p_read_counter = (counter_t *) &(ctx->read_counter);
  counter_t original_write_counter = ctx->write_counter;
  // Acquire memory fence - ensure read of ctx->write_counter BEFORE reading data
  __atomic_thread_fence(__ATOMIC_ACQUIRE);
  counter_t original_read_counter = *p_read_counter;

  if (original_write_counter > original_read_counter) {
    *c = ctx->data[original_read_counter % SENTINEL_SERIAL_BUFFER_RING_SIZE];
    
    // Release memory fence - ensure copy operation complete BEFORE updating read counter
    __atomic_thread_fence(__ATOMIC_RELEASE);
    *p_read_counter = original_read_counter + 1;

    return true;
  }

  return result;
}
