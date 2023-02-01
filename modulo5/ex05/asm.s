.section .data
    .equ GRADES_OFFSET, 4
    .equ INDEX, 5

.section .text
    .global update_grades
    # void update_grades(Student * s, int * new_grades)
    # s in rdi, new_grades in rsi
update_grades:
    movq $INDEX, %rax # rax = INDEX
    addq $GRADES_OFFSET, %rdi # rdi = s->grades
    movq %rdi, %rdx # rdx = s->grades

    loop_start:
        cmpq $0, %rax # if (rax == 0)
        je loop_end # break

        movl (%rsi), %ecx # ecx = *new_grades
        movl %ecx, (%rdx) # s->*(grades+i) = ecx

        addq $4, %rsi # new_grades++
        addq $4, %rdx # s->grades++

        decq %rax # rax--
    jmp loop_start


loop_end:
    xor %rax, %rax # rax = 0
    ret # return
