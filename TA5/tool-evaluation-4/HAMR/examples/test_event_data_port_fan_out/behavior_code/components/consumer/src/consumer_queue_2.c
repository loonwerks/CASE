#include <camkes.h>
#include <stdio.h>
#include <sb_top_impl_Instance_types.h>
#include <sb_consumer_queue_2_impl.h>

void test_event_data_port_consumer_component_init(const int64_t *in_arg)
{
    printf("[%s] test_event_data_port_consumer_component_init called\n", get_instance_name());
}

void test_event_data_port_consumer_s_event_handler(const int8_t * in_arg)
{
    int32_t received = 1; // 1 for the event the glue code dequeued
    int8_t value;

    printf("[%s] received value {%d}\n", get_instance_name(), *in_arg);
    
    // keep dequeuing until no more things can be had
    while(sb_deq_dequeue(&value)) {
      printf("[%s] received value {%d}\n", get_instance_name(), value);
      received++;
    }
    
    printf("[%s] %i events received\n", get_instance_name(), received);
}
