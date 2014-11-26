.data
  ####### DO NOT MODIFY #######
  rnd_x: .word 123456789
  rnd_y: .word 362436069
  rnd_z: .word 521288629
  rnd_w: .word 88675123
  rH_face: .byte '2' '3' '4' '5' '6' '7' '8' '9' 'T' 'J' 'Q' 'K' 'A'
  rH_suit: .byte 'C' 'H' 'D' 'S'
  #############################

  # Declare your own variables here, if needed

.text

####### DO NOT MODIFY #######
hw1:    ## CAN BE CALLED IN YOUR strategy
  srl   $t0, $a0, 24     # t0 = Card 1 face-value
  srl   $t1, $a0, 16
  andi  $t1, $t1, 0xFF   # t1 = Card 1 suit
  srl   $t2, $a0, 8
  andi  $t2, $t2, 0xFF   # t2 = Card 2 face-value
  andi  $t3, $a0, 0xFF   # t3 = Card 2 suit
  bne   $a1, $0, hw1_nz
  blt   $t0, '2', hw1_ret_0   # >= '2' ?
  ble   $t0, '9', hw1_c1_okf  # <= '9' ?
  beq   $t0, 'T', hw1_c1_okf  # 'T' ?
  beq   $t0, 'J', hw1_c1_okf  # 'J' ?
  beq   $t0, 'Q', hw1_c1_okf  # 'Q' ?
  beq   $t0, 'K', hw1_c1_okf  # 'K' ?
  bne   $t0, 'A', hw1_ret_0   # 'A' ?
hw1_c1_okf:
  beq   $t1, 'S', hw1_c1_ok   # 'S' ?
  beq   $t1, 'H', hw1_c1_ok   # 'H' ?
  beq   $t1, 'D', hw1_c1_ok   # 'D' ?
  bne   $t1, 'C', hw1_ret_0   # 'C' ?
hw1_c1_ok:
  blt   $t2, '2', hw1_ret_1   # >= '2' ?
  ble   $t2, '9', hw1_c2_okf  # <= '9' ?
  beq   $t2, 'T', hw1_c2_okf  # 'T' ?
  beq   $t2, 'J', hw1_c2_okf  # 'J' ?
  beq   $t2, 'Q', hw1_c2_okf  # 'Q' ?
  beq   $t2, 'K', hw1_c2_okf  # 'K' ?
  bne   $t2, 'A', hw1_ret_1   # 'A' ?
hw1_c2_okf:
  beq   $t3, 'S', hw1_ret_2   # 'S' ?
  beq   $t3, 'H', hw1_ret_2   # 'H' ?
  beq   $t3, 'D', hw1_ret_2   # 'D' ?
  beq   $t3, 'C', hw1_ret_2   # 'C' ?
  j     hw1_ret_1
hw1_nz:
  beq   $a1, 2, hw1_cmp_suit
  # assume a1 = 1 i.e., compare face-value
  beq   $t0, $t2, hw1_ret_0   # equal?
  bgt   $t0, '9', hw1_c1_big  # t0 > '9' i.e., 'T', 'J', 'Q', 'K' or 'A' ?
  blt   $t0, $t2, hw1_ret_m1  # t0 < t2 ==> -1
  j     hw1_ret_1             # t0 > t2 ==> both digits ==> 1
hw1_c1_big:
  ble   $t2, '9', hw1_ret_1   # t0 big and t2 <= '9' ==> 1
  # both big, unequal
  beq   $t0, 'T', hw1_ret_m1  # t0 = 'T' ==> t0 < t2 ==> -1
  beq   $t2, 'T', hw1_ret_1   # t2 = 'T' ==> t0 > t2 ==> 1
  # neither is 'T'
  beq   $t0, 'J', hw1_ret_m1  # t0 = 'J' ==> t0 < t2 ==> -1
  beq   $t2, 'J', hw1_ret_1   # t2 = 'J' ==> t0 > t2 ==> 1
  # neither is 'T', 'J'
  beq   $t0, 'Q', hw1_ret_m1  # t0 = 'Q' ==> t0 < t2 ==> -1
  beq   $t2, 'Q', hw1_ret_1   # t2 = 'Q' ==> t0 > t2 ==> 1
  # neither is 'T', 'J', 'Q' ==> one is 'K' and other is 'A'
  beq   $t0, 'K', hw1_ret_m1  # t0 = 'K' ==> t2 = 'A' ==> -1
  # otherwise, t0 = 'A' and t2 = 'K' ==> 1
  j     hw1_ret_1
