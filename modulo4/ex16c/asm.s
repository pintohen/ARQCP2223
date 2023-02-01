.section .text
    .global mixed_sum
    # a in %edi, b in %esi, c in %edx

mixed_sum:

    # save registers
    pushq %rdi
    pushq %rsi
    pushq %rdx
    call join_bits
    # restore registers
    popq %rdx
    popq %rdi # pops done wrongly on purpose so next first arg is b and second arg is a
    popq %rsi
    

    # result in 
    movl %eax, %ecx

    # save previous result
    pushq %rcx
    call join_bits
    # restore previous result
    popq %rcx

    addl %ecx, %eax # add previous result to current result
    # %eax = %eax + %ecx (mixed sum)
    ret
    