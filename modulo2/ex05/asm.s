.section .data
    .global s

.section .text
    .global swapBytes

swapBytes:
    movw s(%rip), %dx # coloca s em %dx
    movb %dl, %ah # coloca o byte mais significativo em %al
    movb %dh, %al # coloca o byte menos significativo em %ah
    
    addb %al, %al # duplica o valor de al(novo byte menos significativo, antigo byte mais significativo)

    ret