hw1_cmp_suit:
  # can compare suits directly!
  beq   $t1, $t3, hw1_ret_0
  bgt   $t1, $t3, hw1_ret_1
hw1_ret_m1:
  li    $v0, -1
  j     hw1_done
hw1_ret_0:
  li    $v0, 0
  j     hw1_done
hw1_ret_1:
  li    $v0, 1
  j     hw1_done
hw1_ret_2:
  li    $v0, 2
hw1_done:
  jr    $ra

####### DO NOT MODIFY #######
length:    ## CAN BE CALLED IN YOUR strategy
  addi  $sp, $sp, -12
  sw    $ra, 0($sp)
  li    $t0, 0
length_loop:
  sw    $a0, 4($sp)
  sw    $t0, 8($sp)
  lw    $a0, 0($a0)
  li    $a1, 0
  jal   hw1
  lw    $a0, 4($sp)
  lw    $t0, 8($sp)
  add   $t0, $t0, $v0
  addi  $a0, $a0, 4
  beq   $v0, 2, length_loop
  move  $v0, $t0
  lw    $ra, 0($sp)
  addi  $sp, $sp, 12
  jr    $ra

####### DO NOT MODIFY #######
rnd:    ## CAN BE CALLED IN YOUR strategy
  lw   $t0, rnd_x
  lw   $t1, rnd_y
  lw   $t2, rnd_z
  lw   $t3, rnd_w
  sll  $t4, $t0, 11
  xor  $t4, $t0, $t4
  move $t0, $t1
  move $t1, $t2
  move $t2, $t3
  srl  $t5, $t4, 8
  xor  $t4, $t4, $t5
  srl  $t5, $t3, 19
  xor  $t4, $t5, $t4
  xor  $v0, $t3, $t4
  sw   $t0, rnd_x
  sw   $t1, rnd_y
  sw   $t2, rnd_z
  sw   $v0, rnd_w
  srl  $v0, $v0, 1
  jr   $ra

###############################################
# The given functions below will NOT be part of
# the final tournament code. You can call these
# functions while debugging your code, but your
# final code MUST NOT call these functions. If
# you do, your code will be disqualified!
###############################################

####### DO NOT MODIFY #######
randomHands:  # a0 = N (MUST be even!)
  # returns v0 = array of N random cards
  #     and v1 = array of N random cards
  addi  $sp, $sp, -24
  sw    $ra, 0($sp)
  sw    $a0, 4($sp)
  sll   $a0, $a0, 2
  addi  $a0, $a0, 8
  li    $v0, 9
  syscall
  sw    $v0, 8($sp)  # hand0
  li    $v0, 9
  syscall
  sw    $v0, 12($sp) # hand1
  move  $t1, $v0
  sw    $t1, 20($sp)
  lw    $t0, 8($sp)
  sw    $t0, 16($sp)
  lw    $a0, 4($sp)
rH_loop:
  beq   $a0, $0, rH_done
  jal   rnd
  lw    $t0, 16($sp)
  rem   $t3, $v0, 52
  andi  $t4, $t3, 0x3
  lb    $t4, rH_suit($t4)
  srl   $t3, $t3, 2
  lb    $t3, rH_face($t3)
  sll   $t5, $t3, 24
  sll   $t4, $t4, 16
  or    $t5, $t5, $t4
  div   $t2, $v0, 52
  rem   $t3, $t2, 52
  andi  $t4, $t3, 0x3
  lb    $t4, rH_suit($t4)
  srl   $t3, $t3, 2
  lb    $t3, rH_face($t3)
  sll   $t3, $t3, 8
  or    $t5, $t5, $t3
  or    $t5, $t5, $t4
  sw    $t5, 0($t0)
  addi  $t0, $t0, 4
  sw    $t0, 16($sp)
  jal   rnd
  lw    $t1, 20($sp)
  rem   $t3, $v0, 52
  andi  $t4, $t3, 0x3
  lb    $t4, rH_suit($t4)
  srl   $t3, $t3, 2
  lb    $t3, rH_face($t3)
  sll   $t5, $t3, 24
  sll   $t4, $t4, 16
  or    $t5, $t5, $t4
  div   $t2, $v0, 52
  rem   $t3, $t2, 52
  andi  $t4, $t3, 0x3
  lb    $t4, rH_suit($t4)
  srl   $t3, $t3, 2
  lb    $t3, rH_face($t3)
  sll   $t3, $t3, 8
  or    $t5, $t5, $t3
  or    $t5, $t5, $t4
  sw    $t5, 0($t1)
  addi  $t1, $t1, 4
  sw    $t1, 20($sp)
  lw    $a0, 4($sp)
  addi  $a0, $a0, -2
  sw    $a0, 4($sp)
  j     rH_loop
