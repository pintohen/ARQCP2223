.section .data
    .global A
    .global B
    .global i
    .global n
A:
    .int 5
B:
    .int 6

.section .text
    .global summation

summation:
    movl $0, %eax # %eax = 0
    cmp %eax, B(%rip) # Check if value at B is 0
    je end

    movl i(%rip), %esi # move i to %esi
    movl $0, %edi # move 0 to %edi
    movl n(%rip), %ebx # move n to %ebx

    je end # if B is 0, jump to end

    incl %ebx # increment n
    jmp loop # jump to loop

loop:
    movl %esi, %eax # move i to %eax
    imull %eax, %eax # multiply i by i

    movl A(%rip), %ecx # move A to %ecx
    imull %ecx, %ecx # multiply A by A
    imull %ecx, %eax  # multiply A by A * i * i

    movl B(%rip), %ecx # move B to %ecx
    cdq # sign extend %eax to %edx:%eax
    idivl %ecx  # divide %edx:%eax by B

    addl %eax, %edi # add %eax to %edi

    incl %esi # increment i

    cmp %esi, %ebx # compare i to n
    jne loop # if i is not equal to n, jump to loop

    movl %edi, %eax # move %edi to %eax

end:
    ret # return
