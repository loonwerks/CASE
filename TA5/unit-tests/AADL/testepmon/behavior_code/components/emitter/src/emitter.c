/* testepmon/components/emitter/src/emitter.c */

#include <camkes.h>
#include <stdio.h>
#include "../../../../includes/tb_proc_types.h"

static int8_t _value;

void testepmon_emitter_component_init(const int64_t *in_arg)
{
    _value = 0;
}

/* control thread: keep calling enqueue for thing
 */
void run_emitter(const int64_t *in_arg)
{
    if (mon_enqueue( &_value ) ) {
        printf("[source] Sent %d\n", _value);
        _value++;
    } else {
        printf("[source] Unable to send\n");
    }
}
