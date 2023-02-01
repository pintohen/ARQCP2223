.section .text
    .global changes

    # *ptr is in rdi

changes:
    movl (%rdi), %ecx # load the first value
    movl $0X0000FF00, %edx # mask

    andl %edx, %ecx # mask the first value
    shrl $8, %ecx # shift the first value

    cmpl $15, %ecx # compare the first value with 15
    jg change_byte # if the first value is greater than 15, jump to change_byte

    jmp end # if the first value is less than or equal to 15, jump to end

change_byte:
    movl $0X00FF0000, %edx # mask
    xorl %edx, (%rdi) # xor the first value with the mask

end:
    ret # return