.section .text
    .global changes
    .global changes_vec

    # *ptr is in rsi

changes:
    movl (%rdi), %ecx # load the first value
    movl $0X0000FF00, %edx # mask

    andl %edx, %ecx # mask the first value
    shrl $8, %ecx # shift the first value

    cmpl $15, %ecx # compare the first value with 15
    jg change_byte # if the first value is greater than 15, jump to change_byte

    jmp changes_end # if the first value is less than or equal to 15, jump to changes_end

change_byte:
    movl $0X00FF0000, %edx # mask
    xorl %edx, (%rdi) # xor the first value with the mask

changes_end:
    ret # return

changes_vec:
    movslq %esi, %rcx # load the number of elements
    cmpq $0, %rcx # compare the number of elements with 0
    je vec_end # if the number of elements is 0, jump to vec_end

    vec_loop:
        pushq %rcx # save the number of elements
        call changes # call changes
        popq %rcx # restore the number of elements
        addq $4, %rdi # increment the pointer
        loop vec_loop # loop if the number of elements is not 0

vec_end:
    ret # return
