.section .text
    .global sum_multiples_x
    # char * vec in %rdi, int x in %esi

sum_multiples_x:
    movl %esi, %ecx # x in %ecx
    xorl %esi, %esi # esi = 0
    movw %cx, %si # x in %esi (cuts off the upper 16 bits) short xShort = x;
    sarl $8, %esi # shift x to the right by 8 bits(preserve second byte in the place of the first) (xShort >> 8)

    movl $0, %ecx # sum = 0


    loop_start:
        cmpb $0, (%rdi) # check if *vec == '\0'
        je loop_end # if so, jump to loop_end

        movb (%rdi), %al # place *vec in %al
        
        cbw
        idivb %sil # divide %al by %sil
        
        cmpb $0, %ah # if * vec % x == 0
        je add # if so, jump to add

        incq %rdi # vec++


    jmp loop_start

    add:
        movsbl (%rdi), %r8d # place *vec in %r8d(32 bit)
        addl %r8d, %ecx # sum = sum + *vec
        
        incq %rdi # vec++

    jmp loop_start

    loop_end:
        movl %ecx, %eax # place sum in %eax
        jmp end

end:
    ret
