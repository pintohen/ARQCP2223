.section .data
	.global A
	.global B
	
.section .text
	.global isMultiple

isMultiple:
	movl A(%rip), %eax # eax = A
	movl B(%rip), %ecx # ecx = A
	cdq # edx:eax = eax

	cmp $0 , %ecx # if ecx == 0
	je divByZero # jump to divByZero

	idivl %ecx # eax = eax / ecx

	cmp $0, %edx # if edx == 0
	jne isNotMultiple # jump to notMultiple if remainder != 0

	movl $1, %eax # eax = 1
	jmp end # jump to end

divByZero:
	movl $0, %eax # eax = 0
	jmp end # jump to end

isNotMultiple:
	movl $0, %eax # eax = 0

end:
	ret # return
	
