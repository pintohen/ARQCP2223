.section .text
    .global add_byte
    .equ mask, 0xFFFFFF00
    
    # x is in %dil
    # *vec1 is in %rsi
    # *vec2 is in %rdx

add_byte:
    movl (%rsi), %eax # load vec1[0] into %eax (size of vec1)
    movl %eax, (%rdx) # store vec1[0] into vec2[0]
    addq $4, %rsi # increment vec1 pointer by 4 bytes (vec1++)
    addq $4, %rdx # increment vec2 pointer by 4 bytes (vec2++)
    movsbl %dil, %edi # extend %dil to 32 bits and store in %edi

    loop_start:
        cmpl $0, %eax # check if vec1[0] == 0
        je end # if so, jump to end

        movl (%rsi), %ecx # load vec1[i] into %ecx
        movl %ecx, (%rdx) # store vec1[i] into vec2[i]

        movb (%rdx), %cl # load vec2[i] into %cl
        addb %dil, %cl # add x to vec2[i]
        
        andl $mask, (%rdx) # clear the lower byte of vec2[i]
        orl %ecx, (%rdx) # OR the lower byte of vec2[i] with %cl

        addq $4, %rsi # increment vec1 pointer by 4 bytes (vec1++)
        addq $4, %rdx # increment vec2 pointer by 4 bytes (vec2++)
        decl %eax # counter--

    jmp loop_start # jump back to loop_start

end:
    ret
