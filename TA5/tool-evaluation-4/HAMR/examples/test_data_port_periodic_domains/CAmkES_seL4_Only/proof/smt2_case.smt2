(set-logic ALL)

(declare-datatypes ((Mode 0)) ((
  (SeL4)
  (SeL4_Only)
  (SeL4_TB))))

(declare-datatypes ((ComponentType 0)) ((
  (AadlComponent)
  (AadlVMComponent)
  (PacerComponent)
  (PeriodicDispatcher))))

(declare-datatypes ((DispatchProtocol 0)) ((
  (Periodic)
  (Sporadic)
  (UNSPECIFIED_DISPATCH_PROTOCOL))))

(declare-datatypes ((SchedulingType 0)) ((
  (Pacing)
  (SelfPacing)
  (PeriodicDispatching)
  (UNSPECIFIED_SCHEDULING_TYPE))))

(declare-datatypes ((Direction 0)) ((
  (In)
  (Out))))

(declare-datatypes ((PortType 0)) ((
  (AadlDataPort)
  (AadlEventPort)
  (AadlEventDataPort))))


(declare-const CodegenMode Mode)
(assert (= CodegenMode SeL4_Only))

(declare-const ModelSchedulingType SchedulingType)
(assert (= ModelSchedulingType SelfPacing))

(declare-datatypes ((AADLComponent 0)) ((
  (top_impl_Instance_source_process_component_source_thread_component); Instance of test_data_port_periodic_domains::source_thread.impl declared at /test_data_port_periodic_domains/test_data_port_periodic_domains.aadl (43, 4)
  (top_impl_Instance_destination_process_component_destination_thread_component); Instance of test_data_port_periodic_domains::destination_thread.impl declared at /test_data_port_periodic_domains/test_data_port_periodic_domains.aadl (78, 4)
)))
(declare-const AADLComponent_count Int)
(assert (= 2 AADLComponent_count))

(declare-const AADLDispatchProtocol (Array AADLComponent DispatchProtocol))
  (assert (= Periodic (select AADLDispatchProtocol top_impl_Instance_source_process_component_source_thread_component)))
  (assert (= Periodic (select AADLDispatchProtocol top_impl_Instance_destination_process_component_destination_thread_component)))
(declare-const AADLDispatchProtocol_size Int)
(assert (= 2 AADLDispatchProtocol_size))

(define-fun altAADLDispatchProtocol ((_comp AADLComponent)) DispatchProtocol
  (ite (= _comp top_impl_Instance_source_process_component_source_thread_component) Periodic
  (ite (= _comp top_impl_Instance_destination_process_component_destination_thread_component) Periodic
  UNSPECIFIED_DISPATCH_PROTOCOL)))
(declare-const AADLDispatchProtocol_count Int)
(assert (= 2 AADLDispatchProtocol_count))

(declare-datatypes ((AADLPort 0)) ((
  (top_impl_Instance_source_process_component_source_thread_component_write_port)
  (top_impl_Instance_destination_process_component_destination_thread_component_read_port))))
(declare-const AADLPort_count Int)
(assert (= 2 AADLPort_count))

(declare-const AADLPortComponent (Array AADLPort AADLComponent))
  (assert (= top_impl_Instance_source_process_component_source_thread_component (select AADLPortComponent top_impl_Instance_source_process_component_source_thread_component_write_port)))
  (assert (= top_impl_Instance_destination_process_component_destination_thread_component (select AADLPortComponent top_impl_Instance_destination_process_component_destination_thread_component_read_port)))
(declare-const AADLPortComponent_size Int)
(assert (= 2 AADLPortComponent_size))

(declare-const AADLPortType (Array AADLPort PortType))
  (assert (= AadlDataPort (select AADLPortType top_impl_Instance_source_process_component_source_thread_component_write_port)))
  (assert (= AadlDataPort (select AADLPortType top_impl_Instance_destination_process_component_destination_thread_component_read_port)))
(declare-const AADLPortType_size Int)
(assert (= 2 AADLPortType_size))

