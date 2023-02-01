.section .data
    .global s1
    .global s2

.section .text
    .global crossSumBytes

crossSumBytes:
    movw s1(%rip), %ax # coloca o valor de s1 no ax
    movw s2(%rip), %cx # coloca o valor de s2 no cx
    addb %cl, %ah # soma o byte mais significativo de s1 ao byte menos significativo de s2
    addb %ch, %al # soma o byte menos significativo de s1 ao byte mais significativo de s2

    ret
    