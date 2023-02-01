.section .data
    .global val1
    .global val2

.section .text
    .global subtract

subtract:
    movl val1(%rip), %eax # %eax = val1
    movl val2(%rip), %ebx # %ebx = val2
    subl %ebx, %eax # %eax = %eax + %ebx
    
    ret
    