// #Sireum

package art.scheduling.static

import org.sireum._
import art.{Art, ArtNative}
import art.scheduling.static.Schedule._

// Possible commands/concepts
//
// init system
// s n - step n slots; n >= 1, if n >= remaining slots in hyper-period, then run to end of hyper-period
// h n - step n hyper-periods; n >= 1
// executing info display mode
//  show domain / bridge
//  show infrastructure input / output ports
//  show in/out ports for selected components
//  inject certain values on input ports (random, specific, random with constraints, generator, seeded from test vector)
// run until various conditions
// check contract / constraint (component-wise or global)
// checkpoint state, rollback to checkpointed state
// save step as unit tests
// calculate dependences during execution


// stepDSchedule(2,dScheduleSpec1)

// var inpt: Z = 0
// inpt = readInt()

object Explorer {

  //================ schedule state ====================

  // data structure for schedule state
  //   - zero-based indexing into the time-line of the scheduler
  @datatype class ScheduleState(slotNum: Z, hyperperiodNum: Z)

  // "invariant" for schedule state
  def validState(state: ScheduleState, dScheduleSpec: DScheduleSpec) : B = {
    val slotNum = state.slotNum
    // TODO: also check valid scheduleSpec??
    val slotInRange: B = slotNum >= 0 & slotNum < dScheduleSpec.schedule.slots.size
    val hyperperiodInRange: B = state.hyperperiodNum >= 0
    return  slotInRange & hyperperiodInRange
  }

  def isHyperPeriodBoundary(state: ScheduleState): B = {
    return state.slotNum == 0
  }

  // no overloading in Slang
  //def isHyperPeriodBoundary(): B = {
  //  return isHyperPeriodBoundary(scheduleState)
  //}

  // schedule state "global" variable
  var scheduleState : ScheduleState = initialScheduleState()

  // helper method to define initial state value
  def initialScheduleState(): ScheduleState = {
    ScheduleState(0,0)
  }

  // method to initialize schedule state
  def initializeScheduleStateIMP(): Unit = {
    scheduleState = initialScheduleState()
  }

  def isInitial(scheduleState: ScheduleState): B = {
    return scheduleState == initialScheduleState()
  }

  def isInitialIMP(): B = {
    return isInitial(scheduleState)
  }

  //=============== stepping functions ===================

  // -- methods for executing thread in a particular slot in the schedule.
  //    A thread can be referenced by slot data structure or by slot number (two different methods)

  // execute thread by slot data structure
  def executeSlotIMP(slot: Slot): Unit = {
    //val domainId: Z = slot.domain
    //val bridgeId: Art.BridgeId = Schedule.domainToBridgeIdMap(domainId).get
    val bridgeId: Art.BridgeId = slot.bridgeId
    // val bridge: Bridge = Art.bridges(bridgeId).get  -- debug with Robby
    // This is cause an Invalid 'None' operation 'get' exception
    // Art.clearPortVariables(bridgeId)
    // bridge.entryPoints.compute()  -- debug with Robby
    // Art.bridges(bridgeId).asInstanceOf[MSome[Bridge]].value.entryPoints.compute()
    if(ArtNative.shouldDispatch(bridgeId)) {
      Art.bridges(bridgeId).get.entryPoints.compute()
    }
  }

  // execute thread by slot number
  def executeSlotNumIMP(slotNum: Z): Unit = {
    // pre-condition
    assert(slotNum >= 0 & slotNum < dScheduleSpec.schedule.slots.size, s"slotNum: ${slotNum}, Slot Size: ${dScheduleSpec.schedule.slots.size}")
    // body
    val slots = dScheduleSpec.schedule.slots
    executeSlotIMP(slots(slotNum))
  }

  // -- methods for updating schedule state (these do not actually execute the thread)

  // purely functional method to compute the next schedule state
  def nextState(state: ScheduleState,dScheduleSpec: DScheduleSpec): ScheduleState = {
    // pre-condition
    assert(validState(state, dScheduleSpec))
    // body
    val slots = dScheduleSpec.schedule.slots
    var nextSlotNum = state.slotNum + 1
    var nextHyperPeriodNum = state.hyperperiodNum
    // handle wrap around
    if (nextSlotNum == slots.size) {
      nextSlotNum = 0
      nextHyperPeriodNum = nextHyperPeriodNum + 1
    }
    return ScheduleState(nextSlotNum,nextHyperPeriodNum)
  }

  // purely functional method to compute the next schedule state
  def previousState(state: ScheduleState,dScheduleSpec: DScheduleSpec): Option[ScheduleState] = {
    // pre-condition
    assert(validState(state, dScheduleSpec))
    // body
    if (isInitial(state)) {
      return None()
    }

    val slots = dScheduleSpec.schedule.slots

    var nextSlotNum = state.slotNum - 1           // assume for now we don't wrap around
    var nextHyperPeriodNum = state.hyperperiodNum // assume for now we stay at same hyper-period

    // handle wrap around
    if (state.slotNum == 0) {  // if current state has initial slot number, then wrap to end
      nextSlotNum = slots.size - 1  // set nextSlotNum to last slot number
      nextHyperPeriodNum = nextHyperPeriodNum - 1 // this is sound since we already checked that current state is not initial
    }
    return Some(ScheduleState(nextSlotNum,nextHyperPeriodNum))
  }

  // advance the state to the next schedule slot (side-effecting schedule state)
  def advanceStateIMP() : Unit = {
    scheduleState = nextState(scheduleState,dScheduleSpec)
  }

