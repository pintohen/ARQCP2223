.section .data
    .global num
    .global ptrvec

.section .text
    .global sum_first_byte

sum_first_byte:
    movq ptrvec(%rip), %rdi # load ptrvec into rdi
    movl num(%rip), %esi # load num into esi
    movl $0, %eax # initialize sum to 0
    movl $0, %ecx # initialize i to 0

    loop:
        cmpl $0, %esi # check if num = 0
        je end # if num = 0, jump to end

        decl %esi # decrement num
        movl (%rdi), %ecx # load *ptrvec into ecx
        movsxb %cl, %edx # sign extend byte to long
        addl %edx, %eax # add byte to sum
        addq $8, %rdi # increment ptrvec

        jmp loop # jump to loop

    null:
        movl $0, %eax # set sum to 0

end:
    ret
