.section .data
    .global ptrvec
    .global num

.section .text
    .global keep_positives

keep_positives:
    movq ptrvec(%rip), %rdi # load ptrvec into rdi
    movw num(%rip), %si # load num into si
    movw $0, %cx # initialize cx to 0
    movw $0, %ax # initialize ax to 0

    loop:
        cmpw %cx, %si # compare cx to si
        je end # if num is 0, jump to end

        movw (%rdi), %ax # load the value at ptrvec into ax
        cmpw $0, %ax # compare ax to 0
        jl change_negatives # if ax is negative, jump to change_negatives

        addq $2, %rdi # increment ptrvec by 2
        incw %cx # increment cx by 1

        jmp loop # jump to loop

        change_negatives:
        movw %cx, (%rdi) # store cx at ptrvec

        addq $2, %rdi # increment ptrvec by 2
        incw %cx # increment cx by 1

        jmp loop # jump to loop

end:
    ret # return 