(declare-const AADLPortDirection (Array AADLPort Direction))
  (assert (= Out (select AADLPortDirection top_impl_Instance_source_process_component_source_thread_component_write_port)))
  (assert (= In (select AADLPortDirection top_impl_Instance_destination_process_component_destination_thread_component_read_port)))
(declare-const AADLPortDirection_size Int)
(assert (= 2 AADLPortDirection_size))

(define-fun AADLConnectionFlowTos ((p1 AADLPort) (p2 AADLPort)) Bool
  (or
    (and (= p1 top_impl_Instance_source_process_component_source_thread_component_write_port) (= p2 top_impl_Instance_destination_process_component_destination_thread_component_read_port))
    false))
(declare-const AADLConnectionFlowsTos_count Int)
(assert (= 1 AADLConnectionFlowsTos_count))


(declare-datatypes ((AccessType 0)) ((
  (R)
  (W)
  (RW))))

(declare-datatypes ((seL4PortType 0)) ((
  (seL4GlobalAsynch)
  (seL4GlobalAsynchCallback)
  (seL4Notification)
  (seL4RPCCall)
  (seL4SharedData)
  (seL4SharedDataWithCaps)
  (seL4TimeServer)
  (seL4VMDTBPassthrough)
  (CASE_AADL_EventDataport))))

(declare-datatypes ((CAmkESComponent 0)) ((
  (source_process_component_source_thread_component)
  (destination_process_component_destination_thread_component))))
(declare-const CAmkESComponent_count Int)
(assert (= 2 CAmkESComponent_count))

(define-fun isPeriodicDispatcher ((_component CAmkESComponent)) Bool
  (and (= ModelSchedulingType PeriodicDispatching)
       (or 
           false)))

(define-fun isPacer ((_component CAmkESComponent)) Bool
  (and (= ModelSchedulingType Pacing)
       (or 
           false)))

(define-fun isTimeServer ((_component CAmkESComponent)) Bool
  (and ; TODO - list scenarios where a time server is expected
       (or 
           false)))

(define-fun isMonitor ((_component CAmkESComponent)) Bool
  (or 
      false))
(declare-const Monitor_count Int)
(assert (= 0 Monitor_count))

(declare-datatypes ((CAmkESPort 0)) ((
  (source_process_component_source_thread_component_sb_write_port)
  (source_process_component_source_thread_component_sb_self_pacer_tick)
  (source_process_component_source_thread_component_sb_self_pacer_tock)
  (destination_process_component_destination_thread_component_sb_read_port)
  (destination_process_component_destination_thread_component_sb_self_pacer_tick)
  (destination_process_component_destination_thread_component_sb_self_pacer_tock))))
(declare-const CAmkESPort_count Int)
(assert (= 6 CAmkESPort_count))

(declare-const CAmkESAccessRestrictions (Array CAmkESPort AccessType))
  (assert (= W (select CAmkESAccessRestrictions source_process_component_source_thread_component_sb_write_port)))
  (assert (= R (select CAmkESAccessRestrictions destination_process_component_destination_thread_component_sb_read_port)))
(declare-const CAmkESAccessRestrictions_size Int)
(assert (= 2 CAmkESAccessRestrictions_size))

(declare-datatypes ((CAmkESConnection 0)) ((
  (conn1)
  (conn2)
  (conn3))))
(declare-const CAmkESConnection_count Int)
(assert (= 3 CAmkESConnection_count))

(define-fun isSelfPacingConnection ((_conn CAmkESConnection)) Bool
  (and (= ModelSchedulingType SelfPacing)
       (or (= _conn conn2)
           (= _conn conn3)
           false)))

(define-fun isPacingConnection ((_conn CAmkESConnection)) Bool
  (and (= ModelSchedulingType Pacing)
       (or 
           false)))

(define-fun isPeriodicDispatchingConnection ((_conn CAmkESConnection)) Bool
  (and (= ModelSchedulingType PeriodicDispatching)
       (or 
           false)))
(declare-const PeriodicDispatchingConnection_count Int)
(assert (= 0 PeriodicDispatchingConnection_count))

(declare-const CAmkESConnectionType (Array CAmkESConnection seL4PortType))
  (assert (= seL4SharedData (select CAmkESConnectionType conn1)))
  (assert (= seL4Notification (select CAmkESConnectionType conn2)))
  (assert (= seL4Notification (select CAmkESConnectionType conn3)))
