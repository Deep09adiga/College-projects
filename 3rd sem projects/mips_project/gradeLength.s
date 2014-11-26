.data
  _num_err: .word 0
  _ra: .word 0
  _sp: .word 0
  _lans: .word 0
  _ret_hw1: .word 0 1 2 0 2 1 2 2 0 2 2 1

.text
hw1:
  sw    $sp, -4($sp)
  sw    $sp, -8($sp)
  sw    $sp, -12($sp)
  li    $t0, -247
  li    $t1, -247
  li    $t2, -247
  li    $t3, -247
  li    $t4, -247
  li    $t5, -247
  li    $t6, -247
  li    $t7, -247
  li    $t8, -247
  li    $t9, -247
  li    $a2, -247
  li    $a3, -247
  li    $v1, -247
  beq   $a1, $0, _ok
  lw    $v0, _num_err
  addi  $v0, $v0, 1
  sw    $v0, _num_err
  li    $v0, 2
  jr    $ra
_ok:
  move  $v0, $a0
  li    $a0, -247
  li    $a1, -247
  jr    $ra

_test_length:
  li    $t0, -247
  li    $t1, -247
  li    $t2, -247
  li    $t3, -247
  li    $t4, -247
  li    $t5, -247
  li    $t6, -247
  li    $t7, -247
  li    $t8, -247
  li    $t9, -247
  li    $a1, -247
  li    $a2, -247
  li    $a3, -247
  li    $v0, -247
  li    $v1, -247
  li    $s0, -247
  li    $s1, -247
  li    $s2, -247
  li    $s3, -247
  li    $s4, -247
  li    $s5, -247
  li    $s6, -247
  li    $s7, -247
  sw    $ra, _ra
  addi  $sp, $sp, -4
  sw    $sp, _sp
  sw    $sp, 0($sp)
  jal   length
  lw    $t0, _lans
  bne   $v0, $t0, _inc_error
  lw    $t0, _sp
  bne   $t0, $sp, _inc_error
  lw    $t0, 0($t0)
  bne   $t0, $sp, _inc_error
  bne   $s0, -247, _inc_error
  bne   $s1, -247, _inc_error
  bne   $s2, -247, _inc_error
  bne   $s3, -247, _inc_error
  bne   $s4, -247, _inc_error
  bne   $s5, -247, _inc_error
  bne   $s6, -247, _inc_error
  bne   $s7, -247, _inc_error
  j     _test_done
_inc_error:
  lw    $t0, _num_err
  addi  $t0, $t0, 1
  sw    $t0, _num_err
_test_done:
  lw    $sp, _sp
  addi  $sp, $sp, 4
  lw    $ra, _ra
  jr    $ra

main:
  addi  $sp, $sp, -4
  sw    $ra, 0($sp)
  la    $a0, _ret_hw1
  sw    $0, _lans
  jal   _test_length

  la    $a0, _ret_hw1
  addi  $a0, $a0, 4
  li    $t0, 1
  sw    $t0, _lans
  jal   _test_length

  la    $a0, _ret_hw1
  addi  $a0, $a0, 8
  li    $t0, 2
  sw    $t0, _lans
  jal   _test_length

  la    $a0, _ret_hw1
  addi  $a0, $a0, 16
  li    $t0, 3
  sw    $t0, _lans
  jal   _test_length

  la    $a0, _ret_hw1
  addi  $a0, $a0, 24
  li    $t0, 4
  sw    $t0, _lans
  jal   _test_length

  la    $a0, _ret_hw1
  addi  $a0, $a0, 36
  li    $t0, 5
  sw    $t0, _lans
  jal   _test_length

  lw    $a0, _num_err
  li    $v0, 1
  syscall
  lw    $ra, 0($sp)
  addi  $sp, $sp, 4
  jr    $ra

######### Student's length function here #########