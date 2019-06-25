/* testepmon/components/emitter/src/emitter.c */

#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_emitter_t_impl.h>

static int8_t _value;

void testepmon_emitter_component_init(const int64_t *in_arg)
{
    printf("testepmon_emitter_component_init called\n");
    _value = 0;
}

/* control thread: keep calling enqueue for thing
 */
void run_emitter(const int64_t *in_arg)
{
    if (sb_enq_enqueue( &_value ) ) {
        printf("[source] Sent %d\n", _value);
        _value = (_value + 1) % 500;
    } else {
        printf("[source] Unable to send\n");
    }
}