(declare-const CAmkESConnectionType_count Int)
(assert (= 3 CAmkESConnectionType_count))

(declare-const CAmkESPortComponent (Array CAmkESPort CAmkESComponent))
  (assert (= source_process_component_source_thread_component (select CAmkESPortComponent source_process_component_source_thread_component_sb_write_port)))
  (assert (= source_process_component_source_thread_component (select CAmkESPortComponent source_process_component_source_thread_component_sb_self_pacer_tick)))
  (assert (= source_process_component_source_thread_component (select CAmkESPortComponent source_process_component_source_thread_component_sb_self_pacer_tock)))
  (assert (= destination_process_component_destination_thread_component (select CAmkESPortComponent destination_process_component_destination_thread_component_sb_read_port)))
  (assert (= destination_process_component_destination_thread_component (select CAmkESPortComponent destination_process_component_destination_thread_component_sb_self_pacer_tick)))
  (assert (= destination_process_component_destination_thread_component (select CAmkESPortComponent destination_process_component_destination_thread_component_sb_self_pacer_tock)))
(declare-const CAmkESPortComponent_size Int)
(assert (= 6 CAmkESPortComponent_size))

(define-fun CAmkESConnectionFlowTos ((_conn CAmkESConnection) (_p1 CAmkESPort) (_p2 CAmkESPort)) Bool
  (or
    (and (= _conn conn1) (= _p1 source_process_component_source_thread_component_sb_write_port) (= _p2 destination_process_component_destination_thread_component_sb_read_port))
    (and (= _conn conn2) (= _p1 source_process_component_source_thread_component_sb_self_pacer_tick) (= _p2 source_process_component_source_thread_component_sb_self_pacer_tock))
    (and (= _conn conn3) (= _p1 destination_process_component_destination_thread_component_sb_self_pacer_tick) (= _p2 destination_process_component_destination_thread_component_sb_self_pacer_tock))
    false))
(declare-const CAmkESConnectionFlowTos_count Int)
(assert (= 3 CAmkESConnectionFlowTos_count))

(define-fun ComponentRefinement ((ac AADLComponent) (cc CAmkESComponent)) Bool
  (or
    (and (= ac top_impl_Instance_source_process_component_source_thread_component) (= cc source_process_component_source_thread_component))
    (and (= ac top_impl_Instance_destination_process_component_destination_thread_component) (= cc destination_process_component_destination_thread_component))
    false))
(declare-const ComponentRefinement_count Int)
(assert (= 2 ComponentRefinement_count))

(define-fun PortRefinement ((ap AADLPort) (cp CAmkESPort)) Bool
  (or
    (and (= ap top_impl_Instance_source_process_component_source_thread_component_write_port) (= cp source_process_component_source_thread_component_sb_write_port))
    (and (= ap top_impl_Instance_destination_process_component_destination_thread_component_read_port) (= cp destination_process_component_destination_thread_component_sb_read_port))
    false))
(declare-const PortRefinement_count Int)
(assert (= 2 PortRefinement_count))


(define-fun AADLFlowDirectionality () Bool
  (forall ((p1 AADLPort) (p2 AADLPort))
    (=> (AADLConnectionFlowTos p1 p2)
        (and (= Out (select AADLPortDirection p1)) (= In (select AADLPortDirection p2))))))

(define-fun AADLFlowNoSelfConnection () Bool
  (forall ((p1 AADLPort) (p2 AADLPort))
    (=> (AADLConnectionFlowTos p1 p2)
        (not (= p1 p2)))))

(define-fun AADLConnectedPortTypeMatch () Bool
  (forall ((src AADLPort) (dst AADLPort))
    (=> (AADLConnectionFlowTos src dst)
        (or (and (= AadlDataPort (select AADLPortType src)) (= AadlDataPort (select AADLPortType dst)))
            (and (= AadlEventPort (select AADLPortType src)) (= AadlEventPort (select AADLPortType dst)))
            (and (= AadlEventDataPort (select AADLPortType src)) (= AadlEventDataPort (select AADLPortType dst)))
             false))))
