.section .data
    .global ptrvec # int *
    .global num # int


.section .text
    .global count_max # int

count_max:
    movq ptrvec(%rip), %rdi # ptrvec -> rdi
    movslq num(%rip), %rsi # num -> rsi
    movq %rsi, %rdx # num -> rdx
    subq $2, %rdx # num - 2 -> rdx
    movq $0, %rcx # index of ptrvec -> rcx
    movl $0, %eax # counter -> eax

    cmpq $2, %rsi # if num <= 2
    jle end # goto end

    loop_start:
    
        cmpq %rdx, %rcx  # if index > num - 2
        jg end # goto end


        movl (%rdi, %rcx, 4), %r8d # ptrvec[index] -> r8d
        movl 4(%rdi, %rcx, 4), %r9d # ptrvec[index + 1] -> r9d
        movl 8(%rdi, %rcx, 4), %r10d # ptrvec[index + 2] -> r10d

        cmpq %r8, %r9 # if ptrvec[index] < ptrvec[index + 1]
        jl first_condition # goto first_condition

        incq %rcx # index++



    jmp loop_start

    first_condition:
        cmpq %r9, %r10 # if ptrvec[index + 1] > ptrvec[index + 2]
        jg second_condition # goto second_condition
        incq %rcx # index++
    jmp loop_start

    second_condition:
        addl $1, %eax # counter++
        incq %rcx # index++
    jmp loop_start


end:
    ret
