#ifndef __SB_AADL_sb_proc_types__H
#define __SB_AADL_sb_proc_types__H

#include <stdbool.h>
#include <stdint.h>

#ifndef SB_VERIFY
#include <stddef.h>
#endif // SB_VERIFY

#define __SB_OS_CAMKES__

#ifndef SB_VERIFY
#define MUTEXOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define MUTEXOP(OP) OP
#endif // SB_VERIFY
#ifndef SB_VERIFY
#define CALLBACKOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define CALLBACKOP(OP) OP
#endif // SB_VERIFY


#endif // __SB_AADL_sb_proc_types__H
