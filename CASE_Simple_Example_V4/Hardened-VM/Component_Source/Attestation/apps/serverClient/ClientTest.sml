(* Depends on: util, copland, am/Measurements, am/ServerAm *)

(*val term  = Att (S O) (Lseq (Asp (Aspc (Id O) ["hashTest.txt"])) (Asp Sig))*)

val dir = "testDir" 

val subterm = (Asp (Aspc (Id (S O)) [dir]))
val term = Att (S O) (Lseq subterm (Asp Sig))

val goldenHash = BString.unshow "7BE9FDA48F4179E611C698A73CFF09FAF72869431EFEE6EAAD14DE0CB44BBF66503F752B7A8EB17083355F3CE6EB7D2806F236B25AF96A24E22B887405C20081"
val pub = BString.unshow "490E2422528F14AC6A48DDB9D72CB30B8345AF2E939003BC7A33A6057F2FFB0101000000000000002DD0B7F53A560000A049D882A37F00000000000000000000"

fun appraise nonce ev = case ev of
      G evSign (U (Id (S O)) [dir] evHash (N (Id O) evNonce Mt)) =>
          if evNonce <> nonce then
              Err "Bad nonce value"
          else if evHash <> goldenHash then
              Err "Bad hash value"
          else if not (Option.valOf (verifySig ev pub)) then
              Err "Bad signature"
          else Ok ()
    | _ => Err "Unexpected shape of evidence"

fun sendReq addr =
    let val am    = serverAm BString.empty (Map.insert emptyNsMap (S O) addr)
        val nonce = Random.random (Random.seed (Meas.urand 32)) 16
        val ev    = evalTerm am (N (Id O) nonce Mt) term
     in print ("Evaluating term:\n" ^ termToString term ^ "\n\nNonce:\n" ^
               BString.show nonce ^ "\n\nEvidence recieved:\n" ^
               evToString ev ^ "\n\nAppraisal " ^ (
               case appraise nonce ev of
                      Ok ()   => "succeeded (expected nonce and hash value; signature verified).\n"
                    | Err msg => "failed: " ^ msg ^ "\n")
              )
    end
    handle Socket.Err s     => TextIO.print_err ("Socket failure on connection: " ^ s ^ "\n")
         | Socket.InvalidFD => TextIO.print_err "Invalid file descriptor\n"
         | DispatchErr s    => TextIO.print_err ("Dispatch error: "^s^"\n")
         | _                => TextIO.print_err "Fatal: unknown error\n"

fun main () =
    let val name  = CommandLine.name ()
        val usage = "Usage: " ^ name ^ " address\n"
                  ^ "e.g.   " ^ name ^ " 127.0.0.1\n"
     in case CommandLine.arguments () of
              [addr] => sendReq addr
            | _ => TextIO.print_err usage
     end

val _ = main ()
