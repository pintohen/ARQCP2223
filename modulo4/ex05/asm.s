.section .text
    .global inc_and_square
    
    # *v1 is in rdi
    # v2 is in rsi

inc_and_square:
    movl $0, %eax
    increase:
        addl $1, (%rdi) # increment %rdi
    square:
        movl %esi, %eax # move %esi to %eax
        imull %eax # return %esi * %esi 
        ret # return

