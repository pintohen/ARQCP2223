.section .text
    .global reset_bit

    # *ptr is in rdi

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
    