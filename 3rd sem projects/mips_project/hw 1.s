# HW 1
# Author: <fill in your name here>
#
# Please RENAME this file using your name
# Example: Viraj Kumar's filename will be: VirajKumar.s

main:
  # Test input
  li    $a0, 0x4A444143  # JD, AC
  li    $a1, 0           # Check if both cards are OK

###### DO NOT DELETE THIS LINE ######
###### Start of your code HERE ######
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

########## End of your code #########
###### DO NOT DELETE THIS LINE ######

  # Now print the answer $v0
  move  $a0, $v0
  li    $v0, 1
  syscall

  jr    $ra