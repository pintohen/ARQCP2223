.section .data
    .global x # int
    .global ptrvec # int*
    .global num # int

.section .text
    .global vec_diff

vec_diff:
    movq ptrvec(%rip), %rdi # rdi = ptrvec
    movl num(%rip), %ecx # ecx = num
    movq $0, %rsi # index = 0
    movq $0, %rdx # count of numbers not duplicate

    loop_start:
        cmpl $0, %ecx # if num == 0
        je end # break

        movl (%rdi, %rsi, 4), %eax # rax = ptrvec[index]
        movl %eax, x(%rip) # x = ptrvec[index]

        # pushes and pops are used to save and restore the value of used registers in this function
        pushq %rdi
        pushq %rcx
        pushq %rsi
        pushq %rdx
        # call the function to verify if x is duplicate in ptrvec
        call exists
        popq %rdx
        popq %rsi
        popq %rcx
        popq %rdi

        cmpq $0, %rax # if rax == 0
        je not_duplicate # if not duplicate

        incq %rsi # index++
        decl %ecx # num--

    jmp loop_start


not_duplicate:
    incq %rdx # count++
    incq %rsi # index++
    decl %ecx # num--
    jmp loop_start

end:
    movq %rdx, %rax # rax = count
    ret
