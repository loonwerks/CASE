/*
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * Copyright 2019 Adventium Labs
 * Modifications made to original
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_Adventium_BSD)
 */

#include <camkes.h>
#include <stdio.h>
#include <stdlib.h>
#include <counter.h>
#include <data.h>
#include <queue.h>

//------------------------------------------------------------------------------
// User specified input data receive handler for AADL Input Event Data Port (in) named
// "p1_in".

void p1_in_aadl_event_data_receive(counter_t numDropped, data_t *data) {
    printf("%s: received: %d  numDropped: %" PRIcounter "\n", get_instance_name(), data->x, numDropped);
}

//------------------------------------------------------------------------------
// Implementation of AADL Input Event Data Port (in) named "p1_in"
// Three styles: poll, wait and callback.
//
// Callback would typically be avoid for safety critical systems. It is harder
// to analyze since the callback handler is run on some arbitrary thread.
//
// NOTE: If we only need polling style receivers, we can get rid of SendEvent

recv_queue_t recvQueue;

// Assumption: only one thread is calling this and/or reading p1_in_recv_counter.
bool p1_in_aadl_event_data_poll(counter_t *numDropped, data_t *data) {
    return queue_dequeue(&recvQueue, numDropped, data);
}

//------------------------------------------------------------------------------
// Testing - Three tests for the different styles: poll, wait and callback.
//
// NOTE: The constants in the tests were chosen to cause a variety of
// situations at runtime including dropped packets and no data
// available. These numbers may not cause the same variety of behaviour in
// different test environments.

void run_poll(void) {
    counter_t numDropped;
    data_t data;

    while (true) {

        // Busy loop to wait a bit and slow things down
        for(unsigned int j = 0; j < 80000; ++j){
            seL4_Yield();
        }

        // Random number of polls for testing
        int n = (random() % 10);
        for(unsigned int j = 0; j < n; ++j){
            bool dataReceived = p1_in_aadl_event_data_poll(&numDropped, &data);
            if (dataReceived) {
                p1_in_aadl_event_data_receive(numDropped, &data);
            } else {
                printf("%s: received nothing\n", get_instance_name());
            }
        }

    }

}

void post_init(void) {
   recv_queue_init(&recvQueue, p1_in_queue);
}

int run(void) {
    run_poll();
}

// Emacs Declarations
// Local Variables:
// mode: c
// c-basic-offset: 4
// indent-tabs-mode: nil
// End:              
