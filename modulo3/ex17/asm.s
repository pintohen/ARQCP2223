.section .data
    .global ptrvec
    .global num

.section .text
    .global array_sort

array_sort:
    movq ptrvec(%rip), %rsi # load ptrvec into rsi
    movl num(%rip), %r8d # load num into r8d

    loop:
        cmpl $0, %r8d # check if num is 0
        je end # if num is 0, jump to end

        movq %rsi, %r9 # load ptrvec[0] into rax
        movl %r8d, %edi # load ptrvec[0] into edi

        continue:
            decl %edi # decrement edi
            cmpl $0, %edi # check if edi is 0
            je complete # if edi is 0, jump to complete

            addq $2, %r9 # next element in ptrvec

            movq $0, %rdx # set rdx to 0
            movq $0, %rax # set rax to 0

            movw (%r9), %dx # load ptrvec[i] into dx
            movw (%rsi), %ax # load ptrvec[i-1] into ax

            cmpw %dx, %ax # compare ptrvec[0] and ptrvec[i]
            jg continue # if ptrvec[0] > ptrvec[i], jump to continue

            movw %dx, (%rsi) # swap ptrvec[0] and ptrvec[i]
            movw %ax, (%r9) # swap ptrvec[0] and ptrvec[i]

            jmp continue # jump to continue

            complete:
                addq $2, %rsi # increment rdi by 2

                decl %r8d # decrement r8d

    jmp loop # jump to loop

end:
    ret
