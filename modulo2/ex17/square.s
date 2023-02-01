.section .data
    .global val1

.section .text
    .global square

square:
    movl val1(%rip), %eax
    imull %eax # eax = eax * eax

    ret
    