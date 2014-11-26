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

andi $t4, $a0, 255
srl $a0, $a0, 8
andi $t3, $a0, 255
srl $a0, $a0, 8
andi $t2, $a0, 255
srl $a0, $a0, 8
andi $t1, $a0, 255
srl $a0, $a0, 8

bne $a1,0,case2
beq $t1, 0x41, crdsuit1
beq $t1, 0x32, crdsuit1
beq $t1, 0x33, crdsuit1
beq $t1, 0x34, crdsuit1
beq $t1, 0x35, crdsuit1
beq $t1, 0x36, crdsuit1
beq $t1, 0x37, crdsuit1
beq $t1, 0x38, crdsuit1
beq $t1, 0x39, crdsuit1
beq $t1, 0x54, crdsuit1
beq $t1, 0x4A, crdsuit1
beq $t1, 0x51, crdsuit1
beq $t1, 0x4B, crdsuit1
li $v0,0
j end

crdsuit1:
beq $t2, 0x43, crdface2
beq $t2, 0x44, crdface2
beq $t2, 0x48, crdface2
beq $t2, 0x53, crdface2
li $v0,0
j end

crdface2:
beq $t3, 0x41, crdsuit2
beq $t3, 0x32, crdsuit2
beq $t3, 0x33, crdsuit2
beq $t3, 0x34, crdsuit2
beq $t3, 0x35, crdsuit2
beq $t3, 0x36, crdsuit2
beq $t3, 0x37, crdsuit2
beq $t3, 0x38, crdsuit2
beq $t3, 0x39, crdsuit2
beq $t3, 0x54, crdsuit2
beq $t3, 0x4A, crdsuit2
beq $t3, 0x51, crdsuit2
beq $t3, 0x4B, crdsuit2
li $v0,1
j end

crdsuit2:
beq $t4, 0x43, case1done
beq $t4, 0x44, case1done
beq $t4, 0x48, case1done
beq $t4, 0x53, case1done
li $v0,1
j end

case1done:
	li $v0,2

case2:
	bne $a1, 1, case3

bne $t1, 0x41,king
li $t1, 0x54
j ace1

king:
bne $t1, 0x4B,queen
li $t1, 0x51
j ace1

queen:
bne $t1, 0x51,ten
li $t1,0x4B
j ace1

ten:
bne $t1, 0x54,ace1
li $t1, 0x41
j ace1

ace1:
bne $t3, 0x41,king1
li $t3, 0x54
j facecomp

king1:
bne $t3, 0x4B,queen1
li $t3, 0x51
j facecomp

queen1:
bne $t3, 0x51,ten1
li $t3, 0x4B
j facecomp

ten1:
bne $t3, 0x54,facecomp
li $t3, 0x41
j facecomp

facecomp:
	bne $t1, $t3,facecrd1cmp
	li $v0,0
	j end
facecrd1cmp:
	bgt $t3, $t1, facecrd1cmp2
	li $v0, 1
	j end
facecrd1cmp2:
	bgt $t1, $t3, facecrd1cmp2
	li $v0, -1
	j end

case3:
	bne $a1, 2, end

	bne $t2, 0x43,diamonds
	li $t2, 0x53
	j diamonds

	diamonds:
	bne $t2, 0x44,heart
	li $t2, 0x48
	j heart

	heart:
	bne $t2, 0x48,spades
	li $t2,0x44
	j spades

	spades:
	bne $t2, 0x53,club2
	li $t2, 0x43
	j club2

	club2:
	bne $t2, 0x43,diamonds2
	li $t2, 0x53
	j diamonds2

	diamonds2:
	bne $t2, 0x44,heart2
	li $t2, 0x48
	j heart2

	heart2:
	bne $t2, 0x48,spades2
	li $t2,0x44
	j spades2

	spades2:
	bne $t2, 0x53, suitcomp
	li $t2, 0x43
	j suitcomp

	suitcomp:
	beq $t2, $t4,suitcmpeql
	bgt $t4, $t2, suitcrd2cmp2
	li $v0, 1
	j end

	suitcrd2cmp2:
	li $v0, -1
	j end

	suitcmpeql:
	li $v0, 0
	j end


end:	
jr $ra