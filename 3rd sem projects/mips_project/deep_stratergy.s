beq $t2, 1, done1
lw $t0, 12($sp)
li $a1, 2
move $a0, $t0
jal hw1
move $t3, $v0
beq $t3, 1, done2
lw $t2, 16($sp)
beq $t2, 0, done3
beq $t3,0,done4
li $v0,1
j done

done1:
li, $v0, 1
sw $t2, 16($sp)
j done

done2:
li $v0, 2
j done

done3:
li $v0, 1
j done

done4:
li $v0,1
j done

done:
lw $a0,4($sp)
lw $a1,8($sp)
lw $ra,0($sp)
addi $sp,$sp,20
jr $ra
