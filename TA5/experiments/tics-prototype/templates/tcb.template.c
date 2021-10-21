// Copyright 2021, Adventium Labs

#include <assert.h>
#include <sel4/types.h>
#include <sel4/sel4.h>
#include <stddef.h>
#include <stdint.h>
#include <tcb.template.h>
#include <string.h>

/*- do exec('from pprint import pprint') -*/

/*- set sched_core = 0 -*/
/*- if options.realtime -*/
/*- if 'sched_ctrl' in configuration[me.name].keys() -*/
/*- set sched_core = configuration[me.name].get('sched_ctrl') -*/
/*- endif -*/
/*- endif -*/

/*- set sched_ctrl = alloc('sched_control', type=seL4_SchedControl, core=sched_core) -*/
seL4_CPtr sched_control = /*? sched_ctrl ?*/;

/*- set tcb_caps = {} -*/
/*- set sc_caps = {} -*/
/*- for i in composition.instances -*/
    /*- set threads = macros.threads(composition, i, configuration[i.name], options) -*/
    /*- for t in threads -*/
        /*# do exec('pprint(\'i.name: ' + i.name + '\')') #*/
        /*# do exec('pprint(\'t.name: ' + t.name + '\')') #*/
        /*- set tcb = alloc_ent('%s_tcb' % t.name, seL4_TCBObject, i.name) -*/
        /*- do tcb_caps.__setitem__(t.name, tcb) -*/
        /*- if options.realtime -*/
            /*- set sc = alloc_ent("%s_sc" % t.name, seL4_SchedContextObject, i.name) -*/
            /*- do sc_caps.__setitem__(t.name, sc) -*/
        /*- endif -*/
    /*- endfor -*/
/*- endfor -*/

/*- set fault_ep = alloc_obj('tcb_ep', seL4_EndpointObject) -*/
/*- set sched_tcb = tcb_caps.__getitem__('%s_0_fault_handler' % me.name) -*/
/*- set fault_ep_cap = alloc_cap('tcb_ep_%s' % me.name, fault_ep, read=True, write=True, grantreply=True) -*/
/*- set fault_reply_cap = alloc('tcb_reply', seL4_RTReplyObject) -*/

seL4_CPtr fault_ep = /*? fault_ep_cap ?*/;
seL4_CPtr fault_reply = /*? fault_reply_cap ?*/;

seL4_CPtr get_tcb_by_name(const char* name) {
/*- for key, val in tcb_caps.items() -*/
    if (0 == strcmp(name, "/*? key ?*/")) {
        return /*? val ?*/;
    }
/*- endfor -*/
    return 0;
}

seL4_CPtr get_sc_by_name(const char* name) {
/*- for key, val in sc_caps.items() -*/
    if (0 == strcmp(name, "/*? key ?*/")) {
        return /*? val ?*/;
    }
/*- endfor -*/
    return 0;
}

