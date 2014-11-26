.data
_all_face: .byte '1' ':' '@' 'B' 'I' 'L' 'P' 'R' 'S' 'U' 'C' 'D' 'H' '2' '3' '4' '5' '6' '7' '8' '9' 'T' 'J' 'Q' 'K' 'A' 0
_all_suit: .byte 'B' 'E' 'G' 'I' 'R' 'T' '2' '3' '4' '5' '6' '7' '8' '9' 'J' 'Q' 'K' 'A' 'C' 'D' 'H' 'S' 0
_leg_face: .byte '2' '3' '4' '5' '6' '7' '8' '9' 'T' 'J' 'Q' 'K' 'A' 0
_leg_suit: .byte 'C' 'D' 'H' 'S' 0
_c1f: .word 0
_c1s: .word 0
_c2f: .word 0
_c2s: .word 0
_face_base: .word 0
_suit_base: .word 0
_ans: .word 0
_ra: .word 0
_sp: .word 0
_err_0: .byte 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
_err_1: .byte 0 0 0
_err_2: .byte 0 0 0

.text
_error:
  lw    $t0, _c1f
  lw    $t1, _c1s
  lw    $t2, _c2f
  lw    $t3, _c2s
  bne   $a1, $0, _error_a1_nz
  la    $t4, _all_face
  la    $t5, _all_suit
  sub   $v0, $t0, $t4
  div   $v0, $v0, 13
  sll   $v0, $v0, 3
  sub   $v1, $t1, $t5
  div   $v1, $v1, 18
  sll   $v1, $v1, 2
  or    $v0, $v0, $v1
  sub   $v1, $t2, $t4
  div   $v1, $v1, 13
  sll   $v1, $v1, 1
  or    $v0, $v0, $v1
  sub   $v1, $t3, $t5
  div   $v1, $v1, 18
  or    $v0, $v0, $v1
  la    $v1, _err_0
  add   $v0, $v0, $v1
  lb    $v1, 0($v0)
  beq   $v1, $0, _error_new
  jr    $ra
_error_new:
  li    $v1, 1
  sb    $v1, 0($v0)
  j     _error_print
_error_a1_nz:
  bne   $a1, 1, _error_a1_2
  sub   $v1, $t0, $t2
  bne   $v1, $0, _error_face_neq
  li    $v0, 1
  j     _error_face_skip
_error_face_neq:
  blt   $v1, $0, _error_face_neg
  li    $v0, 2
  j     _error_face_skip
_error_face_neg:
  li    $v0, 0
_error_face_skip:
  la    $v1, _err_1
  add   $v0, $v0, $v1
  lb    $v1, 0($v0)
  beq   $v1, $0, _error_new
  jr    $ra
_error_a1_2:
  sub   $v1, $t1, $t3
  bne   $v1, $0, _error_suit_neq
  li    $v0, 1
  j     _error_suit_skip
_error_suit_neq:
  blt   $v1, $0, _error_suit_neg
  li    $v0, 2
  j     _error_suit_skip
_error_suit_neg:
  li    $v0, 0
_error_suit_skip:
  la    $v1, _err_2
  add   $v0, $v0, $v1
  lb    $v1, 0($v0)
  beq   $v1, $0, _error_new
  jr    $ra
_error_print:
  lb    $a0, 0($t0)
  li    $v0, 11
  syscall
  lb    $a0, 0($t1)
  li    $v0, 11
  syscall
  li    $a0, 32
  li    $v0, 11
  syscall
  lb    $a0, 0($t2)
  li    $v0, 11
  syscall
  lb    $a0, 0($t3)
  li    $v0, 11
  syscall
  li    $a0, 32
  li    $v0, 11
  syscall
  move  $a0, $a1
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall
  li    $s0, 9281
  li    $s1, 9281
  li    $s2, 9281
  li    $s3, 9281
  li    $s4, 9281
  li    $s5, 9281
  li    $s5, 9281
  li    $s7, 9281
  jr    $ra