(declare-const AADLConnectedPortTypeMatch_count Int)
(assert (= 3 AADLConnectedPortTypeMatch_count))

(define-fun AADLDispatchProtocolSpecified () Bool
  (forall ((_comp AADLComponent))
    (not (= UNSPECIFIED_DISPATCH_PROTOCOL (select AADLDispatchProtocol _comp)))))

(define-fun altAADLDispatchProtocolSpecified () Bool
  (forall ((_comp AADLComponent))
    (not (= UNSPECIFIED_DISPATCH_PROTOCOL (altAADLDispatchProtocol _comp)))))

(define-fun AADLWellFormedness () Bool
  (and
    (= AADLPort_count AADLPortComponent_size) ; all AADL ports belong to an AADL component
    altAADLDispatchProtocolSpecified
    AADLDispatchProtocolSpecified
    AADLFlowDirectionality
    AADLFlowNoSelfConnection
    AADLConnectedPortTypeMatch))


(define-fun CAmkESFlowNoSelfConnection () Bool
  (forall ((_conn CAmkESConnection) (_p1 CAmkESPort) (_p2 CAmkESPort))
    (=> (CAmkESConnectionFlowTos _conn _p1 _p2)
        (not (= _p1 _p2)))))

(define-fun CAmkESDataPortAccess () Bool
  (forall ((_conn CAmkESConnection) (_src CAmkESPort) (_dst CAmkESPort))
    (=> (and (CAmkESConnectionFlowTos _conn _src _dst) (= seL4SharedData (select CAmkESConnectionType _conn)))
      (and (= W (select CAmkESAccessRestrictions _src))
           (= R (select CAmkESAccessRestrictions _dst))))))

(define-fun UniqueComponentRefinements () Bool
  (forall ((aadlComponent1 AADLComponent) (camkesComponent CAmkESComponent))
    (=> (ComponentRefinement aadlComponent1 camkesComponent)
        (not (exists ((aadlComponent2 AADLComponent))
               (and (not (= aadlComponent1 aadlComponent2))
                    (ComponentRefinement aadlComponent2 camkesComponent)))))))

(define-fun UniquePortRefinements () Bool
  (forall ((aadlPort1 AADLPort) (camkesPort CAmkESPort))
    (=> (PortRefinement aadlPort1 camkesPort)
        (not (exists ((aadlPort2 AADLPort))
               (and (not (= aadlPort1 aadlPort2))
                    (PortRefinement aadlPort2 camkesPort)))))))

(define-fun CAmkESWellFormedness () Bool
  (and
    (= CAmkESPort_count CAmkESPortComponent_size) ; all CAmkES ports belong to a CAmkES component
    CAmkESDataPortAccess
    CAmkESFlowNoSelfConnection))

(define-fun SB_DataPortRefinement ((aadlSource AADLPort) (aadlDest AADLPort)) Bool
  (exists ((conn CAmkESConnection) (camkesSource CAmkESPort) (camkesDest CAmkESPort))
      (and (CAmkESConnectionFlowTos conn camkesSource camkesDest)
           (= (select CAmkESConnectionType conn) seL4SharedData )
           (PortRefinement aadlSource camkesSource)
           (PortRefinement aadlDest  camkesDest)
           (ComponentRefinement (select AADLPortComponent aadlSource) (select CAmkESPortComponent camkesSource))
           (ComponentRefinement (select AADLPortComponent aadlDest) (select CAmkESPortComponent camkesDest)))))

(define-fun SB_EventPortRefinement ((aadlSource AADLPort) (aadlDest AADLPort)) Bool
  (exists ((conn CAmkESConnection) (camkesSource CAmkESPort) (camkesDest CAmkESPort))
    (and
      (CAmkESConnectionFlowTos conn camkesSource camkesDest)
      (= (select CAmkESConnectionType conn) seL4Notification )
      (PortRefinement aadlSource camkesSource)
      (PortRefinement aadlDest camkesDest)
      (ComponentRefinement (select AADLPortComponent aadlSource) (select CAmkESPortComponent camkesSource))
      (ComponentRefinement (select AADLPortComponent aadlDest) (select CAmkESPortComponent camkesDest)))))

