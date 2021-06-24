(* Depends on: util, copland/Instr,
   copland/Json/CoplandToJson *)

type addr = string

(* Nameserver mapping *)
(* We could map to an address/port pair, but for now we assume the port number
   is 5000 *)
type nsMap = ((pl, addr) map)
val emptyNsMap : nsMap = Map.empty nat_compare

(* To place,
   From place,
   Nameserver mapping,
   Term to execute,
   Initial evidence *)
datatype requestMessage = REQ pl pl nsMap term ev

(* To place,
   From place,
   Gathered evidence *)
datatype responseMessage = RES pl pl ev


fun requestToJson (REQ pl1 pl2 map t ev) = Json.AList
    [("toPlace", placeToJson pl1), ("fromPlace", placeToJson pl2), ("reqNameMap", nsMapToJson map),
     ("reqTerm", termToJson t), ("reqEv", evToJson ev)]

fun responseToJson (RES pl1 pl2 ev) = Json.AList
    [("respToPlace", placeToJson pl1), ("respFromPlace", placeToJson pl2), ("respEv", evToJson ev)]

fun jsonToRequest js = case js of
          Json.AList js' => fromAList js'
        | _ => raise Json.ERR "JsonToRequest" "Request message does not begin as an AList"

    and
    fromAList pairs =
        let fun get str = case Alist.lookup pairs str of
                  Some x => x
                | None   => raise Json.ERR "fromAList" "missing request field"
         in getREQ (List.map get ["toPlace", "fromPlace", "reqNameMap", "reqTerm", "reqEv"])
        end

    and
    getREQ data = case data of
          [Json.Number (Json.Int pl1), Json.Number (Json.Int pl2), Json.AList alist, t, ev] =>
              REQ (natFromInt pl1) (natFromInt pl2) (toPlAddrMap alist) (jsonToTerm t) (jsonToEv ev)
        | _ => raise Json.ERR "getREQ" "unexpected argument list"

    and
    toPlAddrMap alist =
        let fun unjasonify (s, Json.String s') =
                case Int.fromString s
                  of Some i => (natFromInt i, s')
                   | _ => raise Json.ERR "toPlAddrMap" "unexpected non-integer"
         in Map.fromList nat_compare (List.map unjasonify alist)
        end

fun jsonToResponse js = case js of
          Json.AList js' => fromAList js'
        | _ => raise Json.ERR "JsonToResponse" "Response message does not begin as an AList"

    and
    fromAList pairs =
        let fun get str = case Alist.lookup pairs str of
                  Some x => x
                | None   => raise Json.ERR "fromAList" "missing request field"
         in getRES (List.map get ["respToPlace", "respFromPlace", "respEv"])
        end

    and
    getRES data = case data of
          [Json.Number (Json.Int pl1), Json.Number (Json.Int pl2), ev] =>
              RES (natFromInt pl1) (natFromInt pl2) (jsonToEv ev)
        | _ => raise Json.ERR "getRES" "unexpected argument list"
