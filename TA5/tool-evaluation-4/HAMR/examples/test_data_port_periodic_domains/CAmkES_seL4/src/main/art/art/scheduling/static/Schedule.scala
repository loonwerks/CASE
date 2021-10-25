// #Sireum

package art.scheduling.static

import org.sireum._
import art.{Art, Bridge}

object Schedule {

  // const dschedule_t ksDomSchedule[] = { // (1 tick == 2ms)
  //  { .domain = 0, .length = 100 }, // all other seL4 threads, init, 200ms
  //  { .domain = 1, .length =   5 }, // pacer        10ms
  //  { .domain = 0, .length =  95 }, // domain0     190ms
  //  { .domain = 2, .length =   5 }, // source       10ms
  //  { .domain = 0, .length =  95 }, // domain0     190ms
  //  { .domain = 3, .length =   5 }, // destination  10ms
  //  { .domain = 0, .length = 195 }, // domain0     390ms
  // };

  // const word_t ksDomScheduleLength = sizeof(ksDomSchedule) / sizeof(dschedule_t);

  @datatype class DScheduleSpec(maxDomain: Z, // the highest domain # used
                                hyperPeriod: Z, // the hyper period in ticks
                                schedule: DSchedule)

  // contract invariants on schedule

  @datatype class DSchedule(slots: ISZ[Slot])

  // contract invariants on schedule

  @datatype class Slot(bridgeId: art.Art.BridgeId, length: Z)

  val emptyDScheduleSpec: DScheduleSpec = DScheduleSpec(0,0,DSchedule(ISZ()))

  // ---------- schedule structure

  var dScheduleSpec: DScheduleSpec = emptyDScheduleSpec
  var domainToBridgeIdMap: ISZ[Art.BridgeId] = ISZ()

  def setSchedule(spec: DScheduleSpec, bridgeMap: ISZ[Art.BridgeId]) : Unit = {
    // pre-condition -- all structural invariants for the domain schedule hold
    validDScheduleSpec(spec)
    // checking period for each thread requires alignment with model -- cannot check that here -- client should guarantee
    // body
    dScheduleSpec = spec
    domainToBridgeIdMap = bridgeMap
    //
    // Technically, after this point, the schedule is "frozen" and we should have to check the invariant properties on the
    // schedule again.
  }

  // --------- helper method for accessing schedule info

  def getBridgeIdFromSlot(slot: Slot): Z = {
    //val domainId = slot.domain
    //val bridgeId = domainToBridgeIdMap(domainId).get
    val bridgeId = slot.bridgeId
    return bridgeId
  }

  def getBridgeIdFromSlotNumber(slotNum: Z): Z = {
    val slot: Slot = dScheduleSpec.schedule.slots(slotNum)
    return getBridgeIdFromSlot(slot)
  }

  def getBridgeId(scheduleState : Explorer.ScheduleState): Z = {
    return getBridgeIdFromSlotNumber(scheduleState.slotNum)
  }

  //def getDomain(slotNum: Z): Z = {
  //  val slot: Slot = dScheduleSpec.schedule.slots(slotNum)
  //  return slot.domain
  //}

  //def getDomain(scheduleState : Explorer.ScheduleState): Z = {
  //   return getDomain(scheduleState.slotNum)
  //}

  def threadNickName(bridgeId: Art.BridgeId): String = {
    halt("TODO")
    /*
    for (e <- StaticScheduling.threadNickNames.entries) {
      if (e._2 == bridgeId) {
        return e._1
      }
    }
    return "<not found>"
     */
  }

  def threadNickNameFromScheduleState(scheduleState: Explorer.ScheduleState) : String = {
    val bridgeId = Schedule.getBridgeIdFromSlotNumber(scheduleState.slotNum)
    return threadNickName(bridgeId)
  }

  // --------- helper methods for contracts -------------

  def mySome[T](isz: ISZ[T], pred: T => B): B = {
    for (e <- isz) {
      if (pred(e)) {
        return true
      }
    }
    return false
  }

  def myAll[T](isz: ISZ[T], pred: T => B): B = {
    for (e <- isz) {
      if (!pred(e)) {
        return false
      }
    }
    return true
  }

  // ------------- contract invariants on schedule -------------

  // aggregate invariant on static schedule
  def validDScheduleSpec(dScheduleSpec: DScheduleSpec): B = {
    checkMaxDomain(dScheduleSpec)
    checkNoMissingDomain(dScheduleSpec)
    checkHyperPeriodTicks(dScheduleSpec)
  }

