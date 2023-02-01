.section .data
    .global A # 32 bits
    .global B # 16 bits
    .global C # 8 bits
    .global D # 8 bits

.section .text
    .global sum_and_subtract

sum_and_subtract:
    movl A(%rip), %eax # aloca o A em %eax
    movsbl C(%rip), %ecx # aloca o C em %ecx e extende o sinal para 32 bits
    addl %ecx, %eax # soma A com C

    movsbl D(%rip), %ecx # aloca o D em %ecx e extende o sinal para 32 bits
    subl %ecx, %eax # subtrai D de %eax

    movswl B(%rip), %ecx # aloca o B em %ecx e extende o sinal para 32 bits
    addl %ecx, %eax # soma B a %eax
    movslq %eax, %rax # extende o sinal de %eax para 64 bits
    
    ret


