.section .data
    .global op1
    .global op2
    .global op3
    .global op4

op3:
    .quad 10

op4:
    .quad 0

.section .text
    .global sum_v3

sum_v3:
    movq op4(%rip), %rax # rax = op4
    movq op3(%rip), %rcx # rcx = op3
    addq %rcx, %rax # rax = rax + rcx

    movslq op2(%rip), %rcx # rcx = op2
    subq %rcx, %rax # rax = rax - rcx
    subq %rcx, %rax # rax = rax - rcx

    movslq op1(%rip), %rcx # rcx = op1
    addq %rcx, %rax # rax = rax + rcx
    addq %rcx, %rax # rax = rax + rcx

    ret