__incr:
  lw    $v0, _c2s
  addi  $v0, $v0, 1
  sw    $v0, _c2s
  lb    $v0, 0($v0)
  bne   $v0, $0, __incr_done
  lw    $v0, _suit_base
  sw    $v0, _c2s
  lw    $v0, _c2f
  addi  $v0, $v0, 1
  sw    $v0, _c2f
  lb    $v0, 0($v0)
  bne   $v0, $0, __incr_done
  lw    $v0, _face_base
  sw    $v0, _c2f

  lw    $v0, _c1s
  addi  $v0, $v0, 1
  sw    $v0, _c1s
  lb    $v0, 0($v0)
  bne   $v0, $0, __incr_done
  lw    $v0, _suit_base
  sw    $v0, _c1s
  lw    $v0, _c1f
  addi  $v0, $v0, 1
  sw    $v0, _c1f
  lb    $v0, 0($v0)
__incr_done:
  jr    $ra

__ms:
  srl   $t0, $a0, 24
  la    $t1, _leg_face
__ms_l1:
  lb    $t2, 0($t1)
  beq   $t0, $t2, __ms_s1
  addi  $t1, $t1, 1
  bne   $t2, $0, __ms_l1
  li    $v0, 0
  jr    $ra
__ms_s1:
  srl   $t0, $a0, 16
  andi  $t0, $t0, 0xFF
  la    $t1, _leg_suit
__ms_l2:
  lb    $t2, 0($t1)
  beq   $t0, $t2, __ms_s2
  addi  $t1, $t1, 1
  bne   $t2, $0, __ms_l2
  li    $v0, 0
  jr    $ra
__ms_s2:
  srl   $t0, $a0, 8
  andi  $t0, $t0, 0xFF
  la    $t1, _leg_face
__ms_l3:
  lb    $t2, 0($t1)
  beq   $t0, $t2, __ms_s3
  addi  $t1, $t1, 1
  bne   $t2, $0, __ms_l3
  li    $v0, 1
  jr    $ra
__ms_s3:
  andi  $t0, $a0, 0xFF
  la    $t1, _leg_suit
__ms_l4:
  lb    $t2, 0($t1)
  beq   $t0, $t2, __ms_s4
  addi  $t1, $t1, 1
  bne   $t2, $0, __ms_l4
  li    $v0, 1
  jr    $ra
__ms_s4:
  li    $v0, 2
  jr    $ra

main:
  sw    $ra, _ra
  sw    $sp, _sp
  li    $s0, 9281
  li    $s1, 9281
  li    $s2, 9281
  li    $s3, 9281
  li    $s4, 9281
  li    $s5, 9281
  li    $s6, 9281
  li    $s7, 9281

  # a1 = 0 tests
  la    $t0, _all_face
  sw    $t0, _c1f
  sw    $t0, _c2f
  sw    $t0, _face_base
  la    $t0, _all_suit
  sw    $t0, _c1s
  sw    $t0, _c2s
  sw    $t0, _suit_base
_a0_0_loop:
  lw    $a0, _c1f
  lb    $a0, 0($a0)
  sll   $a0, $a0, 24
  lw    $t0, _c1s
  lb    $t0, 0($t0)
  sll   $t0, $t0, 16
  or    $a0, $a0, $t0
  lw    $t0, _c2f
  lb    $t0, 0($t0)
  sll   $t0, $t0, 8
  or    $a0, $a0, $t0
  lw    $t0, _c2s
  lb    $t0, 0($t0)
  or    $a0, $a0, $t0
  jal   __ms
  sw    $v0, _ans
  li    $a1, 0
  jal   student_code
  lw    $a0, _ans
  li    $a1, 0
  jal   _test_error
  jal   __incr
  bne   $v0, $0, _a0_0_loop

  # a1 = 1 tests
  la    $t0, _leg_face
  sw    $t0, _c1f
  sw    $t0, _c2f
  sw    $t0, _face_base
  la    $t0, _leg_suit
  sw    $t0, _c1s
  sw    $t0, _c2s
  sw    $t0, _suit_base
_a0_1_loop:
  lw    $a0, _c1f
  lb    $a0, 0($a0)
  sll   $a0, $a0, 24
  lw    $t0, _c1s
  lb    $t0, 0($t0)
  sll   $t0, $t0, 16
  or    $a0, $a0, $t0
  lw    $t0, _c2f
  lb    $t0, 0($t0)
  sll   $t0, $t0, 8
  or    $a0, $a0, $t0
  lw    $t0, _c2s
  lb    $t0, 0($t0)
  or    $a0, $a0, $t0
  lw    $t0, _c1f
  lw    $t1, _c2f
  bne   $t0, $t1, _a0_1_s1
  li    $v0, 0
  j     _a0_1_call
