.section .text
    .global calc

calc:

    addl %edi, %edi # 2 * a
    subl (%rsi), %edi # ebx = 2 * a - (*b) (number z)
    subl $4, %edx # edx = c - 4
    movl %edx, %eax # moves c - 4 to return register
    imull %edi # eax = (c - 4) * (2 * a - (*b))

    ret
