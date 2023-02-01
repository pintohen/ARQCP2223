.section .data
    .equ GRADES_OFFSET, 8 # grades pointer starts at byte 8

.section .text
    .global approved_semester # int approved_semester(group *g);
    # g is in %rdi

approved_semester:
    movw (%rdi), %dx # dx = g->n_students (starts at byte 0)
    movq GRADES_OFFSET(%rdi), %rcx # cx = g->grades_offset (starts at byte 8)
    movl $0, %eax # eax = 0 (counter of approved students)

    loop_students:
        cmpw $0, %dx # if n_students == 0
        je end # end loop

        movw (%rcx), %r8w # r8w = *grades_offset (the 16 grades of a student)
        movw $16, %si # si = 16 (number of modules of each student)
        movl $0, %r9d # r9d = 0 (counter of approved modules)
        
    isStudentApproved:
        cmpw $0, %si # if si == 0
        je continue # go to continue

        shrw $1, %r8w # *grades_offset >> 1
        adcl $0, %r9d # r9d += carry

        decw %si # si-- (number of modules of each student)

    jmp isStudentApproved # go to isStudentApproved

    continue:
        addq $2, %rcx # grades_offset += 2
        
        cmpl $10, %r9d # if r9d >= 10
        jge approved_semester_add # if approved, go to approved_semester_add

        decw %dx # n_students--
    
    jmp loop_students # go to loop_students


    

    approved_semester_add:
        incl %eax # eax++ (counter of approved students)
        decw %dx # n_students--

    jmp loop_students # go to loop_students

end:
    ret
