.section .text
    .global activate_bits
    
    # a is in edi
    # left is in esi
    # right is in edx

activate_bits:
    movl $31, %ecx # %ecx = 31
    subl %esi, %ecx # %ecx = 31 - left
    movl %ecx, %esi # left = 31 - left

    movl $0, %ecx # %ecx = 0
    
    loop_left:
        cmpl %esi, %ecx # i < left
        jge next_loop # if i >= left, jump to loop_right

        movl $2147483648, %r8d # %r8d = 10000000000000000000000000000000
        shrl %ecx, %r8d # %r8d = 10000000000000000000000000000000 >> i (tempMask)
        orl %r8d, %edi # a = a | tempMask

        addl $1, %ecx # i++
        
    jmp loop_left # jump to loop_left

next_loop:
    movl $0, %ecx # %ecx = 0
    

    loop_right:
        cmpl %edx, %ecx # i < right
        jge end # if i >= right, jump to end

        movl $1, %r8d # %r8d = 00000000000000000000000000000001
        shll %ecx, %r8d # %r8d = 00000000000000000000000000000001 << i (tempMask)
        orl %r8d, %edi # a = a | tempMask

        addl $1, %ecx # i++
        
    jmp loop_right # jump to loop_right

    

end:
    movl %edi, %eax # return a
    ret
