.section .data
    .global num

.section .text
    .global steps

steps:
    movl num(%rip), %eax # eax = num
    movl $3, %ecx # ecx = 3
    imull %ecx # eax = eax * ecx

    addl $6, %eax # eax = eax + 6
    cdq

    movl $3, %ecx # ecx = 3
    idivl %ecx # eax = eax / ecx

    addl $12, %eax # eax = eax + 12

    subl num(%rip), %eax # eax = eax - num
    subl $1, %eax # eax = eax - 1

    ret
