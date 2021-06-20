module Hacl.Chacha20.Vec128

open Hacl.Meta.Chacha20.Vec

[@CInline]
private
let double_round_128 = core32xn_double_round_higher #4 True
[@CInline]
private
let chacha20_core_128 = vec_chacha20_core_higher #4 True double_round_128
[@CInline]
private
let chacha20_init_128 = Hacl.Impl.Chacha20.Vec.chacha20_init #4

let chacha20_encrypt_128 = vec_chacha20_encrypt_higher #4 True chacha20_init_128 chacha20_core_128
let chacha20_decrypt_128 = vec_chacha20_decrypt_higher #4 True chacha20_init_128 chacha20_core_128
