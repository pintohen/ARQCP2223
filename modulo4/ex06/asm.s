.section .text
    .global test_equal

    # *a is in rdi
    # *b is in rsi

test_equal:
    movb (%rdi), %dl # load first byte of first string
    movb (%rsi), %cl # load first byte of second string
    movl $1, %eax # if they are equal, return 1

    cmpb %dl, %cl # compare first bytes
    jne not_equals # if they are not equal, jump to not_equals

    cmpb $0, %dl # if first byte is 0, we are done
    je end # if it is, jump to end

    incq %rdi # increment first string pointer
    incq %rsi # increment second string pointer
    jmp test_equal # jump to test_equal

not_equals:
    movl $0, %eax # if they are not equal, return 0

end:
    ret # return
