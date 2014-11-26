# HW 2
# Author: Viraj Kumar
#
# Please RENAME this file using your name
# Example: Viraj Kumar's filename will be: VirajKumar.s

.data
  hand1: .word 0x34430000 0x34443453   # legal, illegal, legal, legal: length 1
  hand2: .word 0x54533443 0x40413444   # legal, legal, illegal, legal: length 2
  hand3: .word 0x34435453 0x34444041   # legal, legal, legal, illegal: length 3
  hand4: .word 0x34435453 0x41433444 0 # legal, legal, legal, legal, illegal  : length 4

.text
## This function is a solution to HW 1
## a0 = Two cards, a1 = 0/1/2
hw1:
  srl   $t0, $a0, 24     # t0 = Card 1 face-value
  srl   $t1, $a0, 16
  andi  $t1, $t1, 0xFF   # t1 = Card 1 suit
  srl   $t2, $a0, 8
  andi  $t2, $t2, 0xFF   # t2 = Card 2 face-value
  andi  $t3, $a0, 0xFF   # t3 = Card 2 suit

  bne   $a1, $0, not_zero

  blt   $t0, '2', ret_0   # >= '2' ?
  ble   $t0, '9', c1_okf  # <= '9' ?
  beq   $t0, 'T', c1_okf  # 'T' ?
  beq   $t0, 'J', c1_okf  # 'J' ?
  beq   $t0, 'Q', c1_okf  # 'Q' ?
  beq   $t0, 'K', c1_okf  # 'K' ?
  bne   $t0, 'A', ret_0   # 'A' ?
c1_okf:
  beq   $t1, 'S', c1_ok   # 'S' ?
  beq   $t1, 'H', c1_ok   # 'H' ?
  beq   $t1, 'D', c1_ok   # 'D' ?
  bne   $t1, 'C', ret_0   # 'C' ?
c1_ok:
  blt   $t2, '2', ret_1   # >= '2' ?
  ble   $t2, '9', c2_okf  # <= '9' ?
  beq   $t2, 'T', c2_okf  # 'T' ?
  beq   $t2, 'J', c2_okf  # 'J' ?
  beq   $t2, 'Q', c2_okf  # 'Q' ?
  beq   $t2, 'K', c2_okf  # 'K' ?
  bne   $t2, 'A', ret_1   # 'A' ?
c2_okf:
  beq   $t3, 'S', ret_2   # 'S' ?
  beq   $t3, 'H', ret_2   # 'H' ?
  beq   $t3, 'D', ret_2   # 'D' ?
  beq   $t3, 'C', ret_2   # 'C' ?
  j     ret_1

not_zero:
  beq   $a1, 2, cmp_suit
  # assume a1 = 1 i.e., compare face-value
  beq   $t0, $t2, ret_0   # equal?
  bgt   $t0, '9', c1_big  # t0 > '9' i.e., 'T', 'J', 'Q', 'K' or 'A' ?
  blt   $t0, $t2, ret_m1  # t0 < t2 ==> -1
  j     ret_1             # t0 > t2 ==> both digits ==> 1
c1_big:
  ble   $t2, '9', ret_1   # t0 big and t2 <= '9' ==> 1
  # both big, unequal
  beq   $t0, 'T', ret_m1  # t0 = 'T' ==> t0 < t2 ==> -1
  beq   $t2, 'T', ret_1   # t2 = 'T' ==> t0 > t2 ==> 1
  # neither is 'T'
  beq   $t0, 'J', ret_m1  # t0 = 'J' ==> t0 < t2 ==> -1
  beq   $t2, 'J', ret_1   # t2 = 'J' ==> t0 > t2 ==> 1
  # neither is 'T', 'J'
  beq   $t0, 'Q', ret_m1  # t0 = 'Q' ==> t0 < t2 ==> -1
  beq   $t2, 'Q', ret_1   # t2 = 'Q' ==> t0 > t2 ==> 1
  # neither is 'T', 'J', 'Q' ==> one is 'K' and other is 'A'
  beq   $t0, 'K', ret_m1  # t0 = 'K' ==> t2 = 'A' ==> -1
  # otherwise, t0 = 'A' and t2 = 'K' ==> 1
  j     ret_1

cmp_suit:
  # can compare suits directly!
  beq   $t1, $t3, ret_0
  bgt   $t1, $t3, ret_1

ret_m1:
  li    $v0, -1
  j     hw1_done
ret_0:
  li    $v0, 0
  j     hw1_done
ret_1:
  li    $v0, 1
  j     hw1_done
ret_2:
  li    $v0, 2

hw1_done:
  jr    $ra

####################################################
#
# The given main function runs the following tests:
#
# 1) Calls the length function for hand1 and hand2
#    (declared in .data above) and prints answers.
# 2) Calls the extractFirstCards function for hand1
#    and hand2 and prints the two extracted cards.
# 3) Calls the length function again for hand1 and
#    hand2 to verify that both lengths have been
#    decreased by 1 by printing the answers.
#
# You should test your functions with other pairs
# of hands: (hand1, hand3), (hand2, hand4), ...
####################################################

main:
  addi  $sp, $sp, -12  # grow stack
  sw    $ra, 0($sp)    # save ra
  sw    $s0, 4($sp)    # save s0
  sw    $s1, 8($sp)    # save s1

  la    $s0, hand1     # change these two values
  la    $s1, hand2     # for testing your code

  # 1) Print lengths of s0 and s1 hands
  move  $a0, $s0
  jal   length
  move  $a0, $v0
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall

  move  $a0, $s1
  jal   length
  move  $a0, $v0
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall

  # 2) Test extractFirstCards function
  move  $a0, $s0
  move  $a1, $s1
  jal   extractFirstCards
  move  $t0, $v0
  # Now print the two cards in $t0
  srl   $a0, $t0, 24
  li    $v0, 11
  syscall
  srl   $a0, $t0, 16
  andi  $a0, $a0, 0xFF
  syscall
  li    $a0, 32  # space
  syscall
  srl   $a0, $t0, 8
  andi  $a0, $a0, 0xFF
  syscall
  andi  $a0, $t0, 0xFF
  syscall
  li    $a0, 10
  syscall

  # 3) Verify lengths have decreased
  move  $a0, $s0
  jal   length
  move  $a0, $v0
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall
  move  $a0, $s1
  jal   length
  move  $a0, $v0
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11

  lw    $ra, 0($sp)    # restore ra
  lw    $s0, 4($sp)    # restore s0
  lw    $s1, 8($sp)    # restore s1
  addi  $sp, $sp, 12   # shrink stack
  jr    $ra

###### DO NOT DELETE THIS LINE ######
###### Start of your code HERE ######

length:  # a0 = array of words, representing cards
  # Your solution MUST use the given hw1 function!
  li    $v0, 0  ## DELETE THIS LINE
  jr    $ra

extractFirstCards:  # a0 = hand1, a1 = hand2
  # Note: You can safely assume that
  # length(a0) > 0 and length(a1) > 0
  li    $v0, 0  ## DELETE THIS LINE
  jr    $ra

########## End of your code #########
###### DO NOT DELETE THIS LINE ###### 
