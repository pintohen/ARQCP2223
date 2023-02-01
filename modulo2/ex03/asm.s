.section .data
    .global op1
    .global op2
    .equ CONST, 20

.section .text
    .global sum_v2

sum_v2:
    movl $CONST, %eax # eax = CONST
    movl op1(%rip), %edx # edx = op1
    movl op2(%rip), %ecx # ecx = op2

    subl %edx, %eax # eax = eax - edx
    subl %edx, %eax # eax = eax - edx
    addl %ecx, %eax # eax = eax + ecx

    ret
    