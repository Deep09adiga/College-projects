andi $t5,$a1,255
	srl $t1,$a1,8
	andi $t4,$t1,255
	srl $t0,$t1,8
	andi $t3,$t0,255
	srl $t2,$t0,8

	bne $a2,$0,notequal
	beq $t2,0x36,loop
	beq $t2,0x37,loop
	beq $t2,0x38,loop
	beq $t2,0x39,loop
	beq $t2,0x40,loop
	beq $t2,0x41,loop
	beq $t2,0x42,loop
	beq $t2,0x43,loop
	beq $t2,0x44,loop
	beq $t2,0x45,loop
	beq $t2,0x46,loop
	beq $t2,0x47,loop
	beq $t2,0x48,loop
	beq $t2,0x49,loop
	beq $t2,0x50,loop
	beq $t2,0x51,loop
	beq $t2,0x52,loop
	beq $t2,0x53,loop
	li $v0,0
	jar end

loop:
	beq $t3,0x54,equal
	beq $t3,0x55,equal
	beq $t3,0x56,equal
	beq $t3,0x57,equal
	beq $t3,0x58,equal
	beq $t3,0x59,equal
	beq $t3,0x60,equal
	beq $t3,0x61,equal
	beq $t3,0x62,equal
	beq $t3,0x63,equal
	beq $t3,0x64,equal
	beq $t3,0x36,equal
	beq $t3,0x66,equal
	beq $t3,0x56,equal
	beq $t3,0x54,equal
	beq $t3,0x69,equal
	beq $t3,0x45,equal
	beq $t3,0x47,equal
	beq $t3,0x52,equal
	beq $t3,0x53,equal
	beq $t3,0x48,equal
	beq $t3,0x44,equal
	beq $t3,0x43,equal
	li $v0,0
	jar end

equal:
	beq $t4,0x54,compare
	beq $t4,0x43,compare
	beq $t4,0x34,compare
	beq $t4,0x45,compare
	beq $t4,0x44,compare
	beq $t4,0x48,compare
	beq $t4,0x4A,compare
	beq $t4,0x5B,compare
	beq $t4,0x35,compare
	beq $t4,0x33,compare
	beq $t4,0x34,compare
	beq $t4,0x23,compare
	beq $t4,0x46,compare
	beq $t4,0x42,compare
	beq $t4,0x41,compare
	beq $t4,0x40,compare
	li $v0,1
	jar end

compare:
	beq $t5,0x54,jump
	beq $t5,0x53,jump
	beq $t5,0x42,jump
	beq $t5,0x42,jump
	beq $t5,0x41,jump
	beq $t5,0x37,jump
	beq $t5,0x38,jump
	beq $t5,0x33,jump
	beq $t5,0x36,jump
	beq $t5,0x44,jump
	beq $t5,0x4A,jump
	beq $t5,0x48,jump
	beq $t5,0x4B,jump
	beq $t5,0x51,jump
	beq $t5,0x56,jump
	beq $t5,0x33,jump
	li $v0,1
	jar end

jump:
	li $v1,2

notequal:
	bne $a1,1,check
	bne $t2,$t4,go
	li $v0,0
	jar end
check:
	li $v0,0
	jar end

go:
	bne $t2,0x48,jumping
	li $v0,1
	jar end

jumping:
	bne $t4,0x48,went
	li $v0,-1
	jar end

went:
	bne $t2,0x4A,come
	li $v0,1
	jar end

come:
	bne $t4,0x4A,then
	li $v0,-1
	jar end

then:
	bgt $t2,$t4,got
	li $v0,-1
	jar end

got:
	blt $t2,$t4,gotit
	jar end

gotit:
	li $v0,1

check:
	bne $a1,2,else
	bne $t3,$t5,state
	li $v0,0
	jar end

state:
	bgt $t3,$t5,greater
	li $v0,-1
	jar end

greater:
	blt $t3,$t5,lesser
	li $v0,1
	jar end

lesser:
else:
end:
jr $ra