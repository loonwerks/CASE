#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <errno.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sp_int8_t.h>
#include <sb_queue_int8_t_1.h>

// This file will not be overwritten so is safe to edit

sb_queue_int8_t_1_Recv_t periodQueue;

seqNum_t sb_write_port_seqNum;


void period_wait(int port_fd, sb_queue_int8_t_1_Recv_t *q, sb_event_counter_t *numDropped) {
    int8_t data;
    while (!sb_queue_int8_t_1_dequeue(q, numDropped, &data)) {
    	char val;
    	/* Blocking read */
    	int result = read(port_fd, &val, sizeof(val));
    	/*
		if (result < 0) {
		    printf("Error reading period.\n");
		    //return -1;

		    int errnum = errno;
            printf("Value of errno: %d    port_fd: %i\n     result: %i", errno, port_fd, result);
        }
        */
    }
}

extern int errno ;

int main(int argc, char *argv[]) {

/*
    if (argc != 4) {
        printf("Usage: %s write_port_dataport write_port_dataport_size pacer_event_port\n\n"
               "Reads the c string contents of a specified dataport file to stdout",
               argv[0]);
        return 1;
    }
*/
    char *write_port_dataport_name = "/dev/uio0";//argv[1];

    int write_port_length = 4096;//atoi(argv[2]);
    assert(write_port_length > 0);

    int fd_write_port_dataport = open(write_port_dataport_name, O_RDWR);
    assert(fd_write_port_dataport >= 0);

    char *write_port_dataport;
    if ((write_port_dataport = mmap(NULL, write_port_length, PROT_READ | PROT_WRITE, MAP_SHARED, fd_write_port_dataport, 1 * getpagesize())) == (void *) -1) {
        printf("mmap write_port_dataport failed\n");
        close(fd_write_port_dataport);
    }

    char *pacer_queue_port_name = "/dev/uio1";//argv[3];

    int fd_pacer_queue_port = open(pacer_queue_port_name, O_RDONLY);
    assert(fd_pacer_queue_port >= 0);

    char *pacer_queue_port;
    if ((pacer_queue_port = mmap(NULL, 4096, PROT_READ , MAP_SHARED, fd_pacer_queue_port, 1 * getpagesize())) == (void *) -1) {
        printf("mmap pacer_queue_port failed\n");
        close(fd_pacer_queue_port);
    }

    // init sampling port for outgoing data port
    init_sp_int8_t((sp_int8_t_t *)write_port_dataport, &sb_write_port_seqNum);

    // init receiver queue for period
    sb_queue_int8_t_1_Recv_init(&periodQueue, (sb_queue_int8_t_1_t *) pacer_queue_port);

    int8_t data = 0;
    
    sb_event_counter_t numDropped = 0;

    while (1) {

        period_wait(fd_pacer_queue_port, &periodQueue, &numDropped);
      
        printf("going to send %i\n", data);
    
        write_sp_int8_t((sp_int8_t_t *) write_port_dataport, &data, &sb_write_port_seqNum);
  
        data++;
    }

    munmap(write_port_dataport, write_port_length);
    munmap(pacer_queue_port, 4096); // assume pacer will never send anything bigger than default dataport size
    
    close(fd_write_port_dataport);
    close(fd_pacer_queue_port);

    return 0;
}