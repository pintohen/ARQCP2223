.section .text
    .global cube

    # x is in rdi

cube:
	# prologue
    pushq %rbp # save the base pointer
    movq %rsp, %rbp # set the base pointer to the stack pointer

    # body
    movslq %edi, %rdi # sign extend the argument
    movq %rdi, %rcx # copy the argument
    imulq %rcx, %rdi # multiply the argument by itself
    imulq %rcx, %rdi # multiply the argument by itself again

    # epilogue
    popq %rbp # restore the base pointer
    movq %rdi, %rax # return the result
    ret # return
