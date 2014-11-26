.data
_bad_a0: .word 0x43434143 0x41414143 0x41434343 0x41434141 0x41434143
_bad_v0: .word          0          0          1          1          2
_face_m1: .word 0x32433943 0x39434A43 0x4A434143
_face_eq: .word 0x35433543 0x4A434A43 0x41434143
_face_p1: .word 0x39433243 0x4A433943 0x41434A43
_suit_m1: .word 0x32433244 0x4A434A44 0x41434144
_suit_eq: .word 0x32433243 0x4A434A43 0x41434143
_suit_p1: .word 0x32443243 0x4A444A43 0x41444143

.text
main:
  addi   $sp, $sp, -8
  sw     $ra, 0($sp)
  sw     $s0, 4($sp)

  li     $s0, 1
  la     $a0, _bad_a0
  lw     $a0, 0($a0)
  li     $a1, 0
  jal    student_code
  beq    $v0, 0, _test2
  jal    _error

_test2:
  li     $s0, 2
  la     $a0, _bad_a0
  lw     $a0, 4($a0)
  li     $a1, 0
  jal    student_code
  beq    $v0, 0, _test3
  jal    _error

_test3:
  li     $s0, 3
  la     $a0, _bad_a0
  lw     $a0, 8($a0)
  li     $a1, 0
  jal    student_code
  beq    $v0, 1, _test4
  jal    _error

_test4:
  li     $s0, 4
  la     $a0, _bad_a0
  lw     $a0, 12($a0)
  li     $a1, 0
  jal    student_code
  beq    $v0, 1, _test5
  jal    _error

_test5:
  li     $s0, 5
  la     $a0, _bad_a0
  lw     $a0, 16($a0)
  li     $a1, 0
  jal    student_code
  beq    $v0, 2, _test6
  jal    _error

