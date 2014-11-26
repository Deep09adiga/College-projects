main:
li $a0, 0x37433944
	andi $t4, $a0, 255
	srl $a0, $a0, 8
	andi $t3, $a0, 255
	srl $a0, $a0, 8
	andi $t2, $a0, 255
	srl $a0, $a0, 8
	andi $t1, $a0, 255
	srl $a0, $a0, 8
jr $ra
