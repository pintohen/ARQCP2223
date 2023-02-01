.section .data
    .global num

.section .text
    .global check_num

check_num:
    movl num(%rip), %eax # eax = num
    cmp $0, %eax # eax == 0
    jl negative # if eax < 0, jump to negative
    jg positive # if eax > 0, jump to positive

positive:
    movl $2, %ecx # ecx = 2
    cltd # edx:eax = eax
    idivl %ecx # eax = eax / ecx, edx = eax % ecx
    movl $0, %ecx # ecx = 0
    cmp %ecx, %edx # edx == ecx
    jne positiveOdd # if edx != ecx, jump to positiveOdd
    jmp positiveEven # if edx == ecx, jump to positiveEven

negative:
    movl $2, %ecx # ecx = 2
    cltd # edx:eax = eax
    idivl %ecx # eax = eax / ecx, edx = eax % ecx
    movl $0, %ecx # ecx = 0
    cmp %ecx, %edx # edx == ecx
    jne negativeOdd # if edx != ecx, jump to negativeOdd
    jmp negativeEven # if edx != ecx, jump to negativeEven

negativeOdd:
    movl $5, %eax # eax = 5
    jmp end # jump to end

negativeEven:
    movl $4, %eax # eax = 4
    jmp end # jump to end

positiveOdd:
    movl $7, %eax # eax = 3
    jmp end # jump to end

positiveEven:
    movl $6, %eax # eax = 6
    jmp end # jump to end

end:
    ret # return
