.section .text
    .global vec_count_bits_one # int (number of inactive bits in ptr)
    # short * ptr(char array) in rdi, int num in esi
    # ptr points to a char array of num chars

vec_count_bits_one:
    # prologue
    pushq %rbp
    movq %rsp, %rbp

    
    movq %rdi, %rcx # rcx = ptr
    movl $0, %edx # edx = 0 (number of bits set to 1)

    loop_start:
        cmpl $0, %esi # if num == 0
        je end # jump to end

        movzwl (%rcx), %edi # edi = *ptr

        pushq %rdi # push edi
        pushq %rsi # save num
        pushq %rcx # save ptr
        pushq %rdx # save edx
        call count_bits_one
        popq %rdx # restore edx
        popq %rcx # restore ptr
        popq %rsi # restore num
        popq %rdi # restore edi

        addl %eax, %edx # edx += count_bits_one(*ptr)

        addq $2, %rcx # ptr++
        decl %esi # num--
    jmp loop_start


end:
    
    movl %edx, %eax # return result
    
    # epilogue
    movq %rbp, %rsp
    popq %rbp
    ret
