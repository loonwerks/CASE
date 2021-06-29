(* Depends on util, copland, HamrStandard, GoldenHashes, Fake/RealCrypto *)

val pub = BString.unshow "490E2422528F14AC6A48DDB9D72CB30B8345AF2E939003BC7A33A6057F2FFB0101000000000000002DD0B7F53A560000A049D882A37F00000000000000000000"

(* Hamr app-specific FFI functions *)
local 
    fun sendRequest_ffi    arg out = #(api_send_AttestationRequest) arg out
    fun getResponse_ffi    arg out = #(api_get_AttestationResponse) arg out
    fun sendTrustedIds_ffi arg out = #(api_send_TrustedIds)         arg out
in
    (* bstring -> () *)
    fun sendRequest req = FFI.callNoOut sendRequest_ffi req

    (* () -> bstring *)
    fun getResponse () = Control.getDataEvent getResponse_ffi 2048 BString.empty

    (* bstring -> () *)
    fun sendTrustedIds trustedIds = 
        let val length = BString.length trustedIds
         in if length = 16 then
                FFI.callNoOut sendTrustedIds_ffi trustedIds
            else
                log Error ("sendTrustedIds called with a " ^
                           Int.toString length ^
                           "-byte argument, but expected 16 bytes.")
        end
end

val emptyId = BString.nulls 4
local
    val trusted_ids = Array.array 4 emptyId
    val flatten_ids = Array.foldl BString.concat BString.empty
in
    (* bstring -> () *)
    (* idempotent *)
    fun addToWhitelist id = (
        log Info ("Adding 0x" ^ BString.show id ^ " to the whitelist");
        if Array.exists ((op =) id) trusted_ids then
            log Info ("0x" ^ BString.show id ^ " already in the whitelist")
        else case Array.findi (const ((op =) emptyId)) trusted_ids of
                Some (i, _) => Array.update trusted_ids i id
            | None => (
                log Error "No room in the whitelist, overwriting first entry";
                Array.update trusted_ids 0 id
            );
        sendTrustedIds (flatten_ids trusted_ids)
    )

    (* bstring -> () *)
    (* idempotent *)
    fun removeFromWhitelist id = (
        log Info ("Removing 0x" ^ BString.show id ^ " from the whitelist");
        case Array.findi (const ((op =) id)) trusted_ids of
              Some (i, _) => Array.update trusted_ids i emptyId
            | None => log Info "Connection not in the whitelist";
        sendTrustedIds (flatten_ids trusted_ids)
    )
end

(* bstring -> ev option *)
fun parseResp resp = 
    let val split = BString.splitAt 4 resp
        val id    = fst split
        val evStr = BString.toString (snd split)
        val strToEv  = jsonToEv o JsonExtra.parse
     in log Info ("Received id: " ^ BString.show id);
        log Info ("Received response: " ^ evStr);
        Some (id, strToEv evStr)
    end handle _ => None

(* bstring -> ev -> bool *)
(* true if appraisal succeeds *)
fun appraise nonce ev = case ev of
      G evSign (SS (H evHash) (N _ evNonce Mt)) => 
          if evNonce <> nonce then
              (log Info "Appraisal failed, bad nonce"; False)
          else if not (List.member evHash goldenHashes) then
              (log Info "Appraisal failed, bad hash"; False)
          else if not (Option.valOf (verifySig ev pub)) then
              (log Info "Appraisal failed, bad signature"; False)
          else
              (log Info "Appraisal succeeded"; True)
    | _ => (log Info "Unexpected evidence structure"; False)


(* () -> bstring *)
fun sendAttRequest () =
    let val nonce = genNonce ()
     in sendRequest nonce;
        log Info ("Sending request: 0x" ^ BString.show nonce);
        nonce
    end

datatype am_state =
      SendingRequest
    | GettingResponse BString.bstring (* nonce *)

local
    val att_len = 9 (* ~5 second attestation period *)
    val pacer_count = Ref 0
    fun incr count = count := (!count + 1) mod reattestation_period

    val curr_state = Ref SendingRequest
    val curr_id = Ref emptyId

    fun reset () = (
        if !curr_id <> emptyId then 
            removeFromWhitelist (!curr_id)
        else ();
        curr_id := emptyId;
        curr_state := SendingRequest;
        pacer_count := 0
    )
in 
    (* () -> () *)
    fun attestation_step () = case !curr_state of
          SendingRequest => (
            if !pacer_count = 0 then 
                curr_state := GettingResponse (sendAttRequest ())
            else ();
            incr pacer_count
          )
        | GettingResponse nonce => case getResponse () of
              Some resp => (
                log Info ("Received response: " ^ BString.toString resp);
                case parseResp resp of
                    Some (id, ev) =>
                        if appraise nonce ev then (
                            addToWhitelist id;
                            curr_state := SendingRequest;
                            incr pacer_count
                        ) else reset ()
                    | None => (
                        log Info "Response failed to parse";
                        reset ()
                    )
            )
            | None => 
                if !pacer_count = 0 then
                    reset ()
                else 
                    incr pacer_count
end

(* Hamr entry point *)
val _ = Control.entry attestation_step