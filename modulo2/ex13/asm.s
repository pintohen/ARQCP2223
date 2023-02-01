.section .data
    .global length1
    .global length2
    .global height

.section .text
    .global getArea

getArea:
    movl length1(%rip), %eax # %eax = length1
    movl length2(%rip), %ecx # %ecx = length2
    addl %ecx, %eax # %eax = length1(%eax) + length2(%ecx)
    
    movl height(%rip), %ecx # %ecx = height
    
    mull %ecx # %eax = %eax(length1 + length2) * height(%ecx)
    movl $2, %ecx # %ecx = 2
    divl %ecx # %eax = %eax / %ecx(2)

    ret
