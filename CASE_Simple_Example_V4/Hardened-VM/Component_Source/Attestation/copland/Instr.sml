(* Depends on: util *)

datatype id = Id nat
fun id_compare (Id i) (Id j) = nat_compare i j
fun idToString (Id i) = "Id " ^ natToString i

type pl = nat
val plToString = natToString

type asp_id = id
val aspIdToString = idToString

type arg = string
fun argToString a = a

datatype sp = ALL | NONE
fun spToString s = case s of
      ALL  => "ALL"
    | NONE => "NONE"

(* ASTs *)

datatype asp =
      Cpy
    | Aspc asp_id (arg list)
    | Sig
    | Hsh

datatype term =
      Asp asp
    | Att pl term
    | Lseq term term
    | Bseq (sp * sp) term term
    | Bpar (sp * sp) term term

datatype primInstr =
      Copy
    | Umeas asp_id (arg list)
    | Sign
    | Hash

datatype instr =
      PrimInstr primInstr
    | Split sp sp
    | Joins
    | Joinp
    | Reqrpy pl term
    | Besr
    | Bep (instr list) (instr list)

fun aspToString asp = case asp of
      Cpy => "Cpy"
    | Sig => "Sig"
    | Hsh => "Hsh"
    | Aspc aid al => concatWith " " ["(Aspc", aspIdToString aid, listToString al argToString, ")"]

fun termToString t = concatWith " "
    let fun parens t = "(" ^ termToString t ^ ")"
        fun pairToString s1 s2 = "(" ^ s1 ^ ", " ^ s2 ^ ")"
     in case t of
          Asp a => ["Asp", aspToString a]
        | Att p t => ["Att", plToString p, parens t]
        | Lseq t1 t2 => ["Lseq", parens t1, parens t2]
        | Bseq (s1, s2) t1 t2 => ["Bseq", pairToString (spToString s1) (spToString s2), parens t1, parens t2]
        | Bpar (s1, s2) t1 t2 => ["Bpar", pairToString (spToString s1) (spToString s2), parens t1, parens t2]
    end

(* Evidence *)

type n_id = id
val nIdToString = idToString

local type bs = BString.bstring in
datatype ev =
      Mt
    | U asp_id (arg list) bs ev
    | G bs ev
    | H bs
    | N n_id bs ev
    | SS ev ev
    | PP ev ev
end

fun evToString e = concatWith " "
    let fun parens e = "(" ^ evToString e ^ ")"
     in case e of
          Mt           => ["Mt"]
        | U i al bs ev => ["U", aspIdToString i, listToString al argToString, BString.show bs, parens ev]
        | G bs ev      => ["G", BString.show bs, parens ev]
        | H bs         => ["H", BString.show bs]
        | N i bs ev    => ["N", nIdToString i, BString.show bs, parens ev]
        | SS ev1 ev2   => ["SS", parens ev1, parens ev2]
        | PP ev1 ev2   => ["PP", parens ev1, parens ev2]
    end

(* ev -> bstring *)
val encodeEv =
    let fun evList ev = case ev of
          Mt         => [BString.empty]
        | U _ _ bs e => bs :: evList e
        | G bs e     => bs :: evList e
        | H bs       => [bs]
        | N _ bs e   => bs :: evList e
        | SS e1 e2   => evList e1 @ evList e2
        | PP e1 e2   => evList e1 @ evList e2
     in BString.concatList o evList
    end
