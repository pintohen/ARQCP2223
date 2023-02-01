.section .text
    .global reset_bit
    .global reset_2bits

reset_bit:
    movl (%rdi), %eax   # eax = *rdi
    movl $0X00000001, %edx  # edx = 0X00000001
    movb %sil, %cl    # cl = sil
    shrl %cl, %eax     # eax = eax << cl
    andl %edx, %eax   # eax = eax + edx
    cmpl $1, %eax     # eax == 1
    je is_one        # if eax == 1, jump to is_one
    movl $0, %eax     # if bit is not one, set eax to 0
    jmp end          # jump to end

is_one:
    shll %cl, %edx   # edx = edx << cl
    notl %edx        # edx = ~edx
    andl %edx, (%rdi) # *rdi = *rdi & ~edx
    movl $1, %eax    # eax = 1
    jmp end          # jump to end

end:
    ret              # return

reset_2bits:
        call reset_bit # call function
        movl $31, %eax # %eax = 31
        subl %esi, %eax # %eax = 31 - pos (second parameter of reset_bit)
        movl %eax, %esi # pos = 31 - pos
        call reset_bit # call function
        ret
        