(define-fun SB_Refinement ((aadlSource AADLPort) (aadlDest AADLPort)) Bool
  (and (or (= CodegenMode SeL4) (= CodegenMode SeL4_Only) false)
       (or
         (and
           (= AadlDataPort (select AADLPortType aadlSource))
           (SB_DataPortRefinement aadlSource aadlDest)) ; payload
         (and
           (= AadlEventPort (select AADLPortType aadlSource))
           (SB_DataPortRefinement aadlSource aadlDest)   ; event counter
           (SB_EventPortRefinement aadlSource aadlDest)) ; event
         (and
           (= AadlEventDataPort (select AADLPortType aadlSource))
           (SB_DataPortRefinement aadlSource aadlDest)   ; payload
           (SB_EventPortRefinement aadlSource aadlDest)) ; event
         false)))

(define-fun TB_Refinement ((aadlSource AADLPort) (aadlDest AADLPort)) Bool
  (and (= CodegenMode SeL4_TB)
       false))

(define-fun ConnectionPreservation () Bool
  (forall ((aadlSource AADLPort) (aadlDest AADLPort))
    (=> (AADLConnectionFlowTos aadlSource aadlDest)
      (or (SB_Refinement aadlSource aadlDest)
          (TB_Refinement aadlSource aadlDest)
          false))))


(define-fun isAADL_SB_ConnectionRefinement ((camkesSource CAmkESPort) (camkesDest CAmkESPort)) Bool
  (and (or (= CodegenMode SeL4) (= CodegenMode SeL4_Only) false)
       (exists ((aadlSource AADLPort) (aadlDest AADLPort))
         (and
           (PortRefinement aadlSource camkesSource)
           (PortRefinement aadlDest camkesDest)
           (ComponentRefinement (select AADLPortComponent aadlSource) (select CAmkESPortComponent camkesSource))
           (ComponentRefinement (select AADLPortComponent aadlDest) (select CAmkESPortComponent camkesDest))
           (AADLConnectionFlowTos aadlSource aadlDest)))))

(define-fun isAADL_TB_ConnectionRefinement ((camkesSource CAmkESPort) (camkesDest CAmkESPort)) Bool
  (and (= CodegenMode SeL4_TB)
       false)
)

(define-fun isCAmkESSchedulingConnection ((_conn CAmkESConnection)) Bool
  (or
    (isSelfPacingConnection _conn)
    (isPacingConnection _conn)
    (isPeriodicDispatchingConnection _conn)
    false))

(define-fun NoNewConnections () Bool
  (forall ((conn CAmkESConnection) (camkesSource CAmkESPort) (camkesDest CAmkESPort))
    (=> (CAmkESConnectionFlowTos conn camkesSource camkesDest)
      (or
        (isAADL_SB_ConnectionRefinement camkesSource camkesDest)
        (isAADL_TB_ConnectionRefinement camkesSource camkesDest)
        (isCAmkESSchedulingConnection conn)
        false))))


(echo "RefinementProof: Shows that there is a model satisfying all the constraints (should be sat):")
(push)
(assert (and
  AADLWellFormedness
  CAmkESWellFormedness
  ConnectionPreservation
  UniqueComponentRefinements
  UniquePortRefinements
  NoNewConnections
))
(check-sat)
;(get-model)
(pop)

(echo "AADLWellFormedness: Proves that the generated AADL evidence is well-formed (should be unsat):")
(push)
(assert (not AADLWellFormedness))
(check-sat)
(pop)

(echo "CAmkESWellFormedness: Proves that the generated CAmkES evidence is well-formed (should be unsat):")
(push)
(assert (not CAmkESWellFormedness))
(check-sat)
(pop)

(echo "ConnectionPreservation: Proves that the generated CAmkES connections preserve AADL's (should be unsat):")
(push)
(assert (not ConnectionPreservation))
(check-sat)
(pop)

(echo "NoNewConnections: Proves that the generated CAmkES connections does not contain more than AADL's (should be unsat):")
(push)
(assert (not NoNewConnections))
(check-sat)
(pop)


(exit)