.section .data
    .global num # short

.section .text
    .global vec_avg


vec_avg:
    call vec_sum # call vec_sum
    movswq num(%rip), %rcx # num -> %cx
    cmpq $0, %rcx # if num == 0
    je divisor_zero # jump to divisor_zero
    movq $0, %rdx # %rdx = 0
    cqo # %rdx:%rax = %rax
    idivq %rcx # %rax = %rax / %cx
    jmp end # jump to end

divisor_zero:
    movq $0, %rax # %rax = 0
    jmp end

end:
    ret
