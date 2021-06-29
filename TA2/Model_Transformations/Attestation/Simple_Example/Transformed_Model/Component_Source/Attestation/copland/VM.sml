(* Depends on: util, Instr.sml, AM.sml *)

(* sp -> ev -> ev *)
fun splitEv s e = case s of
      ALL  => e
    | NONE => Mt

(* asp -> primInstr *)
fun aspInstr a = case a of
      Cpy         => Copy
    | Aspc i args => Umeas i args
    | Sig         => Sign
    | Hsh         => Hash

(* term -> instr list *)
fun instrCompiler t = case t of
      Asp a      => [PrimInstr (aspInstr a)]
    | Att q t'   => [Reqrpy q t']
    | Lseq t1 t2 => instrCompiler t1 @ instrCompiler t2
    | Bseq (sp1, sp2) t1 t2 =>
        Split sp1 sp2 :: instrCompiler t1 @ Besr :: instrCompiler t2 @ [Joins]
    | Bpar (sp1, sp2) t1 t2 =>
        [Split sp1 sp2, Bep (instrCompiler t1) (instrCompiler t2), Joinp]

(* primInstr -> ev -> ev *)
fun primEv am i e = case i of
      Umeas id args => U id args (measureUsm (usmMap am) id args) e
    | Copy => e
    | Sign => G (signEv am (privKey am) e) e
    | Hash => H (genHash am e)

(* This function diverges significantly from the Coq implementation.
   It may prove necessary to rewrite it in the original's monadic style. *)
(* am -> ev -> instr list -> ev*)
fun evalVm am e =
    let val parallel_att_vm_thread = evalVm am
        (* ev * ev list -> instr -> ev * ev list*)
        fun vmStep (e, stack) i = case i of
              PrimInstr p => (primEv am p e, stack)
            | Split s1 s2 => (splitEv s1 e, (splitEv s2 e)::stack)
            | Joins => (SS (List.hd stack) e, List.tl stack)
            | Joinp => (PP (List.hd stack) e, List.tl stack)
            | Reqrpy pl' t => (dispatch am pl' e t, stack)
            | Besr => (List.hd stack, e::(List.tl stack))
            | Bep il1 il2 => (parallel_att_vm_thread e il1,
                (parallel_att_vm_thread (List.hd stack) il2)::(List.tl stack))

     in fst o List.foldl vmStep (e, []) end

(* am -> CopEval *)
fun evalTerm am e = evalVm am e o instrCompiler
