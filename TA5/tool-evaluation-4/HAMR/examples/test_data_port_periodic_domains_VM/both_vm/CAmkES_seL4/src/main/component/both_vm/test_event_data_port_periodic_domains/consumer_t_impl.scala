// #Sireum

package both_vm.test_event_data_port_periodic_domains

import org.sireum._
import both_vm._

// This file was auto-generated.  Do not edit

@msig trait consumer_t_impl {

  def api : consumer_t_impl_Bridge.Api

  def timeTriggered() : Unit = {}

  def activate(): Unit = {}

  def deactivate(): Unit = {}

  def finalise(): Unit = {}

  def initialise(): Unit = {}

  def recover(): Unit = {}
}