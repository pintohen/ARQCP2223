.section .data
    .global x # int
    .global ptrvec # int*
    .global num # int

.section .text
    .global exists

exists:
    movq ptrvec(%rip), %rdi # load ptrvec into rdi
    movl num(%rip), %esi # load num into esi
    movl x(%rip), %edx # load x into edx
    movq $0, %rcx # index in ecx
    movq $0, %r8 # counter in r8

    loop_start:
        cmpl $0, %esi # if num == 0, exit
        je loop_end

        movl (%rdi, %rcx, 4), %eax # load ptrvec[index] into eax
        cmpl %eax, %edx # if ptrvec[index] == x, exit
        je encountered

        incq %rcx # increment index
        decl %esi # decrement num


    jmp loop_start

encountered:
    incq %r8 # increment counter of x encounters
    incq %rcx # increment index
    decl %esi # decrement num
    jmp loop_start

loop_end:
    cmpq $2, %r8 # if counter == 0, exit
    jge doubled
    jl not_doubled

doubled:
    movq $1, %rax # return 1
    jmp end

not_doubled:
    movq $0, %rax # return 0
    jmp end

end:
    ret
    