(* No external dependencies *)

(* Default Coq *)

datatype nat = O
             | S nat

fun natToInt n =
    case n
     of O => 0
      | S n' => 1 + natToInt n'

fun natFromInt i = if i < 0
                   then O
                   else if i = 0
                        then O
                        else S (natFromInt (i - 1))

val natToString = Int.toString o natToInt

fun nat_plus n m =
    case n of O => m
            | S n' => S (nat_plus n' m)

fun nat_minus n m =
    case n of O => O
            | S n' => case m of O => n
                              | S m' => (nat_minus n' m')

fun nat_eq n m =
    case n of O => (case m of O => True | _ => False)
            | S n' => (case m of S m' => nat_eq n' m' | _ => False)

fun nat_leb n m =
    case n of O => True
            | S n' => (case m of S m' => nat_leb n' m' | O => False)

fun nat_compare n m = case (n, m)
    of (S n', S m') => nat_compare n' m'
     | (S n', O) => Greater
     | (O, S m') => Less
     | (O, O) => Equal

fun nat_length l =
    case l of
        [] => O
      | h::t => S (nat_length t)

val one = S O

(* List functions *)
fun list_at l (n : nat) =
    case l of [] => None
            | h :: t => (case n of O => Some h
                                 | S n' => list_at t n')

fun listToString l f = String.concat [ "[", listToStringInner l f, "]" ]
and listToStringInner l f =
    case l
     of [] => ""
      | x::[] => f x
      | x::xs => String.concat [(f x), ", ", (listToStringInner xs f)]

fun concatWith s l =
    case l
     of [] => ""
      | x::[] => x
      | x::xs => x ^ s ^ (concatWith s xs)

(* Map functions *)

type ('a, 'b) mymap = ('a * 'b) list

val map_empty = []

fun map_get m x = case m
                   of [] => None
                    | ((k,v)::ms) => if k = x then Some v else map_get ms x

fun map_set m k v = (k,v)::m

fun map_dom m = case m
                 of [] => []
                  | ((i,a)::ms) => i :: map_dom ms

(* It'd be nice if this could work *)
(* 'f = 'a -> 'a -> order *)
(* type ('a, 'b, 'f) map = ('a * 'b) list * 'f *)

(* fun map_empty cmp_f = ([], cmp_f) *)

(* fun map_get m x = *)
(*     (* case m of *) *)
(*         (* (m' f) => Map.lookup f *) *)
(*     let val (m', f) = m *)
(*     in case m' *)
(*         of [] => None *)
(*          | _  => let val m'' = Map.fromList f m' in Map.lookup f x m'' end *)
(*     end *)

(* fun map_set m i v = let val (m', f) = m *)
(*                     in let val m'' = Map.fromList f m' *)
(*                        in let val m''' = Map.toAscList (Map.insert f i v m'') *)
(*                           in (m''', f) *)
(*                           end *)
(*                        end *)
(*                     end *)

(* fun map_dom m = let val (m', f) = m *)
(*                 in case m' *)
(*                     of [] => [] *)
(*                      | ((i,a)::ms) => i :: map_dom (ms, f) *)
(*                 end *)

(* Pair functions *)
fun pair_compare p f1 f2 = let val (p1, p2) = p in
                               let val fst_cmp = f1 p1 in
                                   if fst_cmp = Equal
                                   then f2 p2
                                   else fst_cmp
                               end
                           end
