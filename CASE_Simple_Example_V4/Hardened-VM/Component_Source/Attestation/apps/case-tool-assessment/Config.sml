(* UserAM config: *)
(* This is the ID number reported by the UserAM *)
val id_num = 1

(* HeliAM config *)
(* This determines how frequently the HeliAM requests a reattestation.
   The frequency of attestation is approximately (reattestation_period + 1) * pacer frequency *)
val reattestation_period = 9