.section .data
    .global ptr1 # char
    .global ptr2 # char
    .global num # int

.section .text
    .global swap

swap:
    movq ptr1(%rip), %rdi # move ptr1 into rdi
    movq ptr2(%rip), %rsi # move ptr2 into rsi
    movl num(%rip), %eax # move num into eax

    cmpl $0, %eax # see if strings are empty
    je end # if so, end
    jmp switch # if not, switch characters

switch:
    movb (%rdi), %cl # move ptr1 character into cl
    movb (%rsi), %dl # move ptr2 character into dl
    movb %dl, (%rdi) # move ptr2 character into ptr1
    movb %cl, (%rsi) # move ptr1 character into ptr2
    incq %rdi # increment ptr1(ptr1++)
    incq %rsi # increment ptr2(ptr2++)
    decl %eax # decrement num(num--)
    cmpl $0, %eax # see if loop is done
    jnz switch # if not, switch characters
    jmp end # if so, end

end:    
    ret
