.section .data
    .global val1
    .global val2

.section .text
    .global modulus

modulus:
    movl val1(%rip), %eax # %eax = val1
    movl val2(%rip), %ebx # %ebx = val2
    cmpl $0, %ebx        # if %ebx == 0
    je dividerZero        # jump to dividerZero
    
    idivl %ebx # %eax = %eax / %ebx
    movl %edx , %eax # %eax = %edx (remainder of division as return value)
    jmp end

dividerZero:
    movl $0, %eax # %eax = 0
    jmp end

end:
    ret
    