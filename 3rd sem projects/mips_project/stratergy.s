strategy :#a0=hand1, a1=hand2
addi $sp, $sp, -20
sw $ra, 0($sp)
sw $a0, 4($sp)
sw $a1, 8($sp)
jal extracards
movw $t0, $v0
sw $t0, 12($sp)
move $a0, $t0
li $a1, 1
jal hw1
move $t2, $v0
bne $t2, 1, checksuit
li, $v0, 1
sw $t2, 16($sp)
j done
checksuit:
lw $t0, 12($sp)
li $a1, 2
move $a0, $t0
jal hw1
move $t3, $v0
bne $t3, 1, checkoppface
li $v0, 2
j done
checkoppface
lw $t2, 16($sp)
bne $t2, 0, checkoppsuit
li $v0, 1
j done
checkoppsuit:
bne $t3,0,losegame
li $v0,1
j done
losegame:
li $v0,1
j done
done:
lw $a0,4($sp)
lw $a1,8($sp)
lw $ra,0($sp)
addi $sp,$sp,20
jr $ra
