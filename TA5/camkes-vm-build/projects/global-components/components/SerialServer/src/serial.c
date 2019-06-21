/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */

#include <autoconf.h>
#include <camkes.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#include <sel4/sel4.h>
#include <utils/attribute.h>
#include <utils/ansi.h>
#include <camkes.h>
#include <platsupport/chardev.h>
#include "serial.h"
#include "plat.h"
#include "server_virtqueue.h"

#define ESCAPE_CHAR '@'
#define MAX_CLIENTS 12
#define CLIENT_OUTPUT_BUFFER_SIZE 4096

/* TODO: have the MultiSharedData template generate a header with these */
void getchar_emit(unsigned int id) WEAK;
seL4_Word getchar_enumerate_badge(unsigned int id) WEAK;
unsigned int getchar_num_badges() WEAK;
void *getchar_buf(unsigned int id) WEAK;
int getchar_largest_badge(void) WEAK;

typedef struct getchar_buffer {
    uint32_t head;
    uint32_t tail;
    char buf[4096 - 8];
} getchar_buffer_t;

compile_time_assert(getchar_buf_sized, sizeof(getchar_buffer_t) == sizeof(Buf));

typedef struct getchar_client {
    unsigned int client_id;
    volatile getchar_buffer_t *buf;
    uint32_t last_head;
} getchar_client_t;

static int last_out = -1;

static uint8_t output_buffers[MAX_CLIENTS * 2][CLIENT_OUTPUT_BUFFER_SIZE];
static int output_buffers_used[MAX_CLIENTS * 2] = { 0 };
static uint16_t output_buffer_bitmask = 0;

static int done_output = 0;

static int has_data = 0;

static int num_getchar_clients = 0;
static getchar_client_t *getchar_clients = NULL;

/* We predefine output colours for clients */
const char *all_output_colours[MAX_CLIENTS * 2] = {
    /* Processed streams */
    ANSI_COLOR(RED),
    ANSI_COLOR(GREEN),
    ANSI_COLOR(BLUE),
    ANSI_COLOR(MAGENTA),
    ANSI_COLOR(YELLOW),
    ANSI_COLOR(CYAN),
    ANSI_COLOR(RED, BOLD)
    ANSI_COLOR(GREEN, BOLD),
    ANSI_COLOR(BLUE, BOLD),
    ANSI_COLOR(MAGENTA, BOLD),
    ANSI_COLOR(YELLOW, BOLD),
    ANSI_COLOR(CYAN, BOLD),

    /* Raw streams */
    ANSI_COLOR2(RED, WHITE),
    ANSI_COLOR2(GREEN, WHITE),
    ANSI_COLOR2(BLUE, WHITE),
    ANSI_COLOR2(MAGENTA, WHITE),
    ANSI_COLOR2(YELLOW, WHITE),
    ANSI_COLOR2(CYAN, WHITE),
    ANSI_COLOR2(RED, WHITE, BOLD)
    ANSI_COLOR2(GREEN, WHITE, BOLD),
    ANSI_COLOR2(BLUE, WHITE, BOLD),
    ANSI_COLOR2(MAGENTA, WHITE, BOLD),
    ANSI_COLOR2(YELLOW, WHITE, BOLD),
    ANSI_COLOR2(CYAN, WHITE, BOLD),
};

static void flush_buffer(int b)
{
    const char *col = all_output_colours[b];
    int i;
    if (output_buffers_used[b] == 0) {
        return;
    }
    if (b != last_out) {
        printf("%s%s", COLOR_RESET, col);
        last_out = b;
    }
    for (i = 0; i < output_buffers_used[b]; i++) {
        printf("%c", output_buffers[b][i]);
    }
    done_output = 1;
    output_buffers_used[b] = 0;
    output_buffer_bitmask &= ~BIT(b);
    fflush(stdout);
}

static int debug = 0;

