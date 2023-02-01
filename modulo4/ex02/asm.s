.section .data

.section .text
    .global sum_n2

    # n is in edi

sum_n2:
    # prologue
    pushq %rbp # save the old base pointer
    movq %rsp, %rbp # set the new base pointer

    movslq %edi, %rdi # convert to 64 bit
    movq %rdi, %rcx # copy to rcx

    movq $0, %rdi # rdi = 0
    movq $0, %rdx # i = 0

    cmp %rdx, %rcx # i < n
    jle end # jump to end if i >= n

start_loop:
    cmpq %rdx, %rcx # i < n
    jg continue # jump to continue if i >= n

    jmp end # jump to end

continue:
    movq %rcx, %rax # rax = i
    imulq %rcx # rax = i * i

    addq %rax, %rdi # sum += i * i

    decq %rcx # i--

    jmp start_loop # jump to start_loop

end:
    # prologue
    movq %rbp, %rsp # restore stack pointer
    popq %rbp # restore rbp
    movq %rdi, %rax # return sum
    ret # return
    