_a0_1_s1:
  bgt   $t0, $t1, _a0_1_s2
  li    $v0, -1
  j     _a0_1_call
_a0_1_s2:
  li    $v0, 1
_a0_1_call:
  sw    $v0, _ans
  li    $a1, 1
  jal   student_code
  lw    $a0, _ans
  li    $a1, 1
  jal   _test_error
  jal   __incr
  bne   $v0, $0, _a0_1_loop

  # a1 = 2 tests
  la    $t0, _leg_face
  sw    $t0, _c1f
  sw    $t0, _c2f
  sw    $t0, _face_base
  la    $t0, _leg_suit
  sw    $t0, _c1s
  sw    $t0, _c2s
  sw    $t0, _suit_base
_a0_2_loop:
  lw    $a0, _c1f
  lb    $a0, 0($a0)
  sll   $a0, $a0, 24
  lw    $t0, _c1s
  lb    $t0, 0($t0)
  sll   $t0, $t0, 16
  or    $a0, $a0, $t0
  lw    $t0, _c2f
  lb    $t0, 0($t0)
  sll   $t0, $t0, 8
  or    $a0, $a0, $t0
  lw    $t0, _c2s
  lb    $t0, 0($t0)
  or    $a0, $a0, $t0
  lw    $t0, _c1s
  lw    $t1, _c2s
  bne   $t0, $t1, _a0_2_s1
  li    $v0, 0
  j     _a0_2_call
_a0_2_s1:
  bgt   $t0, $t1, _a0_2_s2
  li    $v0, -1
  j     _a0_2_call
_a0_2_s2:
  li    $v0, 1
_a0_2_call:
  sw    $v0, _ans
  li    $a1, 2
  jal   student_code
  lw    $a0, _ans
  li    $a1, 2
  jal   _test_error
  jal   __incr
  bne   $v0, $0, _a0_2_loop

_all_done:
  li    $a0, 0  # number of errors
  li    $a1, 22
  la    $t0, _err_0
_count_errors_loop:
  lb    $t1, 0($t0)
  add   $a0, $a0, $t1
  addi  $t0, $t0, 1
  addi  $a1, $a1, -1
  bne   $a1, $0, _count_errors_loop
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall

  lw    $sp, _sp
  lw    $ra, _ra
  jr    $ra

_error_fatal:
  beq   $a0, $sp, _error_fatal_s
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 'p'
  li    $v0, 11
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall
_error_fatal_s:
  beq   $s0, 9281, _error_fatal_s1
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 0
  li    $v0, 1
  syscall
_error_fatal_s1:
  beq   $s1, 9281, _error_fatal_s2
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 1
  li    $v0, 1
  syscall
_error_fatal_s2:
  beq   $s2, 9281, _error_fatal_s3
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 2
  li    $v0, 1
  syscall
_error_fatal_s3:
  beq   $s3, 9281, _error_fatal_s4
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 3
  li    $v0, 1
  syscall
_error_fatal_s4:
  beq   $s4, 9281, _error_fatal_s5
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 4
  li    $v0, 1
  syscall
_error_fatal_s5:
  beq   $s5, 9281, _error_fatal_s6
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 5
  li    $v0, 1
  syscall
_error_fatal_s6:
  beq   $s6, 9281, _error_fatal_s7
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 6
  li    $v0, 1
  syscall
_error_fatal_s7:
  beq   $s7, 9281, _error_fatal_done
  li    $a0, 's'
  li    $v0, 11
  syscall
  li    $a0, 7
  li    $v0, 1
  syscall
_error_fatal_done:
  li    $a0, 10
  li    $v0, 11
  syscall
  j     _all_done

_test_error:
  bne   $a0, $v0, _error
  lw    $a0, _sp
  bne   $a0, $sp, _error_fatal
  bne   $s0, 9281, _error_fatal
  bne   $s1, 9281, _error_fatal
  bne   $s2, 9281, _error_fatal
  bne   $s3, 9281, _error_fatal
  bne   $s4, 9281, _error_fatal
  bne   $s5, 9281, _error_fatal
  bne   $s6, 9281, _error_fatal
  bne   $s7, 9281, _error_fatal
  jr    $ra

