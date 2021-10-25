// #Sireum

package art.scheduling.static

import org.sireum._
import art.{Art, DataContent }

object StateObserver {


  def observeInPortValue(bridgeId: Art.BridgeId, portId: Art.PortId): Option[DataContent] = {
    Art.observeInPortValue(portId)
  }

  def observeOutPortValue(bridgeId: Art.BridgeId, portId: Art.PortId): Option[DataContent] = {
    Art.observeOutPortVariable(portId)
  }

  def observeInPortValues(bridgeId: Art.BridgeId): ISZ[(String,Option[DataContent])] = {
    val bridge = Art.bridges(bridgeId).get
    var portValues : ISZ[(String,Option[DataContent])] = ISZ()

    for (port <- bridge.ports.dataIns) {
      portValues = portValues :+ ((port.name, Art.observeInPortValue(port.id)))
    }

    for (port <- bridge.ports.eventIns) {
      portValues = portValues :+ ((port.name, Art.observeInPortValue(port.id)))
    }
    return portValues
  }

  def observeOutPortValues(bridgeId: Art.BridgeId): ISZ[(String,Option[DataContent])] = {
    val bridge = Art.bridges(bridgeId).get
    var portValues : ISZ[(String,Option[DataContent])] = ISZ()

    for (port <- bridge.ports.dataOuts) {
      portValues = portValues :+ ((port.name, Art.observeOutPortVariable(port.id)))
    }

    for (port <- bridge.ports.eventOuts) {
      portValues = portValues :+ ((port.name, Art.observeOutPortVariable(port.id)))
    }
    return portValues
  }

  def observeInPortValuesByNickName(threadNickName: String): ISZ[(String,Option[DataContent])] = {
    halt("TODO")
    //val bridgeId = art.StaticScheduling.threadNickNames.get(threadNickName).get // ToDo: fix error handling
    //return observeInPortValues(bridgeId)
  }

  def observeOutPortValuesByNickName(threadNickName: String): ISZ[(String,Option[DataContent])] = {
    halt("TODO")
    //val bridgeId = art.StaticScheduling.threadNickNames.get(threadNickName).get // ToDo: fix error handling
    //return observeOutPortValues(bridgeId)
  }

  //=======================================================================
  // State Observations (primary methods for interpreting debug commands)
  //=======================================================================

  def generatePortContentsInputsCurrent() : String = {
    val bridgeId = Schedule.getBridgeIdFromSlotNumber(Explorer.scheduleState.slotNum)
    val inPortInfo = observeInPortValues(bridgeId)
    val result =
      st"""****************************
          |   Next Component: ${Schedule.threadNickName(bridgeId)} (id = $bridgeId)
          |****************************
          | Input Ports
          | ===============
          |  ${formatPortInfo(inPortInfo)}""".render
    return result
  }

  def generatePortContentsOutputsCurrent() : String = {
    val previousStateOpt: Option[Explorer.ScheduleState] =
      Explorer.previousState(Explorer.scheduleState,Schedule.dScheduleSpec)

    previousStateOpt match {
      case Some(previousState) => {
        val bridgeId = Schedule.getBridgeIdFromSlotNumber(previousState.slotNum)
        val outPortInfo = observeOutPortValues(bridgeId)
        val result =
          st"""****************************
              |   Previous Component: ${Schedule.threadNickName(bridgeId)} (id = $bridgeId)
              |****************************
              | Output Ports
              | ===============
              |  ${formatPortInfo(outPortInfo)}""".render
        return result
      }
      case None() => {
        return "(initial state - no previous state to show)"
      }
    }
  }

  def formatPortInfo(portVals: ISZ[(String,Option[DataContent])]): String = {
    var result: String = "" // ToDo: Ask Robby if I can do this with a repeating template
    for (e <- portVals) {
      result = st"""$result
                   |${e._1} = ${e._2}""".render  // how do I put in new line?
    }
    return result
  }

  def generatePortContents(bridgeId: Z) : String = {
    val inPortInfo = observeInPortValues(bridgeId)
    val outPortInfo = observeOutPortValues(bridgeId)
    val result =
      st"""****************************
          |   Component: ${Schedule.threadNickName(bridgeId)} (id = $bridgeId)
          |****************************
          | Input Ports
          | ===============
          |  ${formatPortInfo(inPortInfo)}
          |
          | Output Ports
          | ================
          |  ${formatPortInfo(outPortInfo)}""".render
    return result
  }

  def generatePortContentsByNickName(threadNickName: String) : String = {
    halt("TODO")
    //val bridgeId = art.StaticScheduling.threadNickNames.get(threadNickName).get // ToDo: fix error handling
    //return generatePortContents(bridgeId)
  }
}