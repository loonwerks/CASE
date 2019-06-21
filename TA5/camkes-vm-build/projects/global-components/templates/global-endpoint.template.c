/*#
 *#Copyright 2017, Data61
 *#Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 *#ABN 41 687 119 230.
 *#
 *#This software may be distributed and modified according to the terms of
 *#the BSD 2-Clause license. Note that NO WARRANTY is provided.
 *#See "LICENSE_BSD2.txt" for details.
 *#
 *#@TAG(DATA61_BSD)
  #*/
/*? assert(isinstance(instance, six.string_types)) ?*/
/*? assert(isinstance(interface, six.string_types)) ?*/
/*? assert(isinstance(is_reader, bool)) ?*/

/*- set name = configuration[instance].get('%s_global_endpoint' % interface) -*/
/*- if name is none -*/
  /*? raise(Exception('%s.%s_global_endpoint not set' % (instance, interface))) ?*/
/*- else -*/
  /*- set name = name.strip('"') -*/
/*- endif -*/

/*- set badge_maybestring = configuration[instance].get('%s_badge' % interface, '"0"') -*/
/*- if isinstance(badge_maybestring, six.string_types) -*/
    /*- set badge = badge_maybestring.strip('"') -*/
/*- else -*/
    /*- set badge = str(badge_maybestring) -*/
/*- endif -*/
/*- set stash_name = "%s_global_notification" % (name) -*/

/*# Check the global stash for our endpoint #*/
/*- set maybe_notification = _pop(stash_name) -*/

/*# Create the endpoint if we need to #*/
/*- if maybe_notification is none -*/
    /*- set notification_object = alloc_obj(name, seL4_NotificationObject) -*/
/*- else -*/
    /*- set notification_object = maybe_notification -*/
/*- endif -*/

/*# Put it back into the stash #*/
/*- do _stash(stash_name, notification_object) -*/

/*# Create the badged endpoint #*/
/*- set notification = alloc_cap('%s_%s_notification_object_cap' % (name, badge), notification_object, read=is_reader, write=True) -*/
/*- do cap_space.cnode[notification].set_badge(int(badge, 10)) -*/

/*- do stash('notification', notification) -*/
