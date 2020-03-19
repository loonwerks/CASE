#include "../includes/sb_destination_t_impl.h"
#include <string.h>
#include <camkes.h>

static bool sb_occurred_periodic_dispatcher;
static int64_t sb_time_periodic_dispatcher;

/************************************************************************
 * periodic_dispatcher_write_int64_t
 * Invoked from remote periodic dispatch thread.
 *
 * This function records the current time and triggers the active thread
 * dispatch from a periodic event.  Note that the periodic dispatch
 * thread is the *only* thread that triggers a dispatch, so we do not
 * mutex lock the function.
 *
 ************************************************************************/

bool periodic_dispatcher_write_int64_t(const int64_t * arg) {
    sb_occurred_periodic_dispatcher = true;
    sb_time_periodic_dispatcher = *arg;
    MUTEXOP(sb_dispatch_sem_post());
    return true;
}

void sb_periodic_dispatch_notification_callback(void *_ UNUSED) {
   // we want time in microseconds, not nanoseconds, so we divide by 1000.
   int64_t sb_time_periodic_dispatcher = 0; // sb_timer_time() / 1000LL -- timer connection disabled;
   (void)periodic_dispatcher_write_int64_t(&sb_time_periodic_dispatcher);
   CALLBACKOP(sb_periodic_dispatch_notification_reg_callback(sb_periodic_dispatch_notification_callback, NULL));
}


seqNum_t sb_read_port_seqNum;

