// #Sireum

package receiver_vm

import org.sireum._
import art._
import art.PortMode._
import art.DispatchPropertyProtocol._

// This file was auto-generated.  Do not edit

object Arch {
  val top_impl_Instance_src_process_src_thread : receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge = {
    val write_port = Port[Base_Types.Integer_8] (id = 0, name = "top_impl_Instance_src_process_src_thread_write_port", mode = DataOut)

    receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge(
      id = 0,
      name = "top_impl_Instance_src_process_src_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      write_port = write_port
    )
  }
  val top_impl_Instance_dst_process_dst_thread : receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge = {
    val read_port = Port[Base_Types.Integer_8] (id = 1, name = "top_impl_Instance_dst_process_dst_thread_read_port", mode = DataIn)

    receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge(
      id = 1,
      name = "top_impl_Instance_dst_process_dst_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      read_port = read_port
    )
  }

  val ad : ArchitectureDescription = {
    TranspilerUtil.touch()

    ArchitectureDescription(
      components = ISZ (top_impl_Instance_src_process_src_thread, top_impl_Instance_dst_process_dst_thread),

      connections = ISZ (Connection(from = top_impl_Instance_src_process_src_thread.write_port, to = top_impl_Instance_dst_process_dst_thread.read_port))
    )
  }
}

object TranspilerUtil {
  def touch(): Unit = {
    if(F) {
      TranspilerToucher.touch()

      // add types used in Platform.receive and Platform.receiveAsync
      val mbox2Boolean_Payload: MBox2[Art.PortId, DataContent] = MBox2(0, Base_Types.Boolean_Payload(T))
      val mbox2OptionDataContent: MBox2[Art.PortId, Option[DataContent]] = MBox2(0, None())

      // touch process/thread timing properties
      println(Schedulers.top_impl_Instance_proc_timingProperties)
      println(Schedulers.top_impl_Instance_src_process_src_thread_timingProperties)
      println(Schedulers.top_impl_Instance_dst_process_dst_thread_timingProperties)

      // touch each payload/type in case some are only used as a field in a record
      def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

      printDataContent(Base_Types.Integer_8_Payload(Base_Types.Integer_8_example()))
      printDataContent(art.Empty())

      {
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logInfo("")
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logDebug("")
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.logError("")
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logInfo("")
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logDebug("")
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.logError("")
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_initialization_api.get.put_write_port(Base_Types.Integer_8_example())
        receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread_Bridge.c_operational_api.get.put_write_port(Base_Types.Integer_8_example())
      }
      {
        receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logInfo("")
        receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logDebug("")
        receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_initialization_api.get.logError("")
        receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logInfo("")
        receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logDebug("")
        receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.logError("")
        val apiUsage_read_port: Option[Base_Types.Integer_8] = receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread_Bridge.c_operational_api.get.get_read_port()
      }
    }
  }
}

