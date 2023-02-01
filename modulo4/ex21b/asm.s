.section .text
    .global distance

distance:
	# *a is in rdi
    # *b is in rsi

    # prologue 
    pushq %rbp # save the old base pointer
    movq %rsp, %rbp # set the new base pointer

	movq $0, %r9
	movq $0, %r8 
	movq $0, %r11
    movq $0, %r10
    movq $0, %rax
    movq $0, %rcx
    movq $0, %rdx

	# body

string_a:
    movb (%rdi), %cl # load first byte of string 1

    cmpb $0, %cl # check if it is the null byte
    je string_b # if it is, jump to string_b

    incq %r11 # increment the length of string 1
    incq %rdi # increment the pointer to the next byte of string 1
    jmp string_a # jump back to the beginning of string_a

string_b:
    movb (%rsi), %dl # load first byte of string 2

    cmpb $0, %dl # check if it is the null byte
    je loop # if it is, jump to loop

    incq %r10 # increment the length of string 2
    incq %rsi # increment the pointer to the next byte of string 2
    jmp string_b # jump back to the beginning of string_b

loop:
    cmpq %r11, %r10 # compare the lengths of string 1 and string 2
    jne not_equal

    cmpq %r11, %r8
    je continue

    decq %rdi
    decq %rsi
    incq %r8
    jmp loop

continue:
    movq $0, %r8
    jmp compare

compare:
    cmpq %r11, %r8
    je end

    movb (%rdi,%r8,1), %cl
    movb (%rsi,%r8,1), %dl

    cmpb %cl, %dl
    je equal

    incl %eax
    incq %r8
    jmp compare

equal:
    incq %r8
    jmp compare

not_equal:
    movl $-1, %eax
    jmp end

end:
	# epilogue
    movq %rbp, %rsp
    popq %rbp

    ret
