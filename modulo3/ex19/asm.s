.section .data
    .global ptrfreq
    .global ptrgrades
    .global num

.section .text
    .global frequencies

frequencies:
    movq ptrgrades(%rip), %rdi # rdi = ptrgrades
    movq ptrfreq (%rip), %rsi # rsi = ptrfreq
    movl num(%rip), %ecx # ecx = num
    movl $21, %r8d # r8d = 21

    clean_loop:
        decl %r8d # r8d = r8d - 1
        cmpl $0, %r8d # r8d == 0
        jl to_loop # if r8d < 0, jump to to_loop

        movl $0, (%rsi) # *rsi = 0
        addq $4, %rsi # rsi = rsi + 4

    jmp clean_loop # jump to clean_loop

    to_loop:
        subq $84, %rsi # rsi = 21*4
        movq $-1, %r8 # r8 = -1

    loop:
        incq %r8 # r8 = r8 + 1
        cmpq %rcx, %r8 # r8 == rcx
        je end # if r8 == rcx, jump to end

        movb (%rdi, %r8, 1), %r9b # r9b = *(rdi + r8)
        movsbq %r9b, %r9 # r9 = r9b
        incl (%rsi, %r9, 4) # *(rsi + 4*r9) = *(rsi + 4*r9) + 1

    jmp loop # jump to loop

    end:
        ret
        