  def stepSystemOneSlotIMP(info: B): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    // assert(validDScheduleSpec(dScheduleSpec))
    assert(validState(scheduleState, dScheduleSpec))
    // body
    //   execute thread in current slot
    val preScheduleState = scheduleState
    executeSlotNumIMP(scheduleState.slotNum)
    //   advance the schedule state
    advanceStateIMP()
    val postScheduleState = scheduleState
    if (info) {
      halt("TODO")
      //Cli.showStep(preScheduleState, postScheduleState, dScheduleSpec)
    }
  }

  def stepSystemNSlotsIMP(numSlots :Z): Unit = {
    // pre-condition
    assert(numSlots > 0)
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    assert(validState(scheduleState, dScheduleSpec))
    // body
    for (i <- 1 to numSlots) {
      stepSystemOneSlotIMP(T)
    }
  }

  // Steps the system one hyper-period.
  // Does not require the system to be on a hyper-period boundary.
  // If state indicates that hyper-period is already in progress, the method will run to the start of the next hyper-period.
  def stepSystemOneHPIMP(): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    assert(validState(scheduleState, dScheduleSpec))
    // var currentSlotNum: Z = scheduleState.slotNum
    val numStepsToStartOfHP : Z = dScheduleSpec.schedule.slots.size - scheduleState.slotNum
    stepSystemNSlotsIMP(numStepsToStartOfHP)
    // assert that current state is at the beginning of a HP
    assert(isHyperPeriodBoundary(scheduleState))
    halt("TODO")
    //Cli.showHyperPeriodBoundary(scheduleState)
  }

  // Steps the system N hyper-periods.
  // Make an somewhat arbitrary but rational decision that this method should not be
  // called when the system is not on a hyper-period boundary (start of hyper-period)
  def stepSystemNHPIMP(numHyperPeriods:Z): Unit = {
    for (hpcount <- 1 to numHyperPeriods) {
      // println("===== Hyperperiod ", scheduleState.hyperperiodNum, " ============")
      stepSystemOneHPIMP()
    }
  }

  // Runs the system to the start of the given hyper-period number
  def runToHP(hpNum:Z): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    assert(validState(scheduleState, dScheduleSpec))
    assert(hpNum >= 0)
    // body

    halt("TODO")
    //Cli.message(s"...Running to beginning of hyper-period# $hpNum")

    //while (scheduleState.hyperperiodNum < hpNum) {
    //  stepSystemOneSlotIMP(F)
    //}
    //Cli.message("*********** Run to ... Completed *************")
    //Cli.showState(scheduleState)
  }

  // Runs the system to the start of the given state (hp# and slot#)
  def runToState(hpNum:Z, slotNum:Z): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    assert(validState(scheduleState, dScheduleSpec))
    assert(hpNum >= 0)
    assert(slotNum >= 0 & slotNum < Schedule.dScheduleSpec.schedule.slots.size)
    // body
    halt("TODO")
    /*
    Cli.message(s"...Running to state [hp = $hpNum, slot = $slotNum]")
    while (scheduleState.hyperperiodNum < hpNum) {
      stepSystemOneSlotIMP(F)
    }
    while (scheduleState.slotNum < slotNum) {
      stepSystemOneSlotIMP(F)
    }
    Cli.message("*********** Run to ... Completed *************")
    Cli.showState(scheduleState)
     */
  }

  // Runs the system to the start of the given slot#
  def runToSlot(slotNum:Z): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    assert(validState(scheduleState, dScheduleSpec))
    assert(slotNum >= 0 & slotNum < Schedule.dScheduleSpec.schedule.slots.size)
    // body
    while (scheduleState.slotNum != slotNum) {
      stepSystemOneSlotIMP(F)
    }
    halt("TODO")
    /*
    Cli.message("*********** Run to ... Completed *************")
    Cli.showState(scheduleState)
     */
  }

  // Runs the system to the start of the given domain
  def runToDomain(domainId:Z): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    assert(validState(scheduleState, dScheduleSpec))
    assert(domainId >= 0 & domainId <= Schedule.dScheduleSpec.maxDomain)
    // body
    halt("TODO")
    /*
    Cli.message(s"...Running to domain $domainId")
    while (Schedule.dScheduleSpec.schedule.slots(scheduleState.slotNum).domain != domainId) {
      stepSystemOneSlotIMP(F)
    }
    Cli.message("*********** Run to ... Completed *************")
    Cli.showState(scheduleState)

     */
  }

  /*
  // Runs the system to the start of the given domain
  def runToThread(threadNickName: String): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    assert(validState(scheduleState, dScheduleSpec))
    val bridgeId = art.StaticScheduling.threadNickNames.get(threadNickName).get // ToDo: fix error handling
    val domainId = art.StaticScheduling.bridgeIdToDomainMap(bridgeId)
    Cli.message(s"...Running to thread $threadNickName (domain $domainId)")
    while (Schedule.dScheduleSpec.schedule.slots(scheduleState.slotNum).domain != domainId) {
      stepSystemOneSlotIMP(F)
    }
    Cli.message("*********** Run to ... Completed *************")
    Cli.showState(scheduleState)
  }
   */

  // Runs the system according to the static schedule without debugging, but still uses the debugging scheduling state
  def runSystem(): Unit = {
    // pre-condition (invariants on scheduleState and dScheduleSpec)
    // assert valid schedule
    // body
    //Cli.message (s"...Running system according to static schedule")
    cprintln(F, "...Running system according to static schedule")
    Explorer.initializeScheduleStateIMP()
    var systemStopCondition: B = false // right now we don't have a system stop condition
    while (!systemStopCondition) {
      executeSlotNumIMP(scheduleState.slotNum)
      advanceStateIMP()
      for (i <- 1 to 100000) {
        None[String]()
      }
    }
  }
}

