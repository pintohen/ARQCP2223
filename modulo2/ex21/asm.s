.section .data
    .global code
    .global currentSalary

.section .text
    .global new_salary

new_salary:
    movswl code(%rip), %eax # load code into eax

    cmpl $20, %eax # compare code to 20
    je manager
    cmpl $21, %eax # compare code to 21
    je engineer
    cmpl $22, %eax # compare code to 22
    je technician
    jmp increase # if code is not 20, 21, or 22, increase salary by 150€

manager:
    movswl currentSalary(%rip), %eax # load currentSalary into eax
    addl $400, %eax # add 400€ to manager salary
    jmp end

engineer:
    movswl currentSalary(%rip), %eax # load currentSalary into eax
    addl $300, %eax # add 300€ to engineer salary
    jmp end

technician:
    movswl currentSalary(%rip), %eax # load currentSalary into eax
    addl $200, %eax # add 200€ to technician salary  
    jmp end

increase:
    movswl currentSalary(%rip), %eax # load currentSalary into eax
    addl $150, %eax # add 150€ to everyone else's salary
    jmp end

end:
    ret
