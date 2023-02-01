.section .data
    .global op1
    .global op2
    .global op3

.section .text
    .global sum3ints

sum3ints:
    movslq op1(%rip), %rax # rax = op1
    movslq op2(%rip), %rcx # rcx = op2
    addq %rcx, %rax # rax = rax + rcx
    movslq op3(%rip), %rcx # rcx = op3
    addq %rcx, %rax # rax = rax + ecx

    ret
