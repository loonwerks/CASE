/*
 * Copyright 2020, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
/*- do configuration[me.instance.name].update({"%s_access" % me.interface.name: "R"}) -*/

/*- include 'seL4SharedDataWithCaps.template.c' -*/

/*- set connection_type = configuration[me.instance.name].get('%s_type' % me.interface.name, 'native') -*/
/*- set generate_notifications = configuration[me.parent.name].get("with_signalling", false) -*/
/*- if generate_notifications -*/

	/*- if connection_type == 'native' -*/
	    /*- include 'seL4Notification-to.template.c' -*/
	/*- elif connection_type == 'vm' -*/
		/*- from 'global-endpoint.template.c' import allocate_cap with context -*/

		/*- do allocate_cap(me, is_reader=True) -*/
		/*- set badge = pop('badge') -*/


	/*- else -*/
	     /*? raise(TemplateError('Setting %s.%s_type is not valid. Must be either "native" or "vm"' % (me.instance.name, me.interface.name))) ?*/
	/*- endif -*/
/*- endif -*/
/*- if connection_type == 'vm' -*/

seL4_Word /*? me.interface.name ?*/_notification_badge() {
  return /*? badge ?*/;
}

/*- endif -*/
