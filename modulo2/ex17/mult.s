.section .data
    .global val1
    .global val2

.section .text
    .global mult

mult:
    movl val1(%rip), %eax # %eax = val1
    movl val2(%rip), %ebx # %ebx = val2
    imull %ebx # %eax = %eax * %ebx
    
    ret
    