rH_done:
  lw    $ra, 0($sp)
  lw    $v0, 8($sp)
  lw    $v1, 12($sp)
  addi  $sp, $sp, 24
  jr    $ra

####### DO NOT MODIFY #######
extractFirstCards:
  lw    $v0, 0($a0)
  srl   $v0, $v0, 16
  sll   $v0, $v0, 16
  lw    $v1, 0($a1)
  srl   $v1, $v1, 16
  or    $v0, $v0, $v1
  addi  $sp, $sp, -16
  sw    $ra, 0($sp)
  sw    $v0, 4($sp)
  sw    $a0, 8($sp)
  sw    $a1, 12($sp)
  jal   length
  lw    $a0, 8($sp)
  li    $t0, 0
ef_loop1:
  bge   $t0, $v0, ef_done1
  lw    $t1, 0($a0)
  andi  $t1, $t1, 0xFFFF
  sll   $t1, $t1, 16
  lw    $t2, 4($a0)
  srl   $t2, $t2, 16
  or    $t1, $t1, $t2
  sw    $t1, 0($a0)
  addi  $t0, $t0, 1
  addi  $a0, $a0, 4
  j     ef_loop1
ef_done1:
  lw    $a0, 12($sp)
  jal   length
  lw    $a1, 12($sp)
  li    $t0, 0
ef_loop2:
  bge   $t0, $v0, ef_done2
  lw    $t1, 0($a1)
  andi  $t1, $t1, 0xFFFF
  sll   $t1, $t1, 16
  lw    $t2, 4($a1)
  srl   $t2, $t2, 16
  or    $t1, $t1, $t2
  sw    $t1, 0($a1)
  addi  $t0, $t0, 1
  addi  $a1, $a1, 4
  j     ef_loop2
ef_done2:
  lw    $ra, 0($sp)
  lw    $v0, 4($sp)
  addi  $sp, $sp, 16
  jr    $ra

####### DO NOT MODIFY #######
printCards:  # a0 = 2-cards, a1 = player, a2 = choice
  # Suppose Player 0's card is f0s0 and Player 1's card is f1s1
  # If a1 = 0, we print "!f0s0 f1s1 a2" where a2 is the choice
  # If a1 = 1, we print " f1s1!f0s0 a2" where a2 is the choice
  # Thus, the ! is always printed before Player 0's card
  andi  $t3, $a0, 0xFF
  srl   $a0, $a0, 8
  andi  $t2, $a0, 0xFF
  srl   $a0, $a0, 8
  andi  $t1, $a0, 0xFF
  srl   $t0, $a0, 8
  li    $a0, 33
  sub   $a0, $a0, $a1  # " " or "!"
  li    $v0, 11
  syscall
  move  $a0, $t0
  syscall
  move  $a0, $t1
  syscall
  li    $a0, 32
  add   $a0, $a0, $a1  # "!" or " "
  syscall
  move  $a0, $t2
  syscall
  move  $a0, $t3
  syscall
  li    $a0, 32
  syscall
  li    $a0, 32
  syscall
  move  $a0, $a2
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall
  jr    $ra

####### DO NOT MODIFY #######
printHand:  # a0 = hand
  addi  $sp, $sp, -8
  sw    $ra, 0($sp)