/* Try to flush up to the end of the line. */
static bool flush_buffer_line(int b)
{
    if (output_buffers_used[b] == 0) {
        return 0;
    }
    uint8_t *nlptr = memchr(output_buffers[b], '\r', output_buffers_used[b]);
    if (nlptr == NULL) {
        nlptr = memchr(output_buffers[b], '\n', output_buffers_used[b]);
    }
    if (nlptr == NULL) {
        if (debug == 2) {
            ZF_LOGD("newline not found!\r\n");
        }
        return 0;
    }
    size_t length = (nlptr - &output_buffers[b][0]) + 1;
    if (length < output_buffers_used[b] && (output_buffers[b][length] == '\n' || output_buffers[b][length] == '\r')) {
        length++;               /* Include \n after \r if present */
    }
    if (length == 0) {
        if (debug == 2) {
            ZF_LOGD("0-length!\r\n");
        }
        return 0;
    }
    if (b != last_out) {
        printf("%s%s", COLOR_RESET, all_output_colours[b]);
        last_out = b;
    }
    int i;
    for (i = 0; i < length; i++) {
        printf("%c", output_buffers[b][i]);
    }
    for (i = length; i < output_buffers_used[b]; i++) {
        output_buffers[b][i - length] = output_buffers[b][i];
    }
    output_buffers_used[b] -= length;
    if (output_buffers_used[b] == 0) {
        output_buffer_bitmask &= ~BIT(b);
    }
    return 1;
}

static int is_newline(const uint8_t *c)
{
    return (c[0] == '\r' && c[1] == '\n') || (c[0] == '\n' && c[1] == '\r');
}

static int active_client = 0;
static int active_multiclients = 0;

/* Try coalescing client output. This is intended for use with
 * multi-input mode to all clients. */

/* (XXX) CAVEATS:
 *
 * - Has not been tested with more than 2 clients
 *
 * - Has not been tested with multi-input mode set not matching client
 *   set
 *
 * - Does not handle ANSI codes, UTF-8 or other multibytes specially;
     may break them when coalescing starts/stops.
 *
 * - Still "fails" due to some timing/buffering issues, but these
 *   failures are sufficiently rare that this is still useful. */
static int try_coalesce_output()
{
    size_t length = 0;
    size_t used[MAX_CLIENTS * 2] = { 0 };
    size_t n_used = 0;
    for (size_t i = 0; i < MAX_CLIENTS * 2; i++) {
        if (output_buffers_used[i] > 0) {
            used[n_used++] = i;
            if (length == 0 || length > output_buffers_used[i]) {
                length = output_buffers_used[i];
            }
            if (n_used > 1) {
                if (memcmp(output_buffers[used[0]], output_buffers[i], length) != 0) {
                    if (debug == 1) {
                        ZF_LOGD("\r\nDifferent contents '");
                        for (int j = 0; j < length; ++j) {
                            printf("%0hhx", output_buffers[used[0]][j]);
                        }
                        printf("' vs '");
                        for (int j = 0; j < length; ++j) {
                            printf("%0hhx", output_buffers[i][j]);
                        }
                        printf("'\r\n");
                    }
                    return -1; /* different contents, don't special-case */
                }
            }
        }
    }
    if (n_used > 1 && length > 0) {
        if (last_out != -1) {
            printf("%s", COLOR_RESET);
        }
        for (int i = 0; i < length; i++) {
            printf("%c", output_buffers[used[0]][i]);
        }
        last_out = -1;
        fflush(stdout);
        for (int i = 0; i < n_used; i++) {
            output_buffers_used[used[i]] -= length;
            for (int j = 0; j < output_buffers_used[used[i]]; ++j) {
                output_buffers[used[i]][j] = output_buffers[used[i]][j + length];
            }
            if (output_buffers_used[used[i]] == 0) {
                output_buffer_bitmask &= ~BIT(used[i]);
            }
        }
        if (output_buffer_bitmask != 0) {
            has_data = 1;
        }
        return 0;               /* coalesced */
    }
    return 1;                   /* buffering */
}

