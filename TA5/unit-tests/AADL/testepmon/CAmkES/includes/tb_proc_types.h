#ifndef __TB_AADL_tb_proc_types__H
#define __TB_AADL_tb_proc_types__H

#include <stdbool.h>
#include <stdint.h>

#ifndef TB_VERIFY
#include <stddef.h>
#endif // TB_VERIFY

#define __TB_OS_CAMKES__

#ifndef TB_VERIFY
#define MUTEXOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define MUTEXOP(OP) OP
#endif // TB_VERIFY
#ifndef TB_VERIFY
#define CALLBACKOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define CALLBACKOP(OP) OP
#endif // TB_VERIFY


#endif // __TB_AADL_tb_proc_types__H