pH_loop:
  sw    $a0, 4($sp)
  lw    $a0, 0($a0)
  li    $a1, 0
  jal   hw1
  bne   $v0, 2, pH_done
  lw    $t0, 4($sp)
  lw    $t1, 0($t0)
  li    $v0, 11
  srl   $a0, $t1, 24
  syscall
  srl   $a0, $t1, 16
  andi  $a0, $a0, 0xFF
  syscall
  srl   $a0, $t1, 8
  andi  $a0, $a0, 0xFF
  syscall
  andi  $a0, $t1, 0xFF
  syscall
  li    $a0, 10
  syscall
  addi  $a0, $t0, 4
  j     pH_loop
pH_done:
  lw    $ra, 0($sp)
  addi  $sp, $sp, 8
  jr    $ra

####### DO NOT MODIFY #######
play:  # a0 = strategy0, a1 = strategy1, a2 = N
  addi  $sp, $sp, -32
  sw    $ra, 0($sp)
  sw    $s0, 4($sp)
  sw    $s1, 8($sp)
  sw    $s2, 12($sp)
  sw    $s3, 16($sp)
  sw    $s4, 20($sp)
  sw    $s5, 24($sp)
  sw    $s6, 28($sp)
  move  $s0, $a0     # strategy0
  move  $s1, $a1     # strategy1
  move  $a0, $a2
  jal   randomHands
  move  $s2, $v0     # hand0
  move  $s3, $v1     # hand1
  move  $a0, $s2
  jal   printHand
  li    $a0, 10
  li    $v0, 11
  syscall
  move  $a0, $s3
  jal   printHand
  li    $s4, 0       # turn
play_loop:
  move  $a0, $s2
  jal   length
  move  $v1, $v0
  move  $a0, $v0
  li    $v0, 1
  syscall
  li    $a0, 32
  li    $v0, 11
  syscall
  move  $v0, $v1
  beq   $v0, $0, play_p0done
  move  $a0, $s3
  jal   length
  move  $v1, $v0
  move  $a0, $v0
  li    $v0, 1
  syscall
  li    $a0, 32
  li    $v0, 11
  syscall
  move  $v0, $v1
  beq   $v0, $0, play_p0win
  # both lengths positive
  bne   $s4, $0, play_p1turn
  move  $a0, $s2
  move  $a1, $s3
  jalr  $s0
  beq   $v0, 1, play_strat0ok
  bne   $v0, 2, play_p1win
play_strat0ok:
  move  $s5, $v0     # strategy 0 choice
  move  $a0, $s2
  move  $a1, $s3
  jal   extractFirstCards
  move  $s6, $v0     # h
  move  $a0, $s6
  move  $a1, $s4
  move  $a2, $s5
  jal   printCards
  move  $a0, $s6
  move  $a1, $s5
  jal   hw1
  ble   $v0, $0, play_p0loss
  move  $a0, $s2
  srl   $a1, $s6, 16
  jal   append
  j     play_loop
play_p0loss:
  li    $s4, 1
  beq   $v0, $0, play_loop
  move  $a0, $s3
  andi  $a1, $s6, 0xFFFF
  jal   append
  j     play_loop
play_p1turn:
  move  $a0, $s3
  move  $a1, $s2
  jalr  $s1
  beq   $v0, 1, play_strat1ok
  bne   $v0, 2, play_p0win
play_strat1ok:
  move  $s5, $v0     # strategy 1 choice
  move  $a0, $s3
  move  $a1, $s2
  jal   extractFirstCards
  move  $s6, $v0     # h
  move  $a0, $s6
  move  $a1, $s4
  move  $a2, $s5
  jal   printCards
  move  $a0, $s6
  move  $a1, $s5
  jal   hw1
  ble   $v0, $0, play_p1loss
  move  $a0, $s3
  srl   $a1, $s6, 16
  jal   append
  j     play_loop
play_p1loss:
  li    $s4, 0
  beq   $v0, $0, play_loop
  move  $a0, $s2
  andi  $a1, $s6, 0xFFFF
  jal   append
  j     play_loop
play_p0done:
  move  $a0, $s3
  jal   length
  beq   $v0, $0, play_tie
play_p1win:
  li    $v0, 1
  j     play_done
play_tie:
  li    $v0, 2
  j     play_done
play_p0win:
  li    $v0, 0
play_done:
  lw    $ra, 0($sp)
  lw    $s0, 4($sp)
  lw    $s1, 8($sp)
  lw    $s2, 12($sp)
  lw    $s3, 16($sp)
  lw    $s4, 20($sp)
  lw    $s5, 24($sp)
  lw    $s6, 28($sp)
  addi  $sp, $sp, 32
  jr    $ra

