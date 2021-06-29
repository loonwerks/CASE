(* Depends on: util, copland/Instr *)

fun intToJson n = Json.Number (Json.Int n)

fun stringToJson s = Json.String s

fun stringListToJsonList args  =  Json.List (List.map stringToJson args)

fun byteStringToJson bs = Json.String (BString.show bs)

fun idToJson (Id a) = Json.Number (Json.Int (natToInt a))

fun placeToJson pl = Json.Number (Json.Int (natToInt pl))

fun spPairToJson (sp1, sp2) = Json.List [ Json.String  (spToString sp1), Json.String (spToString sp2)]

fun nsMapToJson map =
    let fun jsonify (pl, addr) = (plToString pl, Json.String addr)
     in Json.AList (List.map jsonify (Map.toAscList map))
    end

fun noArgConstructor cName = Json.AList [("constructor", stringToJson cName )]

fun constructorWithArgs cName arglist = Json.AList [("constructor", stringToJson cName),
                                                    ("data", Json.List arglist)]

fun aspToJson asp = case asp of
      Cpy => noArgConstructor "Cpy"
    | Aspc aspid args => constructorWithArgs "Aspc" [idToJson aspid, stringListToJsonList args]
    | Sig => noArgConstructor "Sig"
    | Hsh => noArgConstructor "Hsh"

fun termToJson term = case term of
      Asp asp      => constructorWithArgs "Asp"  [aspToJson asp]
    | Att pl t     => constructorWithArgs "Att"  [placeToJson pl, termToJson t]
    | Lseq t1 t2   => constructorWithArgs "Lseq" [termToJson t1, termToJson t2]
    | Bseq p t1 t2 => constructorWithArgs "Bseq" [spPairToJson p, termToJson t1, termToJson t2]
    | Bpar p t1 t2 => constructorWithArgs "Bpar" [spPairToJson p, termToJson t1, termToJson t2]
    |  _ =>  raise  Json.ERR "termToJson" "Unexpected constructor for APDT term: "

fun evToJson e = case e of
      Mt => noArgConstructor "Mt"
    | U aid args bs ev => constructorWithArgs "U" [idToJson aid, stringListToJsonList args, byteStringToJson bs, evToJson ev]
    | G bs ev => constructorWithArgs "G" [byteStringToJson bs, evToJson ev]
    | H bs => constructorWithArgs "H" [byteStringToJson bs]
    | N id bs ev => constructorWithArgs "N" [idToJson id, byteStringToJson bs, evToJson ev]
    | SS ev1 ev2 => constructorWithArgs "SS" [evToJson ev1, evToJson ev2]
    | PP ev1 ev2 => constructorWithArgs "PP" [evToJson ev1, evToJson ev2]