bool sb_read_port_read(int8_t * value) {
  seqNum_t new_seqNum;
  if ( read_sp_int8_t(sb_read_port, value, &new_seqNum) ) {
    sb_read_port_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

void sb_entrypoint_destination_t_impl_periodic_dispatcher(const int64_t * in_arg) {
  test_data_port_periodic_destination_component_time_triggered((int64_t *) in_arg);
}

/************************************************************************
 *  sb_entrypoint_destination_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_destination_t_impl_initializer(const int64_t * in_arg) {
  test_data_port_periodic_destination_component_init((int64_t *) in_arg);
}



/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
/*int run(void) {
  CALLBACKOP(sb_periodic_dispatch_notification_reg_callback(sb_periodic_dispatch_notification_callback, NULL));
  {
    int64_t sb_dummy;
    sb_entrypoint_destination_t_impl_initializer(&sb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    if(sb_occurred_periodic_dispatcher){
      sb_occurred_periodic_dispatcher = false;
      sb_entrypoint_destination_t_impl_periodic_dispatcher(&sb_time_periodic_dispatcher);
    }
  }
  return 0;
}*/

void ffiloginfo (unsigned char *c, long clen, unsigned char *a, long alen) {
  printf("Loginfo: %s",c);
}

void ffilogdebug (unsigned char *c, long clen, unsigned char *a, long alen) {
  printf("Logdebug: %s",c);
}

void ffilogerror (unsigned char *c, long clen, unsigned char *a, long alen) {
  printf("Logerror: %s",c);
}

void ffiinitialise (unsigned char *c, long clen, unsigned char *a, long alen) {
  CALLBACKOP(sb_periodic_dispatch_notification_reg_callback(sb_periodic_dispatch_notification_callback, NULL));
  MUTEXOP(sb_dispatch_sem_wait());
}

void ffiwait (unsigned char *c, long clen, unsigned char *a, long alen) {
  assert(alen > 0);
  MUTEXOP(sb_dispatch_sem_wait())

    if(sb_occurred_periodic_dispatcher){
      sb_occurred_periodic_dispatcher = false;
      a[0] = 1;
    }
    else {
      a[0] = 0;
    }
}


/* HAMR-to-CakeML glue functions (receive_input + per-port functions) */

void ffisb_read_port_read (unsigned char *c, long clen, unsigned char *a, long alen) {
  assert(1 <= alen);
  int8_t value;
  sb_read_port_read(&value);
  a[0] = value;
}

/* clFFI (command line) */

/* argc and argv are exported in cake.S */
extern unsigned int argc;
extern char **argv;

void ffiget_arg_count (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* a[0] = (char) argc; */
  /* a[1] = (char) (argc / 256); */
}

void ffiget_arg_length (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* int i = a[0] + (a[1] * 256); */
  /* int k = 0; */
  /* while (argv[i][k] != 0) { k++; } */
  /* a[0] = (char) k; */
  /* a[1] = (char) (k / 256); */
}

void ffiget_arg (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* int i = a[0] + (a[1] * 256); */
  /* int k = 0; */
  /* while (argv[i][k] != 0) { */
  /*   a[k] = argv[i][k]; */
  /*   k++; */
  /* } */
}

void int_to_byte2(int i, unsigned char *b){
    /* i is encoded on 2 bytes */
    b[0] = (i >> 8) & 0xFF;
    b[1] = i & 0xFF;
}

int byte2_to_int(unsigned char *b){
    return ((b[0] << 8) | b[1]);
}

void int_to_byte8(int i, unsigned char *b){
    /* i is encoded on 8 bytes */
    /* i is cast to long long to ensure having 64 bits */
    /* assumes CHAR_BIT = 8. use static assertion checks? */
    b[0] = ((long long) i >> 56) & 0xFF;
    b[1] = ((long long) i >> 48) & 0xFF;
    b[2] = ((long long) i >> 40) & 0xFF;
    b[3] = ((long long) i >> 32) & 0xFF;
    b[4] = ((long long) i >> 24) & 0xFF;
    b[5] = ((long long) i >> 16) & 0xFF;
    b[6] = ((long long) i >> 8) & 0xFF;
    b[7] =  (long long) i & 0xFF;
}

int byte8_to_int(unsigned char *b){
    return (((long long) b[0] << 56) | ((long long) b[1] << 48) |
             ((long long) b[2] << 40) | ((long long) b[3] << 32) |
             (b[4] << 24) | (b[5] << 16) | (b[6] << 8) | b[7]);
}


/* fsFFI (file system and I/O) */

void ffiopen_in (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* assert(9 <= alen); */
  /* int fd = open((const char *) c, O_RDONLY); */
  /* if (0 <= fd){ */
  /*   a[0] = 0; */
  /*   int_to_byte8(fd, &a[1]); */
  /* } */
  /* else */
  /*   a[0] = 1; */
}

void ffiopen_out (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* assert(9 <= alen); */
  /* #ifdef __WIN32 */
  /* int fd = open((const char *) c, O_RDWR|O_CREAT|O_TRUNC); */
  /* #else */
  /* int fd = open((const char *) c, O_RDWR|O_CREAT|O_TRUNC, S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH); */
  /* #endif */
  /* if (0 <= fd){ */
  /*   a[0] = 0; */
  /*   int_to_byte8(fd, &a[1]); */
  /* } */
  /* else */
  /*   a[0] = 1; */
}

void ffiread (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* assert(clen == 8); */
  /* int fd = byte8_to_int(c); */
  /* int n = byte2_to_int(a); */
  /* assert(alen >= n + 4); */
  /* int nread = read(fd, &a[4], n); */
  /* if(nread < 0){ */
  /*   a[0] = 1; */
  /* } */
  /* else{ */
  /*   a[0] = 0; */
  /*   int_to_byte2(nread,&a[1]); */
  /* } */
}

void ffiwrite (unsigned char *c, long clen, unsigned char *a, long alen){
  /* assert(clen == 8); */
  /* int fd = byte8_to_int(c); */
  /* int n = byte2_to_int(a); */
  /* int off = byte2_to_int(&a[2]); */
  /* assert(alen >= n + off + 4); */
  /* int nw = write(fd, &a[4 + off], n); */
  /* if(nw < 0){ */
  /*     a[0] = 1; */
  /* } */
  /* else{ */
  /*   a[0] = 0; */
  /*   int_to_byte2(nw,&a[1]); */
  /* } */
}

void fficlose (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* assert(alen >= 1); */
  /* assert(clen == 8); */
  /* int fd = byte8_to_int(c); */
  /* if (close(fd) == 0) a[0] = 0; */
  /* else a[0] = 1; */
}

/* GC FFI */
int inGC = 0;
struct timeval t1,t2,lastT;
long microsecs = 0;
int numGC = 0;
int hasT = 0;

void cml_exit(int arg) {
  #ifdef DEBUG_FFI
  {
    fprintf(stderr,"GCNum: %d, GCTime(us): %ld\n",numGC,microsecs);
  }
  #endif
  exit(arg);
}

void ffiexit (unsigned char *c, long clen, unsigned char *a, long alen) {
    if(alen > 0) {
      cml_exit((int)a[0]);
  }
  cml_exit(EXIT_FAILURE);
}


/* empty FFI (assumed to do nothing, but can be used for tracing/logging) */
void ffi (unsigned char *c, long clen, unsigned char *a, long alen) {
  /* #ifdef DEBUG_FFI */
  /* { */
  /*   if (clen == 0) */
  /*   { */
  /*     if(inGC==1) */
  /*     { */
  /*       gettimeofday(&t2, NULL); */
  /*       microsecs += (t2.tv_usec - t1.tv_usec) + (t2.tv_sec - t1.tv_sec)*1e6; */
  /*       numGC++; */
  /*       inGC = 0; */
  /*     } */
  /*     else */
  /*     { */
  /*       inGC = 1; */
  /*       gettimeofday(&t1, NULL); */
  /*     } */
  /*   } else { */
  /*     int indent = 30; */
  /*     for (int i=0; i<clen; i++) { */
  /*       putc(c[i],stderr); */
  /*       indent--; */
  /*     } */
  /*     for (int i=0; i<indent; i++) { */
  /*       putc(' ',stderr); */
  /*     } */
  /*     struct timeval nowT; */
  /*     gettimeofday(&nowT, NULL); */
  /*     if (hasT) { */
  /*       long usecs = (nowT.tv_usec - lastT.tv_usec) + */
  /*                    (nowT.tv_sec - lastT.tv_sec)*1e6; */
  /*       fprintf(stderr," --- %ld milliseconds\n",usecs / (long)1000); */
  /*     } else { */
  /*       fprintf(stderr,"\n"); */
  /*     } */
  /*     gettimeofday(&lastT, NULL); */
  /*     hasT = 1; */
  /*   } */
  /* } */
  /* #endif */
}

typedef union {
  double d;
  char bytes[8];
} double_bytes;

// FFI calls for floating-point parsing
void ffidouble_fromString (unsigned char *c, long clen, unsigned char *a, long alen) {
  double_bytes d;
  sscanf(c, "%lf",&d.d);
  assert (8 == alen);
  for (int i = 0; i < 8; i++){
    a[i] = d.bytes[i];
  }
}

void ffidouble_toString (unsigned char *c, long clen, unsigned char *a, long alen) {
  double_bytes d;
  assert (256 == alen);
  for (int i = 0; i < 8; i++){
    d.bytes[i] = a[i];
  }
  //snprintf always terminates with a 0 byte if space was sufficient
  int bytes_written = snprintf(&a[0], 255, "%#.12f", d.d);
  // snprintf returns number of bytes it would have written if the buffer was
  // large enough -> check that it did not write more than the buffer size - 1
  // for the 0 byte
  assert (bytes_written <= 255);
}
