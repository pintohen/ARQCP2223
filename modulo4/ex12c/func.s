.section .text
    .global count_bits_one # int
    # x(int) in edi

count_bits_one:

    movl $0, %eax # counter of bits set to 1
    movl $1, %ecx # mask
    movl $32, %edx # number of bits in int
    
iterator:

    testl %edi, %ecx  # bitwise AND on 1 and x (x and mask)
    jz zero # if 0, jump to zero
    incl %eax # else increment number of bits 1
    
zero:

    shrl %edi # shift x to the right

    decl %edx # decrement number of bits left
    jnz iterator # if not 0, jump to iterator
    
    ret
