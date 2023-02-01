.section .data
    .global ptr1
    .equ size, 1
    .equ found, '7'


.section .text
    .global seven_count

seven_count:
    movq ptr1(%rip), %rdi # load address of ptr1 into rdi
    movq $0, %rax # initialize counter to 0
    
    

    loop_beginning:
        cmpq $0, (%rdi) # compare character to 0
        je end
        
        cmpb $found, (%rdi) # compare character to 7
        jne notIncrement # if not equal, don't increment counter

        incq %rax # increment counter
        addq $size, %rdi # increment pointer
        jmp loop_beginning # loop back to beginning
        
    notIncrement:
        addq $size, %rdi # increment pointer
        jmp loop_beginning # loop back to beginning



end:
    ret



