// #Sireum

package test_event_port_periodic_domains.test_event_port_periodic_domains

import org.sireum._
import test_event_port_periodic_domains._

// This file was auto-generated.  Do not edit

@msig trait emitter_t_impl {

  def api : emitter_t_impl_Bridge.Api

  def timeTriggered() : Unit = {}

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def finalise(): Unit = {}

  def initialise(): Unit = {}

  def recover(): Unit = {}
}