  // Invariant: no domain id referenced in a slot exceeds the specified max domain
  def checkMaxDomain(dScheduleSpec: DScheduleSpec): B = {
    halt("TODO")
    //myAll[Slot](dScheduleSpec.schedule.slots, s => s.domain <= dScheduleSpec.maxDomain)
    //  for (s <- dScheduleSpec.schedule.slots) {
    //    if (s.domain > dScheduleSpec.maxDomain) {
    //      return false
    //    }
    //  }
    //  return true
  }

  // Invariant: every domain 0 .. maxDomain is referenced by at least one slot
  def checkNoMissingDomain(dScheduleSpec: DScheduleSpec): B = {
    halt("TODO")
    /*
    for (d <- 0 to dScheduleSpec.maxDomain) {
      if (!mySome[Slot](dScheduleSpec.schedule.slots, s => s.domain == d)) {
        return false
      }
    }
    return true

     */
  }

  // Invariant: the total time (in ticks) across all slots matches the specified hyper-period
  def checkHyperPeriodTicks(dScheduleSpec: DScheduleSpec): B = {
    var computedHyperPeriod: Z = 0
    for (s <- dScheduleSpec.schedule.slots) {
      computedHyperPeriod = computedHyperPeriod + s.length
    }
    return (computedHyperPeriod == dScheduleSpec.hyperPeriod)
  }


  // add Clock period

  // This property is not an invariant per se, but rather a consistency property between the model-specified
  // thread periods and the implied periods in the static schedule.  Thus, this property is omitted from the
  // structural invariant on the static schedule.
  //
  // Model-consistency: for a given domain, the period implied by the schedule (calculated period) matches
  // the period (parameter) specified in the model
  /*
   * @param domain identifier of domain to be checked
   * @param period specified period of domain in ticks
   * @param dScheduleSpec static schedule
   */
  def checkPeriodTicks(domain: Z, period: Z, dScheduleSpec: DScheduleSpec): B = {
    halt("TODO")
    /*
    var computedPeriod: Z = 0 // computed period in ticks
    var computedTicksBeforeOccurrence: Z = 0
    // number of ticks before first occurrence
    // used to determine period, when periods "wraps around" the schedule
    var occurrence: Z = 0 // how many times has domain occurred so far in schedule

    for (s <- dScheduleSpec.schedule.slots) {
      // println(occurrence, ", ", computedTicksBeforeOccurrence, ", ", computedPeriod)
      if (s.domain == domain) { // if we are at a slot for the domain in the schedule
        // if this is not the first occurrence, then we have computed the time (in ticks)
        // since the last occurrence, so compare computed period to specified period
        if (occurrence > 0) {
          if (computedPeriod != period) {
            return false
          }
        }
        // at all occurrences (first or otherwise), increment the occurrence counter
        occurrence = occurrence + 1
        // re-start the accumulation of time leading to period
        computedPeriod = s.length // "initialize" the computed period with length of domain's time slot
      } else {
        //
        if (occurrence > 0) { // if we have previously encountered the domain in the schedule
          computedPeriod = computedPeriod + s.length // add current time slice
        } else {
          // if we haven't see the domain yet, add the time to the "before occurrence" accumulator
          computedTicksBeforeOccurrence = computedTicksBeforeOccurrence + s.length
        }
      }
    }
    // println(occurrence, ", ", computedTicksBeforeOccurrence, ", ", computedPeriod)
    // at this point, we have reached the end of the schedule.  We need to check for the domain
    // as it wraps around.  Given our other invariants, we know that the domain occurs at least
    // once.  So computedPeriod should hold the time since it was seen, whereas
    // computedTicksBeforeOccurrence should hold the time before it was seen.
    // The sum of these values should equal the period.
    return (computedPeriod + computedTicksBeforeOccurrence == period)

     */
  }

  def computeElaspedRemainingHPTicks(slotNum: Z, dScheduleSpec: DScheduleSpec) : (Z,Z) = {
    // pre-condition
    //  TODO: well-formed dScheduleSpec
    //  TODO: valid slotNum (define function for below)
    assert(0 <= slotNum & slotNum < dScheduleSpec.schedule.slots.size)
    // body
    var elaspedHPTicks: Z = 0
    for (s <- 0 until slotNum) {
      elaspedHPTicks = elaspedHPTicks + dScheduleSpec.schedule.slots(0).length
    }
    val remainingHPTicks: Z = dScheduleSpec.hyperPeriod - elaspedHPTicks
    return (elaspedHPTicks,remainingHPTicks)
  }
}

