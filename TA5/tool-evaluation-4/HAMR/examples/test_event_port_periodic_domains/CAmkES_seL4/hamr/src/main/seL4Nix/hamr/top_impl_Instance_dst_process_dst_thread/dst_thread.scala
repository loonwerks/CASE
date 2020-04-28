// #Sireum

package hamr.top_impl_Instance_dst_process_dst_thread

import org.sireum._
import art._
import art.DispatchPropertyProtocol._
import art.PortMode._
import hamr._
import hamr.test_event_port_periodic_domains.consumer_t_impl_seL4Nix

object dst_thread extends App {

  val dst_threadBridge : hamr.test_event_port_periodic_domains.consumer_t_impl_Bridge = {
    val consume = Port[art.Empty] (id = 0, name = "top_impl_Instance_dst_process_dst_thread_consume", mode = EventIn)

    hamr.test_event_port_periodic_domains.consumer_t_impl_Bridge(
      id = 0,
      name = "top_impl_Instance_dst_process_dst_thread",
      dispatchProtocol = Periodic(period = 1000),
      dispatchTriggers = None(),

      consume = consume
    )
  }

  val entryPoints: Bridge.EntryPoints = dst_threadBridge.entryPoints
  val noData: Option[DataContent] = None()

  // consume: In EventPort art.Empty
  val consume_id: Art.PortId = dst_threadBridge.consume.id
  var consume_port: Option[DataContent] = noData

  def dispatchStatus(bridgeId: Art.BridgeId): DispatchStatus = {
    return TimeTriggered()
  }

  def getValue(portId: Art.PortId): Option[DataContent] = {
    if(portId == consume_id) {
      return consume_port
    } else {
      halt(s"Unexpected: dst_thread.getValue called with: ${portId}")
    }
  }

  def receiveInput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params

    consume_port = consumer_t_impl_seL4Nix.consume_Receive()  
  }

  def putValue(portId: Art.PortId, data: DataContent): Unit = {
    halt(s"Unexpected: dst_thread.putValue called with: ${portId}")
  }

  def sendOutput(eventPortIds: ISZ[Art.PortId], dataPortIds: ISZ[Art.PortId]): Unit = {
    // ignore params


  }

  def initialiseArchitecture(): Unit = { 
    val ad = ArchitectureDescription(
      components = MSZ (dst_threadBridge),
      connections = ISZ ()
    )   
    Art.run(ad)
  }

  def initialiseEntryPoint(): Unit = { entryPoints.initialise() }

  def computeEntryPoint(): Unit = { entryPoints.compute() }

  def finaliseEntryPoint(): Unit = { entryPoints.finalise() }

  def main(args: ISZ[String]): Z = {

    // need to touch the following for transpiler
    initialiseArchitecture()
    initialiseEntryPoint()
    computeEntryPoint()
    finaliseEntryPoint()

    // touch each payload/type in case some are only used as a field in a record
    def printDataContent(a: art.DataContent): Unit = { println(s"${a}") }

    printDataContent(art.Empty())

    return 0
  }

  def logInfo(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def logError(title: String, msg: String): Unit = {
    eprint(title)
    eprint(": ")
    eprintln(msg)
  }

  def logDebug(title: String, msg: String): Unit = {
    print(title)
    print(": ")
    println(msg)
  }

  def run(): Unit = {}

}
