.section .data
    .global num # short
    .global ptrvec # long(pointer)

.section .text
    .global vec_sum

vec_sum:
    
    pushq %rsi
    movq $0, %rax # %rax = 0 (sum to return)

    movswq num(%rip), %rcx # num -> %rcx
    movq ptrvec(%rip), %rsi # ptrvec -> %rsi

    loop_start:
        cmpq $0, %rcx # if num == 0
        je end_loop # jump to end

        movq (%rsi), %rdx # *ptrvec -> %rdx
        addq %rdx, %rax # sum += *ptrvec
        decq %rcx # num--
        addq $8, %rsi # ptrvec++
        jmp loop_start # jump to loop_start

end_loop:
    popq %rsi
    ret