static void internal_putchar(int b, int c)
{
    int UNUSED error;
    error = serial_lock();
    /* Add to buffer */
    int index = output_buffers_used[b];
    uint8_t *buffer = output_buffers[b];
    buffer[index] = (uint8_t)c;
    output_buffers_used[b]++;
    int coalesce_status = -1;

    if (active_client == -1) {
        /* Test for special case: multiple clients outputting the EXACT SAME THING. */
        coalesce_status = try_coalesce_output();
    }
    if (output_buffers_used[b] == CLIENT_OUTPUT_BUFFER_SIZE) {
        /* Since we're violating contract anyway (flushing in the
         * middle of someone else's line), flush all buffers, so the
         * fastpath can be used again. */
        char is_done;
        int i;
        int prev_client = last_out;
        if (prev_client != -1) {
            flush_buffer_line(prev_client);
        }
        while (!is_done) {
            is_done = 1;
            for (i = 0; i < MAX_CLIENTS * 2; i++) {
                if (flush_buffer_line(i)) {
                    is_done = 0;
                }
            }
        }
        /* Flush the rest, if necessary. */
        if (output_buffers_used[b] == CLIENT_OUTPUT_BUFFER_SIZE) {
            for (i = 0; i < MAX_CLIENTS * 2; i++) {
                if (i != b) {
                    flush_buffer(i);
                }
            }
        }
        /* then set the colors back. If this clients's buffer overflowed,
         * it's probably going to overflow again, so let's avoid
         * that. */
        if (last_out != b) {
            printf("%s%s", COLOR_RESET, all_output_colours[b]);
            last_out = b;
        }
    } else if ((index >= 1 && is_newline(buffer + index - 1) && coalesce_status == -1)
               || (last_out == b && output_buffer_bitmask == 0 && coalesce_status == -1)) {
        /* Allow fast output (newline or same-as-last-client) if
         * multi-input is not enabled OR last coalescing attempt
         * failed due to a mismatch. This is important as client output
         * may be delayed; coalescing failure due to empty buffer
         * should lead to further buffering rather than early flush,
         * in case we can coalesce later. */
        flush_buffer(b);
    } else {
        output_buffer_bitmask |= BIT(b);
    }
    has_data = 1;
    error = serial_unlock();
}

static void internal_raw_putchar(int id, int c)
{
    getchar_client_t *client = &getchar_clients[id];
    uint32_t next_tail = (client->buf->tail + 1) % sizeof(client->buf->buf);
    if (next_tail == client->buf->head) {
        /* full */
        return;
    }
    uint32_t last_read_head = client->buf->head;
    client->buf->buf[client->buf->tail] = (uint8_t)c;
    /* no synchronize in here as we assume TSO */
    client->buf->tail = next_tail;
    __sync_synchronize();
    if (last_read_head != client->last_head) {
        getchar_emit(client->client_id);
        client->last_head = last_read_head;
    }
}

static int statemachine = 1;

static void give_client_char(uint8_t c)
{
    if (active_client >= 0) {
        internal_raw_putchar(active_client, c);
    } else if (active_client == -1) {
        for (int i = 0; i < MAX_CLIENTS * 2; i++) {
            if ((active_multiclients & BIT(i)) == BIT(i)) {
                internal_raw_putchar(i, c);
            }
        }
    }
}

static void handle_char(uint8_t c)
{
    /* If there are no getchar clients, then we return immediately */
    if (!getchar_num_badges) {
        return;
    }

    /* some manually written state machine magic to detect switching of input direction */
    switch (statemachine) {
    case 0:
        if (c == '\r' || c == '\n') {
            statemachine = 1;
        }
        give_client_char(c);
        break;
    case 1:
        if (c == ESCAPE_CHAR) {
            statemachine = 2;
        } else {
            statemachine = 0;
            give_client_char(c);
        }
        break;
    case 2:
        switch (c) {
        case ESCAPE_CHAR:
            statemachine = 0;
            give_client_char(c);
            break;
        case 'm':
            statemachine = 3;
            active_multiclients = 0;
            active_client = -1;
            last_out = -1;
            printf(COLOR_RESET "\r\nMulti-client input to clients: ");
            fflush(stdout);
            break;
        case 'd':
            debug = (debug + 1) % 3;
            printf(COLOR_RESET "\r\nDebug: %i\r\n", debug);
            last_out = -1;
            statemachine = 1;
            break;
        case '?':
            last_out = -1;
            printf(COLOR_RESET "\r\n --- SerialServer help ---"
                   "\r\n Escape char: %c"
                   "\r\n 0 - %-2d switches input to that client"
                   "\r\n ?      shows this help"
                   "\r\n m      simultaneous multi-client input"
                   "\r\n d      switch between debugging modes"
                   "\r\n          0: no debugging"
                   "\r\n          1: debug multi-input mode output coalescing"
                   "\r\n          2: debug flush_buffer_line"
                   "\r\n", ESCAPE_CHAR, getchar_largest_badge());
            statemachine = 1;
            break;
        default:
            if (c >= '0' && c < '0' + (getchar_largest_badge() + 1)) {
                last_out = -1;
                int client = c - '0';
                printf(COLOR_RESET "\r\nSwitching input to %d\r\n", client);
                active_client = client;
                statemachine = 1;
            } else {
                statemachine = 0;
                give_client_char(ESCAPE_CHAR);
                give_client_char(c);
            }
        }
        break;
    case 3:
        if (c >= '0' && c < '0' + (getchar_largest_badge() + 1)) {
            printf(COLOR_RESET "%s%d", (active_multiclients != 0 ? "," : ""), (c - '0'));
            active_multiclients |= BIT(c - '0');
            last_out = -1;
            fflush(stdout);
        } else if (c == 'm' || c == 'M' || c == '\r' || c == '\n') {
            last_out = -1;
            printf(COLOR_RESET "\r\nSwitching input to multi-client. Output will be best-effort coalesced (colored white).\r\n");
            statemachine = 1;
        }
        break;
    }
}

