.section .text
    .global greatest

greatest:
    cmpl %edi, %esi # compares first and second arguments
    jge bGreaterThanA # if first argument is greater than or equal to second argument, compare the second argument to the third argument
    jl aGreaterThanB # else compare the first argument to the third argument

aGreaterThanB:
    cmpl %edi, %edx # compares first and third arguments
    jge cGreaterThanA # if first argument is greater than or equal to third argument, compare the first argument to the fourth argument(last)
    jl aGreaterThanC # else compare the third argument to the fourth argument(last)

bGreaterThanA:
    cmpl %esi, %edx # compares second and third arguments
    jge cGreaterThanB # if third argument is greater than or equal to second argument, compare the third argument to the fourth argument(last)
    jl bGreaterThanC # else compare the second argument to the fourth argument(last)

cGreaterThanA:
    cmpl %edx, %ecx # compares third and fourth arguments(last)
    jge dGreaterThanC # if fourth argument(last) is greater than or equal to third argument, return fourth argument(last)
    jl cGreaterThanD # else return third argument

bGreaterThanC:
    cmpl %esi, %ecx # compares second and fourth arguments(last)    
    jge dGreaterThanB # if fourth argument(last) is greater than or equal to second argument, return fourth argument(last)
    jl bGreaterThanD # else return second argument

aGreaterThanC:
    cmpl %edi, %ecx # compares first and fourth arguments(last)
    jge dGreaterThanA # if fourth argument(last) is greater than or equal to first argument, return fourth argument(last)
    jl aGreaterThanD # else return first argument

cGreaterThanB:
    cmpl %edx, %ecx # compares third and fourth arguments(last)
    jge dGreaterThanC # if fourth argument(last) is greater than or equal to third argument, return fourth argument(last)
    jl cGreaterThanD # else return third argument

dGreaterThanA:
    movl %ecx, %eax # moves fourth argument(last) to return register
    jmp end # jumps to end of function

dGreaterThanB:
    movl %ecx, %eax # moves fourth argument(last) to return register
    jmp end # jumps to end of function

dGreaterThanC:
    movl %ecx, %eax # moves fourth argument(last) to return register
    jmp end # jumps to end of function

aGreaterThanD:
    movl %edi, %eax # moves first argument to return register
    jmp end # jumps to end of function

bGreaterThanD:
    movl %esi, %eax # moves second argument to return register
    jmp end # jumps to end of function

cGreaterThanD:
    movl %edx, %eax # moves third argument to return register
    jmp end # jumps to end of function

end:
    ret 