####### DO NOT MODIFY #######
dumbStrategy:  # a0 = myHand, a1 = theirHand
  lw    $t0, 0($a0)
  lw    $t1, 0($a1)
  xor   $t0, $t0, $t1  # this
  xor   $t1, $a0, $a1  # is
  xor   $t0, $t0, $t1  # just
  andi  $v0, $t0, 1    # weird
  addi  $v0, $v0, 1
  jr    $ra

####### DO NOT MODIFY #######
main:
  la    $a0, strategy      # Player 0 = YOUR strategy
  la    $a1, dumbStrategy  # Player 1 = dumb strategy
  li    $a2, 60            # 60 cards per player (MUST be even)
  addi  $sp, $sp, -4
  sw    $ra, 0($sp)
  jal   play
  lw    $ra, 0($sp)
  addi  $sp, $sp, 4
  move  $t0, $v0
  li    $a0, 10
  li    $v0, 11
  syscall
  move  $a0, $t0           # print winner (0 or 1; 2 = tie)
  li    $v0, 1
  syscall
  li    $a0, 10
  li    $v0, 11
  syscall
  jr    $ra

###############################################
# END OF GIVEN CODE. Modify the two functions
# below for HW 3 and Project credit.
###############################################

## TO DO: HW 3
append:  # a0 = hand, a1 = card
move $t5,$a1
move $t6,$a0
addi $sp,$sp,-12
sw $t6,0($sp)
sw $t5,4($sp)
sw $ra,8($sp)
jal length

rem $t4,$v0,2
lw $t6,0($sp)
lw $t5,4($sp)
lw $ra,8($sp)
li $t3,0
beq $t4,$0,even

addi $v0,$v0,-1
odd:
    beq $t3,$v0,odd1
    addi $t6,$t6,4
    addi $t3,$t3,2
j odd

odd1:
    lw $t2,0($t6)
    srl $t1,$t2,16
    sll $t1,$t1,16
    ##srl $t5,$t5,16
    #or $t1,$t5,$t5
    add $t1,$t5,$t1
    sw $t1,0($t6)
#    move $a0,$t6
	addi $t6,$t6,4
	sw $0,0($t6)
    j finish

even:
    beq $t3,$v0,even1
    addi $t6,$t6,4
    addi $t3,$t3,2
j even

even1:
    
    sll $t8,$t5,16
    sw $t8,0($t6)
    j finish

finish:
     move $a0,$t6
     addi $sp,$sp,12
  jr    $ra

## TO DO: Project
strategy:  # a0 = myHand, a1 = theirHand
  i $t0,0
   li $t1,0
   lw $t0,0($a0)
   lw $t1,0($a1)
   srl $t2,$t0,16
   sll $t3,$t2,16
   srl $t4,$t1,16
   or $t0,$t3,$t4
   addi $sp,$sp,-24
   sw $ra,0($sp)
   sw $a0,4($sp)
   sw $a1,8($sp)
   sw $t3,16($sp)
   sw $t4,20($sp)
   sw $t0,12($sp)
   li $a1,1  #check for face value
   addi $a0,$t0,0

 jal hw1
    
   beq $v0,1,face1
   lw $t0,12($sp)
   beq $v0,-1,face2
   addi $a0,$t0,0
   sw $t0,12($sp)
   li $a1,2
 jal hw1 
   
 
   beq $v0,1,suit1
   li $v0,1
   j end1
  
 suit1:
   beq $v0,-1,suit2
   li $v0,2
   j end1
  
 suit2:
   li $v0,2
   j end1

face2:
   lw $t0,12($sp)
   addi $a0,$t0,0
   sw $t0,12($sp)
   li $a1,2
 jal hw1
   
   beq $v0,1,face3
   li $v0,2
   j end1

face3:
   beq $v0,-1,zero
   li $v0,2
   j end1

zero:
    li $v0,1

face1:
   li $v0,1
   j end1
  
    

end1:
    lw $ra,0($sp)
    lw $a0,4($sp)
    lw $a1,8($sp)
    lw $t0,12($sp)
    lw $t3,16($sp)
    lw $t4,20($sp)
    addi $sp,$sp,24
jr    $ra
 