_test6:
  li     $s0, 6
  la     $a0, _face_m1
  lw     $a0, 0($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, -1, _test7
  jal    _error

_test7:
  li     $s0, 7
  la     $a0, _face_m1
  lw     $a0, 4($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, -1, _test8
  jal    _error

_test8:
  li     $s0, 8
  la     $a0, _face_m1
  lw     $a0, 8($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, -1, _test9
  jal    _error

_test9:
  li     $s0, 9
  la     $a0, _face_eq
  lw     $a0, 0($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, 0, _test10
  jal    _error

_test10:
  li     $s0, 10
  la     $a0, _face_eq
  lw     $a0, 4($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, 0, _test11
  jal    _error

_test11:
  li     $s0, 11
  la     $a0, _face_eq
  lw     $a0, 8($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, 0, _test12
  jal    _error

_test12:
  li     $s0, 12
  la     $a0, _face_p1
  lw     $a0, 0($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, 1, _test13
  jal    _error

_test13:
  li     $s0, 13
  la     $a0, _face_p1
  lw     $a0, 4($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, 1, _test14
  jal    _error

_test14:
  li     $s0, 14
  la     $a0, _face_p1
  lw     $a0, 8($a0)
  li     $a1, 1
  jal    student_code
  beq    $v0, 1, _test15
  jal    _error

_test15:
  li     $s0, 15
  la     $a0, _suit_m1
  lw     $a0, 0($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, -1, _test16
  jal    _error

_test16:
  li     $s0, 16
  la     $a0, _suit_m1
  lw     $a0, 4($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, -1, _test17
  jal    _error

_test17:
  li     $s0, 17
  la     $a0, _suit_m1
  lw     $a0, 8($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, -1, _test18
  jal    _error

_test18:
  li     $s0, 18
  la     $a0, _suit_eq
  lw     $a0, 0($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, 0, _test19
  jal    _error

_test19:
  li     $s0, 19
  la     $a0, _suit_eq
  lw     $a0, 4($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, 0, _test20
  jal    _error

_test20:
  li     $s0, 20
  la     $a0, _suit_eq
  lw     $a0, 8($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, 0, _test21
  jal    _error

_test21:
  li     $s0, 21
  la     $a0, _suit_p1
  lw     $a0, 0($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, 1, _test22
  jal    _error

_test22:
  li     $s0, 22
  la     $a0, _suit_p1
  lw     $a0, 4($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, 1, _test23
  jal    _error

_test23:
  li     $s0, 23
  la     $a0, _suit_p1
  lw     $a0, 8($a0)
  li     $a1, 2
  jal    student_code
  beq    $v0, 1, _all_done
  jal    _error

_all_done:
  lw     $ra, 0($sp)
  lw     $s0, 4($sp)
  addi   $sp, $sp, 8
  jr     $ra
_error:
  move   $a0, $s0
  li     $v0, 1
  syscall
  li     $a0, 10
  li     $v0, 11
  syscall
  jr     $ra
student_code:


  
  srl   $t0, $a0, 24
  sll   $t0, $t0, 24
  addi  $t0, 0       

  
  bne	$t0, 0x32, cf3     # matching with face value 0x32 
  j	cs                # jump to check suit (cs)

cf3:                      # cf3 = check face value 3  
  bne	$t0, 0x33, cf4
  j   	cs

cf4:
  bne 	$t0,0x34, cf5 
  j   	cs

cf5:
  bne 	$t0, 0x35, cf6
  j   	cs

cf6:
  bne	$t0, 0x36, cf7
  j     cs

cf7:
  bne	$t0,0x37, cf8
  j	cs

cf8:
  bne	$t0,0x38, cf9
  j     cs

cf9:
  bne	$t0,0x39, cft          #cft= check face value 'T'
  j     cs

cft:
  
  bne	$t0,0x54, cfj       
  j     cs

cfj:
  
  bne	$t0,0x4A, cfq
  j     cs

cfq:
  
  bne	$t0, 0x51, cfk
  j	cs

cfk:
  
  bne	$t0,0x4B, cfa
  j     cs

cfa:

  bne	$t0,0x41, ce1        #ce1= card one error
  j     cs
 
cs:

  srl	$t1, $a0, 16
  sll	$t1, $t1, 24
  lb    $t1, 0($t1)        #$t4='C'
  
  bne   $t1,0x43, csd      #csd=check suit diamond
  j	ct2                #ct2=card test 2

csd:
  bne   $t1,0x44, csh
  j	ct2

csh:
  bne   $t1,0x48, css
  j	ct2

css:
  bne   $t1,0x53, ce1     #ce1=card error 1
  j	ct2               #ct2 = card test 2

ce1:
  li	$v0, 0            #$v0=0
  j	done


ct2:                       #ct2 =card test 2
 
  srl	$t0, $a0, 8
  sll   $t0, $t0, 24
  lb	$t0, 0($t0)        # t0 = 'A'
 
  bne	$t0, 0x32, cf32     # cf32 = check face value 3 of card 2
  j	cs2                # jump to check suit of card 2

cf32:
  bne	$t0, 0x33, cf42
  j   	cs2
   
cf42:
  bne 	$t0, 0x34, cf52 
  j   	cs2

cf52:
  bne 	$t0, 0x35, cf62
  j   	cs2

cf62:
  bne	$t0, 0x36, cf72
  j     cs2

cf72:
  bne	$t0, 0x37, cf82
  j	cs2

cf82:
  bne	$t0, 0x38, cf92
  j     cs2

cf92:
  bne	$t0, 0x39, cft2
  j     cs2

cft2:
  bne	$t0, 0x54, cfj2
  j     cs2

cfj2:
  
  bne	$t0, 0x4A, cfq2
  j     cs2

cfq2:
  bne	$t0, 0x51, cfk2
  j	cs2

cfk2:
  bne	$t0, 0x4B, cfa2
  j     cs2

cfa2:
  bne	$t0, 0x51, ce2
  j     cs2
 
cs2:
 
  sll   $t1, $t1, 24   
  lb    $t1, 0($t1)
  
  bne   $t1, 0x43, csd2     #csd2=check suit diamond of card 2
  j	ct2                #ct2=card test 2

csd2:
  bne   $t1, 0x44, csh2
  j	pac

csh2:
  bne   $t1, 0x48, css2
  j	pac

css2:
  bne   $t4, 0x53, ce2    #ce2=card error 2
  j	pac

ce2:
  li	$v0, 1
  j	done

pac:                     #pac= properly arranged cards
  li	$v0, 2
  j	done

  

comparefv:
  
  li 	$a1, 1
  srl	$t1, $a0, 24
  sll   $t1, $t1, 24
  lb    $t1, 0($t1)
  srl   $t2, $a0, 8
  sll   $t2, $t2, 24
  lb	$t2, 0($t0)

  bne	$t1, $t2, cfa        # cfv = check face value ace
  j	efv                  # efv = equal face values

efv:
  li	$v0, 0               # $v0 = 0
  j	done

caf:                         #caf = comparing with face value 'A' of card 1
  lb	$t3, 4($t1)
  bne	$t3, $t1, caf2
  j     fc1                  #fc1 = face value of card 1 is greater

caf2:                        #caf2 = comparing with face value 'A' of card 2
  bne	$t3, $t2, ckf
  j	fc2                  #fc2 = face value of card 2 is greater

ckf:
  lb	$t3, 3($t1)
  bne	$t3, $t1, ckf2
  j	fc1

ckf2:
  bne  $t3, $t1, cqf
  j	fc2

cqf:
  lb	$t3, 2($t1)
  bne	$t3, $t1, cqf2
  j	fc1

cqf2:
  bne	$t3, $t2, cfj
  j     fc2

cjf:
  lb	$t3, 1($t1)
  bne   $t3, $t1, cjf2
  j	fc1

cjf2:
  bne	$t3, $t2, cften
  j	fc2

cften:
  lb	$t3, 0($t1)
  bne	$t3, $t1, cften2
  j	fc1

cften2:
  bne	$t3, $t2, cfn
  j	fc2

cfn:
  blt	$t2, $t1, fc2
  j	fc1 

fc1:
  li	$v0, 1
  j	done

fc2:
  li	$v0, -1
  j	done  

comparesv:                 # Compare suit Values
  li    $a1, 2
  srl	$t2, $a0, 16
  sll	$t2, $t2, 24
  lw    $t2, 0($t2)            #$t3='D'
  srl	$t3, $a0, 8
  sll	$t3, $a0, 24            
  lw    $t3, 0($t0)            #$t3='C'
  

  bne	$t2, $t3, csvs        #csvs = check suit value with spade
  j	esv                   #esv = equal suit values
  
esv:
  li	$v0, 0
  j	done

csvs:                          	#Compare Suit value with spade
  bne	$t2, 0x53, csvs2          	# cssv = card 2 suit value is greater
  j     cosv 

csvs2:
  bne	$t3, 0x53, csvh
  j 	cssv                  	# cosv = card 1 suit value is greater

csvh:
  
  bne	$t2, 0x48, csvh2
  j	cosv

csvh2:
  bne	$t3, 0x48, csvd
  j 	cssv 

csvd:
  bne	$t2, 0x44, csvd2
  j	cosv

csvd2:
  bne	$t3, 0x44, csvc
  j 	cssv 

csvc:
 
  bne	$t2, 0x43, csvc2
  j	cosv

csvc2:
  bne	$t3, 0x43, csoc
  j 	cssv 

cssv:
  li	$v0, -1
  j	done

cosv:
  li	$v0, 1
  j	done

done:
  move  $a0, $v0
  li    $v0, 1
  syscall

  jr    $ra