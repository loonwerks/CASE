/* testepmon/components/consumer/src/consumer */

#include <camkes.h>
#include <stdio.h>
#include "../../../../includes/tb_proc_types.h"


void testepmon_consumer_component_init(const int64_t *in_arg)
{
}


/* Handle monsig notification: there is QueuedData
 */
void testepmon_consumer_s_event_handler(const int64_t *in_arg)
{
    /* keep dequeuing until no more things can be had
     */
    int8_t value;

    if (mon_dequeue(&value)) {
        printf("[destination] value {%d}\n", value);
    } else {
        printf("[destination] no value consumed.\n");
    }
}
