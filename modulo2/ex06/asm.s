.section .data
    .global byte1
    .global byte2

.section .text
    .global concatBytes

concatBytes:
    movl $0, %eax # eax = 0
    movb byte1(%rip), %al # coloca o valor de byte1 nos 8 bits menos significativos de eax
    movb byte2(%rip), %ah # coloca o valor de byte2 nos 8 bits mais significativos de eax
    ret
