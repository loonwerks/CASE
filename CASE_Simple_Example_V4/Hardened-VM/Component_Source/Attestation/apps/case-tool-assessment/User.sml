(* Depends on  util, copland, HamrStandard, GoldenHashes, Fake/RealCrypto *)

val priv = BString.unshow "2E5773B2A19A2CB05FEE44650D8DC877B3D806F74C199043657C805288CD119B"
val id = BString.fromIntLength 4 BString.LittleEndian id_num

(* Hamr app-specific FFI functions *)
local
    fun getRequest_ffi   arg out = #(api_get_AttestationRequest)   arg out
    fun sendResponse_ffi arg out = #(api_send_AttestationResponse) arg out
in 
    (* () -> bstring option *)
    fun getRequest () = Control.getDataEvent getRequest_ffi 16 BString.empty

    (* bstring -> () *)
    fun sendResponse resp = FFI.callNoOut sendResponse_ffi resp
end

(* bstring -> () *)
val sendResponsePad = sendResponse o BString.toLength BString.LittleEndian 2048

(* bstring -> ev *)
fun attestWith nonce = 
    let val nonceEv = N (Id O) nonce Mt
        val fakeH = List.hd goldenHashes
        val initEv = SS (H fakeH) nonceEv
        in evalTerm (user_am priv) initEv (Asp Sig)
    end

(* () -> () *)
fun attestation_step () = (case getRequest () of 
      Some nonce => 
          let val _ = log Info ("Recieved request: 0x" ^ BString.show nonce)
              val ev = attestWith nonce
              val resp = BString.concat id
                        (BString.fromString (JsonExtra.toString (evToJson ev)))
           in sendResponsePad resp
          end
    | None => log Info "Waiting for request"
) handle _ => log Error "Unknown exception in attestation_step()"

(* Hamr entry point *)
val _ = Control.entry attestation_step