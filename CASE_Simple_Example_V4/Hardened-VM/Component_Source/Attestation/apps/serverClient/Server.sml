(* Depends on: util, copland, system/sockets, am/Measurementsm am/CommTypes,
   am/ServerAm *)

val priv = BString.unshow "2E5773B2A19A2CB05FEE44650D8DC877B3D806F74C199043657C805288CD119B"

(* TODO: Do something with pl1 rather than assuming it is here.
   Also do something with the nameserver mapping *)
(* When things go well, this returns a JSON evidence string. When they go wrong,
   it returns a raw error message string. In the future, we may want to wrap
   said error messages in JSON as well to make it easier on the client. *)
fun evalJson s =
    let val (REQ pl1 pl2 map t ev) = jsonToRequest (JsonExtra.parse s)
        val am = setMe (serverAm priv emptyNsMap) pl2
        val ev' = evalTerm am ev t
        val response = RES pl2 pl1 ev'
     in JsonExtra.toString (responseToJson response)
    end
    handle Json.ERR s1 s2 => (TextIO.print_err ("JSON error"^s1^": "^s2^"\n");
                              "Invalid JSON/Copland term")
         | USMexpn s => (TextIO.print_err ("USM error: "^s^"\n"); "USM failure")

fun respondToMsg client = Socket.output client (evalJson (Socket.inputAll client))

fun handleIncoming listener =
    let val client = Socket.accept listener
     in respondToMsg client;
        Socket.close client
    end
    handle Socket.Err s     => TextIO.print_err ("Socket failure: " ^ s ^ "\n")
         | Socket.InvalidFD => TextIO.print_err "Invalid file descriptor\n"

fun startServer port qLen =
    let fun loop f x = (f x; loop f x)
     in loop handleIncoming (Socket.listen port qLen)
    end
    handle Socket.Err s => TextIO.print_err ("Socket failure on listener instantiation: " ^ s ^ "\n")
         | Crypto.Err s => TextIO.print_err ("Crypto error: " ^ s ^ "\n")
         | _          => TextIO.print_err "Fatal: unknown error\n"

fun main () =
    let val name  = CommandLine.name ()
        val usage = "Usage: " ^ name ^ " portNumber queueLength\n"
                  ^ "e.g.   " ^ name ^ " 5000 5\n"
     in case CommandLine.arguments () of
             [portStr, qLenStr] => (
                case (Int.fromString portStr, Int.fromString qLenStr) of
                     (Some port, Some qLen) => startServer port qLen
                    | _ => TextIO.print_err usage)
           | _ => TextIO.print_err usage
    end
val _ = main ()
