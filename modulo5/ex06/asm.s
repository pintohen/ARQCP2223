.section .data
    .equ DATA_SIZE, 183 # total size
    .equ GRADES_OFFSET, 4 # the address starts at byte 4
    .equ ADDRESS_OFFSET, 84 # the address starts at byte 84

.section .text
    .global update_address
    .global locate_greater
    # s is in %rdi, address is in %rsi, grades is in %rdx, size is in %esi

update_address:
    leaq ADDRESS_OFFSET(%rdi), %rax # rax = address

update_address_loop:
    movb (%rsi), %cl # cl = *rsi
    movb %cl, (%rax) # *rax = cl

    cmpb $0, (%rax) # if *rax == 0
    je update_address_end # break

    incq %rax # rax++
    incq %rsi # rsi++
    jmp update_address_loop # loop
    
update_address_end:
    ret # return

locate_greater:
    leaq GRADES_OFFSET(%rdi), %rdi # rdi = grades
    movl $5, %ecx # array size = 5
    movl $0, %r8d # r8d = 0

loop_greater:
    cmpl $0, %ecx # if ecx == 0
    je end_greater # break

    cmpl %esi, (%rdi) # if *rdi > esi
    jg is_greater # if true

    addq $4, %rdi # rdi++
    decl %ecx # ecx--
    jmp loop_greater # loop

is_greater:
    movl (%rdi), %eax # eax = *rdi
    movl %eax, (%rdx) # *rdx = eax
    incl %r8d # r8d++

    addq $4, %rdx # rdx++
    addq $4, %rdi # rdi++
    decl %ecx # ecx--
    jmp loop_greater # loop

end_greater:
    movl %r8d, %eax # eax = r8d
    ret # return
