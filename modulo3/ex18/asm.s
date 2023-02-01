.section .data
    .global ptrsrc # short *ptrsrc
    .global ptrdest # short *ptrdest
    .global num # int num

.section .text
    .global sort_without_reps # int

sort_without_reps:
    pushq %rbx

    call array_sort
    jmp array_remove_reps
        
array_remove_reps:
    movq ptrsrc(%rip), %rdi # rdi = ptrsrc
    movq ptrdest(%rip), %rcx # rcx = ptrdest
    movslq num(%rip), %rsi # rsi = num
    movq $0, %rax # number of changes


    loop_array:
        
        cmpq $0, %rsi # if num == 0
        je end # jump to end

        movw (%rdi), %dx # dx = *ptrsrc

        cmpw %dx, %bx # if (*ptrsrc == *ptrdest)
        je already_exists # jump to already_exists
        jne not_exists # jump to not_exists

    already_exists:
        
        addq $2, %rdi # ptrsrc++
        decq %rsi # num--
        
        jmp loop_array

    not_exists:
        
        movw %dx, (%rcx) # *ptrdest = *ptrsrc
        movw %dx, %bx # bx = *ptrsrc(last value to be added to ptrdest)
        incq %rax # number of changes++
        addq $2, %rcx # ptrdest++

        addq $2, %rdi # ptrsrc++
        decq %rsi # num--
        
        jmp loop_array

end:
    popq %rbx
    ret
    
