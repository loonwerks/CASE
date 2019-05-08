/* testpdmon/components/destination/src/destination.c */

#include <camkes.h>
#include <stdio.h>
#include "../../../../includes/tb_proc_types.h"


void testdpmon_destination_component_init(const int64_t *in_arg)
{
}


/* Handle monsig notification: there is QueuedData
 */
void run_receiver(const int64_t *in_arg)
{
    /* keep dequeuing until no more things can be had
     */
    int8_t value;

    if (mon_read(&value)) {
        printf("[destination] value {%d}\n", value);
    }
}
