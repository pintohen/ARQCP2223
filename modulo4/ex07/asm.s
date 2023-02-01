.section .text
    .global count_odd
    .equ two, 2

count_odd:
    pushq %rbx # save rbx

    movl $0, %ecx # set counter to 0
    movb $2, %bl # set bl to 2

    loop_start:
        cmpl $0, %esi # check if the size is 0
        je end # if it is, jump to end
        
        movb (%rdi), %al # move the  into al

        cbw
        idivb %bl # divide al by 2

        cmpb $0, %ah # compare remainder to 0
        jne odd # if it is not 0, jump to odd
        je even # if it is 0, jump to even

    

    odd:
        incl %ecx # increment counter
        
        incq %rdi # increment the pointer
        decl %esi # decrement size

    jmp loop_start # jump to loop_start

    even:
        
        incq %rdi # increment the pointer
        decl %esi # decrement size

    jmp loop_start # jump to loop_start

end:
    movl $0, %eax # set eax to 0
    movl %ecx, %eax # return counter
    popq %rbx # restore rbx
    ret
