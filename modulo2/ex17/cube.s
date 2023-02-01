.section .data
    .global val1

.section .text
    .global cube

cube:
    movl val1(%rip), %eax # load val1 into eax
    movl %eax, %ebx # ebx = val1
    imull %ebx # eax = eax * ebx (val1 ^ 2)
    imull %ebx # eax = eax * ebx (val1 ^ 3)

    ret
    