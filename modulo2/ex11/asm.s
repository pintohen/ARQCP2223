.section .data
    .global op1
    .global op2

.section .text
    .global test_flags

test_flags:
    movl op1(%rip), %eax # %eax = op1
    movl op2(%rip), %ecx # %ecx = op2
    addl %ecx, %eax # %eax = op1(%eax) + op2

    jc carry # salta para a declaração de carry se o carry flag for ativado
    jo overflow # salta para a declaração de overflow se o overflow flag for ativado
    movl $0, %eax # se não houve overflow nem carry, %eax = 0
    jmp end # salta para o fim do programa caso não haja overflow nem carry
    
    carry:
        movl $1, %eax # se houve carry, %eax = 1
        jmp end # salta para o fim do programa

    overflow:
        movl $1, %eax # se houve overflow, %eax = 1
        jmp end # salta para o fim do programa

    end:
         ret 