student_code:
  li    $t0, -8743
  li    $t1, -8743
  li    $t2, -8743
  li    $t3, -8743
  li    $t4, -8743
  li    $t5, -8743
  li    $t6, -8743
  li    $t7, -8743
  li    $t8, -8743
  li    $t9, -8743
  li    $a2, -8743
  li    $a3, -8743
  li    $v0, -8743
  li    $v1, -8743

### START

  srl   $t0, $a0, 24     # t0 = Card 1 face-value
  srl   $t1, $a0, 16
  andi  $t1, $t1, 0xFF   # t1 = Card 1 suit
  srl   $t2, $a0, 8
  andi  $t2, $t2, 0xFF   # t2 = Card 2 face-value
  andi  $t3, $a0, 0xFF   # t3 = Card 2 suit

  bne   $a1, $0, not_zero

  blt   $t0, 50, ret_0   # >= '2' ?
  ble   $t0, 57, c1_okf  # <= '9' ?
  beq   $t0, 84, c1_okf  # 'T' ?
  beq   $t0, 74, c1_okf  # 'J' ?
  beq   $t0, 81, c1_okf  # 'Q' ?
  beq   $t0, 75, c1_okf  # 'K' ?
  bne   $t0, 65, ret_0   # 'A' ?
c1_okf:
  beq   $t1, 83, c1_ok   # 'S' ?
  beq   $t1, 72, c1_ok   # 'H' ?
  beq   $t1, 68, c1_ok   # 'D' ?
  bne   $t1, 67, ret_0   # 'C' ?
c1_ok:
  blt   $t2, 50, ret_1   # >= '2' ?
  ble   $t2, 57, c2_okf  # <= '9' ?
  beq   $t2, 84, c2_okf  # 'T' ?
  beq   $t2, 74, c2_okf  # 'J' ?
  beq   $t2, 81, c2_okf  # 'Q' ?
  beq   $t2, 75, c2_okf  # 'K' ?
  bne   $t2, 65, ret_1   # 'A' ?
c2_okf:
  beq   $t3, 83, ret_2   # 'S' ?
  beq   $t3, 72, ret_2   # 'H' ?
  beq   $t3, 68, ret_2   # 'D' ?
  beq   $t3, 67, ret_2   # 'C' ?
  j     ret_1

not_zero:
  beq   $a1, 2, cmp_suit
  # assume a1 = 1 i.e., compare face-value
  beq   $t0, $t2, ret_0  # equal?
  bgt   $t0, 57, c1_big  # t0 > '9' i.e., 'T', 'J', 'Q', 'K' or 'A' ?
  blt   $t0, $t2, ret_m1 # t0 < t2 ==> -1
  j     ret_1            # t0 > t2 ==> both digits ==> 1
c1_big:
  ble   $t2, 57, ret_1   # t0 big and t2 <= '9' ==> 1
  # both big, unequal
  beq   $t0, 84, ret_m1  # t0 = 'T' ==> t0 < t2 ==> -1
  beq   $t2, 84, ret_1   # t2 = 'T' ==> t0 > t2 ==> 1
  # neither is 'T'
  beq   $t0, 74, ret_m1  # t0 = 'J' ==> t0 < t2 ==> -1
  beq   $t2, 74, ret_1   # t2 = 'J' ==> t0 > t2 ==> 1
  # neither is 'T', 'J'
  beq   $t0, 81, ret_m1  # t0 = 'Q' ==> t0 < t2 ==> -1
  beq   $t2, 81, ret_1   # t2 = 'Q' ==> t0 > t2 ==> 1
  # neither is 'T', 'J', 'Q' ==> one is 'K' and other is 'A'
  beq   $t0, 75, ret_m1  # t0 = 'K' ==> t2 == 'A' ==> -1
  # otherwise, t0 = 'A' and t2 == 'K' ==> 1
  j     ret_1

cmp_suit:
  beq   $t1, $t3, ret_0
  bgt   $t1, $t3, ret_1

ret_m1:
  li    $v0, -1
  j     done
ret_0:
  li    $v0, 0
  j     done
ret_1:
  li    $v0, 1
  j     done
ret_2:
  li    $v0, 2

done:

### END

  jr $ra