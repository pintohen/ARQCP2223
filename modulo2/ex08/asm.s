.section .data
    .global s1
    .global s2

s1:
    .word 0;
s2:
    .word 0;
    
.section .text
    .global crossSumBytes

crossSumBytes:
    movw s1(%rip), %ax # coloca o valor de s1 em %ax
    movw s2(%rip), %cx # coloca o valor de s2 em %cx
    addb %cl, %ah # soma o byte mais significativo de s1 ao byte menos significativo de s2
    addb %ch, %al # soma o byte menos significativo de s1 ao byte mais significativo de s2

    ret