static void timer_callback(void *data)
{
    int UNUSED error;
    error = serial_lock();
    if (done_output) {
        done_output = 0;
    } else if (has_data) {
        /* flush everything if no writes since last callback */
        int i;
        char is_done = 0;
        char succeeded = 0;
        while (!is_done) {
            is_done = 1;
            for (i = 0; i < MAX_CLIENTS * 2; i++) {
                if (flush_buffer_line(i)) {
                    succeeded = 1;
                    is_done = 0;
                }
            }
        }
        if (!succeeded) {
            for (i = 0; i < MAX_CLIENTS * 2; i++) {
                flush_buffer(i);
            }
        }
    }
    error = serial_unlock();
}

seL4_CPtr timeout_notification(void);

int run(void)
{
    seL4_CPtr notification = timeout_notification();
    while (1) {
        seL4_Wait(notification, NULL);
        timer_callback(NULL);
    }
    return 0;
}

void serial_server_irq_handle(irq_ack_fn irq_acknowledge, ps_irq_t *irq)
{
    int error = serial_lock();
    ZF_LOGF_IF(error, "Failed to lock serial server");

    plat_serial_interrupt(handle_char);

    error = irq_acknowledge(irq);
    ZF_LOGF_IF(error, "Failed to acknowledge IRQ");

    error = serial_unlock();
    ZF_LOGF_IF(error, "Failed to unlock serial server");
}

void serial_putchar(int c)
{
    plat_serial_putchar(c);
}

void pre_init(void)
{
    int UNUSED error;
    error = serial_lock();
    // Initialize the serial port
    plat_pre_init();
    set_putchar(serial_putchar);
    /* query what getchar clients exist */
    if (getchar_num_badges) {
        num_getchar_clients = getchar_num_badges();
        getchar_clients = calloc(num_getchar_clients, sizeof(getchar_client_t));
        for (int i = 0; i < num_getchar_clients; i++) {
            unsigned int badge = getchar_enumerate_badge(i);
            assert(badge <= num_getchar_clients);
            getchar_clients[badge].client_id = badge;
            getchar_clients[badge].buf = getchar_buf(badge);
            getchar_clients[badge].last_head = -1;
        }
    }
    plat_post_init();
    /* Start regular heartbeat of 500ms */
    timeout_periodic(0, 500000000);
    error = serial_unlock();
}

void post_init(void)
{
    int res = virtqueue_init();
    if (res) {
        ZF_LOGE("Serial server does not support read and write virtqueues");
    }
}

seL4_Word processed_putchar_get_sender_id(void) WEAK;
void processed_putchar_putchar(int c)
{
    seL4_Word n = processed_putchar_get_sender_id();
    internal_putchar((int)n, c);
    if (c == '\n') {
        internal_putchar(n, '\r');
    }
}

seL4_Word raw_putchar_get_sender_id(void) WEAK;
void raw_putchar_putchar(int c)
{
    seL4_Word n = raw_putchar_get_sender_id();
    internal_putchar((int)n + MAX_CLIENTS, c);
}

/* We had to define at least one function in the getchar RPC procedure
 * so now we need to implement it even though it is not used */
void getchar_foo(void)
{
    assert(!"should not be reached");
}
