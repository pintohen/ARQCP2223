.section .data
    .global op1
    .global op2

.section .text
    .global sum # int sum()

sum:
    movl op1(%rip), %ecx #place op1 in ecx # coloca op1 no ecx
    movl op2(%rip), %eax #place op2 in eax # coloca op2 no eax
    addl %ecx, %eax # add ecx to eax. Result is in eax
    
    ret
