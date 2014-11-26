append :#a0=hand1, a1=card
	addi $sp, $sp,-12
	sw $ra, 0($sp)
	sw $a0, 4($sp)
	sw $a1, 8($sp)
	jal length
	lw $a0, 4($sp)
	lw $a1, 8($sp)
	move $t0, $a1
	sll $t1, $t0, 16
	mul $t7, $v0, 2
	add $a0, $a0, $t7
	sw $a0, 12($sp)
	move $t2, $v0
	andi $t2, $t1, 1
	beq $t2, 0,jump
	lw $t4, -4($a0)
	or $t5, $t4, $t0
	lw $a0, 12($sp)
	sw $t5, 0($a0)
	li $t6,0
	sw $t6, 4($a0)
	j done

jump:
	sw $t1, 0($a0)
	j done

done:
	lw $a0, 4($sp)
	lw $a1, 8($sp)
	lw $ra, 0($sp)
	addi $sp, $sp, 12
	jr $ra