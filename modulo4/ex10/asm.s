.section .text
    .global call_incr
    .global incr

	# *p1 is in rdi
	# value of val is in rsi

incr:
	# prologue
	pushq %rbp # save base pointer
	movq %rsp, %rbp # set base pointer
	subq $16, %rsp # allocate 16 bytes on the stack for the two local variables.
	
	movswl (%rdi), %r8d # load the first argument into r8d
	movl %r8d,-8(%rbp) # x = *p1
	movl -8(%rbp), %edx # saves the value of x
	
	movsbl %sil, %esi # load the second argument into esi
	addl %esi, -8(%rbp)	# x + val
	movl -8(%rbp), %edx	# saves the value of x + val
	
	movl %edx, -16(%rbp) # y = x + val
	
	movl -16(%rbp), %eax # return y
	
	# epilogue
	movq %rbp, %rsp # restore stack pointer
	popq %rbp # restore base pointer
	ret # return to caller

call_incr:
	# prologue
	pushq %rbp # save base pointer
	movq %rsp, %rbp # set base pointer
	subq $16, %rsp # allocate 16 bytes on the stack for the two local variables.
					
	movw %di, %dx # load the first argument into dx			
	addw $3, %dx # w + 3
	movw %dx, -8(%rbp) # x1 = w + 3
	leaq -8(%rbp), %rdi # first argument = &x1
	movb $0xC3, %sil # second argument = 0xC3

	pushq %rdx # save the value of %rdx
	pushq %rax # save the value of %rax
	pushq %r8 # save the value of %r8
	pushq %r9 # save the value of %r9
	addq $16, %rbp # adjust the stack pointer
	
	call incr # call incr
	
	subq $16, %rbp # adjust the stack pointer
	movl %eax, -16(%rbp) # x2 = incr(&x1,0xC3)
	popq %r9 # restore the value of %r9
	popq %r8 # restore the value of %r8
	popq %rax # restore the value of %rax
	popq %rdx # restore the value of %rdx
	
	movswl -8(%rbp), %eax # %eax = x1
	movl -16(%rbp), %r8d # %r8d = x2
	addl %r8d, %eax	 # %eax = x1 + x2
	
	# epilogue
	movq %rbp, %rsp # restore stack pointer
	popq %rbp # restore base pointer
	
    ret # return
