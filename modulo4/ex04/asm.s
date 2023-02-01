.section .text
    .global sum_smaller

sum_smaller:
    #prologue
    pushq %rbp
    movq %rsp, %rbp

    cmpl %edi, %esi # compares first argument with second argument
    jl esiLessThanEdi # if first argument is less than second argument, place first argument value in the third argument pointed value
    jge esiGreaterOrEqualToEdi # else place second argument value in the third argument pointed value

esiLessThanEdi:
    movl %edi, %eax # places first argument value in the third argument pointed value
    addl %esi, %eax # adds second argument value to the first argument pointed value
   
    movl %esi, (%rdx) # places first argument value in the third argument pointed value
    jmp end

esiGreaterOrEqualToEdi:
    movl %esi, %eax # places second argument value in the third argument pointed value
    addl %edi, %eax # adds first argument value to the second argument pointed value
   
    movl %edi, (%rdx) # places second argument value in the third argument pointed value
    jmp end

end:
    #epilogue
    movq %rbp, %rsp
    popq %rbp
    ret
